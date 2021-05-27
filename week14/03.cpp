//int a[]={1,2,3,4,5,6,7,8,9,10}; C語言
int []a = {1,2,3,4,5,6,7,8,9,10};///java陣列
int i1,i2;
void setup(){
   size(400,100);
   textSize(30);
}
void draw(){
  background(#62E3C8);
  for(int i=0;i<10;i++){
     text(a[i], i*40,50);
  }
  rect(i1*40,50,30,30);///i1方塊
  rect(i2*40,50,30,30);///i2方塊
}
void mousePressed(){//當按一下就交換
   i1=(int)random(10); //亂數選一個值
   i2=(int)random(10); //亂數選一個值
   int temp=a[i1];a[i1]=a[i2]; a[i2]=temp;//交換
}
