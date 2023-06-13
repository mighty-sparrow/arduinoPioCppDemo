#pragma once
#include <Arduino.h>
#include <./utils/Globals.h>

class AnotherClass{
    public:
        /**
         * @brief Set the Internal Var object value.
         * 
         * @param pParamVar A string of characters to store in the variable.
         */
        void anotherSetterMethod(String pParamVar);
        /**
         * @brief Get the Internal Var object defined in the previous "setter" method.
         * 
         * @return String Returns the value passed in the previous method.
         */
        String getAnotherInternalVar();
        /**
         * @brief Set the Global Variable object declared in the `Globals.h`
         * file and defined in the calling program.
         * 
         * @param pNewGlobal The value to store in the global variable `firstGlobal`.
         */
        void setAnotherGlobalVariable(int pNewGlobal);
        /**
         * @brief Return the value stored in the global variable named `firstGlobal`.
         * 
         * @return int The value represented by `firstGlobal`.
         */
        int readAnotherGlobalVariable();
    private:
        String _pInternalVar;
};