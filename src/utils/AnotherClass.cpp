#include <./utils/AnotherClass.h>

void AnotherClass::someFunction(int pParamVar){
    _pInternalVar = pParamVar;
}

String AnotherClass::printInternalVar(){
    return ("Internal Value Is: " + _pInternalVar);
}

int AnotherClass::readGlobalVariable(){
    return firstGlobal;
}