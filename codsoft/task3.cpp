// tic tac toe game
 #include<iostream>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
char token='x';
bool tie;
string n1 = "";
string n2 = "";
void functionone()
{
	
	
	cout<< "   |      |  \n";
	cout<<" "<<space[0][0]<<" |   "<<space[0][1]<<"  |"<<space[0][2]<<" \n";
	cout<< "___|______|___\n";
	cout<< "   |      |  \n";
		cout<<" "<<space[1][0]<<" |   "<<space[1][1]<<"  |"<<space[1][2]<<" \n";
	cout<< "___|______|___\n";
	cout<< "   |      |  \n";
		cout<<" "<<space[2][0]<<" |   "<<space[2][1]<<"  |"<<space[2][2]<<" \n";
	cout<< "   |      |  \n";
	
}
void functiontwo()
{
	int digit;
	
	if(token=='x')
	{
		cout<<n1<<" PLEASE  ENTER ";
		cin>>digit;
	}
	if(token=='o')
	{
		cout<<n2<<" PLEASE ENTER ";
		cin>>digit;
	}
	if (digit==1)
	{
		row=0;
		column=0;
	}
	if (digit==2)
	{
		row=0;
		column=1;
	}
	if (digit==3)
	{
		row=0;
		column=2;
	}
	if (digit==4)
	{
		row=1;
		column=0;
	}
	if (digit==5)
	{
		row=1;
		column=1;
	}
	if (digit==6)
	{
		row=1;
		column=2;
	}
	if (digit==7)
	{
		row=2;
		column=0;
	}
	if (digit==8)
	{
		row=2;
		column=1;
	}
	if (digit==9)
	{
		row=2;
		column=2;
	}
	
	else if( digit<1 || digit>9 )
	{
		cout<<"INVALID !"<<endl;
		functiontwo();
	}
	if(token=='x'&& space[row][column] != 'x' && space[row][column] !='o')
	{
 	space[row][column]='x';
	 token='o';
    }
    
    else if(token=='o'&& space[row][column] != 'o' && space[row][column] !='o')
    {
 	space[row][column]='o';
	 token='x';
    }
    
    else
    {
    	cout<<"THERE IS NO EMPTY SPACE!"<<endl;
    	functiontwo();
	}
	functionone();
}
bool functionthree()
  {  
 	 for(int i=0;i<3;i++)
	 {
 		if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i] )
 		return true;
 	 } 
 	 if( space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0]  )
 	 {
 		return true;
 	 } 
 	
    	 for(int i=0;i<3;i++)
	  {
	    	for(int j=0;j<3;j++)
	 	 {
	 	   if(space[i][j] != 'x' && space[i][j] != 'o')
	 	   {
	 		  return false;
			} 
		}
	}
	tie=true;
	return 1;
  }
  
  int main()
  {
  		cout<<"ENTER THE NAME OF FIRST PALYER :";
	getline(cin,n1);
	cout<<endl;
	cout<<"ENTER THE NAME OF SECOND PALYER :";
	getline(cin,n2);
	cout<<endl;
	cout<<n1<<" WILL PLAY FIRST\n";
	cout<<n2<<" WILL PLAY SECOND\n";
  	
  	while(!functionthree())
  	{
  		functionone();
  		functiontwo();
  		functionthree();
	}
	
	if ( token=='x' && tie==false)
	{
		cout<<n2<<"WINS"<<endl;
	}
	 else if ( token=='o' && tie==false)
	{
		cout<<n1<<"WINS"<<endl;
	}
  	else cout<<" OPPS DWAW"<<endl;
  	
  }
