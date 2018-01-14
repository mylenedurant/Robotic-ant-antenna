/* Sweep
 by Mylou 
 This example code is in the public domain.

 modified 11 octobre 2016

*/

#include <Servo.h>

Servo myservol;  // create servo object to control a servo
Servo myservor;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the left servo position


void setup() {
  myservol.attach(5);  // Attribut la broche 5 à la commande du servo
  myservor.attach(6);  // Attribut la broche 6 à la commande du servo
  myservol.write(pos), myservor.write(pos); // dit aux servos d'aller à la position initiale
  delay(5000);  // attend que les servos soient en place
  }

void loop() {
  for (pos = 75; pos <= 105; pos += 2){ // va de pos 0 à 180  amplitude
    // par pas de 4 degrés ou 8 pour aller plus vite
    myservol.write(pos), myservor.write(pos); // dit aux servos d'aller à la 'pos'
    
    
    delay(17);   // attendre minimum 15 à 17 ms pour que les servos puissent atteidre la position
  }
  
  for (pos = 105; pos >= 75; pos -= 2) { // va de pos 180 à 0
    // par pas de 4 degrés à 8 pour aller plus vite
    myservol.write(pos), myservor.write(pos);
    
    delay(17);// dit au servo d'aller à la 'pos'
                          // attendre minimum 15 à 17 ms pour que le servo puisse atteidre la position
                          
  }
 
}


