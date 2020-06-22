#include<iostream>
using namespace std;
int main()
{
	int n;
	int array[200];
	int tail, head, count;
	while (cin >> n)
	{
		if (n == 0)
			break;
		else if (n == 1)
		{
			cout << "Discarded cards: " << endl;
			cout << "Remaining card: 1" << endl;
			continue;
		}
		count = 0;
		//初始化陣列
		for (int i = 1; i <= n; i++)
			array[i] = i;
		head = 1;
		//tail的初始值為n+1
		tail = n + 1;
		cout << "Discarded cards: ";
		while (true)
		{
			if (head >= tail)
				break;
			count++;
			if (count == n - 1)
			{
				cout << array[head] << endl;
				break;
			}
			else
				cout << array[head] << ", ";
			head++;
			array[tail] = array[head];
			tail++;
			head++;
		}
		cout << "Remaining card: " << array[tail - 1] << endl;
	}
	return 0;
}