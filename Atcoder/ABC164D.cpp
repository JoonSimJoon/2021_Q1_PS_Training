#include <iostream>
#include <vector>
#include <string>
using  namespace std;
int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector < long  long > val(2019, 0);
    long long fac = 1;
    long long cur = 0;
    val[cur] ++;
    for (int i = 0; i < N; ++i) {
        long long add = S[N -1 - i] - '0';
        cur =(cur + fac * add) % 2019;
        fac =(fac * 10) % 2019;
        val[cur]++;
    }
    long long res = 0;
    for (int i = 0; i < val.size(); ++i) {
        res += val[i] * (val[i] - 1) / 2;
    }
    cout << res << endl;
}

// S[a]= a��° �ڸ�������, S[a](mod m)=S[b](mod m) �̸� S[a]-S[b]�� m�� �����°� �̿�. ���� ��������� ����