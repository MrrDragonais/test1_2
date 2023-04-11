#include<iostream>
using namespace std;


class Road
{
public:
	double length;
	int width;
	Road();
};

Road::Road()
{
	length = 0;
	width = 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "TeTest v1.2: Ok.\n";

	Road road;

	cout << "Введите длину дороги: " << endl;
	cin >> road.length;
	cout << "Введите ширину дороги: " << endl;
	cin >> road.width;

	cout << " Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
