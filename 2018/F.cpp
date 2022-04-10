#include"stdc++.h"
using namespace std;

//读取两行并进行处理 
int get(){
	//读取数据 
	
	cout<<a;
	char line[100]={};
	cin.getline(line,100);
	//判断读取形式
	int h1,m1,s1,h2,m2,s2,d=0;
	if(strlen(line)==17){
		sscanf(line,"%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	}else{
		sscanf(line,"%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);
	} 
	return (d*24+h2-h1)*3600+(m2-m1)*60+s2-s1;
}
int main(){
	
	int num;
	cin>>num;getchar();
	//对每一对数据进行处理 
	while(num--){
		//计算第一次飞行的时间 
		int time1=get();
		int time2=get();
		int time=(time1+time2)/2;
		printf("\n%02d:%02d:%02d\n",time/3600,time/60%60,time%60);
		
	}
    system("pause");
	return 0;
}