void setup(){
  size(400,200);
  textSize(40);//��j�r
}
void draw(){
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-�W�[���Ʒ|���
   text( 10- s%11 ,100 ,100);
}//10~0��11�ӼƦr(�N�|�˼ƨ�0)
