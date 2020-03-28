

#include "RendererES2.h"
#include <GLES3/gl3.h>

RendererES2::RendererES2(){
	m_EglContext = 0;
}

RendererES2::~RendererES2(){




}


RendererES2::ContextState RendererES2::OnContextCreated(){

	RendererES2::ContextState eState = Initialised;;

	EGLContext eglContext = eglGetCurrentContext();
//	if ( m_EglContext != 0 && m_EglContext != eglContext )
	if ( m_EglContext != 0)
	{
		// You will need to recreate your resources here
		// This means textures, buffers, shader programs, etc...
		eState = RendererES2::Restored;
	}
	else
	{

		eState = RendererES2::Initialised;
	}

	m_EglContext = eglContext;

	return eState;
}

void RendererES2::SetViewport( int iWidth, int iHeight ){


	glViewport( 0, 0, iWidth, iHeight );

}

void RendererES2::ClearScreen( float fRed, float fGreen, float fBlue, float fAlpha /*= 0.0f*/, bool bClearDepth /*= true*/ )
{
	GLbitfield mask = ( bClearDepth ) ? ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ) : GL_COLOR_BUFFER_BIT;
	glClearColor( 1.0, 0.0, 0.0, fAlpha );
	glClear( mask );
}
