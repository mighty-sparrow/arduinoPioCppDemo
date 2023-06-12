#pragma once
#include <Arduino.h>
#include <./Globals.h>

class AnotherClass{
    public:
        void someFunction(int pParamVar);
        String printInternalVar();
        int readGlobalVariable();
    private:
        int _pInternalVar;
};