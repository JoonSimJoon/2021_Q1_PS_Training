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

// �ּҷ� ���� ���ؼ� ���õ� ��鿡�� ���� �Ÿ� ���� ����. ������ �̻��ѵ� �������� ����
// a���� ����ؼ� 1�� ���� ���� ���� �濡�� a ���� ��ȣ ��� (������ȣ�� �翬�� a�� ����)
