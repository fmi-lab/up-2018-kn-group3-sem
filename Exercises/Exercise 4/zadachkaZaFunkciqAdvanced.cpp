/// Работи, когато входът е от типа f(<number>) или g(<number>),
/// след като сме въвели числата a и b.

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double const PI = 3.14159265359;
    double a, b, x;
    cout << "a and b:\n";
    cin>>a>>b;
    /// g(x) = b*cos(x*PI/180) - a;
    /// f(x) = a*sin(x*PI/180) + b;

    char symbol;
    char func;
    bool flag = false;

    x = 0;

    while (symbol != ')'){
        cin>>symbol;
        if(symbol == 'f' || symbol == 'g'){
            func = symbol;
            cout<<fixed<<
            func<<endl;
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
    }

    return 0;
}
