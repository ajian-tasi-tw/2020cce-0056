import processing.sound.*;//(�[�J)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");//���ɮשԪ�ӡA���n��
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){///�i�Ȱ�/�άO�}�l����
  if( player.isPlaying() ){
     player.stop();
  }else{
    player.play();
  }
}

///ctrl+k�i�H�s�X���ɮ׸�Ƨ�
