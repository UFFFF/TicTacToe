#include "WinCon.h"

void WinCon::append_kreis(int i)
{
	kreis.push_back(i);
}

void WinCon::append_kreuz(int i)
{
	kreuz.push_back(i);
}

bool WinCon::won()
{
	if (kreis.size() >= 3) {
		if ((std::find(kreis.begin(), kreis.end(), 1) != kreis.end()) && 
			(std::find(kreis.begin(), kreis.end(), 2) != kreis.end()) && 
			(std::find(kreis.begin(), kreis.end(), 3) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 1) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 4) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 7) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 3) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 6) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 9) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 7) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 8) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 9) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 1) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 5) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 9) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 7) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 5) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 3) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 2) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 5) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 8) != kreis.end())) {
			return true;
		}
		else if ((std::find(kreis.begin(), kreis.end(), 4) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 5) != kreis.end()) &&
			(std::find(kreis.begin(), kreis.end(), 6) != kreis.end())) {
			return true;
		}
	}
	else if (kreuz.size() >= 3) {
		if ((std::find(kreuz.begin(), kreuz.end(), 1) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 2) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 3) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 1) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 4) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 7) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 3) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 6) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 9) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 7) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 8) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 9) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 1) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 5) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 9) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 7) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 5) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 3) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 2) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 5) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 8) != kreuz.end())) {
			return true;
		}
		else if ((std::find(kreuz.begin(), kreuz.end(), 4) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 5) != kreuz.end()) &&
			(std::find(kreuz.begin(), kreuz.end(), 6) != kreuz.end())) {
			return true;
		}
	}
	return false;
}
