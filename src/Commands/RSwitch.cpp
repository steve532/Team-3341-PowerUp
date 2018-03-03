/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/RSwitch.h>
#include "Auto_Right_RScale.h"
#include "Auto_Right_LScale.h"
#include "Auto_Right_Switch.h"

RSwitch::RSwitch(std::string s) {
	if(s[0] == 'R')
		AddSequential(new Auto_Right_Switch());
	else
		AddSequential(new DriveForward(To_Switch+Mid_Targets));
}
