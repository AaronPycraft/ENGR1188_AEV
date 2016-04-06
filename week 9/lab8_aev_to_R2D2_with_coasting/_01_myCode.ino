void myCode()
{
  //----------------------------------------------------------------------------------------
  // myCode();
  //
  // This is the tab where the programming of your vehicle operation is done.
  // Tab _00_AEV_key_words contains a compiled list of functions/subroutines used for vehicle
  // operation. 
  //
  // Note:
  // (1) After running your AEV do not turn the AEV off, connect the AEV to a computer, or 
  //     push the reset button on the Arduino. There is a 13 second processing period. In 
  //     post processing, data is stored and battery recuperation takes place. 
  // (2) Time, current, voltage, total marks, position traveled are recorded approximately 
  //     every 60 milliseconds. This may vary depending on the vehicles operational tasks. 
  //     It takes approximately 35-40 milliseconds for each recording. Thus when programming,
  //     code complexity may not be beneficial. 
  // (3) Always comment your code. Debugging will be quicker and easier to do and will 
  //     especially aid the instructional team in helping you. 
  //---------------------------------------------------------------------------------------- 

  // Program between here-------------------------------------------------------------------
  

reverse(4);
//go to gate
/* For this section, we want to test whether or not we can start 
  from a higher speed, brake() at some position n, and coast towards
  gate, and stop at the first gate sensor. 
*/

int n = 250; //intermediate posiiton
int firstGateStopPosition = 325;
/* Original code
celerate(4,0,20,3);
motorSpeed(4,20);
goToAbsolutePosition(n); //this is position n

// begin slowing down
brake(4);
motorSpeed(4, 10);
goToAbsolutePosition(325);
//stop right before gate
reverse(4);
celerate(4,0,30,2);
//motorSpeed(4,30);

//--stop at gate
brake(4);
goFor(5);
*/

//--new code
celerate(4,0,20,3);
motorSpeed(4,20);
goToAbsolutePosition(n); //this is position n, before the gate
brake(4);
//--here, we are coasting towards the gate, hopefully we get there...
goToAbsolutePosition(firstGateStopPosition); //stop positon

//--stop between gate sensors
motorSpeed(4, 20);
goFor(0.5); //it's kinda ok to trip the sensor then go backwards

//--wait for gate to open
motorSpeed(4,0);
goFor(7);
//-------------end new possible code version

//--begin towards R2D2
reverse(4);
//go to r2d2
celerate(4,0,20,3);
motorSpeed(4,20);
goToAbsolutePosition(650); //r2d2 is at ???

// begin slowing down
brake(4);
motorSpeed(4, 10);
goToAbsolutePosition(850); 

//stop right before r2d2
reverse(4);
celerate(4,0,30,2);

//--stop at r2d2
brake(4);
goFor(5);


} // DO NOT REMOVE. end of void myCode()




