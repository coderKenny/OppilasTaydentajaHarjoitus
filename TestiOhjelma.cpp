
#include "Common.h";
#include "Oppilas.h";
#include "OppilasSovellus.h"
#include "Taydentaja.h"

int main(void)
{
	OppilasSovellus* oppilasSovellus = new OppilasSovellus();

	oppilasSovellus->LuoAlkuIF();
	oppilasSovellus->KaynnistaOppilasApplikaatio(oppilasSovellus);


	getchar();
	delete oppilasSovellus;
}
