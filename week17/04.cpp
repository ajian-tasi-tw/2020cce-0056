void setup(){
 size(400,200);
 textSize(40);
}
char c='9';//�D��
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
///java�r��
int win=0;
void draw(){
  background(#8CFF6A);
  text("Press:"+c,100 ,100);
  text("You  :"+key,100,150);
  if( c==key ) win=1;//��win=1�NĹ�F
  else win=0;

  if(win==1) {
    text("You Win",100,50);
    int i = int(random(26+26));//�ü�0~52�����M�w�@�Ӿ��
    c= ans.charAt(i); //��X�r��ans��i�Ӧr��
  }
}
