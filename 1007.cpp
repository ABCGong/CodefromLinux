#include<iostream>
#include<cmath>
using namespace std;
int pdss(int x);
int pdssd(int x, int y);
int main()
{
	int n, a[10001], s, m = 0, sum = 0;
	cin >> n;
	for(int i = 2; i <= n; i++){
		s = pdss(i);
		if(s == 1) a[m++] = i;
	}
	for(int i = 1; a[i] != '\0'; i++){
		sum += pdssd(a[i - 1], a[i]);
	}
	cout << sum;
	return 0;
}
int pdss(int x)
{
	if(x == 0 || x == 1) return 0;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return 0;
	}
	return 1;
}
int pdssd(int x, int y)
{
	if(y - x == 2) return 1;
	return 0;
}
