void setup(){//�]�w
   size(400,300);
}
float start=0;///�}�l���
void draw(){//�C��e60��
  background(#FFD26F);
  //fill(255);//�զ�
  //ellipse( 100 ,100 ,180 ,180);//�e��A���X�~��C
  //fill(#488BD1);///�Ŧ�
  if(start<10) start+=0.01;///�ƨ�10�N��//���Nfloat start=mouseX/50.0;
  fill(255);text( start ,200,150);
  for(int i=0;i<24;i++){///���C��
     float shift=2*PI*i/24.0;///2PI�O�@�Ӷꪺ����;�g�I�s�O�ȥX��
     if(i%3==0) fill(100);///�Q�ξl�ƪ��D�C���\���A�C�@�Ө��פ@���C��
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///�]�w�o�Ӥ@���O�����I
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///�e�꩷
                                                   //�b�� PI/12����2*PI/24�@��
  }
}
