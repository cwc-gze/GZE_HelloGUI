#include "WrapCpp.h"

extern "C"
{

static Application* s_pApplication = 0;

JNIEXPORT jlong JNICALL Java_gz_GzCpp_OnInit( JNIEnv* env, jobject obj,  jint iWidth, jint iHeight )
{
	LOGV( "Init called." );

	if(!s_pApplication){
		s_pApplication = new Application(iWidth, iHeight);
		s_pApplication->OnContextCreated();
	}

	return (jlong)(s_pApplication);
}

JNIEXPORT jlong JNICALL Java_gz_GzCpp_OnRecreate( JNIEnv* env, jobject obj, jlong  _oThis )
{
	((Application *)_oThis)->OnContextCreated();
	return 0;
}

JNIEXPORT void JNICALL Java_gz_GzCpp_OnShutdown( JNIEnv* env, jobject obj, jlong  _oThis )
{
	LOGV( "DESTROY");
	delete (Application *)_oThis;
}

JNIEXPORT void JNICALL Java_gz_GzCpp_OnResize( JNIEnv* env, jobject obj,  jlong  _oThis, jint iWidth, jint iHeight )
{


	((Application *)_oThis)->OnWindowResize(iWidth, iHeight );
}

JNIEXPORT void JNICALL Java_gz_GzCpp_OnFrame( JNIEnv* env, jobject obj, jlong  _oThis  )
{
	((Application *)_oThis)->Step();
}


JNIEXPORT void JNICALL Java_gz_GzCpp_OnTouch( JNIEnv* env, jobject obj, jlong  _oThis, int iPointerID, float fPosX, float fPosY, int iAction )
{
	LOGV( "Touch: %i, x: %f y:, %f action:, %i.", iPointerID, fPosX, fPosY, iAction );

	((Application *)_oThis)->OnTouch( iPointerID, fPosX, fPosY, iAction );

}

JNIEXPORT void JNICALL Java_gz_GzCpp_OnPause( JNIEnv* env, jobject obj, jlong  _oThis )
{


	if (_oThis )
	{
	((Application *)_oThis)->OnPause();
	}

}

JNIEXPORT void JNICALL Java_gz_GzCpp_OnResume( JNIEnv* env, jobject obj, jlong  _oThis )
{

	if (_oThis )
	{
	((Application *)_oThis)->OnResume();
	}

}


};
