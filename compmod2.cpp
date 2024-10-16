#include <iostream>
#include <string>
using namespace std;
// TODO 1 : Define the PersonEx2 class, which is modified from PersonEx1
// TODO 2 : Define the Student class using inheritance
// Note: no modification is allowed for the main() function
int main() {
       string name;
}
int age;
double gpa;
cout << "Enter student information:" << endl;
cin >> name >> age >> gpa;
PersonEx2 person(name, age);
Student student(name, age, gpa);
PersonEx2* ptr;
ptr = &person;
ptr->printInfo();
ptr = &student;
ptr->printInfo();
return 0;
// same as (*ptr).printInfo();
// same as (*ptr).printInfo();