#pragma config(Sensor, in6,    sw,             sensorPotentiometer)
#pragma config(Sensor, in7,    clawPot,        sensorPotentiometer)
#pragma config(Sensor, in8,    arm,            sensorPotentiometer)
#pragma config(Sensor, dgtl9,  lshaft,         sensorQuadEncoder)
#pragma config(Sensor, dgtl11, rshaft,         sensorQuadEncoder)
#pragma config(Motor,  port1,           claw,          tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           BL,            tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           BR,            tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           FL,            tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           FR,            tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           RightLift1,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           LeftLift1,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           RightLift2,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           LeftLift2,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          claw2,         tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

int aut = 2;
void pre_auton()
{
  displayLCDNumber(1, 0, SensorValue[sw], 5);
  if(SensorValue(sw) <= 1000){
  	aut = 1;
  }
  else if(SensorValue[sw] > 1000 && SensorValue[sw] <= 2000){
  	aut = 2;
  }
  else{
  	aut = 3;
  }
}


/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
	if(SensorValue(sw) <= 2500){
  	aut = 1;
  }

  else{
  	aut = 2;
  }
	switch(aut){
		case 1:
  					motor[FL] = 127;
						motor[FR] = -50;
						motor[BR] = -50;
						motor[BL] = 127;
						delay(1000);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						delay(150);
						motor[FL] = 127;
						motor[FR] = -45;
						motor[BR] = -45;
						motor[BL] = 127;
						delay(350);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						delay(50);
						motor[claw] = 127;
						motor[claw2] = -127;
						delay(1000);
						motor[FL] = 127;
						motor[FR] = 127;
						motor[BR] = 45;
						motor[BL] = 45;
						delay(1750);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						delay(5);
						motor[FL] = -127;
						motor[FR] = 127;
						motor[BR] = 127;
						motor[BL] = -127;
						delay(400);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						while (abs(SensorValue[arm]) < (int)(1800) ){
										motor[RightLift1] = 127;
										motor[RightLift2] = 127;
										motor[LeftLift1] = 127;
										motor[LeftLift2] = 127;
										delay(750);
										motor[claw] = -127;
										motor[claw2] = 127;
										delay(100);
										motor[claw] = 0;
										motor[claw2] = 0;

									}
					motor[claw] = 0;
					motor[claw2] = 0;
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					while (abs(SensorValue[arm]) > (int)(0) ){
										motor[RightLift1] = -127;
										motor[RightLift2] = -127;
										motor[LeftLift1] = -127;
										motor[LeftLift2] = -127;
}
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					motor[FL] = 127;
					motor[FR] = -127;
					motor[BR] = -127;
					motor[BL] = 127;
					delay (1400);
					motor[FL] = 0;
					motor[FR] = 0;
					motor[BR] = 0;
					motor[BL] = 0;
					motor[claw] = 127;
					motor[claw2] = -127;
					delay(500);
					motor[FL] = -127;
					motor[FR] = 127;
					motor[BR] = 127;
					motor[BL] = -127;
					delay(1400);
					motor[FL] = 0;
					motor[FR] = 0;
					motor[BR] = 0;
					motor[BL] = 0;
						while (abs(SensorValue[arm]) < (int)(1700) ){
										motor[RightLift1] = 127;
										motor[RightLift2] = 127;
										motor[LeftLift1] = 127;
										motor[LeftLift2] = 127;
										delay(1000);
										motor[claw] = -127;
										motor[claw2] = 127;
										delay(100);
										motor[claw] = 0;
										motor[claw2] = 0;

									}

					motor[FL] = 0;
					motor[FR] = 0;
					motor[BR] = 0;
					motor[BL] = 0;
					motor[claw] = 0;
					motor[claw2] = 0;
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					break;
			case 2:
			  		motor[FL] = 40; //first turn
						motor[FR] = -127;
						motor[BR] = -127;
						motor[BL] = 40;
						delay(1300);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						delay(150);
						motor[FL] = 40; //turn 1.5
						motor[FR] = -127;
						motor[BR] = -127;
						motor[BL] = 40;
						delay(450);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						delay(50);
						motor[claw] = 127;  //grab
						motor[claw2] = -127;
						delay(1200);
						motor[FL] = -45;  //turn 2
						motor[FR] = -45;
						motor[BR] = -127;
						motor[BL] = -127;
						motor[RightLift1] = 35;
					  motor[RightLift2] = 35;
					  motor[LeftLift1] = 35;
					  motor[LeftLift2] = 35;
						delay(900);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
						delay(5);
						motor[FL] = -127; //line up
						motor[FR] = 127;
						motor[BR] = 127;
						motor[BL] = -127;
						delay(800);
						motor[FL] = 0;
						motor[FR] = 0;
						motor[BR] = 0;
						motor[BL] = 0;
						while (abs(SensorValue[arm]) < (int)(1800) ){  //fling
										motor[RightLift1] = 127;
										motor[RightLift2] = 127;
										motor[LeftLift1] = 127;
										motor[LeftLift2] = 127;
										delay(750);
										motor[claw] = -127;
										motor[claw2] = 127;
										delay(100);
										motor[claw] = 0;
										motor[claw2] = 0;

									}
					motor[claw] = 0;
					motor[claw2] = 0;
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					while (abs(SensorValue[arm]) > (int)(0) ){ //lower arm
										motor[RightLift1] = -127;
										motor[RightLift2] = -127;
										motor[LeftLift1] = -127;
										motor[LeftLift2] = -127;
}
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					motor[FL] = 127;
					motor[FR] = -127;
					motor[BR] = -127; //reverse
					motor[BL] = 127;
					delay (1400);
					motor[FL] = 0;
					motor[FR] = 0;
					motor[BR] = 0;
					motor[BL] = 0;
					motor[claw] = 127;  //grab backline
					motor[claw2] = -127;
					delay(500);
					motor[FL] = -127;
					motor[FR] = 127;    //re aim
					motor[BR] = 127;
					motor[BL] = -127;
					delay(1400);
					motor[FL] = 0;
					motor[FR] = 0;
					motor[BR] = 0;
					motor[BL] = 0;
						while (abs(SensorValue[arm]) < (int)(1700) ){ //fling
										motor[RightLift1] = 127;
										motor[RightLift2] = 127;
										motor[LeftLift1] = 127;
										motor[LeftLift2] = 127;
										delay(1000);
										motor[claw] = -127;
										motor[claw2] = 127;
										delay(100);
										motor[claw] = 0;
										motor[claw2] = 0;

									}

					motor[FL] = 0;
					motor[FR] = 0;  //done set all motors to 0
					motor[BR] = 0;
					motor[BL] = 0;
					motor[claw] = 0;
					motor[claw2] = 0;
					motor[RightLift1] = 0;
					motor[RightLift2] = 0;
					motor[LeftLift1] = 0;
					motor[LeftLift2] = 0;
					break;

				}
}
/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
#define C1LX vexRT[Ch4]
#define C1LY vexRT[Ch3]
#define C1RX vexRT[Ch1]

while(1==1){
    clearLCDLine(0);
    clearLCDLine(1);
		displayLCDNumber(0, 0, SensorValue(arm), 5);
		displayLCDNumber(0, 1, SensorValue(lshaft), 5);
  	displayLCDNumber(1, 0, SensorValue(clawPot), 5);
		//holonomic drive code
		motor[FL] =  -C1LY - C1LX - C1RX;
		motor[FR] =   C1LY - C1LX - C1RX;
		motor[BR] =   C1LY + C1LX - C1RX;
		motor[BL] =  -C1LY + C1LX - C1RX;

		//Lift
		if(vexRT[Btn6U] && SensorValue(arm) < 1900){
			motor[RightLift1] = 127;
			motor[RightLift2] = 127;
			motor[LeftLift1] = 127;
			motor[LeftLift2] = 127;
		}
		//Lift reverse
		else if (vexRT[Btn6D]/*&& sensorValue(arm) > 0*/){
			motor[RightLift1] = -127;
			motor[RightLift2] = -127;
			motor[LeftLift1] = -127;
			motor[LeftLift2] = -127;
		}
		else if(vexRT[Btn7U]){
			motor[RightLift1] = 127;
			motor[RightLift2] = 127;
			motor[LeftLift1] = 127;
			motor[LeftLift2] = 127;
		}
		//Lift reverse
		else if (vexRT[Btn7D]){
			motor[RightLift1] = -127;
			motor[RightLift2] = -127;
			motor[LeftLift1] = -127;
			motor[LeftLift2] = -127;
		}
		//Do nothing
		else{
			motor[RightLift1] = 0;
			motor[RightLift2] = 0;
			motor[LeftLift1] = 0;
			motor[LeftLift2] = 0;
		}

		//Opens claw
		if (vexRT[Btn5U] == true){
			motor[claw] = -127;
    	motor[claw2] = 127;
		}
		//closes claw
		else if (vexRT[Btn5D] == true){
			motor[claw] = 127;
    	motor[claw2] = -127;
	}
		//Do nothing
		else{
			motor[claw] = 0;
			motor[claw2] = 0;
		}

}
}
