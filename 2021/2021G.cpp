#include<bits/stdc++.h>
using namespace std;
/*
����һ����ƽ�� N �����룬�� N ���������������� W1, W2, �� �� �� , WN��
�������һ�����ԳƳ������ֲ�ͬ��������
ע��������Է�����ƽ���ߡ�
*/
vector<vector<int>> dp(105,vector<int>(100005,0));
vector<int> a;
int main()
{   //��ȡ�����Ϣ
    //��̬�滮���ӵ�һ�����뿪ʼ�������ж��Ƿ���и��������
    int num,singal_weight,sum=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>singal_weight;
        a.push_back(singal_weight);
        sum+=singal_weight;
    }
    dp[0][a[0]]=1;
    //�ӵڶ������뿪ʼ�ж�
    for(int i=1;i<num;i++){
        
        //������һ���״��
        for(int j=1;j<=sum;j++){
            dp[i][j]=dp[i-1][j];
        }
        //�Լ�����������϶����������
        dp[i][a[i]]=1;
        //֪������Щ֮�󣬿�ʼ�ж�֮ǰ��ֵ�뵱ǰ�������жϵ�����
        for(int k=0;k<=sum;k++){
            if(dp[i-1][k]==1){
                //��һ�֣����
             
                dp[i][k+a[i]]=1;
                //�ڶ��֣����
                
                dp[i][abs(k-a[i])]=1;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=sum;i++){
        ans=dp[num-1][i]==1?ans+1:ans;
    
    }
    cout<<ans;
   
    return 0;
}
