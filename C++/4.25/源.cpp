#include< iostream >
#include< string.h >
using namespace std;
class Student
{
public:
	Student(const char *pName = "no name", int ssId = 0)
	{
		id = ssId;
		strcpy_s(name, pName);
		cout << "Constructing new student" << pName << endl;
	}

	Student(Student &s111)
	{
		cout << "Constructing copy of " << s111.name << endl;
		strcpy_s(name, " copy of ");
		strcat_s(name, s111.name);
		id = s111.id;
	}

	~Student()
	{
		cout << "Destructing " << name << endl;
	}
protected:
	char name[40];
	int id;
};

void fn(Student s)
{
	cout << "In function fn()\n";
}

int main()
{
	Student randy("Randy", 1234);

	Student sandy = randy;

	cout << "Calling fn()\n";
	fn(randy);
	cout << "Returning from fn()\n";
	system("pause");
}

