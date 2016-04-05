#include <Draw.h>
Draw draw;
int z = 0;

//program pins for buttons
//const int button1 = 0;
//const int button2 = 0;
//const int button3= 0;
//const int button4 = 0;
//const int button5 = 0;

StateMachine::StateMachine()
{
  state = STATE_HOME;
}

void StateMachine::tick(int btn) {
  switch (state)
  case STATE_HOME: // nothing pressed
  if (btn == -1) //nothing pressed
    draw.DispMenu()
  }
  else if (btn == 1) { //=> Measurement mode
    state = STATE_NEWMEAS;
    draw.ClrMenu();
  }
  else if (btn == 2) {
    //=> Prev results mode
    state = STATE_PREVMEAS;
    draw.ClrMenu();
  }
  else if (btn == 3) { //=> New Patient mode
    state = STATE_NEWPAT;
    draw.ClrMenu();
  }
  else if ( btn == 4) { //=> Probe calibration mode
    state = STATE_CAL;
    draw.ClrMenu();
  }
  else if (btn == 5) { // => Bluetooth Stream mode
    state = STATE_STREAM
    draw.ClrMenu();
  }
  break;
  case STATE_NEWMEAS: //button one pressed
  draw.DispPinchPrompt();
  delay(2000);
  draw.ClrPinchPrompt();
  for (int i = 0; i < 10; i++) {
    if (btn == 1) {
      state = STATE_HOME;
    } //check that button one not pressed
    draw.DispPinchArea(i);
    delay(2000);
    //wait until probe pinched delay(1000);
    z = ReadForce();
    draw.ClrPinchArea(i);
    draw.DispResult(z);
    delay(1000);
    draw.ClrResult(z);
  }
  break;
case STATE_PREVMEAS: //button two pressed
  if (btn == 2) {

    // clear previous reading
    draw.ClrResult(z);
    state = STATE_HOME;
  }
  else {
    // disp previous reading
    draw.DispResult(z);
  }
  break;
case STATE_NEWPAT://button three pressed
  if (btn == 3) {
       // clear screen output
    state = STATE_HOME;

  }
  else {
    // enter new patient
  }
  break;
case STATE_CAL://button four pressed
  if (btn == 4) {
     // clear probe reading
    draw.ClrProbe();
    state = STATE_HOME;

  }
  else {
    // disp probe reading
     draw.DispProbe();
     }
    break;
  case STATE_STREAM://button five pressed
    draw.ClrMenu();
    if (btn == 5) {
      //clear bletooth send
      state = STATE_HOME;
   
    }
    else if (button5 == 1) {
      
       // draw bluetooth send
    }
    break;
  default:
    return;
    break;

  }
}

void ReadForce(){
x = analogRead(Fsensor);
return x;
}
