#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
from kratos_vishvesh_q2_msgs.msg import RoverStatus


class publisher_node (Node) : 
    def __init__ (self) :
        super().__init__("Publisher_Node")
        self.publisher = self.create_publisher(RoverStatus , "/Rover_Vitals" , 10 )
        self.create_timer(0.5 , self.call_back)

    def call_back (self) :

        #Creating the Varibale msg of type RoverStatus which is our custom msg type 
        msg = RoverStatus()

        #Intialiazning its different attributes

        msg.battery_percentage = 100.0 
        msg.velocity = 10.0 
        msg.emergency_stop = False
        msg.mode = "Crab Mode"

        #Publishing
        self.publisher.publish(msg)



def main (args = None ) :
    rclpy.init(args = args)
    node = publisher_node()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__" : 
    main()
