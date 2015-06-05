#include <iostream>
using namespace std;
int main(){
	const int size = 5;
	int x[size];
	int*ptr = x;
	double sum = 0;
	double average = 0;
	int y = 0;
	int i = 0;
	for (ptr = x; ptr < x + size; ptr++){
		cout << "enter integer: ";
		cin >> *ptr;
		sum= sum + *ptr;
		y++;
		average = sum /y ;
		

	}
	for (ptr = x; ptr < x + size; ptr++){
		if (*ptr > average)
			i++;
	}
	cout << average << endl;
	cout << i << endl;

}