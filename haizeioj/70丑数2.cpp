#include<iostream>
using namespace std;
int fun(int n){
	while(n % 2 == 0){
		n /= 2;
	}
	while(n % 3 == 0){
		n /= 3;
	}
	while(n %5 == 0){
		n /= 5;
	}
	if(n == 1) return 1;
		return 0;
}
int main(){
	int n;
	cin >> n;
	cout << "1" <<'\n';
	for(int i = 2; i <= n; i++){
		if(fun(i))cout  << i <<'\n';
	}
	return 0;
}
