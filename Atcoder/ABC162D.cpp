#include <string>
#include<vector>
#include <iostream>
using namespace std;
int main() {
    long long int N, R = 0, G = 0, B = 0, NG = 0; 
    string S; 
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') R++;
        if (S[i] == 'G') G++;
        if (S[i] == 'B') B++;
    }
    for (int i = 1; i <= N / 2; i++)
        for (int j = 0; j < N - 2 * i; j++)
            if (S[j] != S[j + i] && S[j + i] != S[j + 2 * i] && S[j + 2 * i] != S[j]) NG++;
    cout << R * G * B - NG << endl;
}
//되는것들 중에서 거리가 같은거 제외