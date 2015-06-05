#include <iostream>
#include "Course.h"
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	Course course1("Data Structures", 10);//new course
	course1.addStudent("Kenzi Lofgren");//add three students
	course1.addStudent("Nicole Bach");
	course1.addStudent("John Smith");
	course1.dropStudent("John Smith");//drop a student
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++){//shows students in course
		cout << students[i] << ", ";
	}
	
	

}