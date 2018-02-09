#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;


class Graphen
{
public:
	Graphen();
	virtual ~Graphen();
	void InsertVertex(int nummer, string name);
	void InsertArc(int start, int ende, int laenge);
	void setname(string newname);
	string getname() {
		return name;
	}
	bool isarc(int a, int b);
private:
	vector<Node> nodes;
	vector<vector<int>> arcs;
	string name;
};

