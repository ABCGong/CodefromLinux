#include <iostream>
using namespace std;
int main() {
		string s, str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
		int sum = 0;
		cin >> s;
		for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
		string x = to_string(sum);
		for (int i = 0; i < x.size(); i++) {
			if (i != 0) cout << " ";					
			cout << str[x[i] - '0'];
		}
		return 0;
} 

