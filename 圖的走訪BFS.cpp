#include<iostream>
using namespace std;
int main()
{
	int a, b, n, map[101][101];
	int bucket[101] = { 0 }, array[11000] = { 0 };
	cout << "點數：";
	cin >> n;
	//初始化陣列
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j)
				map[i][j] = 0;
			else
				//假裝2為無限
				map[i][j] = 2;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		//無向圖+鏈接就給1
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
			//跟head老爹來比較
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