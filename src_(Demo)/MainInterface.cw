
import GZ.Sys.Interface.Interface;
import GZ.Sys.ThreadItf;


import Demo.Scene;


public thread<ThreadItf> MainInterface extends Interface {
	

	//public var oDemo : Clip;


	public function MainInterface( _oThreadItf : ThreadItf ):Void {
	
		//!New thread started, this and subclass are isolated for thread safety
		
		//!Select rendering on GPU on CPU
		bGpuDraw = false;
		Debug.fTrace("MainInterface");
		//Extends Class Parameters
		Interface(_oThreadItf, "Hello GZE GUI", 800, 600);
		
		Debug.fTrace("Interface");
		//Create a new windows interface
		fCreateInterface();
		Debug.fTrace("fCreateInterface");
	}
	
	/*
	override public function fLoadShader():Bool {
		oGzShModel = new GzShModel_Quad();
		return true;
	}*/
	
	
	override public function fWinStart():Void {
		
		Debug.fPass(" --------------------------------------- ");
		Debug.fPass(" ---- My First GZE Graphical Window ---- ");
		Debug.fPass(" --------------------------------------- ");
		
		//var _oScene : Scene = new Scene(this);
		var _oScene : Scene = new Scene(this);
	}
	

	
}
