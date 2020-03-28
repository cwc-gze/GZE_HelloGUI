
#include "Debug.h"
#include "GZ/GZ.h"
#include <android/log.h>

//Console
void GZ_Debug::_fConsole(gzStr* _sTrace){
   // cout << *_sTrace << endl;
}


//Static
void  GZ_Debug::_fTrace1(gzStr* _sValue){

	char* _aValue = _sValue->fToChar();
	__android_log_print(ANDROID_LOG_VERBOSE, "gz1:", _aValue);
	GZ_fFree((char*)_aValue);


}

void  GZ_Debug::_fTrace2(gzStr* _sValue){

	char* _aValue = _sValue->fToChar();
	__android_log_print(ANDROID_LOG_VERBOSE, "gz2:", _aValue);
	GZ_fFree((char*)_aValue);


}
void  GZ_Debug::_fTrace3(gzStr* _sValue){
	char* _aValue = _sValue->fToChar();
	__android_log_print(ANDROID_LOG_VERBOSE, "gz3:", _aValue);
	GZ_fFree((char*)_aValue);
}
void  GZ_Debug::_fError(gzStr* _sValue){
	char* _aValue = _sValue->fToChar();
	__android_log_print(ANDROID_LOG_ERROR, "gzError:", _aValue);
	GZ_fFree((char*)_aValue);
}
void  GZ_Debug::_fError(TSTRC16* _wcValue){

}
void  GZ_Debug::_fError(TSTRC8* _cValue){
}


//#define Show(Window)  RedrawWindow(Window,0,0,0);ShowWindow(Window,SW_SHOW);

GZ_Debug::GZ_Debug(unsigned int _nWidth, unsigned int _nHeight, int _nPosX, int _nPosY){
}

