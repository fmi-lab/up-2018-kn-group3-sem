#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

struct Student{
    char* name;
    unsigned int fn;
    unsigned int year;
    char* degree;
};

struct University{
    char* name;
    unsigned short foundation_year;
    Student** students;
};

int main(){
    Student s1;
    s1.name = "Ivan Ivanov";
    char str_name[100] = "Georgi";
//    cin>>str_name;
//    cin.getline(str_name, 100);
//    cin.ignore(1);

    s1.name = new char[strlen(str_name) + 1];
    assert(s1.name);
    strcpy(s1.name, str_name);
    cout<<s1.name<<endl;
    cout<<strlen(s1.name)<<endl<<strlen(str_name)<<endl;
    cout<<(sizeof(str_name) / sizeof(str_name[0]))<<endl;

    Student s2, s3;

    s2.name = new char[strlen(s1.name) + 1];
    assert(s2.name);
    strcpy(s2.name, s1.name);

    strcat(s2.name, " Petrov");

    cout<<s2.name<<endl;


//    char str_name2[100];
//    cin.getline(str_name2, 100);
//    cout<<str_name2;

    s3.name = new char[strlen("Petar Filipov") + 1];
    assert(s3.name);
    strcpy(s3.name, "Petar Filipov");

    University university;


    university.foundation_year = 1923;
    university.name = new char[strlen("Some University") + 1];
    assert(university.name);
    strcpy(university.name, "Some University");

    university.students = new Student*[100];
    assert(university.students);
    university.students[0] = &s1;
    university.students[1] = &s2;
    university.students[2] = &s3;

    cout<<university.students[0]->name<<endl;
    s1.name = "Dragan Iliev";

    cout<<university.students[0]->name<<endl;

    delete s1.name;
    delete s2.name;
    delete s3.name;
    delete[] university.students;

}
