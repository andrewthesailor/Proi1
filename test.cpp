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
/*bool comparator(string str1,string str2)
{
	unsigned int len=str1.length();
	if(len!=str2.length())
	{
		return false;
	}
	else
	{
		for(unsigned int i=0;i<len;i++)
		{
			if(str1[i]!=str2[i])
			{
				return false;
				break;
			}	
		}
	}
	return true;
}*/
// V end of input, going to menu itself
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
