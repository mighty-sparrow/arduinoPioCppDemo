#pragma once
#include <Arduino.h>
#include <./Globals.h>

class ExampleClass{
    public:
        ExampleClass();
        void someFunction(int pParamVar);
        String printInternalVar();
        void setGlobalVariable();
    private:
        int _pInternalVar;
};