#ifndef MENU_H_
#define MENU_H_

#include<iostrem>
#include<cstdlib>
#include"Domande.h"
#include"Start.h"
#include"Aiuto.h"
using namespace std;

class Menu{
	private:
		string nome;
	    Domande D;
     	Start S;
    public:
    	Menu(string n);
    	void aggiungi_dom(); 
    	void record(); 
};

#endif 
