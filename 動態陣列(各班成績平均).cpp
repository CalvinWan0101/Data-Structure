#include <iostream>
using namespace std;
int main()
{
	//�b�󻡥Χ��i�H��O��������
	cout << "class number�G";
	int n, m;
	double ave[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "student number�G";
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