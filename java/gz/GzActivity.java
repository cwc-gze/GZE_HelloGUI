package gz;

import gz.GameView;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.KeyEvent;
import android.widget.Toast;

public class GzActivity extends Activity {

	
    GameView mView;
    
	/** Called when the activity is first created. */
	@Override
	protected void onCreate(Bundle savedInstanceState) {
	    super.onCreate(savedInstanceState);
	

        mView = new GameView( getApplication() );
        setContentView( mView );
	    
	}
	
	

    
    
    @Override
	protected void onActivityResult(int requestCode, int resultCode, Intent data) {
	// TODO Auto-generated method stub
	//super.onActivityResult(requestCode, resultCode, data);
	  //  if (resultCode == RESULT_CANCELED){
	  //      Toast.makeText(getApplicationContext(), "too bad..", Toast.LENGTH_LONG).show();
	      //  finish();
	 //   }
	}
    

    @Override protected void onPause() 
    {
        super.onPause();
        if(mView != null){
        mView.onPause();
        }
    }

    @Override protected void onResume() 
    {
        super.onResume();
        if(mView != null){
        mView.onResume();
        }
    }
    
    @Override protected void onDestroy() 
    {
        super.onDestroy();
        if(mView != null){
        mView.onDestroy();
        }
    }
    


    @Override public boolean onKeyDown(int keyCode, KeyEvent event) 
    {
        if(keyCode == KeyEvent.KEYCODE_MENU)  //Home button
        {
       
        	Toast toast = Toast.makeText(this, "Home Button", Toast.LENGTH_LONG);
            toast.show();
            
            return true;
        }
        
        if (keyCode == KeyEvent.KEYCODE_VOLUME_DOWN || keyCode == KeyEvent.KEYCODE_VOLUME_UP) { 
        	Toast toast = Toast.makeText(this, "Volume", Toast.LENGTH_LONG);
            toast.show();
            return true;
        }
        
        
        
        // let the system handle all other key events
        return super.onKeyDown(keyCode, event);
    }
    
    
    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) { //Supress Sound Volume
        if ((keyCode == KeyEvent.KEYCODE_VOLUME_UP) || (keyCode == KeyEvent.KEYCODE_VOLUME_DOWN)) {  
           return true;
        }
        return super.onKeyUp(keyCode, event);
    }
    
    /*
    button.setOnTouchListener(new OnTouchListener() {
        @Override
        public boolean onTouch(View v, MotionEvent event) {
            if(event.getAction() == MotionEvent.ACTION_DOWN) {
                increaseSize();
            } else if (event.getAction() == MotionEvent.ACTION_UP) {
                resetSize();
            }
        }
    };
    */
    
    
    @Override public void onBackPressed() {
     // TODO Auto-generated method stub
    	Toast toast = Toast.makeText(this, "Back Button", Toast.LENGTH_LONG);
        toast.show();
    	
    	
    	super.onBackPressed();
        finish();
    	

    

    }
	
	
	
	

}
