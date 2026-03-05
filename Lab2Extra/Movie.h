#pragma once

class Movie {
	const char* Name;
	unsigned int ReleaseYear;
	double IMBDScore;
	int Length;
public:
	void setName(const char* name);
	const char* getName() const;

	void setReleaseYear(unsigned int year);
	unsigned int getReleaseYear() const;

	void setIMBDScore(double score);
	double getIMBDScore() const;

	void setLength(int length);
	int getLength() const;

	unsigned int yearsSince() const;
};
