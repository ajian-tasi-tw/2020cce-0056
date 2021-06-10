void setup(){//設定
   size(400,300);
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//白色
  ellipse( 100 ,100 ,180 ,180);//畫圓，做出外圈。
  ///   圓心 X , Y,   寬  高
  fill(#488BD1);///藍色
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){///分顏色
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);///利用餘數知道顏色擺哪，每一個角度一個顏色
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
                                                   //半圓 PI/12其實跟2*PI/24一樣
  }
}
