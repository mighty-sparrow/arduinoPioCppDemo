#include <./utils/ExampleClass.h>

void ExampleClass::setInternalVar(String pParamVar){
    _pInternalVar = pParamVar;
}

String ExampleClass::getInternalVar(){
    return _pInternalVar;
}

void ExampleClass::setGlobalVariable(int pNewGlobal){
    firstGlobal = pNewGlobal;
}

int ExampleClass::readGlobalVariable(){
    return firstGlobal;
}