#ifndef DEF_GZ_Debug
#define DEF_GZ_Debug
#include "GZ/GZ.h"



//Class include
class GZ_SysWindow;


class GZ_Debug {

	public:

        GZ_SysWindow *oWindow;

        //Functions
        static void _fConsole(gzStr* _sValue);

        static void _fTrace1(gzStr* _sValue);
        static void _fTrace2(gzStr* _sValue);
        static void _fTrace3(gzStr* _sValue);
        static void _fError(gzStr* _sValue);
        static void _fError(TSTRC16* _wcValue);
        static void _fError(TSTRC8* _cValue);

        static void s_arrayOutBounds(gzInt32* _sName, int _nLine, int maxSize, int nIndex);
        static void s_arrayNull(gzInt32* _sName, int _nLine, int maxSize, int nIndex);

		GZ_Debug(unsigned int _nWidth = 400, unsigned int _nHeight = 400, int _nPosX = GZ_Null, int _nPosY = GZ_Null);




	private:


		//Functions


};
#endif
