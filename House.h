#ifndef House_h
#define House_h

#include <vector>
#include "Place.h"
#include "Image.h"
using namespace std;

class House
{
	int num_corners;
	int h;
	vector<Place> corners;
	vector<int*> corInt;
public:
	House();
	void swapPlace();
	void draw(Image &map);
	void addCorner(Place pos[4], Place tp);
};
#endif
