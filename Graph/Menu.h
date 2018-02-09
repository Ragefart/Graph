#pragma once
#include "Graphen.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Menu
{
public:
	Menu();
	virtual ~Menu();
	void initiate();
	void main(int a);
private:
	vector<Graphen> graphs;
};

