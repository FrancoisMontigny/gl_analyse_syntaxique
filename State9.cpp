#include "State4.h"

bool State9::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	case CLOSEPAR:
		automaton.reduction(4, CLOSEPAR);
		break;
	case PLUS:
		automaton.reduction(4, PLUS);
		break;
	case MULT:
		automaton.reduction(4, MULT);
		break;
	case FIN:
		automaton.reduction(4, FIN);
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
