void setup(){
  size(400,300);
  textSize(45);
}
int x=100,y=100;
void draw(){
 background(#8CFF6A);
 rect(x,y,50,50);//µe¤è¶ô
}//¥ª¥kÁä
void keyPressed(){
  if( keyCode == LEFT ) x-=10;
  if( keyCode == RIGHT ) x+=10;
  if( keyCode == UP ) y-=10;
  if( keyCode == DOWN ) y+=10;
}
