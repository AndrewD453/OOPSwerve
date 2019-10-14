/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/FOSwerveDrive.h"
#include "Subsystems/SwerveWheel.h"



FOSwerveDrive::FOSwerveDrive()  : Subsystem("FOSwerveDrive") {

  frontLeft = new SwerveWheel(0);
  frontRight = new SwerveWheel(1);
  backLeft = new SwerveWheel(2);
  backRight = new SwerveWheel(3);

  



}

void FOSwerveDrive::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.