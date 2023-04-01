
"use strict";

let SetModbusTimeout = require('./SetModbusTimeout.js')
let ConfigToolModbus = require('./ConfigToolModbus.js')
let GetSetModbusData = require('./GetSetModbusData.js')
let SetString = require('./SetString.js')
let GetControllerDigitalIO = require('./GetControllerDigitalIO.js')
let ClearErr = require('./ClearErr.js')
let GripperMove = require('./GripperMove.js')
let SetFloat32 = require('./SetFloat32.js')
let Call = require('./Call.js')
let GetAnalogIO = require('./GetAnalogIO.js')
let TCPOffset = require('./TCPOffset.js')
let PlayTraj = require('./PlayTraj.js')
let SetMultipleInts = require('./SetMultipleInts.js')
let SetToolModbus = require('./SetToolModbus.js')
let SetAxis = require('./SetAxis.js')
let GetDigitalIO = require('./GetDigitalIO.js')
let MoveVelo = require('./MoveVelo.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let MoveAxisAngle = require('./MoveAxisAngle.js')
let SetInt16 = require('./SetInt16.js')
let MoveVelocity = require('./MoveVelocity.js')
let GetInt32 = require('./GetInt32.js')
let GetErr = require('./GetErr.js')
let GripperState = require('./GripperState.js')
let GripperConfig = require('./GripperConfig.js')
let SetControllerAnalogIO = require('./SetControllerAnalogIO.js')
let SetLoad = require('./SetLoad.js')
let FtCaliLoad = require('./FtCaliLoad.js')
let GetFloat32List = require('./GetFloat32List.js')
let Move = require('./Move.js')

module.exports = {
  SetModbusTimeout: SetModbusTimeout,
  ConfigToolModbus: ConfigToolModbus,
  GetSetModbusData: GetSetModbusData,
  SetString: SetString,
  GetControllerDigitalIO: GetControllerDigitalIO,
  ClearErr: ClearErr,
  GripperMove: GripperMove,
  SetFloat32: SetFloat32,
  Call: Call,
  GetAnalogIO: GetAnalogIO,
  TCPOffset: TCPOffset,
  PlayTraj: PlayTraj,
  SetMultipleInts: SetMultipleInts,
  SetToolModbus: SetToolModbus,
  SetAxis: SetAxis,
  GetDigitalIO: GetDigitalIO,
  MoveVelo: MoveVelo,
  SetDigitalIO: SetDigitalIO,
  MoveAxisAngle: MoveAxisAngle,
  SetInt16: SetInt16,
  MoveVelocity: MoveVelocity,
  GetInt32: GetInt32,
  GetErr: GetErr,
  GripperState: GripperState,
  GripperConfig: GripperConfig,
  SetControllerAnalogIO: SetControllerAnalogIO,
  SetLoad: SetLoad,
  FtCaliLoad: FtCaliLoad,
  GetFloat32List: GetFloat32List,
  Move: Move,
};
