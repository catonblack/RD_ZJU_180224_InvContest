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
    if (PhoneIsConected())
    {
      if(SentDataOver ==  NO)
      {
        SentDataToMobile();//将数据发送到手机
      }
    }
    else
    {
      Sleep(); 
      /*从休眠中唤醒*/

      Awake();
      ucPM = ReadDataFromPM();//读取PM2.5的值
      ucUV = ReadDataFromUV();//读取紫外线的值
      ucVOC = ReadDataFromVOC();//读取VOC传感器的值
      ucTEMP = ReadDataFromTEMP();//读取温度值
      ucRH = ReadDataFromRH();//读取湿度值

      SaveData();
    }
  }  
}

