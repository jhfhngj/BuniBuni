#include <Servo.h>
#include "IRremote.hpp"

#define IR_RECEIVE_PIN 12
Servo fl;
Servo fr;
Servo bl;
Servo br;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  fl.attach(3); // Front left
  fr.attach(5); // Front right
  bl.attach(6); // Back left
  br.attach(9); // Back right
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // ir is cool ig
}

void hop() {
  fl.write(180);
  fr.write(180);
  bl.write(180);
  br.write(180);
  delay(500);
  fl.write(90);
  fr.write(90);
  bl.write(90);
  br.write(90);
}

void all(int amt) {
  fl.write(amt);
  fr.write(amt);
  bl.write(amt);
  br.write(amt);
}

void turn(String dir) {
  if (dir == "left") {
    fl.write(120);
    fr.write(180);
    bl.write(180);
    br.write(120);
  } else {
    fr.write(120);
    fl.write(180);
    br.write(180);
    bl.write(120);

  }
  delay(500); // Allow time for turn motion, jk thats for reset
  fl.write(90);
  fr.write(90);
  bl.write(90);
  br.write(90);
}

void stretch() {
  all(180);
  delay(500);
  all(160);
  delay(100);
  all(120);
  delay(100);
  all(110); 
  delay(100);
  all(105); 
  delay(100);
  all(104);
  delay(100);
  all(103);
  delay(100);
  all(100); 
  delay(100);
  all(95);
  delay(100);
  all(90); // all done
}

void loop() {
  if (IrReceiver.decode()) {
    unsigned long command = IrReceiver.decodedIRData.command;
    Serial.println(command, HEX); // Debug: see what value is received

    if (command == 0x2) {
      hop();
    } else if (command == 0xE0) {
      turn("left");
    } else if (command == 0x90) {
      turn("right");
    } else if (command == 0xA8) {
      stretch();
    }

    IrReceiver.resume(); // Ready for next signal
  }
}