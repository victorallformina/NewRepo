#include "student.h"    //����Student��
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
