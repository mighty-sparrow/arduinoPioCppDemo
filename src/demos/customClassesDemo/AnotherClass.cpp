#include <./demos/customClassesDemo/AnotherClass.h>

void AnotherClass::anotherSetterMethod(String pParamVar){
    _pInternalVar = pParamVar;
}

String AnotherClass::getAnotherInternalVar(){
    return _pInternalVar;
}

void AnotherClass::setAnotherGlobalVariable(int pNewGlobal){
    firstGlobal = pNewGlobal;
}

int AnotherClass::readAnotherGlobalVariable(){
    return firstGlobal;
}