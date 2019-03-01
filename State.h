#pragma once

#include "Automaton.h"
#include <string>
#include <iostream>
#include "Symbole.h"

using namespace std;

class State {

public:
	State() {}
	State(const string name) : name(name) {}
	virtual ~State() {}
	void print() const;

	virtual bool transition(Automaton & automate, Symbole * s) = 0;

protected:
	string name;
};
