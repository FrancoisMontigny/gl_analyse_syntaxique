#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State2 : public State {

public:
	State2() {}
	State2(const string name):State(name) {}
	virtual ~State2() {}

	bool transition(Automaton & automaton, Symbole * s);
};
