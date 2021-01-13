#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define LL long long
LL N,M,mn=-1,ans;
LL arr[1000010];
vector<LL> v;
int main() {
	cin >> N;
	if (N == 1) {
		cout << "0" << endl;
		return 0;
	}
	M = N;
	while (M != 1) {
		LL me = M;
		for (LL i = 2; i * i <= N; i++) {
			if (M % i == 0) {
				arr[i]++, M /= i; 
				break;
			}
		}
		if (me == M) {
			ans++;
			break;
		}
	}
	LL tmp = 1;
	for (LL i = 0; i*i <= N; i++) {
		if (arr[i] != 0) {
			while (arr[i] >= tmp) {
				arr[i] -= tmp;
				tmp++;
				ans++;
			}
			tmp = 1;
		}
	}
	cout << ans << endl;
	return 0;
}

//이상한 삽질함 ㅎㅎ;
