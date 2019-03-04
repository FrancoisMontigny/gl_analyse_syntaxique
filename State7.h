#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State7 : public State {

public:
	State7() {}
	State7(const string name):State(name) {}
	virtual ~State7() {}

	bool transition(Automaton & automaton, Symbole * s);
};
