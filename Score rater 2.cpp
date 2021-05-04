#include <iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter youre score: ";
	cin>>score;
	if (score >=1000)
	{
		cout<<"You scored 1000 or more. Impressive!\n";
	}
	else if (score ==25)
	{
		cout<<"Nice. Bonus figure!\n";
	}
	else 
	{
		cout<<"You scored less than 1000.\n";	
	}
return 0;	
}
