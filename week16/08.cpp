void setup(){
   size(400,260);
}
float start=0  , v=0,  x=0;///�}�l���///v�O���઺�t�סAX�O������ϥΪ�
void mousePressed(){
  v= random(1); ///�üƨ��@�ӼƦr
}
void draw(){
  background(#FFD26F);
  if(v>0.001){///��t�פj��0.01�N�|���
    start+=v;///��m�B�t�סB�[�t��(��m�|+�t��)
    v*=0.99;///�����O�|���t���ܺC(�t�׷|+�[�t��)
    x +=v*2;
  }  ///��gif(start<10) start+=0.05;///�ƨ�10�N��//���Nfloat start=mouseX/50.0;
  rect(x,200, 50,50);///�����֤��
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;///2PI�O�@�Ӷꪺ����;�g�I�s�O�ȥX��
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///�]�w�o�Ӥ@���O�����I
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///�e�꩷
  }
}
