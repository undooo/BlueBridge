#include "bits/stdc++.h"
using namespace std;

bool cmp(int num){
	return num!=0;
}
int fun(string & sub){

	vector<int> bucket(128,0);
	for(int i=0;i<sub.length();i++){
		bucket[sub[i]]++;
	}
	return count_if(bucket.begin(),bucket.end(),cmp);
}

int main(){
	//读取字符串
	string str;
	cin>>str;
	
	int sum=0,length=str.size();
	//遍历每一种可能，并判断函数值 
	for(int i=0;i<length;i++){
		for(int j=1;j<=length-i;j++){
			string sub=str.substr(i,j);
			sum+=fun(sub);
		}
	}
	cout<<sum;
	
	system("pause");
	return 0;
} 