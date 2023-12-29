#include <Servo.h>
#include "Servo.h"
//#include <Wire.h>  // inclure la bibliothèque permettant la communication par le protocole I2C
//#include "rgb_lcd.h" // inclure la bibliothèque pour l'écran LCD

// Informations LEDS
int ledPinrouge1 = 5;
int ledPinrouge2 = 3;
int ledPinorange = 9;
int ledPinvert1 = 11;
int ledPinvert2 = 10;
int ledfeuvert = 8;
int ledfeurouge = 7;
int ledbleu = 6;

Servo servo; // création de l'objet "servo"
//rgb_lcd lcd; // création d'un objet lcd

// Informations sur Potentiometre
int Pot = A0;
int readval;
int writevalue;
int fleche;


void setup() {
  // put your setup code here, to run once:

  //déf de la fréquence du SM
  Serial.begin(9600); 

  //lcd.begin(16, 2);// configurer le nombre de colonnes et de lignes de l'écran LCD :

  //def S/ des led
  pinMode(ledPinrouge1, OUTPUT);
  pinMode(ledPinrouge2, OUTPUT);
  pinMode(ledPinorange, OUTPUT);
  pinMode(ledPinvert1, OUTPUT);
  pinMode(ledPinvert2, OUTPUT);
  pinMode(ledfeuvert, OUTPUT);
  pinMode(ledfeurouge, OUTPUT);
  pinMode(ledbleu, OUTPUT);
  
  digitalWrite(ledbleu, HIGH);
  servo.attach(13); // attache le servo au pin spécifié
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  
  //lecture de la valeur R du Potentiomètre 0 to 1023 valeurs
readval = analogRead(A0);
  Serial.println(readval);
  
  readval = 1023 - analogRead(A0);
  Serial.println(readval);
  
  //Conversion de la valeur du potentiomètre en mm avec la fonction de regréssion
  fleche = readval*0.1419+0.0618;
  Serial.print("Flèche = ");
  Serial.print(fleche);
  Serial.println("mm");
  delay(200);
 //De 0 à 25, ledPinvert1
  if (readval < 14){
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, LOW);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    digitalWrite(ledfeuvert, HIGH);
    digitalWrite(ledfeurouge, LOW);
    servo.write(0); // demande au servo de se déplacer à cette position
    Serial.println( "                            ___....___                            ");
  Serial.println( " ^^                __..-:'':__:..:__:'':-..__                       ");
  Serial.println( "               _.-:__:.-:'':  :  :  :'':-.:__:-._                   ");
  Serial.println( "             .':.-:  :  :  :  :  :  :  :  :  :._:'.                 ");
  Serial.println( "          _ :.':  :  :  :  :  :  :  :  :  :  :  :'.: _              ");
  Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
  Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
  Serial.println( ":::::::::[ ]:__:__:__:__:__:__:__:__:__:__:__:__:__:[ ]:::::::::::  ");
  Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
  Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
  Serial.println( "         [ ]                                        [ ]             ");
  Serial.println( "         [ ]                                        [ ]             ");
  Serial.println( "   jgs   [ ]                                        [ ]             ");
  Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");

  }

   //De 25 à 50, ledPinvert1, ledPinvert2
  else if (readval >= 14 && readval < 28){
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, HIGH);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    digitalWrite(ledfeuvert, HIGH);
    digitalWrite(ledfeurouge, LOW);
    servo.write(0); // demande au servo de se déplacer à cette position
    Serial.println( "                          ___....___                            ");
    Serial.println( " ^^                __..-:'':__:..:__:'':-..__                       ");
    Serial.println( "               _.-:__:.-:'':  :  :  :'':-.:__:-._                   ");
    Serial.println( "             .':.-:  :  :  :  :  :  :  :  :  :._:'.                 ");
    Serial.println( "          _ :.':  :  :  :  :  :  :  :  :  :  :  :'.: _              ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( ":::::::::[ ]:__:__:__:__:__:__:__:__:__:__:__:__:__:[ ]:::::::::::  ");
    Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
    Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "   jgs   [ ]                                        [ ]             ");
    Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");
  }

     //De 50 à 75, ledPinvert1, ledPinvert2, ledPinorange
  else if (readval >= 28 && readval < 42){
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, HIGH);
    digitalWrite(ledPinorange, HIGH);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    digitalWrite(ledfeuvert, HIGH);
    digitalWrite(ledfeurouge, LOW);
    servo.write(0); // demande au servo de se déplacer à cette position
    Serial.println( "                            ___....___                            ");
    Serial.println( " ^^                __..-:'':__:..:__:'':-..__                       ");
    Serial.println( "               _.-:__:.-:'':  :  :  :'':-.:__:-._                   ");
    Serial.println( "             .':.-:  :  :  :  :  :  :  :  :  :._:'.                 ");
    Serial.println( "          _ :.':  :  :  :  :  :  :  :  :  :  :  :'.: _              ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( ":::::::::[ ]:__:__:__:__:__:__:__:__:__:__:__:__:__:[ ]:::::::::::  ");
    Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
    Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "   jgs   [ ]                                        [ ]             ");
    Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");
  }

     //De 75 à 100, ledPinvert1, ledPinvert2, ledPinorange, ledPinrouge1
  else if (readval >= 42 && readval < 56){
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, HIGH);
    digitalWrite(ledPinorange, HIGH);
    digitalWrite(ledPinrouge1, HIGH);
    digitalWrite(ledPinrouge2, LOW);
    digitalWrite(ledfeuvert, LOW);
    digitalWrite(ledfeurouge, HIGH);
    servo.write(90); // demande au servo de se déplacer à cette position
    Serial.println( "                            ___....___                            ");
    Serial.println( " ^^                __..-:'':__:..:__:'':-..__                       ");
    Serial.println( "               _.-:__:.-:'':  :  :  :'':-.:__:-._                   ");
    Serial.println( "             .':.-:  :  :  :  :  :  :  :  :  :._:'.                 ");
    Serial.println( "          _ :.':  :  :  :  :  :  :  :  :  :  :  :'.: _              ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( ":::::::::[ ]:__:__:__:__:__:__:__:__:__:__:__:__:__:[ ]:::::::::::  ");
    Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
    Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "   jgs   [ ]                                        [ ]             ");
    Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");
  }

       //De 100 à 125, ledPinvert1, ledPinvert2, ledPinorange, ledPinrouge1, ledPinrouge2
  else if (readval >= 56 && readval < 60){
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, HIGH);
    digitalWrite(ledPinorange, HIGH);
    digitalWrite(ledPinrouge1, HIGH);
    digitalWrite(ledPinrouge2, HIGH);
    servo.write(90); // demande au servo de se déplacer à cette position
    digitalWrite(ledfeuvert, LOW);
    digitalWrite(ledfeurouge, HIGH);
    Serial.println( "                            ___....___                            ");
    Serial.println( " ^^                __..-:'':__:..:__:'':-..__                       ");
    Serial.println( "               _.-:__:.-:'':  :  :  :'':-.:__:-._                   ");
    Serial.println( "             .':.-:  :  :  :  :  :  :  :  :  :._:'.                 ");
    Serial.println( "          _ :.':  :  :  :  :  :  :  :  :  :  :  :'.: _              ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( "         [ ]:  :  :  :  :  :  :  :  :  :  :  :  :  :[ ]             ");
    Serial.println( ":::::::::[ ]:__:__:__:__:__:__:__:__:__:__:__:__:__:[ ]:::::::::::  ");
    Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
    Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "         [ ]                                        [ ]             ");
    Serial.println( "   jgs   [ ]                                        [ ]             ");
    Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");
  }

      //> 125, ledPinvert1, ledPinvert2, ledPinorange, ledPinrouge1, ledPinrouge2 en chaine
  else if (readval >60){
    Serial.println( "                          __      __                            ");
    Serial.println( " ^^                __..-:'':       _:'':-..__                       ");
    Serial.println( "               _.-:__:.-:'          :'':-.:__:-._                   ");
    Serial.println( "             .':.-:  :  :           :  :  :  :._:'.                 ");
    Serial.println( "          _ :.':  :  :  :           :  :  :  :  :'.: _              ");
    Serial.println( "         [ ]:  :  :  :  :           :  :  :  :  :  :[ ]             ");
    Serial.println( "         [ ]:  :  :  :  :           :  :  :  :  :  :[ ]             ");
    Serial.println( ":::::::::[ ]:__:__:__:__:           :__:__:__:__:__:[ ]:::::::::::  ");
    Serial.println( "!!!!!!!!![ ]!!!!!!!!!!!!!!         !!!!!!!!!!!!!!!!![ ]!!!!!!!!!!!  ");
    Serial.println( "^^^^^^^^^[ ]^^^^^^^^^^^^^^^       ^^^^^^^^^^^^^^^^^^[ ]^^^^^^^^^^^  ");
    Serial.println( "         [ ]                ##  ##                  [ ]             ");
    Serial.println( "         [ ]                 ####                   [ ]             ");
    Serial.println( "   jgs   [ ]                  ##                    [ ]             ");
    Serial.println( " ~~^_~^~/   \~^-~^~ _~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/   \~^ ~~_ ^    ");
    servo.write(90); // demande au servo de se déplacer à cette position!
    digitalWrite(ledfeuvert, LOW);
    digitalWrite(ledfeurouge, HIGH);
    Serial.println("FLECHE CRITIQUE");
    digitalWrite(ledPinvert1, HIGH);
    digitalWrite(ledPinvert2, LOW);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    delay(100);
    digitalWrite(ledPinvert1, LOW);
    digitalWrite(ledPinvert2, HIGH);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    delay(100);
    digitalWrite(ledPinvert1, LOW);
    digitalWrite(ledPinvert2, LOW);
    digitalWrite(ledPinorange, HIGH);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, LOW);
    delay(100);
    digitalWrite(ledPinvert1, LOW);
    digitalWrite(ledPinvert2, LOW);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, HIGH);
    digitalWrite(ledPinrouge2, LOW);
    delay(100);
    digitalWrite(ledPinvert1, LOW);
    digitalWrite(ledPinvert2, LOW);
    digitalWrite(ledPinorange, LOW);
    digitalWrite(ledPinrouge1, LOW);
    digitalWrite(ledPinrouge2, HIGH);
    delay(100);
    
    
   
  }


}
