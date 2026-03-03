#pragma once
#include <string>
using namespace std;

class Student {
	string Name;
	float GradeMath;
	float GradeEnglish;
	float GradeHistory;

public:
	void setName(string nameInput);
	string getName();

	void setGradeMath(float grade);
	float getGradeMath();

	void setGradeEnglish(float grade);
	float getGradeEnglish();

	void setGradeHistory(float grade);
	float getGradeHistory();

	float average();
};