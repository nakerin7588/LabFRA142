#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
public:
    string name;
    int height;
    int age;
    Person();
    Person(string n, int h, int a);
    ~Person();
    void showPersonInfo();
};

class Student : public Person
{
public:
    int id;
    int grade;
    Student();
    Student(string name, int height, int age, int i, int g);
    ~Student();
    void showStudenInfo();
};

class Teacher : public Person
{
private:
    string subject;
public:
    Teacher();
    Teacher(string name, int height, int age, string s);
    ~Teacher();
    string getSubject();
    void setSubject(string s);
    void showTeacherInfo();
};

#endif