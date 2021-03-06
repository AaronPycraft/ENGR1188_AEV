//--lab11_aev_to_R2D2_to_gate_Version1
void myCode()
{
  
int frontGateSlow = 350; //intermediate posiiton
int frontGateStop = 395;  //stop at first sensor
int R2D2_slow = 775; //slow before picking up R2D2
int R2D2_stop = 812; // //stop at R2D2 pickup
int backGateSlow = 570; //begin slowing for gate on the way back
int backGateStop = 500; //stop for gate on the way back
int endPositionSlow = 20;
int endPositionStop = 0;

reverse(4);
//begin towards gate
//celerate(4,0,20,3);
motorSpeed(4,20);

//--start coasting
goToAbsolutePosition(frontGateSlow);
brake(4);

//--stop between gate sensors
goToAbsolutePosition(frontGateStop);
reverse(4);
motorSpeed(4, 30);
goFor(1.5);
//celerate(4, 0, 30, 2);

//--wait for gate to open
reverse(4);
motorSpeed(4,0);
goFor(6.5);

//--begin towards R2D2
motorSpeed(4,20);
goToAbsolutePosition(R2D2_slow); //r2d2

// begin slowing down
brake(4);
motorSpeed(4, 10);
goToAbsolutePosition(R2D2_stop); //R2D2 pickup

//stop right before r2d2
reverse(4);
motorSpeed(4,30);
goFor(2);

//--stop at r2d2
brake(4);
motorSpeed(4,0);
goFor(5);


//--begin back towards gate
celerate(4,0,40,3);
motorSpeed(4,40);
goToAbsolutePosition(backGateSlow); //r2d2 is at ???

//--begin slowing for gate
brake(4);
goToAbsolutePosition(backGateStop);

//--stop & wait for gate
motorSpeed(4, 0);
goFor(9);

//--proceed towards last position
motorSpeed(4, 40);
goToAbsolutePosition(endPositionSlow);

//--begin slowing for end
brake(4);

//--stop at end


} // DO NOT REMOVE. end of void myCode()




