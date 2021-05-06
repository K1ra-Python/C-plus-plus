#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die=(randomNumber % 10000)+ 1;
	cout<<"You Rolled a "<<die<<endl;
	return 0;
}
