void setup(){
  size(400,300);
  textSize(45);
}
float x=100,y=100,vx=0,vy=0;
void draw(){
 background(#8CFF6A);
 rect(x,y,50,50);//畫方塊
 x +=vx;//每秒60次，等速(順)
}
void keyPressed(){
  if( keyCode == LEFT ) vx=-10;
  if( keyCode == RIGHT ) vx=+10;
}
void keyReleased(){
 vx =0;
}
