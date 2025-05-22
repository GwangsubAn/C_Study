
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
int hour, min, sec;
double time = 3.76; // 0.76 * 60 45.6 0.6*60 = 36
double temp;
temp = time;

hour = time;  // hour : 3
time -= hour;  // time : 0.76
// printf("time: %.2lf\n", time);

time *= 60; // time: 45.6 
min = time; // min : 45

time -= min;  // time=0.6
//printf("time: %.2lf\n", time);

sec = time * 60;

printf("%.2f는 %d시간 %d분 %d초 입니다\n", temp, hour, min, sec);
return 0;
}