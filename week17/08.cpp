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
  int len = line.length();//原字的長度
  if( key>='a' && key<='z') line = line + key;//小寫
  if( key>='A' && key<='Z') line = line + key;//大寫
  if( key==ENTER ) { }//比對是否正確
  //key有空白鍵、ENTER鍵、倒退鍵等
  if( key== BACKSPACE && len>0 ) line = line.substring(0,len-1);//刪除字母
 ///substring能找一中一個字母
}
