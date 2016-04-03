#ifndef INVTRY_H
#define INVTRY_H
#include <iostream>
#include <sstream>
#include <conio.h>
#include <string>
#include <Item.h>
#include <tuple>

using namespace std;

class Invtry
{
    public:
        int StringToNumbers(string MyString)
        {
            istringstream converter(MyString);
            int result;
            converter >> result;
            return result;
        }

        Invtry();
        virtual ~Invtry();
        int GetInvtryX() { return InvtryX; }

        int GetInvtryY() { return InvtryY; }

        void constructInvtry(int X, int Y)
        {
            InvtryX = X;
            InvtryY = Y;
            for(int a=0; a<20; a++)
            {
                for(int b=0; b<20; b++)
                {
                    TheInvtry[a][b]="\0";
                }
            }
        }

        void emptySpacesInv(int X, int Y)
        {
            for(int a=0; a<X; a++)
            {
                for(int b=0; b<Y; b++)
                {
                    TheInvtry[a][b]= ", ";
                }
            }
        }

        void accessInv()
        {
            for(int a=0; a<50; a++)
            {
                if(TheInvtry[a][0]=="\0")
                {
                    continue;
                }
                cout << "[";
                for(int b=0; b<50; b++)
                {
                    cout << TheInvtry[a][b];
                }
                cout << "]" << endl;
            }
        }

        void placeInInvtry(string obj, int X, int Y)
        {
            TheInvtry[X][Y] = obj;
        }

    protected:
    private:
        int InvtryX;
        int InvtryY;
        string TheInvtry[20][20];
};

#endif // INVTRY_H
