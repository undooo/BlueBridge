#include"stdc++.h"
using namespace std;


string mymap[10];
bool flag=false,vis[10][10];

void dfs(int x,int y){
	//判断是否走出了迷宫
	if(x<0 || x>9 || y<0 || y>9){
		flag=true;
		return;
	} 
	if(vis[x][y]==true){
		return;
	}
	vis[x][y]=true;
	//若没有，则继续走
	switch(mymap[x][y]){
		case 'U':
			dfs(x-1,y);
			break;
		case 'D':
			dfs(x+1,y);
			break;
		case 'L':
			dfs(x,y-1); 
			break;
		case 'R':
			dfs(x,y+1);
			break;
	}
	return;
}
int main(){
	int ans=0;
	//读取数据 
	for(int i=0;i<10;i++){
		cin>>mymap[i];
	}
	//对每个点进行深度优先遍历
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			//重置属性
			flag=false;
			memset(vis,false,sizeof(vis));
			dfs(i,j); 
			if(flag==true) ans++;
		}
	} 
	cout<<ans;
	return 0;
}