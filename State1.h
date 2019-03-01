#pragma once

#include "State.h"
#include <string>
#include <iostream>
#include "Symbole.h"

using namespace std;

class State1: public State {

public:
	State1() {}
	State1(const string name):State(name) {}
	virtual ~State1() {}

	bool transition(Automaton & automaton, Symbole * s);
};
