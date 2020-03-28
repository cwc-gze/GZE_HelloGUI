
#include "SysFrameRate.h"

//Force recompilation if heritage change
#include "GZ\GFX\Buffer.h"
#include "GZ\GFX\Object.h"
#include "GZ\GFX\Attribute.h"
#include "GZ\GFX\Root.h"
#include "GZ\GFX\Dispacher.h"

//Public Static Var
class GZ_Interface : public GZ_SysFrameRate{};


//Private Static Var


GZ_SysFrameRate::GZ_SysFrameRate(){



}

void GZ_SysFrameRate::Ini_GZ_SysFrameRate(GZ_Root* _oParent, gzUInt _nWidth, gzUInt _nHeight){

	//Begin
	Ini_GZ_Buffer(_oParent,_nWidth,_nHeight);

}

void GZ_SysFrameRate::fStartProcess(){
    bDeleteReady = false;
	fIniProcess(); //No multithread
}

void GZ_SysFrameRate::fPulse(){



}


void GZ_SysFrameRate::fEnd(){
}

void GZ_SysFrameRate::fNewFrame(){
}
void GZ_SysFrameRate::fBlit(){
}
void GZ_SysFrameRate::fIniProcess(){
}
bool GZ_SysFrameRate::fIsWindowReady(){
}



GZ_SysFrameRate::~GZ_SysFrameRate(){

}

//Unit creation
//Unit array write
//Unit destruction

