 void setup(){//互動，只做一次
   size(1024,400);
 }
 void draw(){//互動版本，每秒畫60次
   if(mousePressed)background( 137 , 255 , 226 );//按下去時
   else background(255 ,0 ,255);//否則 是這個顏色
}
