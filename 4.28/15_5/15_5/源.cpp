#include <iostream>
using namespace std;
class Student
{
public:
	static int number()
	{
		return noOfStudents;
	}
	
protected:
	char name[40];
	static int noOfStudents;
};
int Student::noOfStudents = 1;

void main()
{
	Student s;
	cout << s.number() << endl;          
	cout << Student::number() << endl;    
}
