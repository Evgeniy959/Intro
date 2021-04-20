#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

class Point	//��� ������ Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		this;
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//			Constructors:
	/*Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		//����������� � ����� ���������� ������� ����� �� ������
		this->x = x;
		this->y = 0;
		cout << "SingleAgrumentConstructor: " << this << endl;
	}*/
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;//SDK - Software Developer Kit
		cout << "CopyConstructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//			Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:\t\t" << this << endl;
		return *this;
	}

	//			Methods:
	void print()const
	{
		cout << "X = " << x << tab << "Y = " << y << endl;
	}
};
Point operator+(const Point& left, const Point& right)
{
	Point result;
	result.set_x(left.get_x() + right.get_x());
	result.set_y(left.get_y() + right.get_y());
	return result;

}

void function()
{
	//this;
}

//��������� - ��� ��� ������
//����� - ��� ��� ������

//#define STRUCT

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT
	//type name;
	int a;		//��������� ���������� 'a' ���� 'int'
	Point A;	//��������� ���������� 'A' ���� 'Point'
				//��������� ������ ��������� 'Point'
				//������� ��������� ��������� 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A;	//������� ��������� �� 'Point'. p - Pointer to A
	cout << pA->x << tab << pA->y << endl;
	cout << (*pA).x << tab << (*pA).y << endl;
#endif // STRUCT

#ifdef CONSTRUCTORS_CHECK
	Point A;	//Default constructor
/*A.set_x(2);
A.set_y(3);*/
//cout << A.get_x() << tab << A.get_y() << endl;
	A.print();

	Point B(2, 3);
	B.print();

	Point C = 5;	//Single-argument constructor
	C.print();

	Point D = B;	//Copy constructor
	D.print();

	Point E;	//Default constructor
	E = D;		//Copy assignment
	E.print();
}
#endif // CONSTRUCTORS_CHECK
#ifdef ASSIGNMENT_CHECK
int a, b, c;
a = b = c = 0;
Point A, B, C;
A = B = C = Point(2, 3);
A.print();
B.print();
C.print();
#endif // ASSIGNMENT_CHECK

int a = 2;
int b = 3;
int c = a + b; 
Point A(2, 3);
Point B(3, 4);
A.print();
B.print();
/*Point C = A + B;
C.print();
A.print();
B.print();*/
A += B;
A.print();
++A;
A.print();


}


/*
--------------------------------
. ���� ->
.  - �������� ������� ������� (Point operator);
-> - �������� ���������� ������� (Arrow operator);
--------------------------------
*/

/*
--------------------------------
OOP concepts:
1. Encapsulation - ��� �������� ������������ ����� ������ �� �������� ����;
	-������������ �������:
		private:	�������� ����, �������� ������ ������ ������.
		public:		�������� ����, �������� �� ������ ����� ���������.
		protected:	���������� ����, �������� ������ ������ ������,
					� ������ �������� �������.
						!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			������������ �������� ����� ������� � ���������� �������� ��,
			��� � ����� ��� ���� �������, ���� �� ������� ��������, � �
			��������� ��� ���� �������, ���� �� ������� ��������.
						!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	-get/set - ������
	get (�����) - ��������� ������ � ���������� ������ ������ �� ������.
	get-����� ��������� ���� �������� �����-�� ����������
	set (������, ����������) - ��������� ������ � ���������� ������ ������ �� ������.
	set-������ ��������� �������� �������� �������������� ���������� ������ ������.
2. Inheritance;
3. Polymorphism;
--------------------------------
*/

/*
-----------------------------------------------------
Constructor - ��� �����, ������� ������� ������;
~Destructor - ��� �����, ������� ���������� ������,
			  �� ��������� ��� ������� �����;
			  ~ - tilda;
Operator=;
-----------------------------------------------------
*/               