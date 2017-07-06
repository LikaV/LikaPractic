#include "House.h"
#include <vector>
#include <fstream>
using namespace std;

class Map
{
	Image *map;
	Place pos[4];
	int size[2];
	vector<House*> houses;
public:
	Map(Place tpos[4], int tsize[2]);
	Map();
	void addHouse(House *h);
	void loadMap(string fl);
	void loadFile(string fl);
	void show();
	~Map();
};
