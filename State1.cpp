#include "State1.h"
#include "State4.h"
#include "State5.h"

bool State1::transition(Automaton & automaton, Symbole * s) {

	switch (*s) {
	case CLOSEPAR:
		break;
	case PLUS:
		automaton.decalage(s, new State4("E4"));
		break;
	case MULT:
		automaton.decalage(s, new State5("E5"));
		break;
	case FIN: 
		return true;
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
