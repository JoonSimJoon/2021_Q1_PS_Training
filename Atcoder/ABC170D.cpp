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
//�̰� 169���� ����� ������ ������ �� �� �������̾�~
//m�迭�� �ִ��� ������ üũ�ϴ� �迭 
// 21��° ���� j=1�϶� ����ó�����ִ� ���ǹ�