#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rgbd-slam-node.hpp"
#include "../rmw/rmw/rmw.h"



#include "System.h"

int main(int argc, char **argv)
{
    if(argc < 3)
    {
        std::cerr << "\nUsage: ros2 run orbslam rgbd path_to_vocabulary path_to_settings" << std::endl;
        return 1;
    }

    rclcpp::init(argc, argv);
    //rmw_set_log_severity(RMW_LOG_SEVERITY_DEBUG);

    // malloc error using new.. try shared ptr
    // Create SLAM system. It initializes all system threads and gets ready to process frames.

    bool visualization = true;
    ORB_SLAM3::System SLAM(argv[1], argv[2], ORB_SLAM3::System::RGBD, visualization);

    std::shared_ptr<RgbdSlamNode> node( new RgbdSlamNode(&SLAM));
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
