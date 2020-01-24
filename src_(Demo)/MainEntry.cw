
import GZ.EntryPoint;

import GZ.Base.Thread.ThreadExt;
import Demo.MainInterface;


public class MainEntry extends EntryPoint {

	public var oThread: ThreadExt; //Object Variable of our Class

	public function MainEntry():Int {

		Debug.fTrace("Hello GZE!");
		
		oThread = new MainInterface(); //Create our Class Interface
		
		return 1; //We return "1" (true) to continue execution
	}
}

