#include "Summoner.h"

Summoner::Summoner(string NName, string NPrfName, int NAge, int Nhight, string Nrace, string Ntitle, string NPClass, string NPrfWeponMR, string NPrfWeponM, string NPrfWeponR, string NPrfGod, string NPrfAlly, int NMGKStr) :
    prsn(NName, NPrfName, NAge, Nhight, Nrace, Ntitle, NPClass, NPrfWeponMR, NPrfWeponM, NPrfWeponR)
{
    this->SetName(NName);
    this->SetPrfName(NPrfName);
    this->Setage(NAge);
    this->Sethight(Nhight);
    this->Setrace(Nrace);
    this->SetTitle(Ntitle);
    this->SetPClass(NPClass);
    this->SetPrfWeponMR(NPrfWeponMR);
    this->SetPrfWeponM(NPrfWeponM);
    this->SetPrfWeponR(NPrfWeponR);
    this->SetPrfGod(NPrfGod);
    this->SetPrfAlly(NPrfAlly);
    this->SetMGKStr(NMGKStr);
}

Summoner::~Summoner()
{
    //dtor
}
