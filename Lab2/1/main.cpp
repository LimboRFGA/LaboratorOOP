#include "NumberList.cpp"

int main() {
	NumberList nrNat;
	nrNat.Init();

	nrNat.Add(10);
	nrNat.Add(25);
	nrNat.Add(-2);
	nrNat.Add(-50);
	nrNat.Add(5);

	nrNat.Print();
	nrNat.Sort();
	nrNat.Print();

	return 0;
}