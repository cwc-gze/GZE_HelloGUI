//#include "GZ/SysGPU.h"
#include "SysWindow.h"
#include "System.h"

static GZ_SysWindow* oLastWindows;
 bool bGlobalSharedContext = false;
//Commun to all windows

gzBool GZ_SysWindow::bMouseDrag = false;
gzBool GZ_SysWindow::bFirstMouseOver = false;
/////////////////////////

GZ_SysWindow::GZ_SysWindow(GZ_Interface* _oInterface, gzStr* _sWindowName, gzUInt _nFrameWidth, gzUInt _nFrameHeight,  gzBool _bTransparent, gzInt _nBgColor, GZ_SysWindow_eWinBorder _hBorder, gzBool _bMinimizeBox, gzBool _bMaximizeBox, gzBool _bCloseBox, gzBool _bWinGPU, bool _bNoManager  ){
	bWinGPU = true;
	oInterface = _oInterface;
	oGpu = new GZ_SysGPU(_oInterface, _nBgColor, _bTransparent);
	oGpu->fWinIni();
}

void GZ_SysWindow::fCreate( gzInt _nPosX, gzInt _nPosY, gzInt _nWinWidth, gzInt _nWinHeight, GZ_SysWindow_eWinState _hStart, gzBool _bResizable, gzBool _bDragAndDrop, gzBool _bVisible ){


}
void GZ_SysWindow::fCreateNow(){

    
}

void GZ_SysWindow::fCenterWindow(){

}


void GZ_SysWindow::fIniProcess(bool _bGlobalSharedContext ){

 
}

void GZ_SysWindow::fGetMousePosition(){

}


void GZ_SysWindow::fMove(gzInt _nPosX, gzInt _nPosY){
  
}
void GZ_SysWindow::fMoveAndSize(gzInt _nPosX, gzInt _nPosY, gzInt _nFrameWidth, gzInt _nFrameHeight){

}


void GZ_SysWindow::fShow(gzBool _bActive){
 
}
void GZ_SysWindow::fHide(){

}
void GZ_SysWindow::fMinimize(){

}
void GZ_SysWindow::fMaximize(){
 
}
void GZ_SysWindow::fRestore(){
   
}
void GZ_SysWindow::fDisable(){
   
}

void GZ_SysWindow::fPreIniPixelZone(){
 
}


void GZ_SysWindow::fIniPixelZone(){

}

void GZ_SysWindow::fFrameStart(){



}

void GZ_SysWindow::fFrameEnd(){
}



gzInt** GZ_SysWindow::fGetPixelArray() {

    return p2DArray;
}

void GZ_SysWindow::fClear() {


   memset(aPixels, 0, nFrameWidth * nFrameHeight * sizeof(gzInt32));
}


void GZ_SysWindow::fBlit() {
	 oGpu->fWinBlit();
}


void  GZ_SysWindow::fStartCaptureOutside(){

}

void  GZ_SysWindow::fStopCaptureOutside(){

}



gzInt GZ_SysWindow::fKeyIsDown(gzInt _nKeyVal){
    return KeyDown[_nKeyVal];
}

bool  GZ_SysWindow::fIsWindowReady(){
    return bReady ;


}


void  GZ_SysWindow::fManageMessage(){

}


void GZ_SysWindow::tDelete() {

    delete this;
}


