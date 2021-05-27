int ans=0;
void setup(){
  size(300,300);
  textSize(30);
  text(ans ,20,20);///畫出ans
}
void draw(){
  background(#62E3C8);
  text( ans,20,30);
}
void mousePressed(){//按一次就互動
  ans = (int)random(60);///浮點數不能直接變整數
      //改整數
}
