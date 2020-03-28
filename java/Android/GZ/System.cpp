#include "System.h"
#include "GZ/SysWindow.h"
#include "GZ/Global.h"

gzBool  GZ_System::bAnyResolutionAvailable = true;
gzUInt  GZ_System::nForceWidth = 0;
gzUInt  GZ_System::nForceHeight = 0;

void GZ_System::_fIni(){
	  GZ_Global::_fPreIni();
}

void GZ_System::_fExit(){

}

gzUInt GZ_System::_fForceResolution(gzUInt _nForceWidth, gzUInt _nForceHeight){
	bAnyResolutionAvailable = false;
	nForceWidth = _nForceWidth;
	nForceHeight = _nForceHeight;
}

gzUInt GZ_System::_GbAnyResolutionAvailable(){
	return bAnyResolutionAvailable;
}

gzUInt GZ_System::_GnForceWidth(){
	return nForceWidth;
}
gzUInt GZ_System::_GnForceHeight(){
	return nForceHeight;
}
