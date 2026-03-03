#include "Global.h"

int compareName(Student x, Student y) {
	if (x.getName() > y.getName()) return 1;
	if (x.getName() == y.getName()) return 0;
	return -1;
}

int compareGradeMath(Student x, Student y) {
	if (x.getGradeMath() > y.getGradeMath()) return 1;
	if (x.getGradeMath() == y.getGradeMath()) return 0;
	return -1;
}

int compareGradeEnglish(Student x, Student y) {
	if (x.getGradeEnglish() > y.getGradeEnglish()) return 1;
	if (x.getGradeEnglish() == y.getGradeEnglish()) return 0;
	return -1;
}

int compareGradeHistory(Student x, Student y) {
	if (x.getGradeHistory() > y.getGradeHistory()) return 1;
	if (x.getGradeHistory() == y.getGradeHistory()) return 0;
	return -1;
}
