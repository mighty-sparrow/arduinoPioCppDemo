#pragma once
#include <Arduino.h>
#include <./utils/Globals.h>

/**
 * @brief This class is simply used to demonstrate handling
 * @ref Serial input. In the case of this example, the input
 * is generated by user input. In the real world, this could
 * be a user or another device.
 * 
 * This When entering text for this code to parse and echo
 * back, be sure to wrap it in `<` and `>`.
 * 
 * This code was originally published on the Arduino forum at:
 * https://forum.arduino.cc/t/serial-input-basics-updated/382007/2#example-3-a-more-complete-system-1
 * 
 * For a full write up and explanation of the @ref Serial
 * concepts demonstrated here, please refer to the
 * source article.
 * 
 * If you're using VSCode, it's easiest to test with the @link "Serial
 * Monitor" Extension, by Microsoft:
 * 
 * Name: Serial Monitor
 * Id: ms-vscode.vscode-serial-monitor
 * Description: Send and receive text from serial ports.
 * Version: 0.10.0
 * Publisher: Microsoft
 * VS Marketplace Link: https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-serial-monitor
 * 
 */
class SerialInput
{
public:
    /**
     * @brief This method checks whether or not there is data
     * available in the @ref Serial stream. If there are
     * characters available they will be read until a start
     * marker (in our case it is the `<` character) is
     * found. From there it will read and store characters
     * until it encounters a termination character (in our
     * example this is the `>` character).
     * 
     * If a string of properly formatted characters is
     * read into the code, it will be printed out to the
     * Serial monitor you're using.
     * 
     */
    void recvWithStartEndMarkers();
    void showNewData();

private:
    const byte _numChars = 32;
    char _receivedChars[32];
    boolean _newData = false;
};