#include <iostream>
#include <string>
using namespace std;
int main()
{
	string username;
	string password;
	bool success;
	cout<<"\tGame Devoloper\n";
	do
	//��������� ���������� � �� ����,� ��� �� �������� ����
	{	
		cout<<"User Name: ";
		cin>>username;
		cout<<"User Password: ";
		cin>>password;
		//���������� ������ � ��� ������������
		if (username == "K1ra" && password == "123")
		{
			cout<<"Succses!";
			success = true;
		}
		//������ ����������� ����������. ���� ������ � ��� ���������,�� �����
		else if (username == "Gray" && password == "1234")
		{
			cout<<"Succses!";
			success = true;
		}
		//��� �� �  ���,������ ������ if ��� else if
		else if (username == "Aipril" && password == "12345")
		{
			cout<<"Succses!";
			success = true;
		}
		//���� �����
		else
		{
			cout<<"\nLogin Failed";
			success = false; 
		}
		//� ��� ���,���� ������ ��� ��� �������,�� ����� false
	
	return 0;
	
	 
}
