void setup(){//設定
   size(400,200);
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);
  ellipse( 50 ,50 ,80 ,80);//畫圓
  ///       圓心,  寬  高
  fill(255,0,0);///紅色
  float stop=mouseX/50.0;//跟滑鼠動
  text( stop ,100 ,100);//產生滑鼠弧度數字
  arc( 50, 50, 80, 80,  0,  stop );///畫圓弧
  //    圓心   寬  高 開始  結束(角度)
  //對arc按右鍵找參考資料可以知道他如何使用。
}
