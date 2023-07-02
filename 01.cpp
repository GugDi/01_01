#include <iostream>
class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;
	road.length = 555.5;
	road.width =  5;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
