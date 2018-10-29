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

    return 0;
}
