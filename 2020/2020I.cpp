/*
平面上有N条直线，其中第 i 条直线是y=Ai⋅x+Bi。请计算这些直线将平面分成了几个部分。
*/

#include"bits/stdc++.h"
using namespace std;
//本题的核心思路在于：
//新增线所能贡献的平面=交点数+1 


//创建一个二维数组，用于保存线条数据
double line[1024][2]; 
int main(){
	//读取线条数
	int length=0;
	long long res=1;
	cin>>length;
	bool visited[1024];
	for(int i=0;i<length;i++){
		cin>>line[i][0]>>line[i][1];
		//设置一个set，保存交点数
		set<pair<long double,long double>> pointSet;
		//bool
		visited[i]=false;
		//判断是否重边，平行，交点数
		for(int j=0;j<i;j++){
			if(visited[j]) continue;
			//判断重边
			if(line[i][0]==line[j][0]&&
			   line[i][1]==line[j][1]){
			   visited[i]=true;
			   break;
			//判断平行	
			}else if(line[i][0]==
					 line[j][0]){
				continue;		 	
			} 
			//计算交点
			pair<double,double> point;
			point.first=(-line[i][1]+line[j][1])/(line[i][0]-line[j][0]);
			point.second=line[i][0]*point.first+line[i][1];
			pointSet.insert(point);
			
		}
		res+=visited[i]?0:pointSet.size()+1; 
	} 
	cout<<res;
	return 0;
} 