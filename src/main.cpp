#include <Arduino.h>
#include <./Globals.h>
#include <./utils/ExampleClass.h>
#include <./utils/AnotherClass.h>

ExampleClass myExample;
AnotherClass anotherClass;

int firstGlobal = 696969;

void setup() {
  // put your setup code here, to run once:
  myExample.someFunction(69);
  myExample.setGlobalVariable();
  anotherClass.someFunction(42);
  Serial.begin(9600);
}

void loop() {

  Serial.print("Global Variable Is: ");
  int tmp = anotherClass.readGlobalVariable();
  Serial.println(tmp);

  // put your main code here, to run repeatedly:
  String tmpStr = myExample.printInternalVar();

  // Publish our number across the line.
  Serial.println(tmpStr);

  tmpStr = anotherClass.printInternalVar();
  Serial.print("NEW: ");
  Serial.println(tmpStr);

  Serial.print("Global Variable Is NOW: ");
  tmp = anotherClass.readGlobalVariable();
  Serial.println(tmp);

  delay(500);
}