#include <iostream>
#include <string.h>
#include "student.h"
using namespace std;

int Student::noOfStudents = 0;  //������ڲ�ʵ���з���ռ�ͳ�ʼ��

Student::Student(const char* pName)
{
	cout << "create one student\n";
	strncpy_s(name, pName, 40);
	name[39] = '\0';
	noOfStudents++; //��̬��Ա��ÿ����һ������,ѧ������1
	cout << noOfStudents << endl;
}
Student::~Student()
{
	cout << "destruct one student\n";
	noOfStudents--;     //��̬��Ա��ÿ����һ������,ѧ��������1
	cout << noOfStudents << endl;
}
int Student::number()  //��̬��Ա����
{
	return noOfStudents;
}
