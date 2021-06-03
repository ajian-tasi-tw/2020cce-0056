import processing.sound.*;//(加入)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");//把檔案拉近來，放聲音
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){///可暫停/或是開始音樂
  if( player.isPlaying() ){
     player.stop();
  }else{
    player.play();
  }
}

///ctrl+k可以叫出此檔案資料夾
