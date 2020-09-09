//Specify digital pin on the arduino that the positive lead of the piezo speaker is attached
//based on tutorial example - http://arduino.cc/en/Tutorial/AnalogInput11
//designed for NANO
//ONE MAIN OUTPUT AND 4 EXTRA VARIATIONS ADDED WITH (NON LATCHING?) SWITCHES

int sensorPin = A0; //potentiometer
int piezoPin = 8;      // select the pin for the output
int sensorValue = 0;  // variable to store the value coming from the sensor

int sensorPin1 = A1; //potentiometer
int piezoPin2 = 9;      
int sensorValue2 = 0;



//int piezoPin = 8; //legacy idea code from uno klix
//int piezoPin2 = 9;
int piezoPin3 = 10;
int piezoPin4 = 11;
int piezoPin5 = 12;

void setup() {
  // close setup
  pinMode(piezoPin, OUTPUT);
}

void loop() {


  
//pin, freq, duration(optional)
tone(piezoPin, 21212, 200);
delay(100);
tone(piezoPin2, 21212, 200);
delay(100);
tone(piezoPin, 25252, 200);
delay(100);
tone(piezoPin3, 11111, 200);
delay(100);
tone(piezoPin, 30033, 200);
delay(100);
tone(piezoPin4, 10000, 200);
delay(100);
tone(piezoPin, 30, 200);
delay(100);
tone(piezoPin5, 25, 200);
delay(100);

}
