//Draw.h

#ifndef Draw_h
#define Draw_h
#include "Arduino.h"

class Draw
{
	public:
	void DispLogo();
	void DispMenu();
	void ClrMenu();
	void DispPinchPrompt();
	void ClrPinchPrompt();
	void DispPinchArea(int x);
	void ClrPinchArea(int x);
	void DispResult();
	void ClrResult();
	void DispProbe();
	void ClrProbe();


//	private:
//	void DrawMenu(uint16_t colour);
};

#endif