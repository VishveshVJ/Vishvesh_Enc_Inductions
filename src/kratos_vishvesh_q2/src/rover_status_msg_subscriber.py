#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node 
from kratos_vishvesh_q2_msgs.msg import RoverStatus


class rover_status_msg_subscriber (Node) :

    def __init__ (self) : 
        super().__init__("rover_status_msg_subscriber")
        self.battery_subscriber = self.create_subscription(
            RoverStatus , "/Rover_Vitals" , self.rover_Vitals_msg_publisher_callback , 10
        )
    
    def rover_Vitals_msg_publisher_callback(
            self , Rover_Vitals_msg : RoverStatus) : 
        
        self.get_logger().info("Battery Percentage " + str(Rover_Vitals_msg.battery_percentage) + "\n" 
                               + "Velocity " + str(Rover_Vitals_msg.velocity) + "\n" 
                               + "Emergency_Status " + str(Rover_Vitals_msg.emergency_stop) + "\n" 
                               + "Mode " + str(Rover_Vitals_msg.mode) )
        

        


def main (args = None):
    rclpy.init(args =args)
    rover_status_msg_subscriber_node = rover_status_msg_subscriber()
    rclpy.spin(rover_status_msg_subscriber_node)
    rclpy.shutdown()


if __name__ == "__main__" : 
    main()