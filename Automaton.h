#pragma once

#include <deque>
#include "Lexer.h"
#include "Symbole.h"

using namespace std;

class State;
class DefaultState;
class State1;

class Automaton {
public:
	Automaton (Lexer * newLex, State * st);
	void decalage(Symbole * s, State *st);
	State * currentState();
	void reduction (int n, Symbole *s);

protected:
	deque<State *> states;
	deque<Symbole *> symbols;
	Lexer * lexer;

};
