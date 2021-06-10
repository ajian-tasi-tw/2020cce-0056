void setup(){//設定
   size(400,200);
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//白色
  ellipse( 50 ,50 ,80 ,80);//畫圓
  ///       圓心,  寬  高
  fill(#488BD1);///藍色
  float start=mouseX/50.0;
  textSize(50);
  text(start ,100,100);
  arc( 50, 50, 80, 80,  0+start,  0.1+start);///畫圓弧
  ///   圓心   寬  高      開始   結束(弧度)(前面小數點，可以調整圓弧的大小)
  //對arc按右鍵找參考資料可以知道他如何使用。
}
