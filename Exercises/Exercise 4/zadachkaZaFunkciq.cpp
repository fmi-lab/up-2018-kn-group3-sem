///Ne e gotova!

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double const PI = 3.14159265359;
    double a, b, x;
    cin>>a>>b>>x;
    double f = a*sin(x*PI/180) + b;
    cout<<"f("<<x<<") = "<<f<<endl;

    double f2 = a*sin(PI/2 - x*PI/180) + b;

    cout<<"f2 = "<<f2<<endl;

    double g = b*cos(x*PI/180) - a;

    char symbol;
    cin >> symbol;

    char func;
    bool flag = false;

    x = 0;

    while (symbol != ')'){
        if(symbol == 'f'){
            func = 'f';
            cout<<func<<endl;
        } else if (symbol == 'g'){
            func = 'g';
            cout<<func<<endl;
        } else if(flag && symbol >= '0' && symbol <= '9'){
            x = x*10 + symbol - '0';
        } else if(symbol == '('){
            flag = true;
        } else if (symbol == ')'){
            if (func == 'f'){
                cout<<"f("<<x<<") = "<<a*sin(x*PI/180) + b<<endl;
            } else if (func == 'g'){
                cout<<"g("<<x<<") = "<<b*cos(x*PI/180) - a<<endl;
            }
        } else {
            cout<<"Nevaliden vhod!\n"<<endl;
        }
        cin>>symbol;
    }

    return 0;
}
