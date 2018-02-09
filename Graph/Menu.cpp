#include "stdafx.h"
#include "Menu.h"


Menu::Menu()
{
}


Menu::~Menu()
{
}


void Menu::initiate() {
	Graphen G;
	G.setname("Standard");

	// Graph aufbauen *************************************************

	// Flugh�fen anlegen. Jeder Flughafen bekommt eine eindeutige Nummer.
	G.InsertVertex(0, "Augusta");
	G.InsertVertex(1, "Bangstadt");
	G.InsertVertex(2, "Chemograd");
	G.InsertVertex(3, "Domchurch");
	G.InsertVertex(4, "Entfield");
	G.InsertVertex(5, "Fangen");
	G.InsertVertex(6, "Gelsenmund");
	G.InsertVertex(7, "Hollidings");

	// Verbindungen angeben.
	G.InsertArc(0, 1, 14); // Augusta - Bangstadt
	G.InsertArc(0, 2, 4); // Augusta - Chemograd
	G.InsertArc(0, 3, 2); // Augusta - Domchurch
	G.InsertArc(0, 4, 8); // Augusta - Entfield
	G.InsertArc(0, 7, 16); // Bangstadt - Hollidings

	G.InsertArc(1, 2, 11); // Bangstadt - Chemograd
	G.InsertArc(1, 4, 15); // Bangstadt - Entfield

	G.InsertArc(2, 3, 4); // Chemograd - Domchurch
	G.InsertArc(2, 4, 5); // Chemograd - Entfield

	G.InsertArc(3, 4, 6); // Domchurch - Entfield
	G.InsertArc(3, 5, 15); // Domchurch - Fangen
	G.InsertArc(3, 6, 7); // Domchurch - Gelsenmund
	G.InsertArc(3, 7, 14); // Domchurch - Hollidings

	G.InsertArc(4, 5, 10); // Entfield - Chemograd

	G.InsertArc(5, 6, 9); // Fangen - Gelsenmund

	G.InsertArc(6, 7, 8); // Gelsenmund - Hollidings 

	graphs.push_back(G);
}

void Menu::main(int a) {

	int c = -1;
	cout << "\nMenue von Graph "<< graphs[a].getname() << "." << endl;
	cout << " 1: Graph ausgeben" << endl;
	cout << " 2: Graph dublizieren und ausgeben" << endl;
	cout << " 3: Verbindungen" << endl;
	cout << " 4: Optimiertes Verbindungsnetz" << endl;
	cout << " 9: ENDE" << endl;

	cin >> c;

	switch (c) {
	case 1: // Graph ausgeben
			// Aufgabe 1: hier erg�nzen

		system("cls");
		graphs[a].print();
		main(a);
		break;
	case 2: // Aufgabe 2: Graph dublizieren und ausgeben
			// H = G;
			// hier erg�nzen: H ausgeben
		system("cls");
		copy(a);

		break;
	case 3: // Aufgabe 3: Verbindungen

		// hier erg�nzen
		system("cls");
		dikstrastart(a);
		break;
	case 4: // Aufgabe 4: Minimaler Spannbaum
			// MST M(G);

			// hier erg�nzen: M ausgeben

		break;
	case 9:
		break;
	default:
		main(a);
	}
}

void Menu::copy(int a) {
	Graphen dummy = graphs[a];
	dummy.setname(dummy.getname() + " KOPIE");
	graphs.push_back(dummy);
	main(graphs.size() - 1);
}

void Menu::dikstrastart(int a) {
	graphs[a].print();
	int ini = -1;
	cout << "Von welchem Knoten m�chten Sie starten?  ";
	cin >> ini;
	if (ini < graphs[a].getsize()) {
		graphs[a].dick(ini);
	}
	else {
		cout << "Ung�ltiger Knoten!" << endl << endl;
		main(a);
	}

}