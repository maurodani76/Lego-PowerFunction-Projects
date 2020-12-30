# Lego-PF-Projects

Test codes to use arduino as a controller of the Lego PowerFunction system; as a basis I used the code written by https://github.com/schultzy51/LEGOPowerFunctions which uses an IR led driven by arduino. The base code is still included in my repository.

I wrote the following codes:

Code to manage the 7 PWM levels with 3 buttons: increase or decrease, and stop button. (Upgrading and almost final - lego_PF_pulsanti_test_V2.2)

Code to manage the 7 PWM levels with potentiometer: the analogue input from 0 to 1023 is remapped from -7 to 7; this code is long and a bit cumbersome but it works ... I used it for the self-made remote that rotates the 42009 mkII's crane turret. In the future I will try to improve it with the new leaner code used for the button system.

Drop resistance for the IR led: 68ohm
Resistance for the base of the transistor (MPSA06 or BC547 ...) that drives the IR led: 1Khom

---------------------

Codici di test per utilizzare arduino come controller del sistema Lego PowerFunction; come base ho utilizzato il codice scritto da https://github.com/schultzy51/LEGOPowerFunctions che utilizza un led IR pilotato da arduino.
Il codice base è comunque incluso nel mio repository.

Ho scritto i seguenti codici:

- Codice per gestire i 7 livelli PWM con 3 pulsanti: aumenta o diminuisce, e pulsante stop. (In aggiornamento e quasi definitivo - lego_PF_pulsanti_test_V2.2)

- Codice per gestire i 7 livelli PWM con potenziometro: l'entrata analogica da 0 a 1023 viene rimappata da -7 a 7; questo codice è lungo e un po' farraginoso ma funziona... l'ho utilizzato per il telecomando autocostruito che ruota la torretta della gru 42009 MKII. In futuro vedrò di migliorarlo col nuovo codice più snello utilizzato per il sistema a pulsanti.

Resistenza di caduta per il led IR: 68ohm
Resistenza per la base del transistor (MPSA06 o BC547...) che pilota il led IR: 1Khom

Progetto di test su Tinkercad:

![Lego PF PWM controller con pulsanti](https://user-images.githubusercontent.com/44203381/103346735-3124a600-4a95-11eb-8157-c10a91c48622.png)
