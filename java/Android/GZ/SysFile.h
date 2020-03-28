#ifndef DEF_GZ_File
#define DEF_GZ_File
#include "GZ/GZ.h"

//Import
#include "GZ/Debug.h"

class GZ_SysFile {

	public:

        static int _fCreateDirectory(gzStr* _sFolder);
        static  gzStr* _fGetExePath();

	private:



};
#endif
