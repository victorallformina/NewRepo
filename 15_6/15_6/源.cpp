#include <iostream>
using namespace std;
#include <string.h>
class Student
{
public:
	Student(const char* pName);
	~Student();
	static Student* findname(const char* pName);
protected:
	static Student* pFirst;
	Student* pNext;
	char name[40];
};
Student* Student::pFirst = 0; //静态成员空间分配及初始化
Student::Student(const char*pName)
{
	strncpy_s(name, pName, sizeof(name));
	name[sizeof(name) - 1] = '\0';
	pNext = pFirst;
	pFirst = this;
}
Student::~Student()
{
	if (pFirst == this) {
		pFirst = pNext;
		return;
	}
	for (Student* pS = pFirst; pS; pS = pS->pNext)
		if (pS->pNext == this) {
			pS->pNext = pNext;
			return;
		}
}
Student* Student::findname(const char* pName)
{
	for (Student* pS = pFirst; pS; pS = pS->pNext)
		if (strcmp(pS->name, pName) == 0)
		{
			return pS;
		}
	return (Student*)0;
}
int  main()
{
	Student s1("Randy");
	Student s2("Jenny");
	Student s3("Kinsey");
	Student* pS = Student::findname("Jenny");
	if (pS)
		cout << "ok." << endl;
	else
		cout << "no find." << endl;
	system("pause");
}
