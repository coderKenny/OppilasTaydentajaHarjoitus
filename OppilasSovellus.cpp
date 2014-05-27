#include "OppilasSovellus.h"
#include "Taydentaja.h"

OppilasSovellus::OppilasSovellus(void)
{
	oppilas1= new Oppilas("Kenneth","Ekbom",12345, "290479-1472");
	oppilas2= new Oppilas("John","Doe",123);
	oppilas3 = new Taydentaja();
	oppilas3->setEtunimi("Joakim");
	oppilas3->setSukunimi("Ekbom");
	oppilas3->setTutkinto("Maisteri");
	oppilas3->setOppilasnumero(54321);
	
	sotu=new string();
	sotu->append("040481-1234");
	
	oppilas3->setSotu(sotu);
}


OppilasSovellus::~OppilasSovellus(void)
{
	delete sotu;
}


void OppilasSovellus::NaytaKaikkiOpiskelijat(void)
{

	for(list<Oppilas*>::iterator itr=oppilaat.begin(),itr_end = oppilaat.end(); itr != itr_end; ++itr)
	{
		cout<<(*itr)->toString();
	}

	pause();

	// for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    //std::cout << *it << ' ';
}



void OppilasSovellus::LuoAlkuIF() // Luo puhdas screna
{
	
	system("CLS");		// Tyhjennä ruutu, non-portable
	gotoxy(0,11);		// Tyhjennä mahdollinen vanha syöte
	cout<<"                                                                            "; // Tyhjennä rivi
	gotoxy(10,11);		// Palauta kursori syöttömoodiin
	
	gotoxy(0,0);
	cout<<endl;
	cout << "Olet kirjautunut kirjaston ohjelmistoon, mita haluat tehda ?\n\n";

	cout <<"1. Lisaa oppilas \n";
	cout <<"2. Lisaa taydentaja\n";
	cout <<"3. Etsi opiskelija\n";
	cout <<"4. Poista opiskelija\n";
	cout <<"5. Tulosta kaikki\n";
	cout <<"6. Poistu\n";
	cout<<endl<<endl;

	cout<<"Valitse : ";

	gotoxy(10,11);

}


void OppilasSovellus::pause() // System pause funktio
{
  cout << endl << "Press enter to continue...";
  getchar();
}


void OppilasSovellus::gotoxy ( int column, int line )  // Liikutetaan kursoria konsolissa
{
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
}

void OppilasSovellus::LisaaOppilas(Oppilas* oppilas)
{
	oppilaat.push_back(oppilas);
	cout<< "Oppilas lisatty !";
	pause();
}

void OppilasSovellus::PoistaOpiskelija()
{
	int numero;
	cout<<"Anna poistettavan numero : ";
	cin>>numero;

	for(list<Oppilas*>::iterator itr=oppilaat.begin(),itr_end = oppilaat.end(); itr != itr_end; ++itr)
	{
		if((*itr)->getOppilasnumero()==numero)
		{
			oppilaat.erase(itr);
			cout<<"Asiakas on poistettu !";
			break;
		}
	}

	pause();
}

void OppilasSovellus::EtsiOpiskelija()
{
	int numero;
	cout<<"Anna etsittavan numero : ";
	cin>>numero;

	for(list<Oppilas*>::iterator itr=oppilaat.begin(),itr_end = oppilaat.end(); itr != itr_end; ++itr)
	{
		if((*itr)->getOppilasnumero()==numero)
		{
			cout<< (*itr)->toString();
		}
	}
	pause();
}


void OppilasSovellus::KaynnistaOppilasApplikaatio(OppilasSovellus* sovellus)
{
	LuoAlkuIF();
	while(1)
	{
		int syote;
		syote=cin.get();
		if(syote==54)
			break;
		else
		{
			switch(syote)
			{
				case 49 :
				LisaaOppilas(oppilas1);
				break;

				case 53:
				NaytaKaikkiOpiskelijat();
				break;

				case 50:
				LisaaOppilas(oppilas3);
				break;

				case 52:
				PoistaOpiskelija();
				break;

				case 51:
				EtsiOpiskelija();
				break;

				default:
				LuoAlkuIF();
				gotoxy(10,11);
				break;

			}
		}
	}
}