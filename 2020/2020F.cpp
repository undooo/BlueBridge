#include"stdc++.h"
using namespace std;

/*

ÿ��ѧ���ĵ÷ֶ���һ��0 ��100 ��������
�������ο��Ե���߷֡���ͷֺ�ƽ���֡�

*/
int main(){
	
	int stu=0,sum=0;
	cin>>stu;
	vector<int> score(stu,0);
	for(int i=0;i<stu;i++){
		cin>>score[i];
		sum+=score[i];
	}
	sort(score.begin(),score.end());
	cout<<score[stu-1]<<endl;
	cout<<score[0]<<endl;
	printf("%4.2f",sum/stu);
	return 0;
}
 
