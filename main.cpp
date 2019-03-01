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
		s->Affiche();
		cout << endl;
		l.Avancer();
	}

	DefaultState ds("default");
	Expression *e = new Expression();
	Automaton a (&l, &ds);
	a.currentState()->print();
	ds.transition(a, e);
	a.reduction(1,e);
	a.currentState()->print();
	return 0;
}

