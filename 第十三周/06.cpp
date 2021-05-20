void setup(){
  size(1024,400);
  textFont( createFont("夹发砰", 80));///陪ボいゅ
}
void draw(){///╰参穦–穝┮穦糤
  background( #8C61B2 );//︹絏
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 ///把σゅンт
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //计+ ﹃  计 + ﹃ 计
    // 单﹃    单﹃
  int total = s + 60*m + 60*60*h; ///ヘ夹羆计
  int closeH=17 ,closeM=40,closeS=0;///挡弘絋丁
  int total2= closeS + 60*closeM + 60*60*closeH; ///ヘ夹羆计
  int ans = total2-total;
  text("逞碭:" + ans,100,100);
}
