#pragma once

#include "State.h"
#include "Symbole.h"
#include <string>
#include <iostream>

using namespace std;

class State9 : public State {

public:
	State9) {}
	State9(const string name):State(name) {}
	virtual ~State9() {}

	bool transition(Automaton & automaton, Symbole * s);
};
