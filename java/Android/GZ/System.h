#ifndef DEF_GZ_System
#define DEF_GZ_System
#include "GZ/GZ.h"


class GZ_System {


	public:

        static void _fIni();
        static void _fExit();

        static gzUInt _fForceResolution(gzUInt _nForceWidth, gzUInt _nForceHeight);
        static gzUInt _GnForceWidth();
        static gzUInt _GnForceHeight();
        static gzUInt _GbAnyResolutionAvailable();

	private:

        static gzUInt  nForceWidth;
        static gzUInt  nForceHeight;
		static gzBool bAnyResolutionAvailable;

};
#endif
