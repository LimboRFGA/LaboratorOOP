#pragma once

class Student {
	char* Name;
	float GradeMath;
	float GradeEnglish;
	float GradeHistory;

public:
	void setName(const char* nameInput);
	char* getName();

	void setGradeMath(float grade);
	float getGradeMath();

	void setGradeEnglish(float grade);
	float getGradeEnglish();

	void setGradeHistory(float grade);
	float getGradeHistory();

	float average();
};