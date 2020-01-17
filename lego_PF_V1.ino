/*
Codice base per aumentare e diminuire il valore di PWM con due pulsanti
Il pulsante centrale ferma tutto, riportando a 0 i valori delle due variabili

La seriale è solo per test dei valori riportati.
*/
#include <legopowerfunctions.h>

#define IRLed 11      // pin al quale è collegato il led IR (usare transistor per pilotare il led IR!)
#define LEFT 9        // pin pulsante LEFT
#define STOP 8        // pin pulsante STOP
#define RIGHT 7       // pin pulsante RIGHT


LEGOPowerFunctions lego(11);

int f = 0;
int r = 0;

void setup()
{
  // Serial.begin(9600);
  pinMode(RIGHT, INPUT);
  pinMode(STOP, INPUT);
  pinMode(LEFT, INPUT);
 
}

void loop()
{
  if ( digitalRead(RIGHT) == HIGH && f < 7) {
    if ( r == 0 ) {
      f = f+1;
      if ( f == 1 ) {
        lego.SingleOutput(0, PWM_FWD1, BLUE, CH4);
        }
      if ( f == 2 ) {
        lego.SingleOutput(0, PWM_FWD2, BLUE, CH4);
        }
      if ( f == 3 ) {
        lego.SingleOutput(0, PWM_FWD3, BLUE, CH4);
        }
      if ( f == 4 ) {
        lego.SingleOutput(0, PWM_FWD4, BLUE, CH4);
        }
      if ( f == 5 ) {
        lego.SingleOutput(0, PWM_FWD5, BLUE, CH4);
        }
      if ( f == 6 ) {
        lego.SingleOutput(0, PWM_FWD6, BLUE, CH4);
        }
      if ( f == 7 ) {
        lego.SingleOutput(0, PWM_FWD7, BLUE, CH4);
        }
    } else {
        r = r-1;
      if ( r == 1 ) {
        lego.SingleOutput(0, PWM_REV1, BLUE, CH4);
        }
      if ( r == 2 ) {
        lego.SingleOutput(0, PWM_REV2, BLUE, CH4);
        }
      if ( r == 3 ) {
        lego.SingleOutput(0, PWM_REV3, BLUE, CH4);
        }
      if ( r == 4 ) {
        lego.SingleOutput(0, PWM_REV4, BLUE, CH4);
        }
      if ( r == 5 ) {
        lego.SingleOutput(0, PWM_REV5, BLUE, CH4);
        }
      if ( r == 6 ) {
        lego.SingleOutput(0, PWM_REV6, BLUE, CH4);
        }
      if ( r == 7 ) {
        lego.SingleOutput(0, PWM_REV7, BLUE, CH4);
        }
    }
    delay(100);
  }
  if ( digitalRead(LEFT) == HIGH && r < 7) {
    if ( f == 0 ) {
      r = r+1;
      if ( r == 1 ) {
        lego.SingleOutput(0, PWM_REV1, BLUE, CH4);
        }
      if ( r == 2 ) {
        lego.SingleOutput(0, PWM_REV2, BLUE, CH4);
        }
      if ( r == 3 ) {
        lego.SingleOutput(0, PWM_REV3, BLUE, CH4);
        }
      if ( r == 4 ) {
        lego.SingleOutput(0, PWM_REV4, BLUE, CH4);
        }
      if ( r == 5 ) {
        lego.SingleOutput(0, PWM_REV5, BLUE, CH4);
        }
      if ( r == 6 ) {
        lego.SingleOutput(0, PWM_REV6, BLUE, CH4);
        }
      if ( r == 7 ) {
        lego.SingleOutput(0, PWM_REV7, BLUE, CH4);
        }
    } else {
        f = f-1;
        if ( f == 1 ) {
        lego.SingleOutput(0, PWM_FWD1, BLUE, CH4);
        }
      if ( f == 2 ) {
        lego.SingleOutput(0, PWM_FWD2, BLUE, CH4);
        }
      if ( f == 3 ) {
        lego.SingleOutput(0, PWM_FWD3, BLUE, CH4);
        }
      if ( f == 4 ) {
        lego.SingleOutput(0, PWM_FWD4, BLUE, CH4);
        }
      if ( f == 5 ) {
        lego.SingleOutput(0, PWM_FWD5, BLUE, CH4);
        }
      if ( f == 6 ) {
        lego.SingleOutput(0, PWM_FWD6, BLUE, CH4);
        }
      if ( f == 7 ) {
        lego.SingleOutput(0, PWM_FWD7, BLUE, CH4);
        }
    }
    delay(100);
  }
  if ( digitalRead(STOP) == HIGH ) {
    f = 0;
    r = 0;
    lego.SingleOutput(0, PWM_FLT, BLUE, CH4);
  }
  // Serial.print(f);
  // Serial.print(",");
  // Serial.println(r);
  delay(100);
  
}
