void setup(){//�]�w
   size(400,200);
}
void draw(){//�C��e60��
  background(#FFD26F);
  fill(255);//�զ�
  ellipse( 50 ,50 ,80 ,80);//�e��
  ///       ���,  �e  ��
  fill(#488BD1);///�Ŧ�
  float start=mouseX/50.0;
  textSize(50);
  text(start ,100,100);
  arc( 50, 50, 80, 80,  0+start,  0.1+start);///�e�꩷
  ///   ���   �e  ��      �}�l   ����(����)(�e���p���I�A�i�H�վ�꩷���j�p)
  //��arc���k���ѦҸ�ƥi�H���D�L�p��ϥΡC
}
