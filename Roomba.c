#pragma config(Sensor, S1,     buttonleft,     sensorEV3_Touch)
#pragma config(Sensor, S3,     sonar,          sensorSONAR_Inch)
#pragma config(Sensor, S4,     buttonright,    sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int speed = 10;
	int counter = 1000;
 while (true)
 {
		motor (motorB) = 82;
 	 	motor (motorC) = 100;
 	  if (sensorvalue (buttonleft) == 1)
 	  {
 	  	motor (motorB) = -100;
 	  	motor (motorC) = -100;
 	  	wait1Msec (550);
 	  	motor (motorB) = -50;
 	  	motor (motorC) = 50;
 	  	wait1Msec (500);
 		}
 		if (sensorvalue (buttonright) == 1)
 	  {
 	  	motor (motorB) = -100;
 	  	motor (motorC) = -100;
 	  	wait1Msec (550);
 	  	motor (motorB) = -50;
 	  	motor (motorC) = 50;
 	  	wait1Msec (500);
 		}
 		while (counter <= 1000)
		{
	   motor (motorC) = 100;
	   motor (motorB) = speed;
	   wait1Msec (200);
	   speed = speed + 1;
	   counter = counter -10;
		}
		if (speed == 100)
		{
	 		motor (motorB) = 100;
	 		motor (motorC) = 100;
	 		wait1Msec (1000);
		}


  }


}
