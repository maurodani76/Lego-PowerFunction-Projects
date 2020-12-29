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
    }
  }
}
