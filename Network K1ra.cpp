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
	//Объявляем переменные и их типы,а так же начинаем цикл
	{	
		cout<<"User Name: ";
		cin>>username;
		cout<<"User Password: ";
		cin>>password;
		//Спрашиваем пароль и имя пользователя
		if (username == "K1ra" && password == "123")
		{
			cout<<"Succses!";
			success = true;
		}
		//Начало конструкции операторов. Если пароль и имя правильны,то успех
		else if (username == "Gray" && password == "1234")
		{
			cout<<"Succses!";
			success = true;
		}
		//Так же и  тут,только вместо if тут else if
		else if (username == "Aipril" && password == "12345")
		{
			cout<<"Succses!";
			success = true;
		}
		//Тоже самое
		else
		{
			cout<<"\nLogin Failed";
			success = false; 
		}
		//А вот тут,если пароль или имя неверны,то будет false
	
	return 0;
	
	 
}
