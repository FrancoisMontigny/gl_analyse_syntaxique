#pragma once
#include "State3.h"

bool State3::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	Expression * s1;
	case CLOSEPAR: 
		s1 = automaton.popSymbol();
		automaton.reduction(1, s1);
		break;
	case PLUS: 
		s1 = automaton.popSymbol();
		automaton.reduction(1, s1);
		break;
	case MULT: 
		s1 = automaton.popSymbol();
		automaton.reduction(1, s1);
		break;
	case FIN: 
		s1 = automaton.popSymbol();
		automaton.reduction(1, s1);
		break;
	case ERREUR:
		break;
	case INT:
		break;
	case OPENPAR:
		break;
	case EXPRESSION:
		break;
	default:
		break;
	}

	return false;
}
