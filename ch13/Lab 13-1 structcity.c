#include <stdio.h>
#include <string.h>

struct position
{
	double latitude;
	double longitude;
};

int main(void)
{
	struct city
	{
		char* name;
		struct position place;
	};
	struct city seoul, newyork;

	seoul.name = "¼­¿ï";
	seoul.place.latitude = 37.33;
	seoul.place.longitude = 126.58;

	newyork.name = "´º¿å";
	newyork.place.latitude = 40.8;
	newyork.place.longitude = 73.9;
}