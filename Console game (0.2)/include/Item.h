#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <tuple>

using namespace std;

class Item
{
    public:
        Item();
        virtual ~Item();

        string Getname() { return name; }
        void Setname(string val) { name = val; }

        char GetPTname() { return PTname; }
        void SetPTname(char val) { PTname = val; }

        string GetBDiscription() { return BDiscription; }
        void SetBDiscription(string val) { BDiscription = val; }

    protected:
    private:
        string name;
        char PTname;
        string BDiscription;
};

#endif // ITEM_H
