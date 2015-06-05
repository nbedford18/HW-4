#include <iostream>
#include "Course.h"
using namespace std;
Course::Course(const string & courseName, int capacity){
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];

}
Course::Course(){
	delete[] students;

}
string Course::getCourseName() const{
	return courseName;

}
string* doubleCapacity(const string* list, int size){//to double the capacity of the array
	string* second =  new string[size * 2];

	for (int i = 0; i < size; i++){

		second[i] = list[i];

	}

	return second;


}
void Course::addStudent(const string& name){
	students[numberOfStudents] = name;
	numberOfStudents++;
	if (numberOfStudents > capacity){
		const string* list = students;

		string*y = doubleCapacity(list, capacity);//using the function from previous exercise to double capacity
		
	}

}
void Course::dropStudent(const string& name){
	students[numberOfStudents] = name;
	numberOfStudents--;

}
string* Course::getStudents() const{
	return students;
}
int Course::getNumberOfStudents() const{
	return numberOfStudents;
}
void Course::clear(){
	delete[] students;
}