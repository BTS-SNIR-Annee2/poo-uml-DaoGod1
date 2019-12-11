#include <iostream>
#include <iomanip>

using namespace std;

#include "Ligne.h"
#include "Article.h"

Ligne::Ligne(Article *article, long quantite)
{
	this->article = article;
	this->quantite = quantite;
}

Article * Ligne::getArticle() const
{
	
	return this->article;
}

double Ligne::getMontant() const
{
	double montant;
	montant = quantite*article->getPrix();
	return montant;
}
      
long Ligne::getQuantite() const
{
	return this->quantite;
	
}

void Ligne::setArticle(Article *article)
{
		this->article = article;

	
}

void Ligne::setQuantite(long quantite)
{
	this->quantite = quantite;
	
}
      

void Ligne::afficher()
{
		cout << setfill(' ') << setw(3) << quantite;
		cout << "|" << setfill('.') << setw(50) << getArticle()->getTitre();
		cout << "|" << setfill(' ') << setw(8) << getArticle()->getPrix();
		cout << "|" << setfill(' ') << setw(9) << getMontant() << " euros";
}
