#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64MultiArray
import math 

#o . 

class DoubleAckermannController(Node):
    def __init__(self):
        super().__init__('double_ackermann_controller')
        
        # Subscribe to teleop/joystick commands
        self.cmd_sub = self.create_subscription(Twist, '/cmd_vel', self.cmd_callback, 10)
        
        # Publisher for the 4 steering hinges (Position in Radians)
        # Order matches YAML: [fl_steer, fr_steer, rl_steer, rr_steer]
        self.steer_pub = self.create_publisher(Float64MultiArray, '/steering_controller/commands', 10)

        # Publisher for the 4 wheel axles (Velocity in Rad/s)
        # Order matches YAML: [fl_drive, fr_drive, rl_drive, rr_drive]
        self.drive_pub = self.create_publisher(Float64MultiArray, '/drive_controller/commands', 10)

        # Rover Physical Constants
        self.wheelbase = 0.5 
        self.track_width = 0.3
        self.wheel_radius = 0.12

        self.get_logger().info("Double Ackermann Controller Node Started. Waiting for /cmd_vel...")

    def cmd_callback(self, msg : Twist):
        linear_x = msg.linear.x  * 6 
        linear_y = msg.linear.y * 6 
        angular_z = msg.angular.z * 6 

        #Initializing Constants 
        fl_cord_x =  self.track_width/2
        fl_cord_y = -self.wheelbase/2

        fr_cord_x = -self.track_width/2
        fr_cord_y = -self.wheelbase/2

        rl_cord_x =  self.track_width/2
        rl_cord_y =  self.wheelbase/2

        rr_cord_x = -self.track_width/2
        rr_cord_y =  self.wheelbase/2

        
        
        if angular_z : 

            icr = linear_x / angular_z 

            fl_angle_x = icr - fl_cord_x 
            fl_angle_y = - fl_cord_y
            fl_radius = math.sqrt( ( fl_angle_x ** 2) + (fl_angle_y **2)   )

            fr_angle_x = icr - fr_cord_x 
            fr_angle_y = - fr_cord_y
            fr_radius = math.sqrt( ( fr_angle_x ** 2) + (fr_angle_y **2)   )

            rr_angle_x = icr - rr_cord_x 
            rr_angle_y = - rr_cord_y
            rr_radius = math.sqrt( ( rr_angle_x ** 2) + (rr_angle_y **2)   )

            rl_angle_x = icr - rl_cord_x 
            rl_angle_y = - rl_cord_y
            rl_radius = math.sqrt( ( rl_angle_x ** 2) + (rl_angle_y **2)   )

            if linear_x : 
                
                fl_vel = fl_radius * angular_z  * icr *2 
                fl_angle = math.atan(fl_angle_y / fl_angle_x)

                fr_vel = fr_radius * angular_z  * icr *2 
                fr_angle = math.atan(fr_angle_y / fr_angle_x)

                rr_vel = rr_radius * angular_z  * icr *2 
                rr_angle = math.atan(rr_angle_y / rr_angle_x)

                rl_vel = rl_radius * angular_z  * icr *2 
                rl_angle = math.atan(rl_angle_y / rl_angle_x)

            else :
                if (angular_z > 0) :
                    fl_angle = math.atan(fl_angle_x / fl_angle_y)
                    fl_vel = fl_radius * angular_z * -1 

                    fr_angle = math.atan(fr_angle_x / fr_angle_y)
                    fr_vel = fr_radius * angular_z  

                    rr_angle = math.atan(rr_angle_x / rr_angle_y)
                    rr_vel = rr_radius * angular_z   

                    rl_angle = math.atan(rl_angle_x / rl_angle_y)
                    rl_vel = rl_radius * angular_z * -1 

                else : 
                    fl_angle = math.atan(fl_angle_x / fl_angle_y)
                    fl_vel = fl_radius * angular_z * -1

                    fr_angle = math.atan(fr_angle_x / fr_angle_y)
                    fr_vel = fr_radius * angular_z 

                    rr_angle = math.atan(rr_angle_x / rr_angle_y)
                    rr_vel = rr_radius * angular_z 

                    rl_angle = math.atan(rl_angle_x / rl_angle_y)
                    rl_vel = rl_radius * angular_z * -1

        elif (linear_x == 0 and linear_y == 0 and angular_z == 0) :
            fl_vel =  fr_vel = rr_vel = rl_vel = 0.0
            fl_angle = fr_angle = rr_angle = rl_angle = 0.0


        else : 

            vel_final = math.sqrt( ( linear_x ** 2) + (linear_y **2)   )
            if linear_x :
                fl_angle = fr_angle = rr_angle = rl_angle = math.atan(linear_y / linear_x)   
            elif (linear_y >0 ) :
                fl_angle = fr_angle = rr_angle = rl_angle = math.pi / 2
            else : fl_angle = fr_angle = rr_angle = rl_angle = - math.pi /2 

            
            temp_angle = math.atan2(linear_y ,linear_x)
            if temp_angle > math.pi/2 or temp_angle < -math.pi/2:
                fl_vel = fr_vel = rr_vel = rl_vel = -vel_final
            else : 
                fl_vel =  fr_vel = rr_vel = rl_vel = vel_final

        
        # Publish Steering Commands
        steer_msg = Float64MultiArray()
        steer_msg.data = [fl_angle, fr_angle, rl_angle, rr_angle]
        self.steer_pub.publish(steer_msg)

        # Publish Drive Commands
        drive_msg = Float64MultiArray()
        drive_msg.data = [fl_vel, fr_vel, rl_vel , rr_vel]
        self.drive_pub.publish(drive_msg)

def main(args=None):
    rclpy.init(args=args)
    node = DoubleAckermannController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
