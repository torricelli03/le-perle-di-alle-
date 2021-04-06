
#ifndef START_H_
#define START_H_

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Aiuto.h"
using namespace std;

class Start{
	private:
		aiuto A;
		domande DOMANDA;
	public:
	    Start (aiuto A1, domande DOMANDE1);
		void visualizza_dom();
		void richiedi_aiuto();
		void inserisci_risposta();
		bool controllo_risposta();  
};

#endif
