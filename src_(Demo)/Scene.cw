
import GZ.Gfx.Clip.Img;
import GZ.File.RcImg;
import GZ.Gfx.Vector.VectorShape;

import GZ.Gfx.Root;
import GZ.Gfx.Clip;
import GZ.Gfx.Vector.Box;

public class Scene extends Clip {

		
	public var oObj : Box;

		
	public function Scene( _oParent : Root ):Void {
		Clip(_oParent, 0.0, 0.0);
		
		//!Nex Box Object:X ,Y,   Width,Height, LineSize
		oObj = new Box( 300,300,  200,200,    5);
		
		//Moving
		//! ----- Pos -- In Screen Coordinate (0.0, 0.0, 0.0 = Top left)
		oObj.vPos.nX.fTo(400.0);
		
		//Fading
		//! ----- Alpha ------- (0.0 = Transparent, 1.0 = Normal)
		oObj.vColor.nAlpha = 0.0;
		oObj.vColor.nAlpha.fTo(1.0);
		
		//Coloring
		//! ------ Colors  ---- (0.0 = Normal, -1.0 = Dark, 1.0 = Bright)
		oObj.vColor.nRed = 0.0;
		oObj.vColor.nRed.fTo(1.0);
	
		//Scaling
		//! ------ Size ------- (1.0 = Normal, 0.5 Half, 2.0 Double)
		oObj.vSize.nWidth.fTo(0.5);
		oObj.vSize.nHeight.fTo(0.5);
		
	}

	//!Updated each frame, parents before
	override public function fUpdateParentToChild():Void {
	
		//! -----Rotation ----- (0.0 = Normal, PI/2.0 = 90deg,  PI = 180deg ) *All in radian
		oObj.vRot.nPitch = oObj.vRot.nPitch + 0.005;
		oObj.vRot.nRoll  = oObj.vRot.nRoll  + 0.008;
	}
		
}

