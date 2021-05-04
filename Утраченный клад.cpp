#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	const int GOLD_PIECES = 900;
	int adventure,killed,survivors;
	string leader;
	cout<<"Welcome to Lost Fortune\n\n";
	cout<<"Please enter the following for your personalized adventure\n";
	cout<<"Enter a number: ";
	cin>>adventure;
	cout<<"Enter a number, smaller than first: ";
	cin>>killed;
	survivors = adventure-killed;
	cout<<"Enter your last name: ";
	cin>>leader;
	cout<<"\nA brave group of"<<adventure<<" set out on ? quest ";
	cout<<"-- in search of the lost treasure of the Ancient Dwarves. ";
	cout<<"The group was led ?? that legendary rogue. " <<leader<< ". \n";
	cout<<"\nAl ong the way. ? band of maraudi ng ogres ambushed the party. ";
	cout<<"All fought bravely under the command of " <<leader;
	cout<<". and the ogres were defeated. but at ? cost. ";
	cout<<"Of the adventurers. "<<killed<<" were vanqui shed. ";
	cout<<"leaving just "<<survivors<<" in the group.\n"; 
	cout<<"\nThe party was about to give up all hope. ";
	cout<<"But while laying the deceased to rest. ";
	cout<<"they stumbled upon the buried fortune. ";
	cout<<"So the adventurers split "<<GOLD_PIECES <<" gold pieces.";
	cout<<leader<<" held on to the extra "<<(GOLD_PIECES % survivors);
	cout<<" pieces to keep things fair of course.\n";
	return 0;

	
}
