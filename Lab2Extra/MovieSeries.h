#pragma once
#include "Movie.h"

class MovieSeries {
	Movie* Series[16];
	int Count = 0;
public:
	void initMovieSeries();

	bool addMovieSeries(Movie* series);

	void printMovieSeries();

	void sortMovieSeries();
};