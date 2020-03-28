#if !( defined DEF_GZ_SysFrameRate || defined  DEF_IN_GZ_Root || defined  DEF_IN_GZ_Dispacher)
#define DEF_GZ_SysFrameRate
#define DEF_IN_GZ_SysFrameRate
#include "GZ\GZ.h"

#include "SysFrameRate.h"
//Class include
#include "GZ/SysThread.h"
#include "GZ/SysTimer.h"
#include "GZ/GFX/Buffer.h"
#include "GZ/GFX/Interface.h"
#include "GZ/GFX/GlobalData.h"
#include "GZ/Debug.h"

//Class import
class GZ_SysThread;
class GZ_SysTimer;
class GZ_Root;
class GZ_GlobalData;
class GZ_SysFrameRate;
class GZ_Debug;

class GZ_SysFrameRate : public GZ_Buffer {

	public:

		gzDelegate cfPulse;
		//static
        gzBool bRun;
        gzBool bFinish;
        gzBool bReady;

		//Var

		GZ_SysFrameRate();

		virtual void Ini_GZ_SysFrameRate(GZ_Root* _oParent, gzUInt _nWidth, gzUInt _nHeight);
		virtual void fPulse();
		virtual void fNewFrame();
		virtual void fStartProcess();
        virtual void fIniProcess();



		//Unit creation
		//Unit destruction
		//Unit array write
        virtual void fBlit();
        virtual void fEnd();
        virtual ~GZ_SysFrameRate();
        virtual  bool fIsWindowReady();



	private:

		//Var
		gzFloat nFramePerSecond;
		gzInt nLock;
		GZ_SysThread* oThreadPulse;
		GZ_SysThread* oThreadFrame;
		gzFloat nNextFrame;
		gzFloat nFrequence;


		//static


};
#undef DEF_IN_GZ_SysFrameRate
#endif
