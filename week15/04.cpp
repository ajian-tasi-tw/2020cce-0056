import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//��j�r
  player = new SoundFile(this, "tada.mp3");
}
void draw(){//�C��60��
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-�W�[���Ʒ|���
   text( 10- s%11 ,100 ,100);
   if( 10-s%11 == 0 && !player.isPlaying()){
      player.play();    //�u�|����@���n��
   }
}//10~0��11�ӼƦr(�N�|�˼ƨ�0)
