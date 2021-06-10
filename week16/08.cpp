void setup(){
   size(400,260);
}
float start=0  , v=0,  x=0;///開始秒數///v是旋轉的速度，X是給方塊使用的
void mousePressed(){
  v= random(1); ///亂數取一個數字
}
void draw(){
  background(#FFD26F);
  if(v>0.001){///當速度大於0.01就會轉動
    start+=v;///位置、速度、加速度(位置會+速度)
    v*=0.99;///摩擦力會讓速度變慢(速度會+加速度)
    x +=v*2;
  }  ///改寫if(start<10) start+=0.05;///數到10就停//取代float start=mouseX/50.0;
  rect(x,200, 50,50);///推推樂方塊
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
  }
}
