#ifndef DOMANDE_H_
#define DOMANDE_H_
#include<iostream>
#include<cstdlib>
using namespace std;

class Domande{
	private:
		string dom[50];
		int dom_corrente;
		string r[4];
	public:
		Domande(string dom1, int dc, string risp, int rc);
		void carica_domanda();
		void next_domanda();
};
#endif
