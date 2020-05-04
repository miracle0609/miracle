#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e5+7;
int n;
int bit[maxn];
int arr[maxn];
int vis[maxn]; 
int sum(int i){
    int s = 0;
    while(i > 0){
        s += bit[i];
        i -= i & -i;
    }
    return s;
}
void add(int i, int x){
    while(i <= n){
        bit[i] += x;
        i += i & -i;
    }
}
void solve(){
    int ans = 0;
    for(int j = 0; j < n; j++){
        ans += j - sum(arr[j]);
        add(arr[j], 1);
    }
    cout << ans << endl;
}
int main() {
    memset(vis,0,sizeof(vis));
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    solve();
    return 0;             
}
