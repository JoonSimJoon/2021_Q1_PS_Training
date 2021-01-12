#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define LL long long
using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i], --A[i];
    deque<int> a;
    vector<bool> seen(N, false); 
    int cur = 0;
    while (true) {
        if (seen[cur]) {
            while (a[0] != cur) {
                --K;
                a.pop_front();
                if (K == 0) {
                    cout << a[0] + 1 << endl;
                    return 0;
                }
            }
            break;
        }
        a.push_back(cur);
        seen[cur] = true;
        cur = A[cur];
    }
    cout << a[K % a.size()] + 1 << endl;
    return 0;
}

//방문한적이 있을 때까지 반복, a-b-c-d-c-d.. 일수도 있으므로 시작전 전까지 pop
//숫자가 나오다가 주기가 반복할수도있다는걸 알면 쉽게 풀 수 있음
