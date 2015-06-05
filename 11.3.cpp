#include <iostream>
using namespace std;
int* doubleCapacity(const int* list, int size);
int main(){
	const int count = 5;
	int first[count];
	for (int i = 0; i < count; i++){
		cout << "Enter integer: ";
		cin >> first[i];

	}
	const int* list=first;
	
	int*y = doubleCapacity(list, count);//called the function
	for (int i = 0; i < count; i++){
		cout << y[i] << endl;
	}
	
	delete[]y;

}
int* doubleCapacity(const int* list, int size){//function to double the capacity of the array
	int* second = new int[size*2];
	
	for (int i = 0; i < size; i++){

		second[i] = list[i];

	}

		return second;
	

}