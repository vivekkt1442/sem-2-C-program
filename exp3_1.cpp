#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float cpi;

public:
    int getdata()
    {
        cout << "Enter Roll.NO : ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Cpi : ";
        cin >> cpi;
        cout << endl
             << endl;
    }
    void display()
    {
        cout << "ROLL NO : " << rollno << endl
             << "NAME : " << name << endl
             << "CPI : " << cpi << endl;
    }
    int change()
    {
        cout << "Enter The New Roll No : ";
        cin >> rollno;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.display();
    s1.change();
    s1.display();
    return 0;
}