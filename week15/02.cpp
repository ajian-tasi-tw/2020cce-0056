import processing.sound.*;//(�[�J)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");//���ɮשԪ�ӡA���n��
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){//���@�U�N�|���n��
   player.play();
}
