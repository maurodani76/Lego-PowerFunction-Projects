# Lego-PF-Projects

Codici di test per utilizzare arduino come controller del sistema Lego PowerFunction; come base ho utilizzato il codice scritto da https://github.com/schultzy51/LEGOPowerFunctions che utilizza un led IR pilotato da arduino.
Il codice base è comunque incluso nel mio repository.

Ho scritto i seguenti codici:

- Codice per gestire i 7 livelli PWM con 3 pulsanti: aumenta o diminuisce, e pulsante stop. (In aggiornamento e quasi definitivo)

- Codice per gestire i 7 livelli PWM con potenziometro: l'entrata analogica da 0 a 1023 viene rimappata da -7 a 7; questo codice è lungo e un po' farraginoso ma funziona... l'ho utilizzato per il telecomando autocostruito che ruota la torretta della gru. In futuro vedrò di migliorarlo col nuovo codice più snello utilizzato per il sistema a pulsanti.

Resistenza di caduta per il led IR: 68ohm
Resistenza per la base del transistor (MPSA06 o BC547...) che pilota il led IR: 1Khom

Progetto di test su Tinkercad:

![Lego PF PWM controller con pulsanti](https://user-images.githubusercontent.com/44203381/103346735-3124a600-4a95-11eb-8157-c10a91c48622.png)
