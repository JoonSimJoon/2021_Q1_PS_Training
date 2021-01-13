#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
using namespace std;
int s[200010];
vector <int> v[200010];
int main()
{

    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    s[1] = 0;
    q.push(1);
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (int i = 0; i < v[a].size(); i++)
        {
            if (s[v[a][i]] == 0 && v[a][i] != 1)
            {
                q.push(v[a][i]);
                s[v[a][i]] = a;
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << s[i] << endl;
    }  
    return 0;
}

// 최소로 가기 위해서 제시된 길들에서 옳은 거를 고르는 문제. 설명이 이상한데 사진으로 설명
// a에서 출발해서 1로 가는 가장 빠른 길에서 a 다음 번호 출력 (다음번호는 당연히 a랑 연결)
