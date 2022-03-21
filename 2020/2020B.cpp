//既约分数
/*
如果一个分数的分子和分母的最大公约数是 1，这个分数称为既约分数。
例如， 3/4 , 5/2 , 1/8 , 7/1 都是既约分数。
请问，有多少个既约分数，分子和分母都是 1 到 2020 之间的整数（包括 1
和 2020）？
*/ 

#include "bits/stdc++.h"
using namespace std;

int gcd(int m,int n){
	return n?gcd(n,m%n):m;
}
int main(){
	int sum=0;
	for(int i=1;i<=2020;i++){
		for(int j=1;j<=2020;j++){
			if(gcd(i,j)==1) sum++;
		}
	}
	cout<<sum;
    system("pause");
	return 0;
}