#include <bits/stdc++.h>
using namespace std;
// n3rdy_c0uch
int main()
{
	int n = 100;
	vector<int> num;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		num.push_back(val);
	}
	int saved = 0;
	for (int i = 0; i < n; i++)
	{
		int index = i;

		for (int j = 0; j < n * 0.5; j++)
		{
			if (num[index] == i)
			{
				saved++;
				break;
			}
			else
			{
				index = num[index];
			}
		}
	}
	cout << saved << endl;
	float prob = 0;
	prob = (float)saved / n;
	cout << prob << endl;
}
