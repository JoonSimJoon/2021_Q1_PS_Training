#include <iostream>
#include <math.h>
using namespace std;
#define LL long long
LL A, B, N,ans;
int main() {
	cin >> A >> B >> N;
	if (B > N) {
		ans = (A * N) / B;
	}
	else {
		ans = (A * (B - 1)) / B;
	}
	cout << ans;
	return 0;
}

//floor(Ax/b)<=A*floor(x/b) ������, floor(x/b)=0�ΰ�츦 �����ϸ� ���� Ǯ����. �ܼ� ����