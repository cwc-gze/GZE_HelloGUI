package {
import GZ.EntryPoint;

import GZ.Base.Thread.ThreadExt;
import Demo.MainInterface;


 /*
<cpp>
   #include <dlfcn.h>
	//extern "C" void fTestExtFunc();
	typedef int (*Func_fTestExtFunc)();
</cpp>
*/

public class MainEntry extends EntryPoint {

	public var oThread: ThreadExt; //Object Variable of our Class

	
	public function MainEntry():Int {
	/*
		<cpp>
			printf("\nTry To DoOpen: Lib.js");
			
		//	void* _oHandle = dlopen("Rc/libsomething.js", RTLD_NOW);
			void* _oHandle = dlopen("Lib.js", RTLD_NOW);
			if(_oHandle == GZ_Null){
				printf("\nError on dlopen: %s", dlerror());
			}else{
				printf("\nSucess on dlopen");
			}
			printf("\nTry Lauch function");
			
			Func_fTestExtFunc fTestExtFunc = (Func_fTestExtFunc)dlsym(_oHandle, "fTestExtFunc");
			if(fTestExtFunc != GZ_Null){
					printf("\nFound!");
				printf("\nReturn: %d" , fTestExtFunc());
			}else{
				printf("\nFuncNotFound");
				
			}
			
			printf("\nDone");
		</cpp>
	
*/
		Debug.fTrace("Hello GZE!!");
		
		oThread = new MainInterface(); //Create our Class Interface
		
		return 1; //We return "1" (true) to continue execution
	}
}

}