#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int hh, mm, ss, amp;
	hh = t / 3600;
	mm = t % 3600 / 60;
	ss = t % 60;
	if(hh > 12){
		hh -= 12;
	}
	if( t < 12 * 3600){
		printf("%02d:%02d:%02d am",hh, mm, ss);
	}
	else if(t > 13 * 3600){
		printf("%02d:%02d:%02d pm",hh, mm, ss);
	}
	else{
		printf("%02d:%02d:%02d midnoon",hh, mm, ss);
	}
	return 0;
}

