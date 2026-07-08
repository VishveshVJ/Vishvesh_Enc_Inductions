#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
import math 
from sensor_msgs.msg import JointState


class ik_controller (Node):

    def __init__ (self) :
            super().__init__("ik_controller_publisher")
            #Intializing to Zero at the start of the Program
            self.x = 0.0 
            self.y = 0.0 
            self.z = 0.0
            
            #Cratinng a Publisher
            self.publiser = self.create_publisher(JointState  , "/joint_states" , 10)
            msg0 = JointState()
            msg0.header.stamp = self.get_clock().now().to_msg() 
            msg0.name = ["base_yaw_joint","shoulder_joint","elbow_joint","wrist_pitch_joint","wrist_roll_joint","gripper_servo_joint"]
            msg0.position = [0.0 , 0.0 , 0.0 , 0.0 , 0.0  , 0.0]
            msg0.velocity = []
            msg0.effort = []
            self.publiser.publish(msg0)
            self.inputs_and_main()


    def inputs_and_main (self ):
            #Text and getting inputs
            self.get_logger().info("The current End Effector Position: " + "\n" + "x = " + str(self.x)+ " y = " + str(self.y)+ " z = " + str(self.z))
            self.axis_choosen = input("Enter the axis to move : ")
            self.value_added = float(input("Enter Displacement : "))


            #Updating the coordinates
            if(self.axis_choosen == "x"):
                self.x = self.x + (self.value_added)

            if(self.axis_choosen == "y"):
                self.y = self.y + (self.value_added)

            if(self.axis_choosen == "z"):
                self.z = self.z + (self.value_added)


            #Checking if Valid Coordinates and calculating the angles
            Check = self.calculate_joint_angles()

            
            if Check  : 
                self.get_logger().info(str(self.x))
                self.get_logger().info(str(self.y))
                self.get_logger().info(str(self.z))
                self.calculate_joint_angles()

                #Final Publishing
                msg = JointState()
                msg.header.stamp = self.get_clock().now().to_msg() 
                msg.name = ["base_yaw_joint","shoulder_joint","elbow_joint","wrist_pitch_joint","wrist_roll_joint","gripper_servo_joint"]
                msg.position = [self.yaw_angle , self.shoulder_joint_angle , self.elbow_joint_angle, 0.0 , 0.0  , 0.0]
                msg.velocity = []
                msg.effort = []
                self.publiser.publish(msg)
                self.inputs_and_main()

            else : 
                if(self.axis_choosen == "x"):
                    self.x -= self.value_added
                if(self.axis_choosen == "y"):
                    self.y -= self.value_added
                if(self.axis_choosen == "z"):
                    self.z -= self.value_added
                self.get_logger().info("The Entered Coordinates are Wrong Please Enter Again : ")
                self.inputs_and_main()


    def calculate_joint_angles (self) :
            
            #yaw angle
            theta = math.atan2(self.y , self.x)
            self.yaw_angle =  theta
            self.get_logger().info(str(self.yaw_angle))

            #elbow Angle
            new_axis_X = math.sqrt( pow(self.x , 2) + pow(self.y , 2))
            new_axis_Z = self.z - 0.17
            cos_q2 = (new_axis_X**2 + new_axis_Z**2 - 0.35**2 - 0.42**2) / (2 * 0.35 * 0.42)

            if((cos_q2 <= 1) and (cos_q2 >=-1) ):
                q2 = math.acos(cos_q2)
                self.elbow_joint_angle = q2
                self.get_logger().info(str(self.elbow_joint_angle))
            
            else : 
                q2 = 100
                self.elbow_joint_angle = q2
            

                  
            

            #shoulder_angle
            q1 = math.atan2(new_axis_X, new_axis_Z) - math.atan2(0.42 * math.sin(q2), 0.35 + 0.42 * math.cos(q2))
            self.shoulder_joint_angle = q1
            self.get_logger().info(str(self.shoulder_joint_angle))


            if(    (self.shoulder_joint_angle   < math.pi )  and (self.shoulder_joint_angle > -math.pi) ) :
                  if( (self.elbow_joint_angle   < math.pi )  and (self.elbow_joint_angle > -math.pi) ):
                        return True 

            else : return False 
            

def main(args = None):
        rclpy.init(args = args) 
        ik_controller_node = ik_controller()
        rclpy.spin(ik_controller_node)
        rclpy.shutdown()


if __name__ == "__main__":
        main()