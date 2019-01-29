#include<iostream>
using namespace std;


int main()
{
	char ch;

	//reading a character
	cout<<"Enter an alphabet: ";
	cin>>ch;

	//condiion to check character is alphabet or not
	if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		//conditions to check character is VOWEL or not
		if( ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
			cout<<"\""<<ch<<"\" is a VOWEL"<<endl;
		else
			cout<<"\""<<ch<<"\" is a CONSONANT"<<endl;
	}
	else
	{
		cout<<"\""<<ch<<"\" is not an alphabet\n";
	}


	return 0;
}