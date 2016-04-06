#include"proj1.h"
#include"test.h"
using namespace std;
//checking input data
bool is_int(string input) //is integral
{
    int len=input.length();
    bool flag=true;
    for(int i=0;i<len;i++)
    {
        if(int(input[i])>47&&int(input[i])<58)
        {
        }
        else
        {
            flag=false;
            break;
        }
    }
    return flag;
}
bool comparator(string str1,string str2)
{
    bool flag=true;
    unsigned int len=str1.length();
    if(len!=str2.length())
    {
        for(unsigned int i=0;i<len;i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=false;
                break;
            }
        }
    }
    else
    {
        flag=false;
    }
    return flag;
}
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
		if(comparator(input,"addition"))
			{
				cout<<(p1+p2)<<endl;
			}
		else if(comparator(input,"subtraction"))
			{
				cout<<(p1-p2)<<endl;
			}
		else if(comparator(input,"increase"))
			{
				p1+=p2;
				cout<<p1<<endl;
			}
		else if(comparator(input,"decrease"))
			{
				p1-=p2;
				cout<<p1<<endl;
			}
		else if(comparator(input,"derivative"))
			{
				p1.derivative();
				cout<<endl;
			}
		else if(comparator(input,"help"))
			{
				help();
			}
		else if(comparator(input,"root"))
			{
				p1.root();
			}
	}
	while(!comparator(input,"end"));
}
