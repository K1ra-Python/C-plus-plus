#include <iostream>
using namespace std;
int main()
//�������� �� �� ��������
{	
	char again = 'y';// ��� �� ��������� ���������� ����� ������ �� ���.char
	while (again == 'y')//���� ��������,����� �� ���������� ������
	{
		cout<<"\n**Played an exciting game**";//�����������,��� ��������� � cmd
		cout<<"\nDo you want play again?(y/n): ";//���� �����
		cin>>again;//����� ����������,����� �� �� ��� ������,��� �� ���
	}
	cout<<"\nOkay. Sya";//���� ���-�� ������� ����� y,�� ����� ������� ��� � ���������
	return 0;
}
