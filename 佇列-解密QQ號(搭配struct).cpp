#include <iostream>
//��J9�ӼƦr
//�R����1�Ӧr�P�ɱN��2�Ӧr�ƨ�l���
//�O���R�����r�զX���s���Ʀ�
//��X�s���Ʀ�
using namespace std;
//�`�N�Gstruct���ԭz��������b�i}�j�᭱�ٻݭn�A�[�i;�j
struct �sQQ�����Q�����ǩf
{
	int QQ[100];
	int head;
	int tail;
};
int main(int argc, char** argv)
{
	�sQQ�����Q�����ǩf A;
	A.head = 1;
	A.tail = 1;
	for (int i = 1; i <= 9; i++)
	{
		cin >> A.QQ[i];
		A.tail++;
	}
	while (A.head < A.tail)
	{
		cout << A.QQ[A.head];
		A.head++;
		A.QQ[A.tail] = A.QQ[A.head];
		A.tail++;
		A.head++;
	}
	system("PAUSE");
	return 0;
}