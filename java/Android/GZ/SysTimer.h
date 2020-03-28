#ifndef DEF_GZ_Timer
#define DEF_GZ_Timer
#include "GZ/GZ.h"

//Import
#include "GZ/Debug.h"

class GZ_SysTimer {

	public:


        static void s_start();
        static double s_get();

        void start();
        double get();

	private:



};
#endif
