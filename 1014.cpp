#include<bits/stdc++.h>
using namespace std;

int main(){
	string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	string a, b, c, d;
	int next;
	cin >> a >> b >> c >> d;
	for(int i = 0; i < a.length() && i <b.length() ; i++){
		if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'O'){
			cout << day[a[i] - 'A'] << " ";
			next = i;
			break;
		}
	}
	for(int i = next + 1; i < a.length() && i < b.length(); i++){
		if(a[i] == b[i] ){
			if(a[i]>='0'&&a[i]<='9') printf("%02d:",a[i]-'0');
			else if(a[i] <='O'&&a[i]>='A') printf("%02d:", a[i]-'A'+10);
			break;
		}
	}
	for(int i = 0; i < c.length() && i < d.length(); i++){
		if(d[i] == c[i] &&  ((d[i]>='A'&d[i]<='Z')||(d[i]<='z'&&d[i]>='a'))){
			printf("%02d", i);
			break;
		}
	}
	return 0;
} 


