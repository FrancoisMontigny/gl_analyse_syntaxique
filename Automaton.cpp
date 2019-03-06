#include "Automaton.h"
//ici, apparemmeent, on peut mettre ce foutu .h car la dépendance circulaire n'est que entre les .h
#include "State.h"

Automaton::Automaton(Lexer * newLex, State * st) {
	lexer = newLex;
	states.push_back(st);
}

void Automaton::decalage(Symbole * s, State *st){
	symbols.push_back(s);
	states.push_back(st);
	if(s->isTerminal()){
		lexer->Avancer();
	}
}

void Automaton::reduction(int n, Symbole * s){
	for(int i=0; i<n; i++){
		State * suppr = states.back();
		delete(suppr);
		states.pop_back();
	}
	states.back()->transition(*this,s);
}

bool Automaton::lecture(Expression *toRead){
	currentState()->print();
	//TODO : Fonction qui reccupere le prochain symbole de toRead et lemet dans symbols
	while(!states.back()->transition(*this, symbols.back())){
		currentState()->print();
		//TODO : Fonction qui reccupere le prochain symbole de toRead et lemet dans symbols
	}
	return true;
}

Expression * Automaton::popSymbol(){
	Expression * exp = (Expression*) symbols.back();
	symbols.pop_back();
	return exp;
}

State * Automaton::currentState(){
	return states.back();
}

void Automaton::popAndDestroySymbol(){
	Symbole * aSuppr = symbols.back();
	symbols.pop_back();
	delete(aSuppr);
}

