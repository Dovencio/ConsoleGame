#include "prsn.h"

prsn::prsn(string NName, string NPrfName, int NAge, int Nhight, string Nrace, string Ntitle, string NPClass, string NPrfWeponMR, string NPrfWeponM, string NPrfWeponR)
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
}

prsn::~prsn()
{
    Setage(-1);
    Sethight(-1.0);
    Setrace("dead: "+race);
}
