#ifndef DEF_GZ_FileGetter
#define DEF_GZ_FileGetter
#include "GZ/GZ.h"


class GZ_SysFileGetter {


	public:

		GZ_SysFileGetter(gzStr* _sFolder);
        gzStr* fGetNextFile();
        bool fIsDirectory();

	private:

};
#endif
