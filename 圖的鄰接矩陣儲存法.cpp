//�Ϫ��F���x�}�x�s�k
#include <iostream>
using namespace std;
int main()
{
	int array[101][101];
	//��l�ư}�C
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			//�ۤv��W�ۤv�����p�w�]��0
			if (i == j)
				array[i][j] = 0;
			else
				//�p�G��̨èS���۳s
				//�o�䰲�]2�O�L��
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