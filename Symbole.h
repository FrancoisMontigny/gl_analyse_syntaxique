#pragma once

#include <string>
#include <map>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPRESSION };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPRESSION" };

class Symbole {
   public:
      Symbole(int i) : ident(i){  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();
      bool isTerminal();
   protected:
      int ident;
};

class Expression : public Symbole {
	public:
		Expression():Symbole(EXPRESSION){}
		Expression(int v):Symbole(EXPRESSION), valeur(v){}
		virtual ~Expression(){}
		virtual void Affiche();
		bool isTerminal();
		int getValeur();
	protected :
	   		int valeur;

};

class Entier : public Expression {
   public:
      Entier(int v);
      ~Entier() { }
      virtual void Affiche();

};

class ExprPlus : public Expression {
	public:
		ExprPlus(Expression * a, Expression * b);
	protected:
		Expression * gauche;
		Expression * droite;
};

class ExprMult : public Expression {
	public:
		ExprMult(Expression * a, Expression * b);
	protected:
		Expression * gauche;
		Expression * droite;
};


