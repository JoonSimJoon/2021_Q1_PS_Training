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
//�밡�� �ϸ鼭 ������
/* 
i�� ���ϰ��ִ� �ּ��� ���� (a �Ѵ�) ��
i�� ���� �ִ��� ������ ��û (b �Ѵ�)
�ϼ� ���� b - a + 1 ���̴�
*/