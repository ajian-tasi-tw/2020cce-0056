void setup(){
   size(400,250);
}
float start=0  ,v=0.07;///�}�l��ơAv�O���઺�t��
void draw(){
  background(#FFD26F);
  if(v>0.001){///��t�פj��0.01�N�|���
    start+=v;///��m�B�t�סB�[�t��(��m�|+�t��)
    v*=0.99;///�����O�|���t���ܺC(�t�׷|+�[�t��)
  }///��gif(start<10) start+=0.05;///�ƨ�10�N��//���Nfloat start=mouseX/50.0;
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);/
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);
  }
}
