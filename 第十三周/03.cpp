void setup(){//���ʡA�u���@��
  size(1024,400);
}
void draw(){//���ʪ����A�C��e60��
  if(mousePressed)  background( 137 , 255 , 226 );//���U�h��
  else background(255 ,0 ,255);//�_�h �O�o���C��
  text(a,512 ,200);//�e�X��r
}
int a=0;
void mousePressed(){//����@�U
   a++;
}
