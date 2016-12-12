// StrangeLights by Sean Jacobs

#include <Adafruit_NeoPixel.h>
#define PIXEL_PIN    6    // Digital IO pin connected to the NeoPixels.
#define PIXEL_COUNT 26
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Set all pixels to 'off'
}

void loop() {
  // NOTE THAT F MUST BE ENTERED AS "Fx()" BECAUSE F() IS A BUILT-IN FUNCTION
  //A(); B(); C(); D(); E(); Fx(); G(); H(); I(); J(); K(); L(); M(); N(); O(); P(); Q(); R(); S(); T(); U(); V(); W(); X(); Y(); Z();
  //delay(1000);

  allON();
  delay(5000);
  flickerWIPE();
  delay(3000);
    
  H(); A(); P(); P(); Y(); H(); A(); L(); L(); O(); W(); E(); E(); N();
  delay(3000);

  chaseUP();
  delay(3000);

  H(); A(); R(); A(); M(); B(); E(); L(); I(); V(); E(); S();
  delay(3000);

  chaseDOWN();
  delay(3000);
  
  D(); I(); C(); K(); B(); U(); T(); T();
  delay(3000);

  chaseUP();
  delay(3000);

  N(); E(); V(); E(); R(); G(); O(); N(); N(); A(); G(); I(); V(); E(); Y(); O(); U(); U(); P(); 
  delay(3000);

  chaseDOWN();
  delay(3000);

  S(); W(); E(); E(); T(); C(); A(); R(); O(); L(); I(); N(); E();
  allON();
  delay(600);
  allOFF();
  delay(50);
  allON();
  delay(600);
  allOFF();
  delay(50);
  allON();
  delay(1300);
  allOFF();
  delay(3000);

  chaseUP();
  delay(3000);

  R(); U(); N();
  flashALL();
  delay(5000);

}

void startShow() {
  
}

// Mostly for testing
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

// Also for testing
// wipe to black
void wipeBlack() {
    colorWipe(strip.Color(0, 0, 0), 50);
    strip.show();
}

// A
void A() {
    delay(500);
    strip.setPixelColor(25, 255, 0, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(25, 0, 0, 0);
    strip.show();
}

// B
void B() {
    delay(500);
    strip.setPixelColor(24, 255, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(24, 0, 0, 0);
    strip.show();
}

// C
void C() {
    delay(500);  
    strip.setPixelColor(23, 0, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(23, 0, 0, 0);
    strip.show();
}

// D
void D() {
    delay(500);  
    strip.setPixelColor(22, 0, 255, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(22, 0, 0, 0);
    strip.show();
}

// E
void E() {
    delay(500);  
    strip.setPixelColor(21, 0, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(21, 0, 0, 0);
    strip.show();
}

// F
void Fx() {
    delay(500);    
    strip.setPixelColor(20, 255, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(20, 0, 0, 0);
    strip.show();
}

// G
void G() {
    delay(500);  
    strip.setPixelColor(19, 255 , 0, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(19, 0, 0, 0);
    strip.show();
}

// H
void H() {
    delay(500);
    strip.setPixelColor(18, 255, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(18, 0, 0, 0);
    strip.show();
}

// I
void I() {
    delay(500);  
    strip.setPixelColor(9, 0, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(9, 0, 0, 0);
    strip.show();
}

// J
void J() {
    delay(500);
    strip.setPixelColor(10, 0, 255, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(10, 0, 0, 0);
    strip.show();
}

// K
void K() {
    delay(500);
    strip.setPixelColor(11, 0, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(11, 0, 0, 0);
    strip.show();
}

// L
void L() {
    delay(500);
    strip.setPixelColor(12, 255, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(12, 0, 0, 0);
    strip.show();
}

// M
void M() {
    delay(500);
    strip.setPixelColor(13, 255 , 0, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(13, 0, 0, 0);
    strip.show();
}

// N
void N() {
    delay(500);
    strip.setPixelColor(14, 255, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(14, 0, 0, 0);
    strip.show();
}

// O
void O() {
    delay(500);
    strip.setPixelColor(15, 0, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(15, 0, 0, 0);
    strip.show();
}

// P
void P() {
    delay(500);
    strip.setPixelColor(16, 0, 255, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(16, 0, 0, 0);
    strip.show();
}

// Q
void Q() {
    delay(500);
    strip.setPixelColor(17, 0, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(17, 0, 0, 0);
    strip.show();
}

// R
void R() {
    delay(500);
    strip.setPixelColor(8, 255, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(8, 0, 0, 0);
    strip.show();
}

// S
void S() {
    delay(500);
    strip.setPixelColor(7, 255 , 0, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(7, 0, 0, 0);
    strip.show();
}

// T
void T() {
    delay(500);
    strip.setPixelColor(6, 255, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(6, 0, 0, 0);
    strip.show();
}

// U
void U() {
    delay(500);
    strip.setPixelColor(5, 0, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(5, 0, 0, 0);
    strip.show();
}

// V
void V() {
    delay(500);
    strip.setPixelColor(4, 0, 255, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(4, 0, 0, 0);
    strip.show();
}

// W
void W() {
    delay(500);
    strip.setPixelColor(3, 0, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(3, 0, 0, 0);
    strip.show();
}

// X
void X() {
    delay(500);
    strip.setPixelColor(2, 255, 0, 255);
    strip.show();
    delay(1000);
    strip.setPixelColor(2, 0, 0, 0);
    strip.show();
}

// Y
void Y() {
    delay(500);
    strip.setPixelColor(1, 255 , 0, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(1, 0, 0, 0);
    strip.show();
}

// Z
void Z() {
    delay(500);
    strip.setPixelColor(0, 255, 255, 0);
    strip.show();
    delay(1000);
    strip.setPixelColor(0, 0, 0, 0);
    strip.show();
}

// ALL ON
void allON() {
    strip.setPixelColor(25, 255, 0, 0);
    strip.setPixelColor(24, 255, 255, 0);
    strip.setPixelColor(23, 0, 255, 0);
    strip.setPixelColor(22, 0, 255, 255);
    strip.setPixelColor(21, 0, 0, 255);
    strip.setPixelColor(20, 255, 0, 255);
    strip.setPixelColor(19, 255 , 0, 0);
    strip.setPixelColor(18, 255, 255, 0);
    strip.setPixelColor(9, 0, 255, 0);
    strip.setPixelColor(10, 0, 255, 255);
    strip.setPixelColor(11, 0, 0, 255);
    strip.setPixelColor(12, 255, 0, 255);
    strip.setPixelColor(13, 255 , 0, 0);
    strip.setPixelColor(14, 255, 255, 0);
    strip.setPixelColor(15, 0, 255, 0);
    strip.setPixelColor(16, 0, 255, 255);
    strip.setPixelColor(17, 0, 0, 255);
    strip.setPixelColor(8, 255, 0, 255);
    strip.setPixelColor(7, 255 , 0, 0);
    strip.setPixelColor(6, 255, 255, 0);
    strip.setPixelColor(5, 0, 255, 0);
    strip.setPixelColor(4, 0, 255, 255);
    strip.setPixelColor(3, 0, 0, 255);
    strip.setPixelColor(2, 255, 0, 255);
    strip.setPixelColor(1, 255 , 0, 0);
    strip.setPixelColor(0, 255, 255, 0);
    strip.show();
}

// ALL OFF
void allOFF() {
    strip.setPixelColor(25, 0, 0, 0);
    strip.setPixelColor(24, 0, 0, 0);
    strip.setPixelColor(23, 0, 0, 0);
    strip.setPixelColor(22, 0, 0, 0);
    strip.setPixelColor(21, 0, 0, 0);
    strip.setPixelColor(20, 0, 0, 0);
    strip.setPixelColor(19, 0, 0, 0);
    strip.setPixelColor(18, 0, 0, 0);
    strip.setPixelColor(9, 0, 0, 0);
    strip.setPixelColor(10, 0, 0, 0);
    strip.setPixelColor(11, 0, 0, 0);
    strip.setPixelColor(12, 0, 0, 0);
    strip.setPixelColor(13, 0, 0, 0);
    strip.setPixelColor(14, 0, 0, 0);
    strip.setPixelColor(15, 0, 0, 0);
    strip.setPixelColor(16, 0, 0, 0);
    strip.setPixelColor(17, 0, 0, 0);
    strip.setPixelColor(8, 0, 0, 0);
    strip.setPixelColor(7, 0, 0, 0);
    strip.setPixelColor(6, 0, 0, 0);
    strip.setPixelColor(5, 0, 0, 0);
    strip.setPixelColor(4, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(0, 0, 0, 0);
    strip.show();
}

// FLASH ALL
void flashALL() {
    allON();
    delay(100);
    allOFF();
    delay(50);
    allON();
    delay(100);
    allOFF();
    delay(50);    
    allON();
    delay(2000);
    allOFF();
    delay(100);

    allON();
    delay(100);
    allOFF();
    delay(50);
    allON();
    delay(25);
    allOFF();
    delay(25);
    allON();
    delay(1500);
    allOFF();
    delay(50);
    allON();
    delay(25);
    allOFF();
}

// CHASE A-Z
void chaseUP() {
    strip.setPixelColor(25, 255, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(24, 255, 255, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(23, 0, 255, 0);
    strip.setPixelColor(25, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(22, 0, 255, 255);
    strip.setPixelColor(24, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(21, 0, 0, 255);
    strip.setPixelColor(23, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(20, 255, 0, 255);
    strip.setPixelColor(22, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(19, 255 , 0, 0);
    strip.setPixelColor(21, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(18, 255, 255, 0);
    strip.setPixelColor(20, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(17, 0, 0, 255);
    strip.setPixelColor(19, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(16, 0, 255, 255);
    strip.setPixelColor(18, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(15, 0, 255, 0);
    strip.setPixelColor(17, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(14, 255, 255, 0);
    strip.setPixelColor(16, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(13, 255 , 0, 0);
    strip.setPixelColor(15, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(12, 255, 0, 255);
    strip.setPixelColor(14, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(11, 0, 0, 255);
    strip.setPixelColor(13, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(10, 0, 255, 255);
    strip.setPixelColor(12, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(9, 0, 255, 0);
    strip.setPixelColor(11, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(8, 255, 0, 255);
    strip.setPixelColor(10, 0, 0, 0);
    strip.show();    
    delay(85);
    strip.setPixelColor(7, 255 , 0, 0);
    strip.setPixelColor(9, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(6, 255, 255, 0);
    strip.setPixelColor(8, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(5, 0, 255, 0);
    strip.setPixelColor(7, 0, 0, 0);
    strip.show();
    delay(85);    
    strip.setPixelColor(4, 0, 255, 255);
    strip.setPixelColor(6, 0, 0, 0);
    strip.show();
    delay(85);    
    strip.setPixelColor(3, 0, 0, 255);
    strip.setPixelColor(5, 0, 0, 0);
    strip.show();
    delay(85);    
    strip.setPixelColor(2, 255, 0, 255);
    strip.setPixelColor(4, 0, 0, 0);
    strip.show();
    delay(85);    
    strip.setPixelColor(1, 255 , 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.show();
    delay(85);    
    strip.setPixelColor(0, 255, 255, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.show();
    delay(85);
    strip.setPixelColor(1, 0, 0, 0);
    strip.show();
    delay(2000);
    strip.setPixelColor(0, 0, 0, 0);
    strip.show();
}

// CHASE Z-A
void chaseDOWN() {
  strip.setPixelColor(0, 255, 255, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(1, 255 , 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(2, 255, 0, 255);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(3, 0, 0, 255);
  strip.setPixelColor(1, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(4, 0, 255, 255);
  strip.setPixelColor(2, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(6, 255, 255, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(7, 255 , 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(8, 255, 0, 255);
  strip.setPixelColor(6, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(9, 0, 255, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(10, 0, 255, 255);
  strip.setPixelColor(8, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(11, 0, 0, 255);
  strip.setPixelColor(9, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(12, 255, 0, 255);
  strip.setPixelColor(10, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(13, 255 , 0, 0);
  strip.setPixelColor(11, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(14, 255, 255, 0);
  strip.setPixelColor(12, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(15, 0, 255, 0);
  strip.setPixelColor(13, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(16, 0, 255, 255);
  strip.setPixelColor(14, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(17, 0, 0, 255);
  strip.setPixelColor(15, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(18, 255, 255, 0);
  strip.setPixelColor(16, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(19, 255 , 0, 0);
  strip.setPixelColor(17, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(20, 255, 0, 255);
  strip.setPixelColor(18, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(21, 0, 0, 255);
  strip.setPixelColor(19, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(22, 0, 255, 255);
  strip.setPixelColor(20, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(23, 0, 255, 0);
  strip.setPixelColor(21, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(24, 255, 255, 0);
  strip.setPixelColor(22, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(25, 255, 0, 0);
  strip.setPixelColor(23, 0, 0, 0);
  strip.show();
  delay(85);
  strip.setPixelColor(24, 0, 0, 0);
  strip.show();
  delay(2000);
  strip.setPixelColor(25, 0, 0, 0);
  strip.show();
}

void flickerWIPE() {
  strip.setPixelColor(23, 0, 0, 0);
  strip.show();
  delay(75);
  strip.setPixelColor(23, 0, 255, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(7, 0 , 0, 0);
  strip.show();
  delay(75);
  strip.setPixelColor(7, 255 , 0, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(23, 0, 0, 0);
  strip.setPixelColor(7, 0 , 0, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(14, 0, 0, 0);
  strip.show();
  delay(75);
  strip.setPixelColor(14, 255, 255, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(22, 0, 0, 0);
  strip.show();
  delay(75);
  strip.setPixelColor(5, 0, 0, 0);
  strip.show();
  delay(70);
  strip.setPixelColor(1, 0, 0, 0);
  strip.show();
  delay(65);
  strip.setPixelColor(8, 0, 0, 0);
  strip.show();
  delay(60);
  strip.setPixelColor(10, 0, 0, 0);
  strip.show();
  delay(55);
  strip.setPixelColor(20, 0, 0, 0);
  strip.show();
  delay(50);
  strip.setPixelColor(25, 0, 0, 0);
  strip.show();
  delay(45);
  strip.setPixelColor(17, 0, 0, 0);
  strip.show();
  delay(40);
  strip.setPixelColor(18, 0, 0, 0);
  strip.show();
  delay(35);
  strip.setPixelColor(11, 0, 0, 0);
  strip.show();
  delay(30);
  strip.setPixelColor(3, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(9, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(19, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(12, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(6, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(16, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(21, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(15, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(13, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(4, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(2, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(24, 0, 0, 0);
  strip.show();
  delay(25);
  strip.setPixelColor(14, 0, 0, 0);
  strip.show();
  allOFF();
}

