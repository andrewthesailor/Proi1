#include"proj1.h"
#include"test.h"
using namespace std;
//checking input data
bool is_int(string input) //is integral
{
    int len=input.length();
	if(input[0]!='-'&&(input[0]<'0'||input[0]>'9'))
		return false;
    for(int i=1;i<len;i++)
    {
        if(input[i]<'0'||input[i]>'9')
            return false;
    }
    return true;
}
void help()
{
	cout<<"avaible commands: addition subtraction increase decrease derivative help root end"<<endl;
}
void menu(polynomial p1, polynomial p2)
{
	cin>>p1>>p2;
	string input;
	do
	{ 
		cin>>input;
		cout<<endl;
		if(input=="addition")
			{
				cout<<(p1+p2)<<endl;
			}
		else if(input=="subtraction")
			{
				cout<<(p1-p2)<<endl;
			}
		else if(input=="increase")
			{
				p1+=p2;
				cout<<p1<<endl;
			}
		else if(input=="decrease")
			{
				p1-=p2;
				cout<<p1<<endl;
			}
		else if(input=="derivative")
			{
				p1.derivative();
				cout<<endl;
			}
		else if(input=="help")
			{
				help();
			}
		else if(input=="root")
			{
				p1.root();
			}
	}
	while(input!="end");
}
