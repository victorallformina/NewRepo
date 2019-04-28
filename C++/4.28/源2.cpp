#include "student.h"    //ÖØÓÃStudentÀà
#include <iostream>
using namespace std;
void fn()
{
	Student s1;
	Student s2;
	cout << Student::number() << endl;
}

void main()
{
	fn();
	cout << Student::number() << endl;
}
