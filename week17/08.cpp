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
  int len = line.length();//��r������
  if( key>='a' && key<='z') line = line + key;//�p�g
  if( key>='A' && key<='Z') line = line + key;//�j�g
  if( key==ENTER ) { }//���O�_���T
  //key���ť���BENTER��B�˰h�䵥
  if( key== BACKSPACE && len>0 ) line = line.substring(0,len-1);//�R���r��
 ///substring���@���@�Ӧr��
}
