int ans=0;
void setup(){
  size(300,300);
  textSize(30);
  text(ans ,20,20);///�e�Xans
}
void draw(){
  background(#62E3C8);
  text( ans,20,30);
}
void mousePressed(){//���@���N����
  ans = (int)random(60);///�B�I�Ƥ��ઽ���ܾ��
      //����
}
