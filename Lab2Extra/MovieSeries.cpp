#include "MovieSeries.h"
#include "Movie.h"
#include <cstdio>

void MovieSeries::initMovieSeries() {
	for (int i = 0; i < 16; i++)
		Series[i] = nullptr;
}

bool MovieSeries::addMovieSeries(Movie* series) {
	if (Count < 16) {
		Series[Count] = series;
		Count++;
		return true;
	}
	return false;
}

void MovieSeries::printMovieSeries() {
	for (int i = 0; i < Count; i++)
		printf("%s\n %u\n %f\n %d\n %u\n",
			Series[i]->getName(),
			Series[i]->getReleaseYear(),
			Series[i]->getIMBDScore(),
			Series[i]->getLength(),
			Series[i]->yearsSince());
}

void MovieSeries::sortMovieSeries() {
	for (int i = 1; i < Count; i++) {
		Movie* key = Series[i];
		int j = i - 1;

		while (j >= 0 && Series[i]->yearsSince() < key->yearsSince()) {
			Series[j + 1] = Series[j];
			j--;
		}
		Series[j + 1] = key;
	}
}