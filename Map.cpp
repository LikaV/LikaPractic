
#include "Map.h"

Map::Map()
{
	
}
void Map::addHouse(House *h)
{
	houses.push_back(h);
}
void Map::loadMap(string fl)
{
	ifstream fin(fl.c_str());
	string buf;
	fin >> buf;
	while (buf != "950")
		fin >> buf;
	size[0] = 950;
	fin >> size[1];
	map = new Image(size);
	map -> loadIm(fin);
	fin.close();
}
void Map::loadFile(string fl)
{
	ifstream fin(fl.c_str());
	float x0, x1, y0, y1, x, y;
	int i, j, k;
	Place tp;
	string buf;
	fin >> size[0] >> size[1];
	fin >> x0 >> y0 >> x1 >> y1;
	pos[0].add(x0, y0);
	pos[1].add(x1, y0);
	pos[2].add(x0, y1);
	pos[3].add(x1, y1);
		addHouse(new House());
		for(i = 0; i < 4; i++)
		{
			fin >> x >> y;
			if((x >= x0)&&(x <= x1)&&(y >= y0)&&(y <= y1))
			{
				tp.add(x, y);
				houses.back() -> addCorner(pos, tp);
			}
		}
	fin.close();
}
void Map::show()
{
	int l;
	for(l = 0; l < houses.size(); l++)
	{
		houses[l] -> draw(*map);
	}
	map -> showFile("mapShow.pnm");
	
}
Map::~Map()
{
	houses.clear();
}

