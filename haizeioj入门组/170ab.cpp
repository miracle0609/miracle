#include<iostream>
#include<cstring>
using namespace std;
 
const int maxn = 10000+5;
const string p = "Ban_smoking", q = "No_smoking";
 
int main(){
  int n;
  cin >> n;
  
  string b[maxn];
  for(int i = 1; i <= n; i++) cin >> b[i];
  
  for(int i = 1; i <= n; i++){
  	int a;
  	a = b[i].find(p);
  	while(a != -1){
  	  b[i].replace(a, p.size(), q);
  	  a = b[i].find(p);
	}
	cout << b[i] << endl;
  }
  return 0;
}
