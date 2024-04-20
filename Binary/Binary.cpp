#include <iostream>

using namespace std;

struct A {
    unsigned int value : 2; // Виділено 2 байти під змінну value 

};


int main()
{
    union MyUnion1{
        int a;
        long long b;
        short c;

    };

    MyUnion1 un1;
    MyUnion1 un2;
    MyUnion1 un3;

    un1.a = 3;


    union {
        int a;
        long long b;
        short c;

    } MyUnion2;

    MyUnion2.a = 1342734;


    return 0;
}
