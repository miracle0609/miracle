#include <iostream>
#include <cstring> 
using namespace std;



string ans(string s1, string s2, int n)
{
	int len1 = 0, len2 = 0, j = 0, len3, k = 0;
	char s4[30];
	len1 = s1.size();
	len2 = s2.size();
	for (int i = 0; i < n; i++) 
	{ 
		j++; 
	}
	for (int i = 0; i < len1; i++)
	{ 
		s4[k++] = s1[i];
	}
	for (int i = 0; i<len2; i++)
		s1[j++] = s2[i];
	for(int i=n;i<len1;i++)
		s1[j++] = s4[i];
	s1[j] = '\0';
	return s1;
}

int main() {
	string a, b;
	int n;
	cin >> a;
	cin >> n;
	cin >> b;
	int lena = a.size();
	int lenb = b.size();
	if (lena > 100) {
		cout << 100 << endl;
	} else cout << lena<< endl; 
	cout << ans(a, b, n) << endl;
	//string c = ans(a, b, n);
	//cout << find(c) << endl;
	return 0;
}
