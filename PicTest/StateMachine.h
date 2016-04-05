#ifndef StateMachine_h
#define StateMeachine_h
#include "Arduino.h"

const int STATE_HOME = 0;
const int STATE_NEWMEAS = 1;
const int STATE_PREVMEAS = 2;
const int STATE_NEWPAT = 3;
const int STATE_CAL = 4;
const int STATE_STREAM = 5;

class StateMachine
{
	int state;
	StateMachine();
	void tick(int btn);
};