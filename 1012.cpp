#include<iostream>
using namespace std;
int main()
{
	int n, a[10001] = {0}, sum_A1 = 0, sum_A2 = 0, sum_A3 = 0, sum_A4 = 0, s = 0, m = 1, max_A5 = 0, t = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % 5 == 0 && a[i] % 2 == 0) sum_A1 += a[i];
		if(a[i] % 5 == 1){
			sum_A2 += m * a[i];
			m = -m;
			t = 1; 
		}
		if(a[i] % 5 == 2) sum_A3++;
		if(a[i] % 5 == 3){
			sum_A4 += a[i];
			s++;
		} 
		if(a[i] % 5 == 4) max_A5 = max(a[i], max_A5);
	}
	if(sum_A1 == 0) cout << "N" << " ";
	else cout << sum_A1 << " ";
	if(t == 0) cout << "N" << " ";
	else cout << sum_A2 << " ";
	if(sum_A3 == 0) cout << "N" << " ";
	else cout << sum_A3 << " ";
	if(sum_A4 == 0) cout << "N" << " ";
	else printf("%.1lf ", sum_A4 * 1.0 / s);
	if(max_A5 == 0) cout << "N";
	else cout << max_A5;
	return 0;
}
