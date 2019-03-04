#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State4 : public State {

public:
	State4() {}
	State4(const string name):State(name) {}
	virtual ~State4() {}

	bool transition(Automaton & automaton, Symbole * s);
};
