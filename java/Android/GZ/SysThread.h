#ifndef DEF_GZ_Thread
#define DEF_GZ_Thread
#include "GZ/GZ.h"



//Import
#include "GZ/Debug.h"

class GZ_SysThread {

	public:

        gzDelegate cfCallBack;

        //Functions
		GZ_SysThread(gzDelegate _cfCallBack, unsigned int _nPulseMilliSec = 0, unsigned int _nDueTime = 0);

        void setPriority(unsigned int *_nPriority);

	private:



};
#endif
