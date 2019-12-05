#ifndef MOTORS_H
#define MOTORS_H

#include "motors.c"

void * motor_thread( void * args );
void motor_init();
void forward( int speed );
void backward( int speed );
void hardLeft( int speed );
void hardRight( int speed );

#endif // MOTORS_H