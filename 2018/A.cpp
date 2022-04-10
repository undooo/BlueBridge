#include"stdc++.h"
using namespace std;
long long gcd(long long a,long long b){
	return b==0?a:gcd(b,a%b);
}

int main(){
	long long res_up=1,res_down=1;
	long long low=2;
	for(int i=0;i<19;i++){
		//新的分子 
		res_up=res_up*low+1*res_down;
		//新的分母
		res_down=res_down*low;

        long long gcd_ab=gcd(res_up,res_down);
        res_up=res_up/gcd_ab;
	    res_down=res_down/gcd_ab;
     
		//更新下一项
		low*=2; 
        
	}
	//求最大公因数化简
    printf("%d/%d",res_up,res_down);
    system("pause");
	return 0;
}