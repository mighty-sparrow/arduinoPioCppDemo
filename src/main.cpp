#include <Arduino.h>
#include <./utils/Globals.h>
#include <./demos/customClassesDemo/ExampleClass.h>
#include <./demos/customClassesDemo/AnotherClass.h>
#include <./demos/serialInputDemo/SerialInput.h>

// Declaration of our `ExampleClass` instance.
ExampleClass myExample;
// Declaration of our `AnotherClass` instance.
AnotherClass anotherClass;
// Declaration of our `SerialInput` instance.
SerialInput sInput;

/**
 * @brief Declaration of our global variable. This is the
 * concrete instance of the variable. Everywhere else, it's
 * simple "referenced" and assumed to exist as an external/`extern`
 * variable (like in our `Globals.h` file).
 * 
 */
int firstGlobal;

/**
 * @brief The next two lines of code simply declare
 * methods that will be defined after our `setup`
 * and `loop` functions.
 * 
 * This is required in order to put our `printGlobals()`
 * and `printInternals()` functions at the bottom of
 * the file.
 * 
 */
void printGlobals();
void printInternals();

void setup() {
  #pragma region OOP Demo

  /**
   * @brief Uncomment the lines within this `region`
   * to run the Custom Classes demo code.
   * 
   * Be sure to comment the lines not necessary for this
   * demo to run.
   */
  // /**
  //  * @brief Wait a couple seconds, just to give you a chance
  //  * to open the Serial monitor.
  //  */
  // delay(2000);

  // /**
  //  * @brief Setting a value for the global variable `firstGlobal`
  //  * defined in this file, but referenced in `Globals.h`.
  //  */
  // firstGlobal = 696969;

  // /**
  //  * @brief Calling `someFunction` and set the value of the
  //  * `_pInternalVar` to `96`.
  //  */
  // myExample.setInternalVar("'First Value'");
  // /**
  //  * @brief Calling `anotherSetterMethod` and set the value of the
  //  * `_pInternalVar` to `42`.
  //  */
  // anotherClass.anotherSetterMethod("'Second value'");
  #pragma endregion

  // Begin communicating Serially with a baud rate of 9600
  Serial.begin(9600);

  #pragma region OOP Demo
  /**
   * @brief Uncomment the lines within this `region`
   * to run the Custom Classes demo code.
   * 
   * Be sure to comment the lines not necessary for this
   * demo to run.
   */
  // // Starting out by printing a new line with 'Global' to be followed by the initial 
  // Serial.println();
  // Serial.print("INITIAL ");
  // printGlobals();

  // // Change the value of a global variable.
  // myExample.setGlobalVariable(101);
  #pragma endregion

}

void loop() {
  #pragma region OOP Demo

  /**
   * @brief Uncomment the lines within this `region`
   * to run the Custom Classes demo code.
   * 
   * Be sure to comment the lines not necessary for this
   * demo to run.
   */
  // Serial.println("------------");

  // // Call the function to print internal variables.
  // printInternals();

  // // Call the function to print global variables.
  // printGlobals();

  // // Waiting for one second before looping around again.
  // delay(1000);

#pragma endregion

  #pragma region Serial Input Demo
  /**
   * @brief Uncomment the lines within this `region`
   * to run the Serial Input demo code.
   * 
   * Be sure to comment the lines not necessary for this
   * demo to run.
   */
  sInput.recvWithStartEndMarkers();
  sInput.showNewData();
  
  #pragma endregion
}

/**
 * @brief Helper function to simplify the printing of global
 * variables from instances of different classes.
 */
void printGlobals(){
  Serial.print("Global Variable Values: ");

  // Store the value of the global variable in `tmp0` and `tmp1`.
  int tmp0 = myExample.readGlobalVariable();
  int tmp1 = anotherClass.readAnotherGlobalVariable();

  // Write out the initial value of the global variable
  Serial.print(tmp0);
  Serial.print(" AND ");
  Serial.println(tmp1);
}

/**
 * @brief Helper function to simplify the printing of global
 * variables from instances of different classes.
 */
void printInternals(){
  Serial.print("Internal Variable Values: ");
  /**
   * @brief Use the "getter" method to return the internal value
   * of a variable unique to the instance of `ExampleClass`.
   */
  String tmpStr0 = myExample.getInternalVar();
  /**
   * @brief Use the "getter" method to return the internal value
   * of a variable unique to the instance of `AnotherClass`.
   */
  String tmpStr1 = anotherClass.getAnotherInternalVar();

  // Print text to the Serial port captured from the instance of `myExample`.
  Serial.print(tmpStr0);
  Serial.print(" AND ");
  Serial.println(tmpStr1);
}