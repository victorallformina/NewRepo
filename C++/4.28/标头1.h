#pragma once
#pragma once
class Student
{
public:
	Student(char* pName = "no name");
	~Student();
	static int number();
protected:
	static int noOfStudents;
	char name[40];
};

int Student::noOfStudents = 0;