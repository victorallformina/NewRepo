#include"head.h"
int main()
{
	Geometric_shape * gs[] = { new Circle(10),new Rectangle(6,8),new Triangle(3,4,5),new Box(6,8,3),new Cylinder(10,3),new Cone(10,3),new T_pyramid(3,4,5,3), new T_prism(3,4,5,3) };

	for (int i = 0; i < 8; i++)
	{
		gs[i]->show();
		cout << endl;
	}

	cout << "ƽ��ͼ�Σ�" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "ͼ���ܳ���" << gs[i]->perimeter() << '\t';
		cout << "ͼ�������" << gs[i]->area() << endl;
	}
	cout << "����ͼ�Σ�" << endl;
	for (int i = 3; i < 8; i++)
	{
		cout << "ͼ�ε��ܳ���" << gs[i]->perimeter() << '\t';
		cout << "ͼ�ε������" << gs[i]->area() << '\t';
		cout << "ͼ�������" << gs[i]->volume() << endl;
	}
	system("pause");
	return 0;
}