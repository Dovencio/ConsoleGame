#include "Better Header..h"

using namespace std;

void Pause(int useMsgType)
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

string EnterPassword()
{
    cout << "Type password>";
    string numAsString = "";
    char ch = getch();
    while (ch != '\r')
    {
        if(ch == '\b')
        {
            cout << '\b';
            continue;
        }
        cout << '*';
        numAsString += ch;
        ch = getch();
    }
    cout << endl << endl;
    return numAsString;
}

void skipSpaces(int i, int lnstyl)
{
    for(int d = 0; i>d; d++)
    {
        if(lnstyl==0)
        {
            cout << endl;
        }
        else if(lnstyl==1)
        {
            cout << "-" << endl;
        }
        else if(lnstyl==2)
        {
            cout << "---------------------------" << endl;
        }
    }
}
