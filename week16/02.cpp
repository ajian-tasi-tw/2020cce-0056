void setup(){//�]�w
   size(400,200);
}
void draw(){//�C��e60��
  background(#FFD26F);
  fill(255);
  ellipse( 50 ,50 ,80 ,80);//�e��
  ///       ���,  �e  ��
  fill(255,0,0);///����
  float stop=mouseX/50.0;//��ƹ���
  text( stop ,100 ,100);//���ͷƹ����׼Ʀr
  arc( 50, 50, 80, 80,  0,  stop );///�e�꩷
  //    ���   �e  �� �}�l  ����(����)
  //��arc���k���ѦҸ�ƥi�H���D�L�p��ϥΡC
}
