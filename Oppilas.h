#pragma once

#include "Common.h"

class Oppilas
{
public:
	Oppilas(void);
	~Oppilas(void);

	Oppilas(string, string,int);
	Oppilas(string, string,int,string);

	void setEtunimi(string);
	string getEtunimi();
	void setSukunimi(string);
	string getSukunimi();

	virtual string toString();

	void setOppilasnumero(int);
	int getOppilasnumero();

	void setSotu(string*);
	string* getSotu();

private:
	string etunimi;
	string sukunimi;
	int oppilasnumero;
	

	string* sotu;
};

