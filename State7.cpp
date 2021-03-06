#pragma once
#include "State5.h"
#include "State2.h"
#include "State7.h"

bool State7::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	Expression * s1;
	Expression * s2;
	case CLOSEPAR:
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprPlus(s1,s2));
		break;
	case PLUS:
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprPlus(s1,s2));
		break;
	case MULT:
		automaton.decalage(s, new State5("E5"));
		break;
	case FIN:
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprPlus(s1,s2));
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
