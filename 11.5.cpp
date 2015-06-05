#include <iostream>
using namespace std;
int smallestelement(const int size, int x[]);
int main(){
	int y[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	cout << smallestelement(8, y) << endl;

}
int smallestelement(const int size, int x []){//a function to find the smallest number in the array
	int *ptr = x;
	int min = ptr[0];
	for (int i=0; i<size;i++){
		if (ptr[i] < min)
			min = ptr[i];

	}
	return min;



}