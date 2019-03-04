#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State5 : public State {

public:
	State5() {}
	State5(const string name):State(name) {}
	virtual ~State5() {}

	bool transition(Automaton & automaton, Symbole * s);
};
