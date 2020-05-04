#include <iostream>
#include <algorithm>
using namespace std;
 
struct node{
  int a;
  int b;
};
 
int cmp(node x, node y){
    return x.b < y.b;
}
 
int main(){
  	int n;
  	cin >> n;
  	node stu[n + 1];
  	for (int i = 1; i <= n; i++){
  		stu[i].a = i;
  		cin >> stu[i].b;
  	}
  	stable_sort (stu + 1, stu + n + 1, cmp);
  	for (int i = 1; i <= n; i++){
  		cout << stu[i].a;
  		if(i != n) cout << " ";
  	}
  return 0;
}
