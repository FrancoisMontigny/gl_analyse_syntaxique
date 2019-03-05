#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State8 : public State {

public:
	State8() {}
	State8(const string name):State(name) {}
	virtual ~State8() {}

	bool transition(Automaton & automaton, Symbole * s);
};
