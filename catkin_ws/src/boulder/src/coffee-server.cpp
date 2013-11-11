#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
#include <iostream>
using namespace std;

bool add(beginner_tutorials::AddTwoInts::Request  &req,
         beginner_tutorials::AddTwoInts::Response &res)
{
  ros::Time begin = ros::Time::now();

  res.sum = req.a + req.b;
  
  cout << (double)(begin.toSec() - req.time) << endl;  
  //ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
  //ROS_INFO("sending back response: [%ld] and time = [%lf]", (long int)res.sum, (double)(begin.toSec() - req.time));
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_two_ints_server");
  ros::NodeHandle n;


  ros::ServiceServer service = n.advertiseService("add_two_ints", add);
  ROS_INFO("Ready to add two ints.");
  ros::spin();

  return 0;
}


