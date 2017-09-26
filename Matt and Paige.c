
task main()
{

	while(SensorValue(buttonLeft) == 0)
	{
	motor[motorB] = 50;
	}

	motor[motorB] = -70;
	wait1Msec(1000);



}
