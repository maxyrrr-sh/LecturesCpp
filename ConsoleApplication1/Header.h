#pragma once
#include "Source.cpp"

#define forever for(;;)
#define PI 3.141592
#define E 2.71

#define begin {
#define end }

#undef begin

#define Plus(a,b) (a)+(b)

void func1();

void func2();

void func3();

void func4(){
	Plus(5, 4);
}

void func5();
//begin

//end

struct Student;

