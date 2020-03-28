#include "SysFile.h"

int GZ_SysFile::_fCreateDirectory( gzStr* _sFolder){


	return 0;
}

gzStr* GZ_SysFile::_fGetExePath(){
	GZ_fNewSet(gzStr* _sTest,  gzLStr(L"H:/_MyPoject/_MyEngine/_GroundZero/GzExample/Win/CodeBlocks/bin/32_Console/GZE_Demo.exe"));
	return _sTest;
}
