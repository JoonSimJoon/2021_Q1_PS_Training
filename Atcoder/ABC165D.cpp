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

//floor(Ax/b)<=A*floor(x/b) 이지만, floor(x/b)=0인경우를 생각하면 쉽게 풀린다. 단순 수학