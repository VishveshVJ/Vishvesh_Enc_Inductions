#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
from std_msgs.msg import Float32
from std_msgs.msg import String
from std_msgs.msg import Bool


class rover_status_msg_publisher (Node):

    def __init__ (self) :
        super().__init__("rover_status_msg_publisher")
        self.battery_level = self.create_publisher(Float32 , "/battery_level" , 10 )
        self.rover_mode = self.create_publisher(String , "/rover_mode" , 10)
        self.emergency_stop = self.create_publisher(Bool , "/emergency_stop" , 10)



        self.timer = self.create_timer(1.0 , self.send_battery_level)
        self.get_logger().info("The Node has been created")
        self.current_battery = 100.0 
    
    def send_battery_level (self) :
        #Creating the Data to be Sent
        battery_msg = Float32()
        mode_msg = String()
        emergency_msg = Bool()

        #Battery Drainage 
        battery_msg.data = self.current_battery
        #self.get_logger().info("Battery : " +str(battery_msg.data))
        if(self.current_battery > 0 ) :
            self.current_battery -= 0.5

        #Telling Data
        mode_msg.data = "Crab Mode"
        emergency_msg.data = False 

        #Publishing to the Topics 
        self.battery_level.publish(battery_msg)
        self.rover_mode.publish(mode_msg)
        self.emergency_stop.publish(emergency_msg)


        
        

def main(args = None):
    rclpy.init(args = args) 
    publisher_node = rover_status_msg_publisher()
    rclpy.spin(publisher_node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

