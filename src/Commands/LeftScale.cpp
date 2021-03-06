/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LeftScale.h"
#include "RightScale.h"
#include "Auto_Left_RScale.h"
#include "Auto_Left_LScale.h"
#include "Auto_Right_Switch.h"

LeftScale::LeftScale(std::string s) {
	if(s[1] == 'L')
		AddSequential(new Auto_Left_LScale());
	else
		AddSequential(new Auto_Left_RScale());
}
