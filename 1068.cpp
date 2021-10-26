#include <iostream>
#include<math.h>
//̫����!!!ʲô�ж�һ�޶�!!!ֻ��һ��!!�����ǺͰ˸����ص��,����Ҫ���Ǳ߽�!!!!! 
using namespace std;
int a[1001][1001];
int nx[]={-1,-1,-1,1,1,1,0,0};
int ny[]={-1,0,1,0,-1,1,1,-1};
int n, m;
int tol;

long long s[20000000];
bool check(int x,int y) {//a��b��
	for (int i = 0;i < 8;i++) {
		int xx = x + nx[i];
		int yy = y + ny[i];
		if (xx >= 0 && xx < n&&yy >= 0 && yy < m&&abs(a[x][y] - a[xx][yy]) <= tol)
			return false;
	}
	return true;
}
int main()
{
	int count = 0;
	int h, l;
	int color;
	cin >> m >> n >> tol;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> a[i][j];
			s[a[i][j]]++;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (check(i,j)&&s[a[i][j]]==1) {
				count++;
				h = i;
                l = j;
                color = a[i][j];
			}
		}
	}
	if (count == 1) {
		cout << "(" << l+1 << ", " << h+1 << "): " << color;
	}
	else if (count > 1) {
		cout << "Not Unique";
	}
	else {
		cout << "Not Exist";
	}
	return 0;
}
