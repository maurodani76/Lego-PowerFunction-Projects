/*
Codice base per aumentare e diminuire il valore di PWM con due pulsanti
Il pulsante centrale ferma tutto, riportando a 0 il valore della variabile speed.
La seriale è solo per test dei valori riportati.
Il valore di speed va da 1 a 7 per pwm da 1 a 7 in fwd e da 15 a 9 (attenzione alla direzione! è al contrario!) in rev.
Viene evitato il valore 8 (dovrebbe essere il brake, ma non è necessario).

Con la funzione while viene implementata una "sosta" sul valore 0 quando uno dei pulsanti di direzione rimane premuto e il valore raggiunge 0.
*/

#include <legopowerfunctions.h>

#define IRLed 11      // pin al quale è collegato il led IR (usare transistor per pilotare il led IR!)
#define LEFT 7        // pin pulsante LEFT
#define STOP 8        // pin pulsante STOP
#define RIGHT 9       // pin pulsante RIGHT


LEGOPowerFunctions lego(11);
int speed = 0;
  
void setup()
{
  // Serial.begin(9600);
  pinMode(RIGHT, INPUT);
  pinMode(STOP, INPUT);
  pinMode(LEFT, INPUT);
 
}

void loop()
{
  
    if ( digitalRead(RIGHT) == HIGH && (speed < 7 || speed > 8) && speed < 16 ) {   // evita che il valore speed vada sopra 7 o sopra 15
        speed++;  
          if ( speed == 16 ) {         // azzera speed riportandolo a 0 se il valore arriva a 16
          speed = 0;
          }
        lego.SingleOutput(0, speed , RED, CH1);  // passa il valore speed al codice che gestisce il led IR
        // Serial.println(speed);
          while ( digitalRead(RIGHT) == HIGH && speed == 0) {   // blocca la variazione del valore speed quando questo raggiunge 0 e il pulsante RIGHT rimane premuto
          }
        delay(150);
    }
    else if ( digitalRead(LEFT) == HIGH && (speed < 8 || speed > 9) && speed > 0 ) {    // evita che il valore speed diventi 8
        speed--;
        lego.SingleOutput(0, speed , RED, CH1);
        // Serial.println(speed);
          while ( digitalRead(LEFT) == HIGH && speed == 0) {   // blocca la variazione del valore speed quando questo raggiunge 0 e il pulsante LEFT rimane premuto
          }
        delay(150);
    }      
    else if ( digitalRead(LEFT) == HIGH && speed == 0 ) {  // viene gestita la variazione di velocità da 15 (pwm più basso!) a 9 (pwm più alto!)
        speed = 16;
        speed--;
        lego.SingleOutput(0, speed , RED, CH1);
        // Serial.println(speed);
        delay(150);
    }
}    
