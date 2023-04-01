
(cl:in-package :asdf)

(defsystem "xarm_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Call" :depends-on ("_package_Call"))
    (:file "_package_Call" :depends-on ("_package"))
    (:file "ClearErr" :depends-on ("_package_ClearErr"))
    (:file "_package_ClearErr" :depends-on ("_package"))
    (:file "ConfigToolModbus" :depends-on ("_package_ConfigToolModbus"))
    (:file "_package_ConfigToolModbus" :depends-on ("_package"))
    (:file "FtCaliLoad" :depends-on ("_package_FtCaliLoad"))
    (:file "_package_FtCaliLoad" :depends-on ("_package"))
    (:file "GetAnalogIO" :depends-on ("_package_GetAnalogIO"))
    (:file "_package_GetAnalogIO" :depends-on ("_package"))
    (:file "GetControllerDigitalIO" :depends-on ("_package_GetControllerDigitalIO"))
    (:file "_package_GetControllerDigitalIO" :depends-on ("_package"))
    (:file "GetDigitalIO" :depends-on ("_package_GetDigitalIO"))
    (:file "_package_GetDigitalIO" :depends-on ("_package"))
    (:file "GetErr" :depends-on ("_package_GetErr"))
    (:file "_package_GetErr" :depends-on ("_package"))
    (:file "GetFloat32List" :depends-on ("_package_GetFloat32List"))
    (:file "_package_GetFloat32List" :depends-on ("_package"))
    (:file "GetInt32" :depends-on ("_package_GetInt32"))
    (:file "_package_GetInt32" :depends-on ("_package"))
    (:file "GetSetModbusData" :depends-on ("_package_GetSetModbusData"))
    (:file "_package_GetSetModbusData" :depends-on ("_package"))
    (:file "GripperConfig" :depends-on ("_package_GripperConfig"))
    (:file "_package_GripperConfig" :depends-on ("_package"))
    (:file "GripperMove" :depends-on ("_package_GripperMove"))
    (:file "_package_GripperMove" :depends-on ("_package"))
    (:file "GripperState" :depends-on ("_package_GripperState"))
    (:file "_package_GripperState" :depends-on ("_package"))
    (:file "Move" :depends-on ("_package_Move"))
    (:file "_package_Move" :depends-on ("_package"))
    (:file "MoveAxisAngle" :depends-on ("_package_MoveAxisAngle"))
    (:file "_package_MoveAxisAngle" :depends-on ("_package"))
    (:file "MoveVelo" :depends-on ("_package_MoveVelo"))
    (:file "_package_MoveVelo" :depends-on ("_package"))
    (:file "MoveVelocity" :depends-on ("_package_MoveVelocity"))
    (:file "_package_MoveVelocity" :depends-on ("_package"))
    (:file "PlayTraj" :depends-on ("_package_PlayTraj"))
    (:file "_package_PlayTraj" :depends-on ("_package"))
    (:file "SetAxis" :depends-on ("_package_SetAxis"))
    (:file "_package_SetAxis" :depends-on ("_package"))
    (:file "SetControllerAnalogIO" :depends-on ("_package_SetControllerAnalogIO"))
    (:file "_package_SetControllerAnalogIO" :depends-on ("_package"))
    (:file "SetDigitalIO" :depends-on ("_package_SetDigitalIO"))
    (:file "_package_SetDigitalIO" :depends-on ("_package"))
    (:file "SetFloat32" :depends-on ("_package_SetFloat32"))
    (:file "_package_SetFloat32" :depends-on ("_package"))
    (:file "SetInt16" :depends-on ("_package_SetInt16"))
    (:file "_package_SetInt16" :depends-on ("_package"))
    (:file "SetLoad" :depends-on ("_package_SetLoad"))
    (:file "_package_SetLoad" :depends-on ("_package"))
    (:file "SetModbusTimeout" :depends-on ("_package_SetModbusTimeout"))
    (:file "_package_SetModbusTimeout" :depends-on ("_package"))
    (:file "SetMultipleInts" :depends-on ("_package_SetMultipleInts"))
    (:file "_package_SetMultipleInts" :depends-on ("_package"))
    (:file "SetString" :depends-on ("_package_SetString"))
    (:file "_package_SetString" :depends-on ("_package"))
    (:file "SetToolModbus" :depends-on ("_package_SetToolModbus"))
    (:file "_package_SetToolModbus" :depends-on ("_package"))
    (:file "TCPOffset" :depends-on ("_package_TCPOffset"))
    (:file "_package_TCPOffset" :depends-on ("_package"))
  ))