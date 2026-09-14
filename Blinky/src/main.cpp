#include <Arduino.h> // Inclusion de la bibliothèque de base

const int buttonPin = 2; // Broche du bouton
const int ledPin = 13;   // Broche de la LED

void setup() {
  pinMode(buttonPin, INPUT);  // Configuration de la Pin 2 en entrée (bouton)
  pinMode(ledPin, OUTPUT);    // Configuration de la Pin 13 en sortie (LED)
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Lecture du bouton (0 ou 1)

  if (buttonState == HIGH) { // Si le bouton est appuyé (1 / 5V)
    digitalWrite(ledPin, HIGH); // On allume la LED
  } else {                      // Sinon (bouton relâché / 0V)
    digitalWrite(ledPin, LOW);  // On éteint la LED
  }
}