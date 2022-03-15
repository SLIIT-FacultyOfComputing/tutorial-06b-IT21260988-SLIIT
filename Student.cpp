#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid, char sName[]) {
  studentId = sid;
  strcpy(name, sName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID - " << studentId;
  cout << "\nStudent Name - " << name;
}
