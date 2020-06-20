#include <iostream>
using namespace std;
int main()
{
	//在於說用完可以把記憶體釋放掉
	cout << "class number：";
	int n, m;
	double ave[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "student number：";
		cin >> m;
		int* score = new int[m];
		double total = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> score[j];
			total += score[j];
		}
		ave[i] = total / m;
		cout << "ave = " << ave[i] << endl;
		delete score;
	}
	return 0;
}