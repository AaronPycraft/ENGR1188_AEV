//--lab11_aev_to_R2D2_to_gate_Version2

void myCode()
{
  
int frontGateSlow = 350;//intermediate posiiton
int frontGateStop = 430;//stop at first sensor
int R2D2_slow = 850; //slow before picking up R2D2
int R2D2_stop = 880; //stop at R2D2 pickup
int backGateSlow = 375; //begin slowing for gate on the way back
int backGateStop = 350; //stop for gate on the way back
int endPositionSlow = 0;
int endPositionStop = 0;

/* up to this point is reliable */

reverse(4);
//begin towards gate
motorSpeed(4,20); //25

//--start coasting
goToAbsolutePosition(frontGateSlow);
brake(4);

//--stop between gate sensors
goToAbsolutePosition(frontGateStop);
reverse(4);
motorSpeed(4, 30);
goFor(1);

//--wait for gate to open
reverse(4);
motorSpeed(4,0);
goFor(8);

//--begin towards R2D2
motorSpeed(4,20);
goToAbsolutePosition(R2D2_slow); //r2d2

// begin slowing down
brake(4);
motorSpeed(4, 10);
goToAbsolutePosition(R2D2_stop); //R2D2 pickup

//stop right before r2d2
reverse(4);
motorSpeed(4, 20);
goFor(1);

//--stop at r2d2
brake(4);
goFor(5);

/*
//--begin back towards gate
motorSpeed(4,40);
goToAbsolutePosition(backGateSlow); //r2d2 is at ???

//--begin slowing for gate
brake(4);
goToAbsolutePosition(backGateStop);

//--stop & wait for gate
motorSpeed(4, 0);
goFor(10);

//--proceed towards last position


*/
} // DO NOT REMOVE. end of void myCode()




