#pragma once

#include "State.h"
#include <string>
#include <iostream>
#include "Symbole.h"

using namespace std;

class State6: public State {

public:
	State6() {}
	State6(const string name):State(name) {}
	virtual ~State6() {}

	bool transition(Automaton & automaton, Symbole * s);
};
