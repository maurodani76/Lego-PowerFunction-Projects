/*
La seriale è solo per test dei valori riportati.
*/
#include <legopowerfunctions.h>

LEGOPowerFunctions lego(11);

int f = 0;
int r = 0;
int val1 = 0;
int val = 0;

void setup()
{
  // Serial.begin(9600);
  // pinMode(7, INPUT);
}

void loop()
{
  val1 = val;
  val = map(analogRead(A1), -20,1023, -7,7); // aggiustare i valori estremi per trimmare lo zero centrale
  if ( val != val1 && val >= 0 ) {
    r = 0;                                   // r viene resettato a 0 se il potenziometro viene ruotato troppo velocemente
    f = val;
      if ( f == 0 ) {
        lego.SingleOutput(0, PWM_FLT, RED, CH1);
        }
      if ( f == 1 ) {
        lego.SingleOutput(0, PWM_FWD1, RED, CH1);
        }
      if ( f == 2 ) {
        lego.SingleOutput(0, PWM_FWD2, RED, CH1);
        }
      if ( f == 3 ) {
        lego.SingleOutput(0, PWM_FWD3, RED, CH1);
        }
      if ( f == 4 ) {
        lego.SingleOutput(0, PWM_FWD4, RED, CH1);
        }
      if ( f == 5 ) {
        lego.SingleOutput(0, PWM_FWD5, RED, CH1);
        }
      if ( f == 6 ) {
        lego.SingleOutput(0, PWM_FWD6, RED, CH1);
        }
      if ( f == 7 ) {
        lego.SingleOutput(0, PWM_FWD7, RED, CH1);
}
    delay(100);
  }
  if ( val != val1 && val <= 0 ) {
    f = 0;                            // f viene resettato a 0 se il potenziometro viene ruotato troppo velocemente
    r = val*-1;                       // il valore negativo di r viene riportato a positivo
      if ( r == 0 ) {
        lego.SingleOutput(0, PWM_FLT, RED, CH1);
        }
      if ( r == 1 ) {
        lego.SingleOutput(0, PWM_REV1, RED, CH1);
        }
      if ( r == 2 ) {
        lego.SingleOutput(0, PWM_REV2, RED, CH1);
        }
      if ( r == 3 ) {
        lego.SingleOutput(0, PWM_REV3, RED, CH1);
        }
      if ( r == 4 ) {
        lego.SingleOutput(0, PWM_REV4, RED, CH1);
        }
      if ( r == 5 ) {
        lego.SingleOutput(0, PWM_REV5, RED, CH1);
        }
      if ( r == 6 ) {
        lego.SingleOutput(0, PWM_REV6, RED, CH1);
        }
      if ( r == 7 ) {
        lego.SingleOutput(0, PWM_REV7, RED, CH1);
  }
    delay(100);
  }
  // Serial.print(f);
  // Serial.print(",");
  // Serial.println(r);
  // Serial.println(analogRead(A1));
  delay(200);
}
