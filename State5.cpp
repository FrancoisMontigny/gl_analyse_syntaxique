#pragma once
#include "State8.h"
#include "State2.h"
#include "State3.h"
#include "State5.h"

bool State5::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	case CLOSEPAR:
		break;
	case PLUS:
		break;
	case MULT:
		break;
	case FIN: 
		break;
	case ERREUR:
		break;
	case INT:
		automaton.decalage(s, new State3("E3"));
		break;
	case OPENPAR:
		automaton.decalage(s, new State2("E2"));
		break;
	case EXPRESSION:
		automaton.decalage(s, new State8("E8"));
		break;
	default:
		break;
	}

	return false;
}
