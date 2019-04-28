#include <iostream>
using namespace std;
#include <string.h>

class Student
{
public:
	Student(const char *pName = "no name")
	{
		cout << "Constructing new Student " << pName << endl;
		strcpy_s(name, pName);
		name[sizeof(name) - 1] = '\0';
	}
	Student(Student& s111)
	{
		cout << "Construting copy of " << s111.name << endl;
		strcpy_s(name, "copy of ");
		strcat_s(name, s111.name);
		name[sizeof(name) - 1] = '\0';
	}
	~Student()
	{
		cout << "Destructing " << name << endl;
	}
protected:
	char name[40];
};

class Tutor
{
public:
	Tutor(Student &s) : student(s)
	{
		cout << "Constructing tutor\n";
	}
protected:
	Student student;
};

void fn(Tutor t2)
{
	cout << "In function fn()\n";
}//析构形参tutor

int main()
{
	Student randy("randy");
	Tutor tutor(randy);
	cout << "Calling fn()\n";
	fn(tutor);
	cout << "Returned from fn()\n";
} //析构tutor和randy
