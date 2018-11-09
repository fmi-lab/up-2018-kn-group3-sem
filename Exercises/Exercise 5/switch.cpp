#include<iostream>
using namespace std;

int main()
{

    int i;
    cin>>i;
    switch(i)
    {
    case 1:
    {
        int j = 10;
        cout<<"j = "<<j<<endl;
        cout<<"i=1"<<endl;
        break;
    }
    case 2:
        cout<<"i=2"<<endl;
        break;
    default:
        cout<<"default\n";
        break;
    case 50:
        cout<<"i=50"<<endl;
        break;
    case 0:
        cout<<"i=0"<<endl;
        break;
    }

    return 0;
}
