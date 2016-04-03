#ifndef BETTER_HEADER__H_INCLUDED
#define BETTER_HEADER__H_INCLUDED
#include <iostream>
#include <sstream>
#include <conio.h>
#include <string>
#include <ctime>
#include <tuple>

using namespace std;

#include "Prsn.h"
#include "Room.h"
#include "Summoner.h"
int idleGame();
string EnterPassword();
void skipSpaces(int i, int lnstyl);
int StringToNumber(string MyString);
bool Quest(bool ovr, int Q);
int FndQuest(bool ovr, int Q);
void Pause(int useMsgType);
/* @note (Dovencio#9#02/24/16): Put all functions (prototypes) here /\ */
/* @note (Dovencio#1#03/03/16): put heavenly vars here \/ */

#endif // BETTER_HEADER__H_INCLUDED
