//圖的鄰接矩陣儲存法
#include <iostream>
using namespace std;
int main()
{
	int array[101][101];
	//初始化陣列
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			//自己對上自己的狀況預設為0
			if (i == j)
				array[i][j] = 0;
			else
				//如果兩者並沒有相連
				//這邊假設2是無限
				array[i][j] = 2;
	int a, b;
	while (cin >> a >> b)
	{
		if (a < 0)
			break;
		array[a][b] = array[b][a] = 1;
	}
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	return 0;
}