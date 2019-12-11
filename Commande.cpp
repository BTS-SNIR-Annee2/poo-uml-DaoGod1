#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"

Commande::Commande(string reference, string date)
{
	this->reference = reference;
	this->date = date;
	//this->ligne = liste;
}

string Commande::getReference() const
{
	return this->reference;
	
}
      
void Commande::setReference(string reference)
{
	this->reference = reference;
	
}

string Commande::getDate() const
{

	return this->date;

}

void Commande::setDate(string date)
{
	this->date = date;

}

Ligne Commande::getLigne(int numero) const
{
	return 0;

}

void Commande::setLigne(const Ligne &l)    
{      


}

double Commande::getTotal()
{
	return 0;

}

int Commande::getNbArticles() const
{
	return 0;
	
}
      
void Commande::afficher()
{
	
   cout << setfill('-') << setw(80) << "\n";
	cout << setfill(' ') << setw(3) << "Qte"; 
   cout << "|" << setfill(' ') << setw(50) << "Description"; 
   cout << "|" << setfill(' ') << setw(8) << "Prix uni"; 
   cout << "|" << setfill(' ') << setw(15) << "Total\n";
   cout << setfill('-') << setw(80) << "\n";
	
		/*cout << setfill(' ') << setw(3) << getLigne()->quantite;
		cout << "|" << setfill('.') << setw(50) << getLigne()->getArticle()->getTitre();
		cout << "|" << setfill(' ') << setw(8) << getLigne()->getArticle()->getPrix();
		cout << "|" << setfill(' ') << setw(9) << getLine()->getMontant() << " euros";*/
	
}
