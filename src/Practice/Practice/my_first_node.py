#!/usr/bin/env python3 

import rclpy 
from rclpy.node import Node

class MyNode(Node):
    
    def __init__(self):
        super().__init__("first_node")
        self.counter = 0
        self.get_logger().info("Hello New Me ")
        self.create_timer(1.0 , self.timer)


    def timer(self):
        self.get_logger().info("Hello " + str(self.counter)) 
        self.counter += 1

 
class MyNode2(Node):

    def __init__(self):
        super().__init__("Second_Node")
        self.get_logger().info("This is the second Node")




def main(args = None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    node2 = MyNode2()
    #rclpy.spin(node2) 

    rclpy.shutdown()





if __name__ == '__main__':
    main()
