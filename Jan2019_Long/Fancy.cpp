#include<bits/stdc++.h>
using namespace std;


bool solve(string input)
{
	int size = input.size();
	//cout << size << endl;

	if(size<3)
		return false;

	if(input[0] == 'n' && input[1] == 'o' && input[2] == 't' 
		&& (input[3] == ' ' || input[3] == 0) )
		return true;

	if(size == 3)
		return false;

	if(input[size-3] == 'n' && input[size-2] == 'o' && input[size-1] == 't' 
		&& input[size-4] == ' ')
		return true;

	

	for(int i=1;i<size-3;i++)
	{

		if(input[i-1] == ' ' && input[i] == 'n' && input[i+1] == 'o' 
			&& input[i+2] == 't' && input[i+3] == ' ')
			return true;
	}

	return false;



}

int main()
{	

    int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for(int i=0;i<t;i++)
	{ 
		string input;
		getline(cin,input);
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');
		//string input = helper;
		//cout << "Input : " << input << endl;

		/*  char c;
		cin >> c;  */

		if(solve(input) == true)
			cout << "Real Fancy" << endl;
		else
			cout << "regularly fancy" << endl;

	}

	return 0 ; 

}

