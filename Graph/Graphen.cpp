#include "stdafx.h"
#include "Graphen.h"


Graphen::Graphen()
{
}


Graphen::~Graphen()
{
}

void Graphen::InsertVertex(int nummer, string name) {
	Node n;
	n.setnumber(nummer);
	n.setname(name);
	nodes.push_back(n);
	vector<int> v;
	arcs.push_back(v);
	for (int i = 0; i < nodes.size() - 1; i++) {
		arcs[arcs.size() - 1].push_back(-1);
	}
	for (int i = 0; i < nodes.size(); i++) {
		arcs[i].push_back(-1);
	}

}

void Graphen::InsertArc(int start, int ende, int laenge) {
	arcs[start][ende] = laenge;
	arcs[ende][start] = laenge;
}

void Graphen::setname(string newname) {
	name = newname;
}

bool Graphen::isarc(int a, int b) {
	if (arcs[a][b] != -1) {
		return true;
	}
	else {
		return false;
	}
}
