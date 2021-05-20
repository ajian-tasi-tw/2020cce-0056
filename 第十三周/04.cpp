void setup(){//互動，只做一次
  size(1024,400);
}
void draw(){//互動版本，每秒畫60次
  if(mousePressed)  background( 137 , 255 , 226 );//按下去時
  else background(255 ,0 ,255);//否則 是這個顏色
  textSize(55);//文字的大小可以改
  text("沒中文Now is:"+ a ,212 ,200);//畫出文字
      // + 文字加法會將文字跟數字加在一起(新東西)
}
int a=0;
void mousePressed(){//當按一下
   a++;
}
