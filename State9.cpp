#pragma once
#include "State4.h"
#include "State9.h"

bool State9::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	Expression * s1;
	case CLOSEPAR:
		automaton.popAndDestroySymbol();
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		automaton.reduction(3, s1);
		break;
	case PLUS:
		automaton.popAndDestroySymbol();
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		automaton.reduction(4, s1);
		break;
	case MULT:
		automaton.popAndDestroySymbol();
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		automaton.reduction(4, s1);
		break;
	case FIN:
		automaton.popAndDestroySymbol();
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		automaton.reduction(4, s1);
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
