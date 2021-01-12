#include <string>
#include<vector>
#include <iostream>
#define LL long long
using namespace std;
const  int MOD = 1000000007;
int main() {
    LL N, K,st,en,add;
    cin >> N >> K;
    LL res = 0;
    for (LL i = K; i <= N + 1; i++) {
        st = i * (i - 1) / 2;
        en = (N * 2 - i + 1) * i / 2;
        add = en - st + 1;
        res = (res + add) % MOD;
    }       
    cout << res << endl;
}
//노가다 하면서 식정리
/* 
i개 더하고있는 최소의 정수 (a 한다) ㅁ
i개 더해 최대의 정수를 요청 (b 한다)
완성 정수 b - a + 1 개이다
*/