#include<iostream>
using namespace std;
struct circle{
	float diametre, radius, area;
};
void calculate_display(circle x) {
	x.radius = x.diametre / 2.0f;
	x.area = 3.1415f * (x.radius * x.radius);
	cout << "Radius = " << x.radius << endl;
	cout << "Area = " << x.area << endl;
}
//int main() {
//	circle c;
//	cout << "enter diametre of circle: ";
//	cin >> c.diametre;
//	calculate_display(c);
//}