

#include <TFT.h>  // Arduino LCD library
#include <SPI.h>

// pin definition for the Uno
#define cs   10
#define dc   9
#define rst  8



// create an instance of the library
TFT TFTscreen = TFT(cs, dc, rst);

// char array to print to the screen
char sensorPrintout[4];

int led = 13;                // the pin that the LED is atteched to
int sensor = 2;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;  

void setup() {

  pinMode(led, OUTPUT);      // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input
  Serial.begin(9600);

  // Put this line at the beginning of every sketch that uses the GLCD:
  TFTscreen.begin();

  // clear the screen with a black background
  TFTscreen.background(0, 0, 0);

  // write the static text to the screen
  // set the font color to white
  TFTscreen.stroke(255, 255, 255);
  // set the font size
  TFTscreen.setTextSize(2);
  // write the text to the top left corner of the screen
  TFTscreen.text("Motion Sensor :\n ", 0, 0);
  // ste the font size very large for the loop
  TFTscreen.setTextSize(5);
}

void loop() {

  val = analogRead(sensor);   // read sensor value
  TFTscreen.background(0, 0, 0);
  TFTscreen.text("Shaem :\n ", 3, 0);
  delay(800);
  if (val >=500) {           // check if the sensor is HIGH
    digitalWrite(led, HIGH);   // turn LED ON
    delay(1000);                // delay 100 milliseconds 
    TFTscreen.background(0, 0, 0);
    TFTscreen.setTextSize(2);
    TFTscreen.text("Motion det :\n ", 0, 0);
    delay(500);
    
    //delay(1000);
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      TFTscreen.background(0, 0, 0);
    TFTscreen.text("Motion det1 :\n ", 0, 0);
    TFTscreen.setTextSize(2);
     delay(1000);
      state = HIGH;       // update variable state to HIGH
    }
  } 
  else {
      digitalWrite(led, LOW); // turn LED OFF
      delay(200);             // delay 200 milliseconds 
      
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       // update variable state to LOW
    }
  }

  // Read the value of the sensor on A0
  String sensorVal = String(analogRead(A0));

  // convert the reading to a char array
  sensorVal.toCharArray(sensorPrintout, 4);

  // set the font color
  TFTscreen.stroke(255, 255, 255);
  // print the sensor value
  TFTscreen.text(sensorPrintout, 0, 20);
  // wait for a moment
  delay(250);
  // erase the text you just wrote
  TFTscreen.stroke(0, 0, 0);
  TFTscreen.text(sensorPrintout, 0, 20);
}

