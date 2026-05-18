*// simple calculator

#include<iostream>
using namespace std;
int main()
{
	char op;
	double num1,num2;
	cout<<"ENTER THE OPERATOR ( + - * / ) :";
	cin>>op;
	
	cout<<"ENTER ANY TWO NUMBERS :";
	cin>>num1>>num2;
	
	switch( op )
	{
		case'+': // addition
		cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
		break;
		
		case'-': // subtracrion
		cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
		break;
		
		case'*': // multiplication
		cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
		break;
			
		case'/': // division
		if (num2==0)
		{
			cout<< "divide by 0 is not possible";
		}
		
		else
		{
	    	cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
	    }
	    break;
	    
		
		default: 
		cout<< "invalid operator"<<endl;
			
	}
	
	return 0;
}
