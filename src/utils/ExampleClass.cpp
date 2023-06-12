#include <./utils/ExampleClass.h>

ExampleClass::ExampleClass(){
}

void ExampleClass::someFunction(int pParamVar){
    _pInternalVar = pParamVar;
}

String ExampleClass::printInternalVar(){
    return ("Internal Value Is: " + _pInternalVar);
}

void ExampleClass::setGlobalVariable(){
    firstGlobal = 69;
}