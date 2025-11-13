#ifndef CONSTANT_H
#define CONSTANT_H
 // 列車（ESP32-S3）の STAモードMACアドレスを入力
uint8_t trainAddress[] = {0x98, 0x3D, 0xAE, 0x60, 0x05, 0x38};

//Train>>>Station受信データ（電圧）
typedef struct struct_message {
  //int command;     // 0=停止, 1=前進, 2=後退など
  float voltage;   // 電圧（列車からの返信用）
} struct_message;
struct_message recvData;
//// Station→Trainへデータ（電圧＋フラグ）
typedef struct struct_return {
  float newvoltage;
  uint8_t flag;
  uint16_t Send1;
} struct_return;
struct_return sendData;

uint32_t pwm;
const int VALUE_MAX = 255;      // PWMの最大値
const int ledPin =6;
const int in1 = 1;//23
const int in2 = 2;//22
const int freq = 5000; 
#define resolution 8
const int ch1 =1;
const int ch2 =2;
const int ch0 =0;
int webstopFlag=0;
bool ledFlag = true;      // LED制御フラグ
bool UpdateFlag = false;
String UpdateURL = "";
//===================================
  int Send1;//speed
  int Send2;//speed
  int Send3;//speed
  int Send4;//speed
  int ctr;
  int Train1;//poji
  int Train2;//poji
  int Train3;//poji
  int Train4;//poji
  int Data5;   //servo In
  int Data6;  //servo Out
  int Data7;   //sub_start   1 
  int T2ADC;
 
#endif
//----------------------------------------
