#pragma once

#include "State3.h"
#include "State8.h"

bool State8::transition(Automaton & automaton, Symbole * s) {
	switch (*s) {
	Expression * s1;
	Expression * s2;
	case CLOSEPAR: 
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprMult(s1,s2));
		break;
	case PLUS: 
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprMult(s1,s2));
		break;
	case MULT: 
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprMult(s1,s2));
		break;
	case FIN: 
		s1 = automaton.popSymbol();
		automaton.popAndDestroySymbol();
		s2 = automaton.popSymbol();
		automaton.reduction(3, new ExprMult(s1,s2));
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
