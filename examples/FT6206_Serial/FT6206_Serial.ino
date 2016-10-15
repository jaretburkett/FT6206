#include <FT6206.h>

FT6206 ctp = FT6206();

void setup() {
  Serial.begin(115200);
  while (!Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Wait for a touch
  if (ctp.touched()) {
    // Retrieve a point  
    TS_Point p = ctp.getPoint();
  
    // Print out raw data from screen touch controller
    Serial.print("X = "); Serial.print(p.x);
    Serial.print("   Y = "); Serial.println(p.y);
  }
}
