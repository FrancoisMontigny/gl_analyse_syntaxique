#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class DefaultState : public State {

public:
	DefaultState() {}
	DefaultState(const string name):State(name) {}
	virtual ~DefaultState() {}

	bool transition(Automaton & automaton, Symbole * s);
};
