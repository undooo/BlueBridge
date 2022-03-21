//既约分数
/*
小蓝每天都锻炼身体。
正常情况下，小蓝每天跑 1 千米。如果某天是周一或者月初（1 日），为了
激励自己，小蓝要跑 2 千米。如果同时是周一或月初，小蓝也是跑 2 千米。
小蓝跑步已经坚持了很长时间，从 2000 年 1 月 1 日周六（含）到 2020 年
10 月 1 日周四（含）。请问这段时间小蓝总共跑步多少千米？
*/
#include "bits/stdc++.h"
using namespace std;

int dd[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	//初始化当前状态
	int week=6,ans=0; 
	
	//逐年判断
	 
	for(int i=2000;i<=2020;i++){
		//通过是否为闰年来修改二月的值
		if((i%4==0 && i%100!=0) || i%400==0){
			dd[2]=29;
		} else{
			dd[2]=28;
		}
		//对月遍历 
		for(int month=1;month<=12;month++){
			//对日遍历
			for(int day=1;day<=dd[month];day++){
				ans++;
				if(week==1 || day==1){
					ans++;
				}
				week=(week+1)%7==0?7:(week+1)%7;
				if(i==2020 && month==10 && day==1){
					cout<<ans;
				}
				
			} 
			
			
		}
		
	}	
	
	system("pause");
	return 0;
}