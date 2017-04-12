#define sclk 14
#define mosi 13
#define cs   15
#define dc   2
#define rst  16
bool dip;


#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library
#include <SPI.h>
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>

Adafruit_Fingerprint finger = Adafruit_Fingerprint(&Serial);


Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, rst);
//Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, mosi, sclk, rst);

void setup() {

  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  // If your TFT's plastic wrap has a Red Tab, use the following:
 // tft.initR(INITR_REDTAB);   // initialize a ST7735R chip, red tab
  // If your TFT's plastic wrap has a Green Tab, use the following:
  //tft.initR(INITR_GREENTAB); // initialize a ST7735R chip, green tab  
}

void loop() {

 // do your thing here
 
//   for(int i=0; i<10; i++)
//  {  
//    //tft.setTextColor(ST7735_BLACK);
//    tft.invertDisplay(true);
//    delay(500);
//    tft.invertDisplay(false);
//    delay(500);
//  }
//    Serial.println("Draw some triangles, with delay between open and filled triangles");
//  tft.drawTriangle(64,100, 64,150, 100,150, ST7735_YELLOW);
//  tft.drawTriangle(64,100, 44,150, 84,150,  ST7735_RED);
//  delay(1000);
//  tft.fillTriangle(64,100, 64,150, 100,150, ST7735_YELLOW);
//  tft.fillTriangle(64,100, 44,150, 84,150,  ST7735_RED);
//  delay(3000);
//  
  tft.fillScreen(ST7735_BLACK);
  int result;
  bool ya=true;
  finger.ToggleLed(ya);
  delay(2000);
  result=finger.Enroll_into_memory();
  dip=finger.Identify();
  if(dip){
     tft.fillScreen(ST7735_BLACK);

  // Hello
  Serial.println("Hello message");
  tft.setTextSize(3);
  tft.setCursor(0,10);
  tft.setTextColor(ST7735_WHITE);
  tft.println(" APECE");
  tft.println("");
  tft.setTextSize(1);
  //tft.setTextColor( tft.Color565( 0xFF, 0xCC, 0x00) );
  tft.print("     5th Semester");
//  tft.setTextColor(ST7735_WHITE);
//  tft.println("All.com");
//  tft.setTextSize(1);
//  tft.println("     Display Demo");
  delay(3000);

}
}
