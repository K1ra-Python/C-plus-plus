#include <iostream>
using namespace std;
int main()
{
	unsigned int score = 5000;
	cout<<"score: "<<score<<endl;
	score = score+100;
	cout<<"score: "<<score<<endl;
	score +=100;
	cout<<"score: "<<score<<endl;
	int lives = 3;
	++lives;
	cout<<"lives: "<<lives<<endl;
	lives = 3;
	int bonus = lives++*10;
	cout<<"lives.bonus: "<<lives<<","<<bonus<<endl;
	//Целочисленное переполнение
	score = 9999999999999999999;
	cout<<"\nscore: "<<score<<endl;
	++score;
	cout<<"score"<<score<<endl;
	return 0;
}
