void setup(){
  size(1024,400);
  textFont( createFont("�з���", 80));///��ܤ���
}
void draw(){///�]���t�η|�C���s�A�ҥH�~�|�W�[
  background( #8C61B2 );//��X
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 ///�ѦҤ��i�H���
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //�Ʀr+ �r��  �Ʀr + �r�� �Ʀr
    // ����r��    ����r��
  int total = s + 60*m + 60*60*h; ///�ؼ��`���
  int closeH=17 ,closeM=40,closeS=0;///��������T�ɶ�
  int total2= closeS + 60*closeM + 60*60*closeH; ///�ؼ��`���
  int ans = total2-total;
  text("�ѤU�X��:" + ans,100,100);
}
