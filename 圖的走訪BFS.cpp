#include<iostream>
using namespace std;
int main()
{
	int a, b, n, map[101][101];
	int bucket[101] = { 0 }, array[11000] = { 0 };
	cout << "�I�ơG";
	cin >> n;
	//��l�ư}�C
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j)
				map[i][j] = 0;
			else
				//����2���L��
				map[i][j] = 2;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		//�L�V��+�챵�N��1
		map[a][b] = map[b][a] = 1;
	}
	cout << endl;
	int head, tail;
	head = tail = 1;
	array[tail] = 1;
	tail++;
	bucket[1] = 1;
	while (true)
	{
		if (head >= tail)
			break;
		for (int i = 1; i <= n; i++)
			//��head�ѯR�Ӥ��
			if (map[array[head]][i] == 1 && bucket[i] == 0)
			{
				array[tail] = i;
				bucket[i] = 1;
				tail++;
			}
		head++;
	}
	for (int i = 1; i <= n; i++)
		cout << array[i] << " ";
	cout << endl;
		return 0;
}