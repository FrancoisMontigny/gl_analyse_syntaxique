#include "State5.h"
#include "State2.h"

bool State7::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	case CLOSEPAR:
		automaton.reduction(2, CLOSEPAR);
		break;
	case PLUS:
		automaton.reduction(2, PLUS);
		break;
	case MULT:
		automaton.decalage(s, new State5("E5"));
		break;
	case FIN:
		automaton.reduction(2, FIN);
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
