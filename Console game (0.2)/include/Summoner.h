#ifndef SUMMONER_H
#define SUMMONER_H
#include <Prsn.h>
#include <tuple>


class Summoner : public prsn
{
    public:
        Summoner(string NName, string NPrfName, int NAge, int Nhight, string Nrace, string Ntitle, string NPClass, string NPrfWeponMR, string NPrfWeponM, string NPrfWeponR, string NPrfGod, string NPrfAlly, int NMGKStr);
        virtual ~Summoner();
        string GetPrfAlly() { return PrfAlly; }
        void SetPrfAlly(string val) { PrfAlly = val; }

        string GetPrfGod() { return PrfGod; }
        void SetPrfGod(string val) { PrfGod = val; }

        int GetMGKStr() { return MGKStr; }
        void SetMGKStr(int val) { MGKStr = val; }

    protected:
    private:
        string PrfAlly;
        string PrfGod;
        int MGKStr;
};

#endif // SUMMONER_H
