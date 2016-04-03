#include "Better Header..h"
#include "Prsn.h"
#define DEBUG

using namespace std;

// @note (Dovencio#1#02/25/16): add vars below\/

bool LLMenu;
string UsrInpt, pass;
int exitValue = 0;
string* ptrPass = &pass;


// @note (Dovencio#1#02/25/16): functions here\/
bool newPass()
{
    bool endNewPass;
    cout << "You are making a new password!" << endl;
    string* ptrPassUncon1 = new string(EnterPassword());
    cout << "Now confirm that code." << endl;
    string* ptrPassUncon2 = new string(EnterPassword());
    if(*ptrPassUncon1==*ptrPassUncon2)
    {
        *ptrPass = *ptrPassUncon1;
        cout << "pass created" << endl;
        endNewPass = true;
        cout << "Press enter to continue...";
        getch();
        skipSpaces(30,0);
    }
    else
    {
        cout << "pass failed." << endl;
        endNewPass = false;
    }
    *ptrPassUncon1 = "\0";
    *ptrPassUncon2 = "\0";
    delete ptrPassUncon1;
    delete ptrPassUncon2;
    return endNewPass;
}

void boop(int num)
{
    for(int i=0; i<num; i++)
    {
        cout << "boopadyboopadyboopboop!" << endl;
    }
    cout << "times booped: " << num << endl;
}

void EXTCodeFMT(string msg)
{
    skipSpaces(2,0);
    skipSpaces(1,2);
    cout << msg << endl;
    skipSpaces(1,2);
    skipSpaces(2,0);
}

#ifdef DEBUG
void beginMain()
{
    cout << "debug mode" << endl;
    *ptrPass = "db";
}
#else
void beginMain()// @note (Dovencio#1#02/25/16): Put all things to be done before start
{
    skipSpaces(30,0);
    bool term = newPass();
    if(term==false)
    {
        exitValue = 1;
    }
}
#endif // DEBUG

/*
 *
 *  This is the int main()function.
 *
 *  Bow down to its mighty reign.
 *
 *  if you don't I will burn you.
 */

int main()
{
    beginMain();
    if(exitValue==0)
    {
        if(EnterPassword()==*ptrPass)
        {
            LLMenu = true;
            while(LLMenu)
            {
                cout << "Type menu thing here!>";
                cin >> UsrInpt;
                if(UsrInpt=="IG")
                {
                    idleGame();
                    skipSpaces(3,0);
                }
                else if(UsrInpt=="boop")
                {
                    boop(5);
                    skipSpaces(2,1);
                }
                else if(UsrInpt=="exit")
                {
                    LLMenu = false;
                }
                else if(UsrInpt=="exitcodes")
                {
                    string usrEXTCode;
                    cout << "Type exitcode here>";
                    cin >> usrEXTCode;
                    if(usrEXTCode=="1"||usrEXTCode=="0x1")
                    {
                        EXTCodeFMT("Password confirmation error.");
                    }
                    else if(usrEXTCode=="2"||usrEXTCode=="0x2")
                    {
                        EXTCodeFMT("Password enter error.");
                    }
                    else if(usrEXTCode=="3"||usrEXTCode=="0x3")
                    {
                        EXTCodeFMT("Quest finish error.");
                    }
                }
                else if(UsrInpt=="help")
                {
                    cout << "Things you can type:" << endl;
                    cout << "IG" << endl;
                    cout << "boop" << endl;
                    cout << "exit" << endl;
                    cout << "exitcodes" << endl;
                    cout << "Quest" << endl;
                    cout << "Remember that spaces are delimiters so you can type \"IG exit\" and enter into the Idle game then exit again into the main menu." << endl;
                    skipSpaces(1,2);
                }
                else if(UsrInpt=="Quest")
                {
                    #ifdef DEBUG
                    string stringboop;
                    cin >> stringboop;
                    int sldkfj = StringToNumber(stringboop);
                    bool qstW = Quest(true, sldkfj);
                    if(qstW==false)
                    {
                        cout << endl << "You have failed." << endl;
                    }
                    else if(qstW==true)
                    {
                        cout << endl << "you have succeeded in you quest." << endl;
                    }
                    else
                    {
                        cout << "Error" << endl;
                        return 3;
                    }
                    skipSpaces(1,2);
                    #else
                    if(EnterPassword()==*ptrPass)
                    {
                        bool qstW = Quest();
                        if(qstW==false)
                        {
                            cout << endl << "You have failed." << endl;
                        }
                        else if(qstW==true)
                        {
                            cout << endl << "you have succeeded in you quest." << endl;
                        }
                        else
                        {
                            cout << "Error" << endl;
                            return 3;
                        }
                        skipSpaces(1,2);
                    }
                    #endif // DEBUG
                }
                else if(UsrInpt=="Test")
                {
                    #ifdef DEBUG
                    cout << "non posuit test" << endl;
                    #else
                    cout << "Don't try to test off of debug mode!" << endl;
                    #endif
                }
                else
                {
                    cout << "I don't know what you are saying!!!" << endl;
                    cout << "Type \"help\" for help." << endl;
                }
            }
        }
        else
        {
            exitValue = 2;
        }
    }
    return exitValue;
}
