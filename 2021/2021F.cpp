#include"stdc++.h"
using namespace std;

int main(){
	long long time=0;
	cin>>time;
	//计算当天的秒数
	time=time%(24*60*60*1000);
	//计算小时数
	int hh=time/(60*60*1000);
	//分钟
	int mm=time%(60*60*1000);
	mm=mm/(60*1000);
	int ss=(time/1000)%60;
	printf("%02d:%02d:%02d",hh,mm,ss); 
	system("pause");
	return 0;
}