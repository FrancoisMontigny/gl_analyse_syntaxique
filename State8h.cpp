#include "State3.h"

bool State8::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	case CLOSEPAR: 
		automaton.reduction(3, CLOSEPAR);
		break;
	case PLUS: 
		automaton.reduction(3, PLUS);
		break;
	case MULT: 
		automaton.reduction(3, MULT);
		break;
	case FIN: 
		automaton.reduction(3, FIN);
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
