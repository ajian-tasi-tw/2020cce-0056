void setup(){
 size(400,200);
 textSize(40);
}
char c='9';//題目
int win=0;
void draw(){
  background(#8CFF6A);
  text("Press:"+c,100 ,100);
  text("You  :"+key,100,150);
  if( c==key ) win=1;//當win=1就贏了
  else win=0;
  if(win==1) text("You Win",100,50);
}
