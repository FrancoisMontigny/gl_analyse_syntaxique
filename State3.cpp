#include "State5.h"
#include "State2.h"
#include "State3.h"

bool State2::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	case CLOSEPAR: 
		automaton.reduction(5, CLOSEPAR);
		break;
	case PLUS: 
		automaton.reduction(5, PLUS);
		break;
	case MULT: 
		automaton.reduction(5, MULT);
		break;
	case FIN: 
		automaton.reduction(5, FIN);
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
