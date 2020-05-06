#include <iostream>
using namespace std;
const int N = 1e6+10;
int n, m, x, y, q, num, type;
set<int>s[N];
map<int,int>vis;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        for(int j = 1; j <= num; j++)
        {
            cin >> y;
            s[i].insert(y);
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> type >> num;
        vis.clear();
        for(int i = 1; i <= num; i++)
        {
            cin >> x;
            for(set<int>::iterator it = s[x].begin(); it != s[x].end(); it++)
                vis[*it]++;
        }
        for(int i = 1; i <= m; i++)
        {
            if(type == 0 && !vis[i])printf("%d ",i);
            else if(type == 1 && vis[i] == num)printf("%d ",i);
        }
        cout << endl;
    }
    return 0;
}

