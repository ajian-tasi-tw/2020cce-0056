int []a=new int[47];//java�}�C
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i;
   }
   //��a[i]���}�C�̡A�n���X����������Ʀr
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//�@���A���~�n�P�A�����D���X�A�������X
}
void draw(){
   background(#62E3B9);
  for(int i=0;i<5;i++){
     text(a[i], i*80, 100);
  }
}
