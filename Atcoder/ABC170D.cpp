#include <iostream>
#include <map>
#include <math.h>
using namespace std;
#define LL long long ;
main() {
    int n;
    cin >> n;
    int a[200010], cnt = 0;
    map<int, int>m;
    for (int i = 0; i < n; i++) {
        cin >> a[i], m[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        int flag = 1;
        if (a[i] == 1 && m[1] == 1) { cnt++; continue; }
        for (int j = 1; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                if (m[j]) { flag = 0; break; }
                if (a[i] / j != a[i] && m[a[i] / j]) { flag = 0; break; }
                if (a[i] / j == a[i] && m[a[i] / j] > 1) { flag = 0; break; }
            }
        }
        if (flag) cnt++;
    }
    cout << cnt;
}
//이게 169보다 쉬운거 같은데 ㅋㅋㅋ 왜 다 정수론이야~
//m배열은 있는지 없는지 체크하는 배열 
// 21번째 줄은 j=1일때 예외처리해주는 조건문