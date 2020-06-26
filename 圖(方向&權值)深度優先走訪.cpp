//�涵�B���v��
//���
/*
1 2 2
1 5 10
2 3 3
2 5 7
3 1 4
3 4 4
4 5 5
5 3 3
�D����1�쫰��5���̵u�Z��
*/
#include<iostream>
#include<iomanip>
using namespace std;
int  min = 10000;
int bucket[100] = { 0 };
int map[101][101] = { 0 };
void dfs(int step, int dis)
{
	if (dis > min)
		return;
	//reach the target
	if (step == 5)
	{
		if (dis < min)
			min = dis;
		return;
	}
	for (int i = 1; i <= 5; i++)
		//�����i�H���B�|�����L
		if (map[step][i] != -1 && bucket[i] == 0)
		{
			bucket[i] = 1;
			dfs(i, dis + map[step][i]);
			bucket[i] = 0;
		}
}
int main()
{
	int n, m;
	cout << "�����ƶq�G";
	cin >> n;
	cout << "�D���q�G";
	cin >> m;
	//��l�ư}�C
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j)
				map[i][j] = 0;
	//����-1���L��
			else
				map[i][j] = -1;
	int start, end, distance;
	for (int i = 0; i < m; i++)
	{
		//cout << "��" << i + 1 << "�ӫ���" << endl;
		cin >> start >> end >> distance;
		//y��x
		map[start][end] = distance;
	}
	cout << "�w���a��" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << setw(4) << map[i][j];
		cout << endl;
	}
	bucket[1] = 1;
	dfs(1, 0);
	cout << min << endl;
	return 0;
}