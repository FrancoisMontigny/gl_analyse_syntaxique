#include <iostream>
#include "Symbole.h"

void Symbole::Affiche() {
	cout << Etiquettes[ident];
}

bool Symbole::isTerminal(){
	return false;
}

Entier::Entier(int v){
	ident = INT;
	valeur=v;
}

//calcul au fil de l'eau
ExprPlus::ExprPlus(Expression * a, Expression * b){
	gauche=a;
	droite=b;
	valeur = gauche->getValeur() + droite->getValeur();
}

ExprMult::ExprMult(Expression * a, Expression * b){
	gauche=a;
	droite=b;
	valeur = gauche->getValeur() * droite->getValeur();
}

bool Expression::isTerminal(){
	return true;
}

void Expression::Affiche(){
	Symbole::Affiche();
}

int Expression::getValeur(){
	return valeur;
}

void Entier::Affiche() {
	Symbole::Affiche();
	cout << "(" << valeur << ")";
}

