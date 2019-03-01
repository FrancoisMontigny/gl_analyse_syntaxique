#include "DefaultState.h"
#include "State1.h"

bool DefaultState::transition(Automaton & automaton, Symbole * s) {

	switch (*s) {
	case INT:
		break;
	case OPENPAR:
		break;
	case EXPRESSION:
		automaton.decalage(s, new State1("E1"));
		break;
	default:
		break;
	}

	return false;
}
