#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    double cosX = 0;
    double n = 1;
    double chislitel = 1;
    double znamenatel = 1;
    int sign = 1;
    double eps = 0.000001;

    /// на първата стъпка (когато n=0) трябва да дефинираме 0!, затова просто казваме,
    /// че знаменателят е равен на 1 и пресмятаме стойността на числителя.

    while (fabs(chislitel / znamenatel) > eps)
    {
        cosX += sign*chislitel/znamenatel;
        chislitel *= x*x;
        znamenatel *= (2*n-1)*2*n; /// много бързо числителят и знаменателят започват да приемат
                                   /// големи стойности и понякога може да излязат от
                                   /// "допустимите стойности", но случаят не е такъв.
                                   /// Нашите събираеми много бързо стават много малки
                                   /// и това ограничава, броят на итерациите в цикъла.
        n++;
        sign = -sign;
    }
    cout << "cos(x) = "<<cosX<<endl;
    return 0;
}
