//--week12_aev_to_R2D2_to_gate_Version2
void myCode()
{
  
int frontGateStop = 390; //stop at first sensor

int R2D2_stop = 805; //stop at R2D2 pickup

int backGateStop = 450; //stop for gate on the way back

int endPositionStop = 30;

reverse(4);
//--begin towards gate
motorSpeed(4,18);
goFor(13);
//motorSpeed(4, 15);
//goToAbsolutePosition(frontGateStop);
//--stop at gate
reverse(4);
motorSpeed(4, 25);
goFor(2.1);

//--wait for gate
brake(4);
goFor(8);

//--begin towards R2D2
reverse(4);
motorSpeed(4, 20);
goToAbsolutePosition(R2D2_stop);
//--stop at R2D2
reverse(4);
motorSpeed(4, 20);
goFor(2);



//--begin towards gate
motorSpeed(4,40);
goToAbsolutePosition(backGateStop);
//--stop at gate
reverse(4);
motorSpeed(4, 40);
goFor(2.1);

//--wait for gate
brake(4);
goFor(8);

//--begin towards start Position
reverse(4);
motorSpeed(4, 40);
goToAbsolutePosition(endPositionStop);
//--stop at Start
reverse(4);
motorSpeed(4, 40);
goFor(2);

} // DO NOT REMOVE. end of void myCode()

