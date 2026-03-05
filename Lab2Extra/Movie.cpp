#include "Movie.h"

void Movie::setName(const char* name) { Name = name; }
const char* Movie::getName() const { return Name; }

void Movie::setReleaseYear(unsigned int year) { ReleaseYear = year; }
unsigned int Movie::getReleaseYear() const { return ReleaseYear; }

void Movie::setIMBDScore(double score) { IMBDScore = score; }
double Movie::getIMBDScore() const { return IMBDScore; }

void Movie::setLength(int length) { Length = length; }
int Movie::getLength() const { return Length; }

unsigned int Movie::yearsSince() const { return 2026 - ReleaseYear; }