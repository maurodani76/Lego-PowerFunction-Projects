/*
Codice base per aumentare e diminuire il valore di PWM con due pulsanti
Il pulsante centrale ferma tutto, riportando a 0 i valori delle due variabili
La seriale è solo per test dei valori riportati.
*/
#include <legopowerfunctions.h>

#define IRLed 11      // pin al quale è collegato il led IR (usare transistor per pilotare il led IR!)
#define LEFT 7        // pin pulsante LEFT
#define STOP 8        // pin pulsante STOP - è da integrare nel codice!
#define RIGHT 9       // pin pulsante RIGHT


LEGOPowerFunctions lego(11);
int speed = 0;
int prevspeed = 0;
  
void setup()
{
  // Serial.begin(9600);
  pinMode(RIGHT, INPUT);
  pinMode(STOP, INPUT);
  pinMode(LEFT, INPUT);
 
}

void loop()
{
  
    if ( digitalRead(RIGHT) == HIGH && (speed < 7 || speed > 8) && speed < 16 ) {
        speed++;  
          if ( speed == 16 ) {
          speed = 0;
          }
        lego.SingleOutput(0, speed , RED, CH1);  
        delay(150);
    }
    else if ( digitalRead(LEFT) == HIGH && (speed < 8 || speed > 9) && speed > 0 ) {
        speed--;
        lego.SingleOutput(0, speed , RED, CH1);
        delay(150);
    }      
    else if ( digitalRead(LEFT) == HIGH && speed == 0 ) {
        speed = 16;
        speed--;
        lego.SingleOutput(0, speed , RED, CH1);
        delay(150);
    }
}
