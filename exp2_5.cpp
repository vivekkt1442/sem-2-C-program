// By Overloading The  Print() Function Display Variables Values Of Differnt Dat Type

#include <iostream>
using namespace std;
void print(int, int);
void print(float);
void print(char, char, char);

int main()
{
    print(5.3);
}
void print(int a, int b)
{
    cout << a;
    cout << b;
}
void print(float a)
{
    cout << a;
}
void print(char a, char b, char c)
{
    cout << a;
}
