#include <iostream>
using namespace std;


class Point {
private:
	double x=0.0;
	double y=0.0;
public:
	Point();
	Point(double, double);
	void setX(double xx);
	void setY(double yy);
	void showPoint();
};
Point::Point()
	: x(0), y(0) {}
Point::Point(double xx, double yy)
	: x(xx), y(yy) {}
void Point::setX(double xx)
{
	x = xx;
}
void Point::setY(double yy)
{
	y = yy;
}
void Point::showPoint()
{
	cout << "( " << x << ", " << y << " )" << endl;
}

class Pointmanager {
	Point* p;
	int size;
public:
	Pointmanager();
	Pointmanager(int n);
	~Pointmanager();
	
	void input();
	void show();
};

Pointmanager::Pointmanager() 
{
	p = new Point[10];
	size = 10;
}

Pointmanager::Pointmanager(int n)
{
	p = new Point[n];
	size = n;
}



int main()
{
	Point p[5] = { Point(10,10),Point(20,20),Point(30,30),Point(40,40),Point() };
	/*
	double xx, yy;
	for (int i = 0; i < 5; i++)
	{
		cout << "x(double) : ";
		cin >> xx;
		cout << "y(double) : ";
		cin >> yy;
		p[i].setX(xx);
		p[i].setY(yy);
	}
	*/
	for (int i = 0; i < 5; i++)
		p[i].showPoint();
	/*  for (auto &a : p)  // 본래 point &a이렇게 써야되는 데 c++기능으로 auto로 써주면 알아서 보정함
	                       //만약 &a가 아니고 a이면 p의 값을 복사한 애 이름이 a인거고 &a를 쓰면 p의 값을 이용하기 위해 a라는 이름을 사용하는 것임
							//따라서 a : p를 쓰면  a값을 바꾼다 한들 p의 값에 영향을 주지 못한다
			{ cout << "x(double) : ";
		cin >> xx;
		cout << "y(double) : ";
		cin >> yy;
		a.setX(xx);
		a.setY(yy);      }
		 for (auto a : p)
			 a.showPoint();  */
	return 0;
}

/*
오늘 아침8시에 학교왔다고 슈바 학교에 14시간있는게 말이되냐 집좀보내주라
집보내줘 슈바 8시에 학교와서 22시에 집가는게 말이되냐 
보내주세여 제발여
*/
