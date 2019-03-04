#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State3 : public State {

public:
	State3() {}
	State3(const string name):State(name) {}
	virtual ~State3() {}

	bool transition(Automaton & automaton, Symbole * s);
};
