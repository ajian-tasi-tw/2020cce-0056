void setup(){
  size(400,300);
  textSize(45);
}
String line="Hello";//變數字串(P語言的)
char c='9';//字母
void draw(){
   background(#8CFF6A);
   text( line+c+100 ,100 ,100);
   text("world:"+key+key,100,150);
}///字串的+是接起來!!!
 ///key對應你最後按下的鍵盤字母or數字or符號
