#include "Student.h"
#include "Global.h"
#include <iostream>
#include <cstdio>

int main() {
	Student s1, s2;
	s1.setName("Radu Gabriel");
	s1.setGradeMath(7);
	s1.setGradeEnglish(10);
	s1.setGradeHistory(9);

	s2.setName("Ganea Iacov");
	s2.setGradeMath(9);
	s2.setGradeEnglish(7);
	s2.setGradeHistory(8);

	printf("%s\n", s1.getName());
	printf("Average: %f\n", s1.average());
	printf("Math: %f\n", s1.getGradeMath());
	printf("English: %f\n", s1.getGradeEnglish());
	printf("History: %f\n", s1.getGradeHistory());

	printf("%s\n", s2.getName());
	printf("Average: %f\n", s2.average());
	printf("Math: %f\n", s2.getGradeMath());
	printf("English: %f\n", s2.getGradeEnglish());
	printf("History: %f\n", s2.getGradeHistory());

	printf("\nComparisons\n");
	printf("Name: %d\n", compareName(s1, s2));
	printf("Math: %d\n", compareGradeMath(s1, s2));
	printf("English: %d\n", compareGradeEnglish(s1, s2));
	printf("History: %d\n", compareGradeHistory(s1, s2));

	return 0;
}