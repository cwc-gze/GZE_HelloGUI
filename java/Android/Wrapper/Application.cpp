#include <time.h>
#include <assert.h>

#include "Application.h"

/*
#include "GZ/Debug.h"
#include "GZ/Global.h"
#include "GZ/System.h"
*/
#include <android/log.h>

#define LOG_TAG "GZE"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)


Application* Application::s_pApplication = 0;

Application::Application( int iWidth, int iHeight){

	s_pApplication = this;

	m_bPaused = false;

	// Set the current time
	timespec timeNow;
	clock_gettime( CLOCK_MONOTONIC, &timeNow );
	m_Time = timeNow.tv_sec * 1000000000ull + timeNow.tv_nsec;
	m_pRenderer = new RendererES2();

	// Create the renderer
/*
	GZ_System::_fIni();
	GZ_System::_fForceResolution(iWidth, iHeight);
    GZ_Global::_fSetDirRcFiles(gzLStr(L"../../../../_Src/_Rc/"));
    GZ_Global::_fSetDirRcEmbed(gzLStr(L"../../../../_Src/_RcToEmbed/"));
    GZ_Global::_fIni();

    oExample =  new Demo_Demo();
*/
}

Application::~Application(){
	s_pApplication = 0;

	if ( m_pRenderer )
	{
		delete m_pRenderer;
	}
}

Application& Application::Get(){
	assert( s_pApplication && "Application not created!" );
	return *s_pApplication;
}

void Application::OnContextCreated(){
	if ( m_pRenderer->OnContextCreated() == RendererES2::Restored ){
		// The surface was re-created (like when unpausing) which means all OGL resources are deleted.
		// We need to recreate resources (textures, buffers, shader programs, etc)
		LOGV("Context [re]created");
		/*
		oExample->oInterface->oWindow->oGpu->fWinIni();
		oExample->oInterface->oGpuObj->fCreate( );

		oExample->oInterface->oImg->oRc->fGpuLoad();
		*/
	}

	m_bPaused = false;
	LOGV("Unpause");
}

void Application::OnWindowResize(int iWidth, int iHeight){
	static int _nLastWidth = 0;
	static int _nLastHeight = 0;
	if(iWidth != _nLastWidth && iHeight != _nLastHeight){
		_nLastWidth = iWidth;
		_nLastHeight = iHeight;
		LOGV("Resize : Width: %i, Height:, %i.", iWidth, iHeight);
//		GZ_System::_fForceResolution(iWidth, iHeight);
		m_pRenderer->SetViewport( iWidth, iHeight );
	}
}

void Application::Step(){
	//Accurate delta time
	timespec timeNow;
	clock_gettime(CLOCK_MONOTONIC, &timeNow);
	uint64_t uNowNano = timeNow.tv_sec * 1000000000ull + timeNow.tv_nsec;

	float fDeltaSeconds = float(uNowNano - m_Time) * 0.000000001; // 1 sec = 1,000,000,000 nanosec
	m_Time = uNowNano;

	if ( !m_bPaused ){
		OnUpdate( fDeltaSeconds );
	}
}

void Application::OnUpdate( const float fDeltaSeconds ){

	m_pRenderer->ClearScreen(0.0, 1.0, 0.0, 0.0, true);
	// Here is the game logic
	/*
	GZ_Global::fMainUpdate();
	oExample->oInterface->fNewFrame();
	*/
}



void Application::OnPause(){
	LOGV("OnPause");
	m_bPaused = true;
}

void Application::OnResume(){
	LOGV("OnResume");
}

void Application::OnTouch( int iPointerID, float fPosX, float fPosY, int iAction ){
	LOGV("Touch: %i, x: %f y:, %f action:, %i.", iPointerID, fPosX, fPosY, iAction );
}
