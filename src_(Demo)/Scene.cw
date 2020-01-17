package  { 

	import GZ.Gfx.Root;

	import GZ.Gfx.Clip;
	import GZ.Gfx.Clip.Img;
	import GZ.File.RcImg;

	public class Scene extends Clip {

		
		public var oImg : Img;

		
		public function Scene( _oParent : Root ):Void {
			Clip(_oParent, 0.0, 0.0);
			
			//!Create an image
			oImg = new Img(this, 400.0, 300.0, "Exe|Rc/Tf.png", true);
			
			//Moving
			//! ----- Pos -- In Screen Coordinate (0.0, 0.0, 0.0 = Top left)
			oImg.vPos.nX.fTo(500.0);
			
			//Fading
			//! ----- Alpha ------- (0.0 = Transparent, 1.0 = Normal)
			oImg.vColor.nAlpha = 0.0;
			oImg.vColor.nAlpha.fTo(1.0);
			
			//Coloring
			//! ------ Colors  ---- (0.0 = Normal, -1.0 = Dark, 1.0 = Bright)
			oImg.vColor.nRed = 0.0;
			oImg.vColor.nRed.fTo(1.0);
		
			//Scaling
			//! ------ Size ------- (1.0 = Normal, 0.5 Half, 2.0 Double)
			oImg.vSize.nWidth.fTo(0.5);
			oImg.vSize.nHeight.fTo(0.5);
			
		}

		//!Updated each frame, parents before
		override public function fUpdateParentToChild():Void {
		
			//! -----Rotation ----- (0.0 = Normal, PI/2.0 = 90deg,  PI = 180deg ) *All in radian
			oImg.vRot.nPitch = oImg.vRot.nPitch + 0.005;
			oImg.vRot.nRoll  = oImg.vRot.nRoll  + 0.008;
		}
		
	}
}
