#include <iostream>
using namespace std;
int map[101][101];
int bucket[101] = { 0 };
int n, sum = 0;
void dfs(int step)
{
	cout << step << " ";
	sum++;
	//所有點都跑完了直接返回
	if (sum == n)
		return;
	int i;
	for (i = 1; i <= n; i++)
		if ((map[i][step] == 1 || map[step][i] == 1) && bucket[i] == 0)
		{
			bucket[i] = 1;
			dfs(i);
		}
}
int main()
{
	int a, b;
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

	cout << "測試無向圖" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	bucket[1] = 1;
	dfs(1);
	return 0;
}