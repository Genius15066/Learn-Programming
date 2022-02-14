#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "Person" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "Student" << endl;
    }
};

int main(){
    Person p;
    Student s;
    p.display();
    s.display();
    return 0;
}