#ifndef PRSN_H
#define PRSN_H
#include <iostream>
#include <Invtry.h>
#include <tuple>

using namespace std;

class prsn
{
    public:
        prsn(string NName, string NPrfName, int NAge, int Nhight, string Nrace, string Ntitle, string NPClass, string NPrfWeponMR, string NPrfWeponM, string NPrfWeponR);
        virtual ~prsn();
        string GetName() { return Name; }
        void SetName(string val) { Name = val; }

        string Getrace() { return race; }
        void Setrace(string val) { race = val; }

        float Gethight() { return hight; }
        void Sethight(float val) { hight = val; }

        int Getage() { return age; }
        void Setage(int val) { age = val; }

        string GetPrfName() { return PrfName;}
        void SetPrfName(string val) { PrfName = val; }

        string GetTitle() { return Title; }
        void SetTitle(string val) { Title = val; }

        string GetPrfWeponMR() { return PrfWeponMR; }
        void SetPrfWeponMR(string val) { PrfWeponMR=val; }

        string GetPrfWeponM() { return PrfWeponM; }
        void SetPrfWeponM(string val) { PrfWeponM=val; }

        string GetPrfWeponR() { return PrfWeponR; }
        void SetPrfWeponR(string val) { PrfWeponR=val; }

        string GetPClass() { return PClass; }
        void SetPClass(string val) { PClass=val; }

        int Gethealth() { return health; }
        void Sethealth(int val) { health += val; }

        int GetMaxhealth() { return Maxhealth; }
        void SetMaxhealth(int val) { Maxhealth += val; }

        void TellStats(int x)
        {
            switch(x)
            {
                case 1:
                    cout << Name;
                    break;
                case 2:
                    cout << race;
                    break;
                case 3:
                    cout << hight;
                    break;
                case 4:
                    cout << age;
                    break;
                case 5:
                    cout << PrfName;
                    break;
                case 6:
                    cout << Name << " " << race << " " << hight << " " << age << " " << PrfName << " " << endl;
                    break;
                default:
                    cout << "[Broken part]";
            }
        }

        void Talk(string msg, bool pusendl, bool usendl)
        {
            if(pusendl)
            {
                cout << endl;
            }
            cout << "[" << PrfName << "]:" << msg;
            if(usendl)
            {
                cout << endl;
            }
            Paused(0);
        }

        void MakeSound(string sound, bool pusendl, bool usendl)
        {
            if(pusendl)
            {
                cout << endl;
            }
            cout << PrfName << ": *" << sound << "*";
            if(usendl)
            {
                cout << endl;
            }
            Paused(0);
        }

        void action(string act, bool pusendl, bool usendl)
        {
            if(pusendl)
            {
                cout << endl;
            }
            cout << PrfName << "* " << act;
            if(usendl)
            {
                cout << endl;
            }
            Paused(0);
        }

        int StringToNumberer(string MyString)
        {
            istringstream converter(MyString);
            int result;
            converter >> result;
            return result;
        }


        tuple<int, int> interactWRoom()
        {
            string a, b;
            cin >> a;
            int A = this->StringToNumberer(a);
            cout << ", ";
            cin >> b;
            int B = this->StringToNumberer(b);
            cout << endl;
            return make_tuple(A, B);
        }

        void Paused(int useMsgType)
        {
            switch(useMsgType)
            {
            case 0:
                cout << "\\/";
                getch();
                cout << endl;
                break;
            case 1:
                cout << endl << "Press enter to continue.";
                getch();
                cout << endl;
                break;
            default:
                getch();
                break;
            }
        }
    protected:
    private:
        string Name;
        string race;
        float hight;
        int age;
        string PrfName;
        string Title;
        string PrfWeponMR;
        string PrfWeponM;
        string PrfWeponR;
        string PClass;
        int health;
        int Maxhealth;
};

#endif // PRSN_H
