#include "main.h"

int main(void)
{
  uint ucPM;
  uint ucUV;
  uint ucVOC;
  uint ucTEMP;
  uint ucRH;

  init_sys();

  while(1)
  {
    Sleep(); 
    /*�������л���*/

    Awake();
    ucPM = ReadDataFromPM();//��ȡPM2.5��ֵ
    ucUV = ReadDataFromUV();//��ȡ�����ߵ�ֵ
    ucVOC = ReadDataFromVOC();//��ȡVOC��������ֵ
    ucTEMP = ReadDataFromTEMP();//��ȡ�¶�ֵ
    ucRH = ReadDataFromRH();//��ȡʪ��ֵ

    SentDataToMobile();//�����ݷ��͵��ֻ�
  }  
}

