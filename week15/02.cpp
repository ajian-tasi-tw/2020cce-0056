import processing.sound.*;//(加入)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");//把檔案拉近來，放聲音
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){//按一下就會有聲音
   player.play();
}
