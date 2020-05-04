#include<iostream>
using namespace std;
 
 
int main(){
    int a[205][205];
    int b[205][205];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
           cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           b[i][j] = a[m - j - 1][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d",b[i][j]);
            (j != m - 1) && printf(" ");
        }
        printf("\n");
    }
 
  return 0;
}

