#include <./utils/ExampleClass.h>

void ExampleClass::someFunction(int pParamVar){
    _pInternalVar = pParamVar;
}

String ExampleClass::printInternalVar(){
    return ("Internal Value Is: " + _pInternalVar);
}