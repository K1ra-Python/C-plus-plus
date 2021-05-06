#include <iostream>
using namespace std;
int main()
//Надомной всё по обычному
{	
	char again = 'y';// Тут мы объявляем переменную перед циклом со знч.char
	while (again == 'y')//Цикл проверят,равна ли переменная игрику
	{
		cout<<"\n**Played an exciting game**";//Предложение,что выводится в cmd
		cout<<"\nDo you want play again?(y/n): ";//Тоже самое
		cin>>again;//Прога спрашивает,будем ли мы ещё играть,или же нет
	}
	cout<<"\nOkay. Sya";//Если что-то введётся кроме y,то прога напишет это и закроется
	return 0;
}
