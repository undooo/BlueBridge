#include"stdc++.h"
using namespace std;
/*
如下的10行数据，每行有10个整数，请你求出它们的乘积的末尾有多少个零？
*/

int two,five;

void work(int x){
	int xx=x;
	while(xx%2==0){
		two++;
		xx/=2;
	}
	xx=x;
	while(xx%5==0){
		five++;
		xx/=5;
	}
	return;
}
int main(){
	int singal=0,ans=0;
	for(int i=1;i<=100;i++){
		scanf("%d",&singal);
		work(singal);
	}
	printf("%d",min(two,five));
	system("pause");
	return 0;
}