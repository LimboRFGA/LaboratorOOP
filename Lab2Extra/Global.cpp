#include "Global.h"

int compareName(const Movie& x, const Movie& y) {
	if (x.getName() > y.getName()) return 1;
	if (x.getName() == y.getName()) return 0;
	return -1;
}

int compareReleaseYear(const Movie& x, const Movie& y) {
	if (x.getReleaseYear() > y.getReleaseYear()) return 1;
	if (x.getReleaseYear() == y.getReleaseYear()) return 0;
	return -1;
}

int compareIMBDScore(const Movie& x, const Movie& y) {
	if (x.getIMBDScore() > y.getIMBDScore()) return 1;
	if (x.getIMBDScore() == y.getIMBDScore()) return 0;
	return -1;
}

int compareLength(const Movie& x, const Movie& y) {
	if (x.getLength() > y.getLength()) return 1;
	if (x.getLength() == y.getLength()) return 0;
	return -1;
}

int compareYearsSince(const Movie& x, const Movie& y) {
	if (x.yearsSince() > y.yearsSince()) return 1;
	if (x.yearsSince() == y.yearsSince()) return 0;
	return -1;
}