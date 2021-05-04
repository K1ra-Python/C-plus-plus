#include <iostream>
using namespace std;
int main()
{
	int score;//Целевые значения
	double distance;//для чисел двойной точности с плавующей запятой
	char playAgain;//Односимвольные значения
	bool shieldsUp;//Булевые значения. Либо true либо false
	short lives,aliensKilled;
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;
	cout<<"\nscore: "<<score<<endl;
	cout<<"distanse: "<<distance<<endl;
	cout<<"play Again: "<<playAgain<<endl;
	//Пропускаем shieldsUp. Поскольку булевые значения нулевые
	//И нулевые булевые значения,как правило,на экран не выводится
	cout<<"lives: "<<lives<<endl;
	cout<<"aliensKilled: "<<aliensKilled<<endl;
	cout<<"engineTemp: "<<engineTemp<<endl;
	int fuel;
	cout<<"\nHow much fuel?";
	cin>>fuel;// Это инпут
	cout<<"fuel: "<<fuel<<endl;
	typedef unsigned short int hentai;//С помощью typedef можно поменять имя типа данных на своё
	hentai bonus = 10;
	cout<<"\nbonus"<<bonus<<endl;
	return 0;
}
