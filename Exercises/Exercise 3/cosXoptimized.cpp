#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;
    cout << "Insert the angle x in radians: ";
    cin >> x;
    double cosX = 0;
    int n = 1;
    double eps = 0.0000001;
    double addend = 1;

    /// В променливата addend пазим всяко събираемото
    /// от нашия ред. То приема все по-малки стойности
    /// и няма вероятност да излезе от "допустимите стойности"
    /// на типа.

    while(fabs(addend) > eps)
    {
        cosX += addend;
        addend *= -x*x/(2*n*(2*n-1));
        n++;
    }
    cout << "cosX = "<<cosX<<endl;
    return 0;
}
