//number guessing game

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string name;
	char input;
	int inputuser, score;
	cout<<"ENTER YOUR NAME  ";
	getline(cin,name) ;
	cout<<endl;
	
	do{
		int variable=rand()%10 +1;
		cout<<"ENTER ANY NUMBER BETWEEN 1-10   ";
		cin>>inputuser;
		cout<<endl;
		
		if(inputuser==variable)
		{
		    cout<<"CONGRATS!! YOU GUESSED THE CORRECT NUMBER!!"<<endl;
		    score++;
		}
		else
		{
			cout<<"SORRY! WRONG NUMBER TRY AGAIN"<<endl;
		}
	 cout<<"YOU WANT TO TRY AGAIN y/n   ";
	 cin>>input;
	 cout<<endl;
    }
    
	while(input!='n');
 	cout<<"YOUR SCORE IS   "<<score<<endl;
 	cout<<"GAME OVER"<<endl;
	return 0;
   }
