///Иска се само това, което cout-ваме.
#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    cout<<((c>='a' && c<='z') * ((c-'a' < 'z'-c) * (c-'a'+1) + (c-'a' >= 'z'-c) * ('z'-c+1))) +
    ((c>='A' && c<='Z') * ((c-'A' < 'Z'-c) * (c-'A'+1) + (c-'A' >= 'Z'-c) * ('Z'-c+1)))-1;
}
