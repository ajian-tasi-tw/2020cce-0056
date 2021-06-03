import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//放大字
  player = new SoundFile(this, "tada.mp3");
}
void draw(){//每秒60次
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-增加的數會減少
   text( 10- s%11 ,100 ,100);
   if( 10-s%11 == 0 && !player.isPlaying()){
      player.play();    //只會播放一個聲音
   }
}//10~0有11個數字(就會倒數到0)
