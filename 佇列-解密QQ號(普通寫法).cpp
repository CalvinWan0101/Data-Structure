//��J9�ӼƦr
//�R����1�Ӧr�P�ɱN��2�Ӧr�ƨ�l���
//�O���R�����r�զX���s���Ʀ�
//��X�s���Ʀ�
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int head = 1,tail = 1;
	int input[100];
	for (int i = 1; i <= 9; i++)
	{
		cin >> input[i];
		tail++;
	}
	//��head!=tail�]�N�O�X�k�d�򤣬�0
	while (head< tail)
	{
		cout << input[head];
		head++;
		input[tail] = input[head];
		head++;
		tail++;
	}
	system("PAUSE");
	return 0;
}