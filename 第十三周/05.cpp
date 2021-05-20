void setup(){
  size(1024,400);
}
void draw(){
  background( #8C61B2 );//︹絏
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 //把σゅンт
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //计+ ﹃  计 + ﹃ 计
    // 单﹃    单﹃
}
