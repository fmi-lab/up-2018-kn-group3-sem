#include<iostream>
#include<iomanip>
using namespace std;

struct Student{
    char* name;
    unsigned int fn;
    unsigned int year;
    char* degree;
};

int main(){
    Student stud1;
    stud1.name = "Ivan Ivanov";
    stud1.fn = 88888;
    stud1.year = 3;
    stud1.degree = "Bachelor";

    Student stud2;
    stud1.name = "Petar Kolev";
    cout<<stud1.name;
}
