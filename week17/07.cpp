String A="mother";//題目
String line="";//輸入答案的地方一開始沒有東西

void setup(){
 size(400,300);
 textSize(40);
}
void draw(){
  background(#1B57A5);
  text(A, 100,100);///秀出題目
  text(line+"|",100,150);///秀出答案
}
void keyPressed(){
 line = line +key; ///這樣就能打一串字
}
