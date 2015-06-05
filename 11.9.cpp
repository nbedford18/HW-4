#include <iostream>
using namespace std;
class Rectangle2D{
public:
	double x;
	double y;
	double xe1 = x - (width / 2);
	double ye1 = y + (height / 2);
	double xe2 = x + (width / 2);
	double ye2 = y + (height / 2);
	double xe3 = x + (width / 2);
	double ye3 = y - (height / 2);
	double xe4 = x - (width / 2);
	double ye4 = y - (height / 2);
	double getx() const{
		return x;
	}
	double gety() const{
		return y;

	}
	double width;
	double height;
	double getwidth() const{
		return width;

	}
	double getheight() const{
		return height;

	}
	Rectangle2D(){
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	double geArea() const{
		double Area = width*height;
		return Area;
	}
	double getPerimeter() const{
		double Perimeter = (2 * width) + (2 * height);
		return Perimeter;
	}
	bool contains(double xi, double yi) const{//if point is in the rectangle
		xi = xi - x;
		yi = yi - y;
		if ((xi + yi) <= width && (xi + yi) >= x && (xi + yi) <= height&&(xi+yi)>=y)
			return true;


	}
	bool conta(const Rectangle2D &r) const{//if the rectangle is inside the rectangle
	
		if ((x + y) <= r.width && (x + y) >= r.x && (x + y) <= r.height && (x + y) >= r.y){

			if ((xe1 + ye1) <= r.width && (xe1 + ye1) >= r.x && (xe1 + ye1) <= r.height && (xe1 + ye1) >= r.y){

				if ((xe2 + ye2) <= r.width && (xe2 + ye2) >= r.x && (xe2 + ye2) <= r.height && (xe2 + ye2) >= r.y){
					if ((xe3 + ye3) <= r.width && (xe3 + ye3) >= r.x && (xe3 + ye3) <= r.height && (xe3 + ye3) >= r.y){
						if ((xe4 + ye4) <= r.width && (xe4 + ye4) >= r.x && (xe4 + ye4) <= r.height && (xe4 + ye4) >= r.y){
							return true;
						}
					}
				}
			}
		}
		else
			return false;


	}
	bool overlabs(const Rectangle2D &r) const{//if the rectangle overlaps with the rectangle. 

		if (r.contains(xe1, ye2) == true || r.contains(xe2, ye2) == true || r.contains(xe3, ye3) == true || r.contains(xe4, ye4) == true){
			if (r.conta(r) == false){
				return true;
			}

		}
		else
			return false;


	}

};
int main(){
	Rectangle2D r1;
	r1.x = 2;
	r1.y = 2;
	r1.width = 5.5;
	r1.height = 4.9;
	Rectangle2D r2;
	r2.x = 4;
	r2.y = 5;
	r2.width = 10.5;
	r2.height = 3.2;
	Rectangle2D r3;
	r3.x = 3;
	r3.y = 5;
	r3.width = 2.3;
	r3.height = 5.4;
	cout << "the area of r1 is: " << r1.geArea() << endl;
	cout << "the perimeter of r1 is: " << r1.getPerimeter() << endl;
	cout << "Is the point inside of r1? " << r1.contains(3, 3) << endl;
	cout << "Is r2 inside r1? " << r1.conta(r2) << endl;
	cout << "Does r3 overlap with r1? " << r1.overlabs(r3) << endl;



}