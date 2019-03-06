#pragma once

#include <iostream>
#include "DefaultState.h"
#include "Lexer.h"

#include "Automaton.h"
#include "Symbole.h"


int main(void) {
	string chaine("(1+34)*123");

	Lexer l(chaine);

	Symbole * s;
	while (*(s = l.Consulter()) != FIN) {
		//s->Affiche();
		//cout << endl;
		l.Avancer();
	}

	DefaultState ds("default");
	Entier * a = new Entier(1);
	Entier * b = new Entier(2);
	Expression *e = new ExprPlus(a,b);
	Automaton aut (&l, &ds);
	bool result = aut.lecture(e);
	cout << aut.currentState() << endl;
	return 0;
}

