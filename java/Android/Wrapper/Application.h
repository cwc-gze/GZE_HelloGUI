

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "RendererES2.h"
//#include "Demo/Demo.h"
class Application
{

public:
	Application( int iWidth, int iHeight);
	virtual ~Application();

	static Application& Get();

	void Step();

	void OnPause();
	void OnResume();

	void OnUpdate( const float fDeltaSeconds );
	void OnDraw();

	void OnContextCreated();
	void OnWindowResize( int iWidth, int iHeight );

	void OnTouch( int iPointerID, float fPosX, float fPosY, int iAction );
//	 Demo_Demo* oExample;

private:
	static Application* s_pApplication;

	RendererES2* 	m_pRenderer;

	bool 			m_bPaused;
	uint64_t 		m_Time;
};

#endif /* APPLICATION_H_ */
