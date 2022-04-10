#include"stdc++.h"
using namespace std;
/*
整个20世纪（1901年1月1日至2000年12月31日之间），一共有多少个星期一？
2022/12/13是周日 
*/
bool check(int year){
	return ((year%4==0 && year%100!=0)|| year %400==0);
}
int main(){
	int result=0;
	for(int y=1901;y<=2000;y++){
		//是闰年就加366天 
		if(check(y)){
			result+=366;
		}else{
			result+=365;
		}
	}
	cout<<result/7;
	system("pause");
	return 0;
}