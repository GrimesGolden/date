#include "Chrono.h"

int main()
{
	Chrono::Date today {1978, Chrono::Month::jun, 25};

	cout << today; 

	Chrono::Date tomorrow = today; 

	tomorrow.add_day(1);

	cout << tomorrow;
}