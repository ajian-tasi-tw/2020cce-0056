String A="mother";//�D��
String line="";//��J���ת��a��@�}�l�S���F��

void setup(){
 size(400,300);
 textSize(40);
}
void draw(){
  background(#1B57A5);
  text(A, 100,100);///�q�X�D��
  text(line+"|",100,150);///�q�X����
}
void keyPressed(){
 line = line +key; ///�o�˴N�ॴ�@��r
}
