#include<iostream>
using namespace std;
int a[100005];

int ans(int l, int r, int x) {
    while(l < r)  {
        int mid = l + r+1 >> 1;
        if(a[mid] <= x) l = mid;
        else r = mid - 1;
    }
    return a[l];
}
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int t;
    for(int i = 1; i <= m; i++) {
        cin >> t;
        if(i != m) cout << ans(1, n, t) << ' ';
        else cout << ans(1, n, t);
    }
    return 0;
}


