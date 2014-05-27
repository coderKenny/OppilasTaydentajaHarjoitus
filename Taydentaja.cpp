#include "Taydentaja.h"


Taydentaja::Taydentaja(void)
{
}


Taydentaja::~Taydentaja(void)
{
}

string Taydentaja::getTutkinto()
{
	return tutkinto;
}

void Taydentaja::setTutkinto(string tutkinto)
{
	this->tutkinto=tutkinto;
}


string Taydentaja::toString()
{
	string palautus = "Olen Taydentaja luokan olio nimeltani "+getEtunimi()+" "+getSukunimi()+"\nOppilasnumero : "+to_string(getOppilasnumero())+"\nMahdollinen SOTU : ";

	if(getSotu()!=nullptr)
		palautus+=(*getSotu());

	palautus+="\n";
	palautus+="Tutkintoni on : "+getTutkinto()+="\n\n";

	return palautus;
}
