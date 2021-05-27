int []a=new int[47];//java陣列
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i;
   }
   //讓a[i]的陣列裡，要先訪整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//作弊，先洗好牌，先知道號碼，等等掉出
}
int n=0;
void draw(){
  background(#62E3B9);
  textAlign(CENTER,CENTER);///文字對齊:中，中
  for(int i=0;i<n;i++){
     fill(255);ellipse(   i*80+40, 100, 55, 55);//ellipse是圓形
     fill(0);text(a[i], i*80+40, 100); //fill填顏色
                     //兩個相隔 /高度
  }
}
void mousePressed(){//按一下，讓數字依序出現
   n++;
}
