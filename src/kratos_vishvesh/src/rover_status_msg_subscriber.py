#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node 
from std_msgs.msg import Float32
from std_msgs.msg import String
from std_msgs.msg import Bool


class rover_status_msg_subscriber (Node) :

    def __init__ (self) : 
        super().__init__("rover_status_msg_subscriber")
        self.battery_subscriber = self.create_subscription(
            Float32 , "/battery_level" , self.rover_status_msg_publisher_callback_battery , 10
        )
        
        self.rover_mode_susbscriber = self.create_subscription(
            String, "/rover_mode" , self.rover_status_msg_publisher_callback_mode ,10
        )
        
        self.emergency_stop_susbscriber = self.create_subscription(
            Bool , "/emergency_stop" , self.rover_status_msg_publisher_callback_emergency_stop , 10
        )
        




    def rover_status_msg_publisher_callback_battery (self , battery_msg : Float32) : 
        self.get_logger().info("The Battery level is " + str(battery_msg.data))
        

    def rover_status_msg_publisher_callback_mode (self , rover_mode :String):
        self.get_logger().info("The Rover Mode is " + str(rover_mode.data))

    def rover_status_msg_publisher_callback_emergency_stop (self , emergency_stop: Bool) :
        self.get_logger().info("Emergency Stop is " + str(emergency_stop.data))



        


def main (args = None):
    rclpy.init(args =args)
    rover_status_msg_subscriber_node = rover_status_msg_subscriber()
    rclpy.spin(rover_status_msg_subscriber_node)
    rclpy.shutdown()


if __name__ == "__main__" : 
    main()