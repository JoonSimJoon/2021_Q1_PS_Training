#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define LL long long
vector<LL> v;
LL arr[100010];
LL N, Q, A, B, C,cnt;
int main() {
	cin >> N;
	for (LL i = 0; i < N; i++) {
		cin >> A;
		v.push_back(A);
		arr[A]++;
		cnt += A;
	}
	cin >> Q;
	for (LL i = 0; i < Q; i++) {
		cin >> B >> C;
		cnt += (C-B) * arr[B];
		arr[C] += arr[B];
		arr[B] = 0;
		cout << cnt << endl;
	}
	return 0;
}

//�� ? �ʹ� ���? ������ 1���� ����.
// ������ bi�� ci�� �ٲٴ°� �� ���ڸ� �����ϴ� �迭�� ���������ϴ� ������ ���� �ҵ��ϸ� �ȴ�
//asdd