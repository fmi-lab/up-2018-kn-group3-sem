#include<iostream>
using namespace std;

int main()
{

    int counter = 0;

    ///�� ������� � ������.
    while (counter != 0){
        counter++;
        cout<<counter<<endl;
    }

    counter = 0;

    ///������� � ������ ���� ���� �������� �������� => �������� �����.
    do{
        counter++;
        cout<<counter<<endl;
    } while (counter != 0);

    return 0;
}
