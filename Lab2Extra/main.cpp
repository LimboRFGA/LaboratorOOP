#include "MovieSeries.h"
#include "Movie.h"
#include "Global.h"
#include <cstdio>

int main() {
	Movie ep5;
	ep5.setName("Star Wars: Episode V - The Empire Strikes Back");
	ep5.setIMBDScore(8.7);
	ep5.setReleaseYear(1980);
	ep5.setLength(124);

	Movie ep4;
	ep4.setName("Star Wars : Episode IV - A New Hope");
	ep4.setIMBDScore(8.6);
	ep4.setReleaseYear(1977);
	ep4.setLength(121);

	Movie ep6;
	ep6.setName("Star Wars: Episode VI - Return of the Jedi");
	ep6.setIMBDScore(8.3);
	ep6.setReleaseYear(1983);
	ep6.setLength(131);

	printf(
		R"(
ep4, ep5 comparisons:
name        : %d
year        : %d
score       : %d
length      : %d
passed years: %d)",
compareName(ep4, ep5),
compareReleaseYear(ep4, ep5),
compareIMBDScore(ep4, ep5),
compareLength(ep4, ep5),
compareYearsSince(ep4, ep5));

	MovieSeries series;
	series.initMovieSeries();
	series.addMovieSeries(&ep5);
	series.addMovieSeries(&ep4);
	series.addMovieSeries(&ep6);

	series.sortMovieSeries();
	series.printMovieSeries();
}