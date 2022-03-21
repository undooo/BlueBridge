#include <bits/stdc++.h>
using namespace std;
//出现02月29时，年份只能是9220，一定合法，不必判断闰年
int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int n;
  
int reverse_num(int x) { //反转整数
    int ret = 0;
    while (x) {
        ret = ret * 10 + x % 10;
        x /= 10;
    }
    return ret;
}
  
bool check(int x) {      //检查日期是否合法
    if (x <= n) return false;
    int dd = x % 100;
    x /= 100;
    int mm = x % 100;
    return mm > 0 && mm < 13 && dd <= days[mm];
}
  
int main() {
    cin >> n;
    for (int i = n / 10000; i <= 9999; i++) { //取前四位构造回文日期
        int x = i * 10000 + reverse_num(i);
        if (check(x)) {
            cout << x << endl;
            break;
        }
    }
    for (int i = n / 1000000; i <= 99; i++) { //取前两位构造 ABABBABA 形日期
        int x = i * 1000000 + i * 10000 + reverse_num(i) * 100 + reverse_num(i);
        if (check(x)) {
            cout << x << endl;
            break;
        }
    }
	system("pause");
    return 0;
}