#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Please input x:  ";
	cin>>x;
	switch(x/10)
	{
	case 10:
	case 9: cout<<"A\n";break;
	case 8: cout<<"B\n";break;
	case 7: cout<<"C\n";break;
    case 6: cout<<"D\n";break;
	default :cout<<"E\n";break;
	}
}
