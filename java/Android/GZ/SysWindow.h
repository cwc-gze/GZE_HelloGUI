#ifndef DEF_GZ_SysWindow
#define DEF_GZ_SysWindow
#include "GZ/GZ.h"
#include "GZ/Global.h"
#include "Debug.h"
#include "GZ/M.h"
//Class import



#define GZ_SysWindow_nPosCenter GZ_nMaxInt32



//Enum
typedef int GZ_SysWindow_eWinState;
	#define GZ_SysWindow_eWinState_nNormal 0
	#define GZ_SysWindow_eWinState_nMinimised 1
	#define GZ_SysWindow_eWinState_nMaximised 2
	#define GZ_SysWindow_eWinState_nHidden 3


typedef int GZ_SysWindow_eWinBorder;
	#define GZ_SysWindow_eWinBorder_nNormal 0
	#define GZ_SysWindow_eWinBorder_nNormalDouble 1
	#define GZ_SysWindow_eWinBorder_nNone 2
	#define GZ_SysWindow_eWinBorder_nBorderOnly 3
	#define GZ_SysWindow_eWinBorder_nBorderOnlyDouble 4
	#define GZ_SysWindow_eWinBorder_nTitle 5
	#define GZ_SysWindow_eWinBorder_nTitleDouble 6


typedef int GZ_SysWindow_eWinClick;
	#define GZ_SysWindow_eWinClick_nNone 0
	#define GZ_SysWindow_eWinClick_nClose 1
	#define GZ_SysWindow_eWinClick_nMaximize 2
	#define GZ_SysWindow_eWinClick_nMinimize 3

#include "GZ/SysGPU.h"
#include "GZ/GFX/Interface.h"

class GZ_SysWindow {

	public:

		static QueueRoot* qaWindow;
        bool bReady;
       // static GZ_SysWindow* oToCreate;
        gzInt nWinWidth;
        gzInt nWinHeight;
        bool bResizable;
        bool bDragAndDrop;
        bool bGlobalSharedContext;
        GZ_SysWindow_eWinState hState;


        GZ_SysWindow_eWinClick hWinClickNew;
        GZ_SysWindow_eWinClick hWinClick;

        GZ_SysGPU* oGpu;

        gzUInt nFrameWidth;
        gzUInt nFrameHeight;

        gzBool bResizeRenderReady;
        gzBool bSkipOneTime;
        gzBool bMinimizeBox;
        gzBool bMaximizeBox;
        gzBool bCloseBox;
        gzBool bWinGPU;

        GZ_SysWindow_eWinBorder hBorder;
        double nMouseX;
        double nMouseY;
        gzInt nLastMouseX;
        gzInt nLastMouseY;
        static gzBool bMouseDrag;
        static gzBool bFirstMouseOver;
        gzUInt nResolutionX;
        gzUInt nResolutionY;
        double nResFacX;
        double nResFacY;
        gzBool bCaptureOut;
        gzBool bOnRezize;

		//Variables
        gzStr* sWindowName;
        GZ_Interface* oInterface;


		//Functions
       void  fIniProcess(bool _bGlobalSharedContext = false );

       void fPreIniPixelZone();


		GZ_SysWindow(GZ_Interface* _oInterface, gzStr* _sWindowName, gzUInt _nWidth, gzUInt _nHeight, gzBool _bTransparent = false, gzInt _nBgColor = 0xFFFFFFFF, GZ_SysWindow_eWinBorder _hBorder = 0, gzBool _bMinimizeBox = true, gzBool _bMaximizeBox = true, gzBool _bCloseBox = true, gzBool _bWinGPU = false, gzBool _bNoManager = true);
        void fCreate(gzInt _nPosX = GZ_SysWindow_nPosCenter, gzInt _nPosY = GZ_SysWindow_nPosCenter,  gzInt _nWinWidth = -1,  gzInt _nWinHeight = -1, GZ_SysWindow_eWinState _hStart = 0, gzBool _bResizable = false, gzBool _bDragAndDrop = false, gzBool _bVisible = true);
        void fMove(gzInt _nPosX, gzInt _nPosY);
        void fMoveAndSize(gzInt _nPosX, gzInt _nPosY, gzInt _nWidth, gzInt _nHeight);
        void fShow(gzBool _bActive = true);
        void fHide();
        void fMinimize();
        void fMaximize();
        void fRestore();
        void fDisable();
        void fIniPixelZone();
        gzInt** fGetPixelArray();
        void fBlit();
        gzInt fKeyIsDown(gzInt _nKeyVal);
        void fClear();
        void fGetMousePosition();
        void fStartCaptureOutside();
        void fStopCaptureOutside();
        void fFrameStart();
        void fFrameEnd();

        bool fIsWindowReady();
		void fCenterWindow();
		static void fManageMessage();

		//~GZ_SysWindow();
        void tDelete();

	private:

        gzBool bNoManager;

        void fCreateNow();

        gzBool bActive;
        gzBool* KeyDown;
        gzBool* KeyPress;

        gzInt nWinLock;
       // gzInt nWidth;
		//gzInt nHeight;
        gzInt nOffsetWidth;
        gzInt nOffsetHeight;
        gzInt nOffsetSizeWidth;
        gzInt nOffsetSizeHeight;

		gzInt nPosX;
		gzInt nPosY;
        unsigned char nWinAlpha;
		gzBool bVisible;
		gzBool bBorder;
        gzInt* aPixels;

        //Variables
        gzBool bTransparant;
        gzInt nCurrTime;
        gzInt nTicksPerSec;

        gzInt16* charWinName;



        gzInt** p2DArray;

        ArrayInt* aArrayInt;
		ArrayPtr* aPixelArray;



};
#endif
