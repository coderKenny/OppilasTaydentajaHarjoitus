
#pragma once

#include "Common.h"
#include "Oppilas.h"

class Taydentaja :
	public Oppilas
{
public:
	Taydentaja(void);
	~Taydentaja(void);

	string getTutkinto();
	void setTutkinto(string);

	string toString();

private:
	string tutkinto;
};

