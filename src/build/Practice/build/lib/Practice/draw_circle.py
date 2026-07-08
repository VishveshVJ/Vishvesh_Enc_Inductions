import rclpy 
from rclpy.node import Node
from geometry_msgs.msg import Twist 


class DrawCircleNode(Node):

    def __init__(self):
        super().__init__("draw_circle")   #.create_publisher is a fxn of ROS2 
        self.my_first_publisher_for_velo = self.create_publisher(Twist ,"/turtle1/cmd_vel" , 10)
        self.timer = self.create_timer(0.5 , self.send_velocity_command)
        self.get_logger().info("The Node for Drawing Circle is created")


    def send_velocity_command(self) : 
        msg = Twist()               #here msg is an attribute
        msg.linear.x = 2.0 
        msg.angular.z = 1.0 
        self.my_first_publisher_for_velo.publish(msg)




def main (args= None):
    rclpy.init(args =args)
    Node = DrawCircleNode()
    rclpy.spin(Node)
    rclpy.shutdown() 
