#include "../../src/headers/motors.h"

void mobility_test() {
	
	printf("MOBILITY TEST\n");
/*
	printf("forward (0-100)\n");
	for(int i = 0; i < MAX_SPEED; i++)
	{
		set_motor_RIGHT(HIGH, LOW, i);
		set_motor_LEFT(HIGH, LOW, i);
		delay(10);
	}
	
	printf("forward (100-0)\n");
	for(int i = MAX_SPEED; i != 0; i--)
	{
		set_motor_RIGHT(1, 0, i);
		set_motor_LEFT(1, 0, i);
		delay(10);
	}
	
	printf("backward (0-100)\n");
	for(int i = 0; i < MAX_SPEED; i++)
	{
		set_motor_RIGHT(0, 1, i);
		set_motor_LEFT(0, 1, i);
		delay(10);
	}
	
	printf("backward (100-0)\n");
	for(int i = MAX_SPEED; i != 0; i--)
	{
		set_motor_RIGHT(0, 1, i);
		set_motor_LEFT(0, 1, i);
		delay(10);
	}
	*/
	printf("spin right (0-100)\n");
	for(int i = 0; i < MAX_SPEED; i++)
	{
		set_motor_RIGHT(0, 1, 45);
		set_motor_LEFT(1, 0, 45);
		delay(10);
	}
	
	printf("spin left (0-100)\n");
	for(int i = 0; i < MAX_SPEED; i++)
	{
		set_motor_RIGHT(1, 0, 45);
		set_motor_LEFT(0, 1, 45);
		delay(10);
	}
	
	printf("lead foot (100)\n");
	set_motor_RIGHT(1, 0, 100);
	set_motor_LEFT(1, 0, 100);
	delay(30);
	
	printf("hard stop (0)\n");
	set_motor_RIGHT(0, 0, 0);
	set_motor_LEFT(0, 0, 0);
	
	printf("test complete\n");
	
	
	

}
