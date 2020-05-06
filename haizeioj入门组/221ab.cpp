#include<iostream>
#include<cstdio>
#include<algorithm>
#define N 1000005
using namespace std;
struct node {
    int h,id;
} e[N];
bool cmp(node a,node b) {
    return a.h<b.h;
}
int a[N],b[N],ans[N];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        cin>>e[i].h;
        e[i].id=i;
    }
    for(int i=1; i<=m; i++) {
        cin>>a[i];
    }
    sort(e+1,e+n+1,cmp);
    sort(a+1,a+m+1);
    int pos=0;
    for(int i=1; i<=n; i++) {
        int now=upper_bound(a+1,a+m+1,e[i].h)-a-1;
        if(now-pos>0) {
            ans[e[i].id]=now-pos;
            pos=now;
        }
    }
    for(int i=1; i<=n; i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}
