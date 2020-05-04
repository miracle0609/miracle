#include <iostream> 
#include <cstring>
using namespace std;
typedef struct stu {
	string a;
};

int main() {
	int n;
	cin >> n;
	stu k[n + 5];
	int p = 0;
	while (n--) {
		cin >> k[p].a;
		for (int i = 0; i < k[p].a.size(); i++) {
			if (k[p].a[i] == 'B') {
				if (k[p].a[i + 1] == 'a' && k[p].a[i + 2] == 'n' && k[p].a[i + 3] == '_' && k[p].a[i + 4] == 's')  {
					for (int j = i; j <= i + 4; j++) {
						k[p].a[i] = 'N';
						k[p].a[i + 1] = 'o'; 
					}
					for (int j = i + 2; j <= k[p].a.size(); j++) {
						k[p].a[j] = k[p].a[j + 1];
					}  
				}
			} 
		}
		p++;
	}
	for (int i = 0; i < p; i++) {
		cout << k[i].a << endl;
	}
	return 0;
} 
