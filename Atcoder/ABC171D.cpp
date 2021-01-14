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

//어 ? 너무 쉬운데? ㅋㅋㅋ 1분컷 낫다.
// 문제는 bi를 ci로 바꾸는거 각 숫자를 저장하는 배열과 합을저장하는 변수를 만들어서 뚝딱하면 된다
//asdd