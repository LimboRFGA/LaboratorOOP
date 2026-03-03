#include "Student.h"

void Student::setName(string nameInput) { Name = nameInput; }
string Student::getName() { return Name; }

void Student::setGradeMath(float grade) { GradeMath = grade; }
float Student::getGradeMath() { return GradeMath; }

void Student::setGradeEnglish(float grade) { GradeEnglish = grade; }
float Student::getGradeEnglish() { return GradeEnglish; }

void Student::setGradeHistory(float grade) { GradeHistory = grade; }
float Student::getGradeHistory() { return GradeHistory; }

float Student::average() { return (GradeMath + GradeEnglish + GradeHistory) / 3; }
