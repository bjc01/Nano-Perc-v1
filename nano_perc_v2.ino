//Specify digital pin on the arduino that the positive lead of the piezo speaker is attached
//based on tutorial example - http://arduino.cc/en/Tutorial/AnalogInput11
//designed for NANO
//ONE MAIN OUTPUT AND 4 EXTRA VARIATIONS ADDED WITH (NON LATCHING?) SWITCHES

//#include <Tone.h>

int piezoPin1 = 8; 
int piezoPin2 = 9;
int piezoPin3 = 10;
int piezoPin4 = 11;
int piezoPin5 = 12;

int sensorPin = A0;       //delay length - applies a pause after pattern - doesn't increae all delays :-(
int sensorValue = 100;

//int sensorPin1 = A1;    not connected nor functional
//int sensorValue1 = 30;

void setup() {
  // close setup
  pinMode(piezoPin1, OUTPUT);
  
}

void loop() {

sensorValue = analogRead(sensorPin); //read sensor/pot value
delay(sensorValue);

  
//pin, freq, duration(optional)
//tone(piezoPin, frequency, duration);

tone(piezoPin1, 22222, 250);
delay(250);
tone(piezoPin2, 9999, 250);
delay(250);
tone(piezoPin1, 21212, 250);
delay(250);
tone(piezoPin3, 77777, 250);
delay(250);
tone(piezoPin1, 31313, 250);
delay(250);
tone(piezoPin4, 44444, 250);
delay(250);
tone(piezoPin1, 14141, 250);
delay(250);
tone(piezoPin4, 30, 125);
delay(125);
tone(piezoPin5, 10000, 125);
delay(125);

}
