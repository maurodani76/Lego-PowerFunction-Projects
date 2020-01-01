#include <legopowerfunctions.h>
int a = 0;

LEGOPowerFunctions lego(11);

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  lego.SingleOutput(0, PWM_FWD1, BLUE, CH4);
  delay(500);
  lego.SingleOutput(0, PWM_FWD2, BLUE, CH4);
  delay(500);
  a = 3;
  lego.SingleOutput(0, PWM_FWD3, BLUE, CH4);
  delay(2000);
  lego.SingleOutput(0, PWM_FLT, BLUE, CH4);
  delay(2000);
  lego.SingleOutput(0, PWM_REV3, BLUE, CH4);
  delay(2000);
  lego.SingleOutput(0, PWM_FLT, BLUE, CH4);
  delay(2000);
}
