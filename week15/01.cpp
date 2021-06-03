void setup(){
  size(400,200);
  textSize(40);//放大字
}
void draw(){
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-增加的數會減少
   text( 10- s%11 ,100 ,100);
}//10~0有11個數字(就會倒數到0)
