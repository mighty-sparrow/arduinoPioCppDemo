#include <Arduino.h>
#include <./utils/ExampleClass.h>

ExampleClass myExample;

void setup() {
  // put your setup code here, to run once:
  myExample.someFunction(69);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  String tmpStr = myExample.printInternalVar();

  // Publish our number across the line.
  Serial.println(tmpStr);

  delay(500);
}