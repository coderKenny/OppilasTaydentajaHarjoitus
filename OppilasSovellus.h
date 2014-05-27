#pragma once

#include "Common.h";
#include "Taydentaja.h"

class OppilasSovellus
{
public:
	OppilasSovellus(void);
	~OppilasSovellus(void);

	void NaytaKaikkiOpiskelijat(void);

	void KaynnistaOppilasApplikaatio(OppilasSovellus*);
	void LisaaOppilas(Oppilas*);

	void PoistaOpiskelija();

	void EtsiOpiskelija();

	void LuoAlkuIF();
	void pause();

	void gotoxy ( int,int );

	list <Oppilas*> oppilaat;


	Oppilas* oppilas1;
	Oppilas* oppilas2;
	Taydentaja* oppilas3;

	string* sotu;

};

