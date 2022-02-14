// #include <bits/stdc++.h>
// using namespace std;

// class Sum
// {
// public:
//     void add(int a)
//     {
//         cout << "Here a is a single element"<< endl;
//     }
//     void add(int a, int b)
//     {
//         cout << "Here two elements element" << endl;
//     }
//     void add(int a, int b, int c)
//     {
//         cout << "Here 3 element" << endl;
//     }
// };

// int main()
// {
//     Sum s;
//     s.add(10);
//     s.add(10, 20);
//     s.add(10, 20, 30);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

class student{

private:
    float cgpa;
public:
    string name;
    int roll;

    student()
    {
        cout<<"constructor called"<<endl;
    }
    student(string n,int r,float c)
    {
        name=n;
        roll=r;
        cgpa=c;
    }
    student(int r,string n,float c)
    {

        roll=r;
        name=n;
        cgpa=c;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
    void get_result(string n,int r,float c)
    {
        cout<<"name= "<<n<<endl;
        cout<<"roll= "<<r<<endl;
        if(c>=2 && c<=4)
        {
            cout<<"cgpa= "<<c<<endl;
        }
        else
        {
            cout<<"invalid cgpa"<<endl;
        }
    }
};
int main()
{
    student s1;
    {
        student s2;
    }
    student s3;
    return 0;
}
