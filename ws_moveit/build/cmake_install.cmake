# Install script for directory: /home/p/peth8881/robotics/ws_moveit/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/p/peth8881/robotics/ws_moveit/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/.catkin")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE FILE FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/.catkin")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/_setup_util.py")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE PROGRAM FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/env.sh")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE PROGRAM FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/setup.bash")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE FILE FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/setup.sh")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE FILE FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/setup.zsh")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE FILE FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/p/peth8881/robotics/ws_moveit/install/.rosinstall")
FILE(INSTALL DESTINATION "/home/p/peth8881/robotics/ws_moveit/install" TYPE FILE FILES "/home/p/peth8881/robotics/ws_moveit/build/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make_isolated.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/gtest/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ikfast/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_msgs/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_core/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_plugins/moveit_fake_controller_manager/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_planners/moveit_planners/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_plugins/moveit_plugins/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_resources/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/moveit_ros/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/perception/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/planning/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_planners/ompl/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/move_group/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/manipulation/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/robot_interaction/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/warehouse/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/benchmarks/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/planning_interface/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_commander/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/visualization/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_ros/benchmarks_gui/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_setup_assistant/cmake_install.cmake")
  INCLUDE("/home/p/peth8881/robotics/ws_moveit/build/moveit_plugins/moveit_simple_controller_manager/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/p/peth8881/robotics/ws_moveit/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/p/peth8881/robotics/ws_moveit/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
