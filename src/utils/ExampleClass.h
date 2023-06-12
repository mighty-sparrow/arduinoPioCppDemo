#pragma once
#include <Arduino.h>

class ExampleClass{
    public:
        void someFunction(int pParamVar);
        String printInternalVar();
    private:
        int _pInternalVar;
};