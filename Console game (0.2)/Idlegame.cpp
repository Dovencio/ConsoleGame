#include "Better Header..h"

using namespace std;
int money, miners, ores, refiners, iron, builders, products, sellers, step;
bool llIGM;
int* ptMoney = &money;
int* ptMiners = &miners;
int* ptOres = &ores;
int* ptRefiners = &refiners;
int* ptIron = &iron;
int* ptBuilders = &builders;
int* ptProducts = &products;
int* ptSellers = &sellers;
int* ptStep = &step;

int StringToNumber(string MyString)
{
    istringstream converter(MyString);
    int result;
    converter >> result;
    return result;
}

void JmpStep(int num)
{
    for(int i=0; i<num; i++)
    {
        *ptOres += *ptMiners;
        *ptOres -= *ptRefiners;
        *ptIron += *ptRefiners;
        *ptIron -= *ptBuilders;
        *ptProducts += *ptBuilders;
        *ptProducts -= *ptSellers;
        *ptMoney += *ptSellers*3;
        *ptStep += 1;
        cout << "pointers: " << endl;
        cout << "Money: " << *ptMoney << endl;
        cout << "Miners: " << *ptMiners << endl;
        cout << "Ores: " << *ptOres << endl;
        cout << "Refiners:" << *ptRefiners << endl;
        cout << "Iron: " << *ptIron << endl;
        cout << "Builders: " << *ptBuilders << endl;
        cout << "Products: " << *ptProducts << endl;
        cout << "Sellers: " << *ptSellers << endl;
        cout << "Step Number: " << *ptStep << endl;
        skipSpaces(1,1);
    }
}

int idleGame()
{
    cout << "Running Idle Game 0.3\n" << endl;
    llIGM = true;
    skipSpaces(1,1);
    while(llIGM)
    {
        string IGMainInput;
        cout << "Type shop, step, list, or exit." << endl;
        cin >> IGMainInput;
        skipSpaces(1,0);
        skipSpaces(1,1);
        skipSpaces(1,0);
        if(IGMainInput=="shop")
        {
            cout << "Welcome To the store!" << endl;
            cout << "Type miner, refiner, builder, or seller" << endl;
            cout << "Type exit to exit." << endl;
            string SChoice;
            bool LLSIG = true;
            while(LLSIG)
            {
                cin >> SChoice;
                if(SChoice=="miner")
                {
                    *ptMiners += 1;
                    *ptMoney -= 20;
                    cout << "You have bought a Miner!" << endl;
                    skipSpaces(1,1);
                }
                else if(SChoice=="refiner")
                {
                    *ptRefiners += 1;
                    *ptMoney -= 20;
                    cout << "You have bought a Refiner!" << endl;
                    skipSpaces(1,1);
                }
                else if(SChoice=="builder")
                {
                    *ptBuilders += 1;
                    *ptMoney -= 20;
                    cout << "You have bought a Builder" << endl;
                    skipSpaces(1,1);
                }
                else if(SChoice=="seller")
                {
                    *ptSellers += 1;
                    *ptMoney -= 20;
                    cout << "You have bought a Seller!" << endl;
                    skipSpaces(1,1);
                }
                else if(SChoice=="exit")
                {
                    LLSIG = false;
                    skipSpaces(1,1);
                }
            }
        }
        else if(IGMainInput=="step")
        {
            string stpQrry;
            cin >> stpQrry;
            JmpStep(StringToNumber(stpQrry));
        }
        else if(IGMainInput=="list")
        {
             cout << "pointers: " << endl;
             cout << "Money: " << *ptMoney << endl;
             cout << "Miners: " << *ptMiners << endl;
             cout << "Ores: " << *ptOres << endl;
             cout << "Refiners:" << *ptRefiners << endl;
             cout << "Iron: " << *ptIron << endl;
             cout << "Builders: " << *ptBuilders << endl;
             cout << "Products: " << *ptProducts << endl;
             cout << "Sellers: " << *ptSellers << endl;
             skipSpaces(2,0);
        }
        else if(IGMainInput=="exit")
        {
            llIGM = false;
            cout << "exiting..." << endl;
        }
        else if(IGMainInput=="rstScores")
        {
            *ptMoney = 0;
            *ptMiners = 0;
            *ptOres = 0;
            *ptRefiners = 0;
            *ptIron = 0;
            *ptBuilders = 0;
            *ptProducts = 0;
            *ptSellers = 0;
        }
    }
    skipSpaces(1,2);
    return 0;
}
