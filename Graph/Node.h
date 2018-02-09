#pragma once

#include <string>
#include <iostream>

using namespace std;

class Node
{
public:
	Node();
	virtual ~Node();
	int getnumber() {
		return number;
	}
	string getname() {
		return name;
	}
	void setname(string a) {
		name = a;
	}
	void setnumber(int a) {
		number = a;
	}
	bool getvisited() {
		return visited;
	}
	void setvisited(bool b) {
		visited = b;
	}
private:
	string name;
	int number;
	bool visited;
};

