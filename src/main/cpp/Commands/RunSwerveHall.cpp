/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/RunSwerveHall.h"
#include "Subsystems/HallTest.h"
#include <OI.h>
#include <Robot.h>


RunSwerveHall::RunSwerveHall() : frc::Command() {
  
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  
  Requires(Robot::HallTestBase.get());
  SetRunWhenDisabled(false);
}

// Called just before this Command runs the first time
void RunSwerveHall::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void RunSwerveHall::Execute() {

  frc::XboxController *driverJoystick = Robot::oi.get()->getDriverJoyStick().get();
  Robot::HallTestBase.get()->driveSwerve(driverJoystick);

}

// Make this return true when this Command no longer needs to run execute()
bool RunSwerveHall::IsFinished() { return false; }

// Called once after isFinished returns true
void RunSwerveHall::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunSwerveHall::Interrupted() {}