#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, sum, flag1, flag = 0;
	string s;
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	string check = "10X98765432";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = 0, flag1 = 0;
		cin >> s;
		for (int j = 0; j < 17; j++)
		{
			if (isdigit(s[j])) sum += (s[j] - '0')*weight[j];
			else
			{
                flag++;
				flag1++;
				cout << s << endl;
				break;
			}
		}
		if (check[sum % 11] != s[17] && flag1 == 0)
		{
			flag++;
			cout << s << endl;
		}
	}
	if (flag == 0) cout << "All passed";
	return 0;
}
