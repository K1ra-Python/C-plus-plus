// Версия Плей Агэн 2
#include <iostream>
using namespace std;
int main()
{
	char again;
	do
	{
		cout<<"\n**Playing exiting game**";
		cout<<"\nDo you want play again?(y/n): ";
		cin>>again;
		
	}while (again == 'y');
	cout<<"\nOky.Sya";
	return 0;
	
}
