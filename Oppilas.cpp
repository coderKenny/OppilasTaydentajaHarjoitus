#include "Oppilas.h"


Oppilas::Oppilas(void)
{
}


Oppilas::Oppilas(string etunimi, string sukunimi,int oppilasnumero)
{
	this->etunimi=etunimi;
	this->sukunimi=sukunimi;
	this->oppilasnumero=oppilasnumero;
	sotu=nullptr;
}


Oppilas::Oppilas(string etunimi, string sukunimi,int oppilasnumero, string sotu)
{
	this->etunimi=etunimi;
	this->sukunimi=sukunimi;
	this->oppilasnumero=oppilasnumero;
	this->sotu = new string;
	(*(this->sotu))=sotu;
}



Oppilas::~Oppilas(void)
{
	if(sotu!= nullptr)
		delete sotu;
}

void Oppilas::setEtunimi(string etunimi)
{
	this->etunimi=etunimi;
}

string Oppilas::getEtunimi()
{
	return this->etunimi;
}

void Oppilas::setSukunimi(string sukunimi)
{
	this->sukunimi=sukunimi;
}

string Oppilas::getSukunimi()
{
	return sukunimi;
}

void Oppilas::setOppilasnumero(int oppilasnumero)
{
	this->oppilasnumero=oppilasnumero;
}
	
int Oppilas::getOppilasnumero()
{
	return oppilasnumero;
}


void Oppilas::setSotu(string* sotu)
{
	this->sotu=sotu;
}

string* Oppilas::getSotu()
{
	return sotu;
}



string Oppilas::toString()
{
	string palautus = "\nOlen Oppilas luokan olio nimeltani "+etunimi+" "+sukunimi+"\nOppilasnumero : "+to_string(oppilasnumero)+"\nMahdollinen SOTU : ";

	if(sotu!=nullptr)
		palautus+=(*sotu);

	palautus+="\n\n\n";

	return palautus;
}