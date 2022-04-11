int F1,F2;
int verity;
 
void setup()
{
 Serial.begin(9600); //指定串口通讯比特率为9600
}
void loop()
{
 
 //F1 = Filter(analogRead(A0))/4;       // 获得滤波器输出值
 //F2 = Filter(analogRead(A1))/4;       // 获得滤波器输出值 1024-->256
 Serial.write(0xff);
 Serial.write(0xff);
 Serial.write(analogRead(A0)); // 串口输出
 Serial.write(analogRead(A1)); // 串口输出
 //Serial.println(F2); // 串口输出
 Serial.write(0x0a);
 Serial.write(0x0d);

 delay(10);
}
