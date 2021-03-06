
(cl:in-package :asdf)

(defsystem "baxter_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "AnalogOutputCommand" :depends-on ("_package_AnalogOutputCommand"))
    (:file "_package_AnalogOutputCommand" :depends-on ("_package"))
    (:file "TareData" :depends-on ("_package_TareData"))
    (:file "_package_TareData" :depends-on ("_package"))
    (:file "DigitalOutputCommand" :depends-on ("_package_DigitalOutputCommand"))
    (:file "_package_DigitalOutputCommand" :depends-on ("_package"))
    (:file "CameraSettings" :depends-on ("_package_CameraSettings"))
    (:file "_package_CameraSettings" :depends-on ("_package"))
    (:file "JointTorques" :depends-on ("_package_JointTorques"))
    (:file "_package_JointTorques" :depends-on ("_package"))
    (:file "UpdateSources" :depends-on ("_package_UpdateSources"))
    (:file "_package_UpdateSources" :depends-on ("_package"))
    (:file "ITB" :depends-on ("_package_ITB"))
    (:file "_package_ITB" :depends-on ("_package"))
    (:file "GripperCommand" :depends-on ("_package_GripperCommand"))
    (:file "_package_GripperCommand" :depends-on ("_package"))
    (:file "DigitalIOStates" :depends-on ("_package_DigitalIOStates"))
    (:file "_package_DigitalIOStates" :depends-on ("_package"))
    (:file "CameraControl" :depends-on ("_package_CameraControl"))
    (:file "_package_CameraControl" :depends-on ("_package"))
    (:file "GripperProperties" :depends-on ("_package_GripperProperties"))
    (:file "_package_GripperProperties" :depends-on ("_package"))
    (:file "JointVelocities" :depends-on ("_package_JointVelocities"))
    (:file "_package_JointVelocities" :depends-on ("_package"))
    (:file "AssemblyState" :depends-on ("_package_AssemblyState"))
    (:file "_package_AssemblyState" :depends-on ("_package"))
    (:file "GripperIdentity" :depends-on ("_package_GripperIdentity"))
    (:file "_package_GripperIdentity" :depends-on ("_package"))
    (:file "HeadPanCommand" :depends-on ("_package_HeadPanCommand"))
    (:file "_package_HeadPanCommand" :depends-on ("_package"))
    (:file "JointPositions" :depends-on ("_package_JointPositions"))
    (:file "_package_JointPositions" :depends-on ("_package"))
    (:file "ITBStates" :depends-on ("_package_ITBStates"))
    (:file "_package_ITBStates" :depends-on ("_package"))
    (:file "CalibrateArmEnable" :depends-on ("_package_CalibrateArmEnable"))
    (:file "_package_CalibrateArmEnable" :depends-on ("_package"))
    (:file "JointCommandMode" :depends-on ("_package_JointCommandMode"))
    (:file "_package_JointCommandMode" :depends-on ("_package"))
    (:file "TareEnable" :depends-on ("_package_TareEnable"))
    (:file "_package_TareEnable" :depends-on ("_package"))
    (:file "HeadState" :depends-on ("_package_HeadState"))
    (:file "_package_HeadState" :depends-on ("_package"))
    (:file "AnalogIOState" :depends-on ("_package_AnalogIOState"))
    (:file "_package_AnalogIOState" :depends-on ("_package"))
    (:file "RobustControllerStatus" :depends-on ("_package_RobustControllerStatus"))
    (:file "_package_RobustControllerStatus" :depends-on ("_package"))
    (:file "UpdateSource" :depends-on ("_package_UpdateSource"))
    (:file "_package_UpdateSource" :depends-on ("_package"))
    (:file "DigitalIOState" :depends-on ("_package_DigitalIOState"))
    (:file "_package_DigitalIOState" :depends-on ("_package"))
    (:file "AnalogIOStates" :depends-on ("_package_AnalogIOStates"))
    (:file "_package_AnalogIOStates" :depends-on ("_package"))
    (:file "UpdateStatus" :depends-on ("_package_UpdateStatus"))
    (:file "_package_UpdateStatus" :depends-on ("_package"))
    (:file "EndpointState" :depends-on ("_package_EndpointState"))
    (:file "_package_EndpointState" :depends-on ("_package"))
    (:file "GripperState" :depends-on ("_package_GripperState"))
    (:file "_package_GripperState" :depends-on ("_package"))
  ))