#include <Arduino.h> 

const int LED_PIN = 13; // defini l'emplacement de la pin sur le uno3

void setup() { // void setup() => fonction qui s'exécute une seule fois au démarrage du programme
    pinMode(LED_PIN, OUTPUT); // configure la pin 13 comme une sortie (pc source de courant donc output)
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // allume la LED
    delay(1000); // pendant 1 seconde (1000 millisecondes)

    digitalWrite(LED_PIN, LOW); // éteint la LED
    delay(1000); // pendant 1 seconde (1000 millisecondes)
}