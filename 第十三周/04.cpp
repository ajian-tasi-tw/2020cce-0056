void setup(){//���ʡA�u���@��
  size(1024,400);
}
void draw(){//���ʪ����A�C��e60��
  if(mousePressed)  background( 137 , 255 , 226 );//���U�h��
  else background(255 ,0 ,255);//�_�h �O�o���C��
  textSize(55);//��r���j�p�i�H��
  text("�S����Now is:"+ a ,212 ,200);//�e�X��r
      // + ��r�[�k�|�N��r��Ʀr�[�b�@�_(�s�F��)
}
int a=0;
void mousePressed(){//����@�U
   a++;
}
