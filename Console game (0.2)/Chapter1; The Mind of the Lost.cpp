#include "Better Header..h"
#define DEBUG
#define T true
#define F false

using namespace std;

// NOTE (Dovencio#9#03/06/16): put quest1 vars here!\/
bool Qust1, Qust2, Qust3 =false;
bool* ptQ1=&Qust1;
bool* ptQ2=&Qust2;
bool* ptQ3=&Qust3;

bool LVL1Key=false;
bool* ptLVL1Key = &LVL1Key;
bool LVL2Key=false;
bool* ptLVL2Key = &LVL2Key;

// NOTE (Dovencio#9#): put functions below\/
int FndQuest(bool ovr, int Q)
{
    int derp;
    if(not(ovr))
    {
        if(not(Qust1))
        {
            derp = 1;
        }
        else if(not(Qust2))
        {
            derp = 2;
        }
        else if(not(Qust3))
        {
            derp = 3;
        }
        else
        {
            derp = 0;
        }
    }
    else
    {
        derp = Q;
    }
    return derp;
}
// NOTE (Dovencio#9#3/25/16): Put all people here\/
prsn mairie("Mairie Fumairie", "Mairie", 23, 2.0, "Human", "Teacher: MMk; Rank: 1.", "Swordsman.", "50M:1R", "Medium sword", "Bow");

prsn hikkomi("Hikkomi Rikamiwa", "Hikkomi", 29, 2.16, "Chimera: Human, Alligator.", "Teacher: MMk; Rank: 5.", "Deaf con", "20R:1M", "Knife", "Deaf-con Gun MK 5");

Summoner fexron("Fexron Canindae", "Fexron", 16, 1.9, "Magic Atamaton: Kieren Wolf", "Magic Teacher: MMk; Rank: 9-10.", "Summoner", "50R:1M", "Duel blade cleaver", "Built in plasma mini-gun.", "Hell-hound", "Anubis", 10);

prsn TheWestly("Heero Yui", "Heero", 20, 1.8, "Drake", "Leader: MMk; Rank: 2.", "Sniper",  "20R:1M", "Raper", "Snipers");

prsn you("", "You", 0, 0.0, "", "", "", "", "", "");

// NOTE (Dovencio#9#3/25/16): Put all room stuffs here\/
Room RealtrainingHall(10,22, "The Training Hall.", "Hot, Humid, and Bright.");
ENTRRealTrainingHall()
{

}

Room TrainingRoomHH(1,5, "Hallway to the training room.", "Dark");
void ENTRTrainingRoomHH()
{
    TrainingRoomHH.placeInRoom('T', 0,0);
    TrainingRoomHH.placeInRoom('S', 1,0);
    TrainingRoomHH.placeInRoom('D', 2,0);
    TrainingRoomHH.placeInRoom('X', 4,0);
    TrainingRoomHH.coutNS(true, true);
    bool ll = true;
    while(ll)
    {
        skipSpaces(1,2);
        TrainingRoomHH.printRoom();
        cout << "[1, T]: Training Hall." << endl;
        cout << "[2, S]: No label on the door. " << endl;
        cout << "[3, D]: Room NO 3." << endl;
        cout << "[4, X]: Exit. " << endl;
        cout << "Input: ";
        string Stringchoice;
        cin >> Stringchoice;
        int Intchoice = StringToNumber(Stringchoice);
        if(Intchoice==1)
        {
            ENTRRealTrainingHall();
        }
        else if(Intchoice==2)
        {
            //odd hall
        }
        else if(Intchoice==3)
        {
            //room NO 3
        }
        else if(Intchoice==4)
        {
            ll = false;
        }
    }
}

Room RoomNO1(4,4, "Room NO 1", "Really thick earthy smell.");
void ENTRRoomNO1()
{
    RoomNO1.placeInRoom('X', 0,2);
    RoomNO1.coutNS(true, true);
    RoomNO1.printRoom();
    Pause(1);
}

Room SmallRoom(3,3, "Small Room", "Mostly Empty.");
void ENTRSmallRoom()
{
    SmallRoom.placeInRoom('X', 2,1);
    SmallRoom.coutNS(true, true);
    SmallRoom.printRoom();
    Pause(1);
}

Room RoomNO2(4,4, "Room NO 2", "Wall at the top right conner of the room");
void ENTRRoomNO2()
{
    RoomNO2.placeInRoom('X', 3,2);
    RoomNO2.placeInRoom('W', 0,0);
    RoomNO2.coutNS(true, true);
    RoomNO2.printRoom();
    Pause(1);
}

Room Spawn(5,5, "Hospital Room NO 1", "Smells like cleaners.");
void ENTRSpawn(bool Done)
{
    Spawn.placeInRoom('X', 0,1);
    Spawn.placeInRoom('C', 4,0);
    Spawn.placeInRoom('C', 3,0);
    Spawn.placeInRoom('C', 2,0);
    Spawn.placeInRoom('C', 1,0);
    Spawn.placeInRoom('C', 0,0);
    Spawn.placeInRoom('T', 4,4);
    Spawn.coutNS(true, false);
    bool ll = true;
    bool GetTheMeds = false;
    bool* PTGTM = &GetTheMeds;
    bool firsttime = false;
    bool* PTfirsttime = &firsttime;
    while(ll)
    {
        skipSpaces(1,2);
        Spawn.printRoom();
        if(not(Done)&&not(firsttime))
        {
            *PTfirsttime = true;
            cout << "When You enter a room the room will be printed like the above room.";
            Pause(0);
            cout << "To select an option in a room you must first type selection number.";
            Pause(0);
            cout << "The selection part is the first thing you see on the option list.";
            Pause(0);
            cout << "EX: [->14, D]: A door.";
            Pause(0);
            cout << "The second is the Key, a letter\\number, to the map.";
            Pause(0);
            cout << "EX: [14, D<-]: A door.";
            Pause(0);
            cout << "Goes to:";
            Pause(0);
            cout << "EX: [O   ]" << endl <<
                    "EX: [D<- ]" << endl;
            Pause(0);
            cout << "Now you try!";
            Pause(0);
            skipSpaces(1,2);
            Spawn.printRoom();
        }
        cout << "[1, X]: Exit" << endl;
        cout << "[2, C]: Cupboards" << endl;
        cout << "[3, T]: Table" << endl;
        cout << "Type now!: ";
        string stringchoice;
        cin >> stringchoice;
        int NumChoice = StringToNumber(stringchoice);
        if(NumChoice==2)//Put the key in backwards
        {
            if(not(Done))
            {
                if(GetTheMeds==false)
                {
                    cout << "You look for any medication that says \"Relieves Headaches\".";
                    Pause(0);
                    *PTGTM = true;
                }
                else
                {
                    cout << "I already got the medication.";
                    Pause(0);
                }
            }
            else
            {
                cout << "Lots of containers that contain medication.";
                Pause(0);
            }
        }
        else if(NumChoice==1)
        {
            if(not(Done))
            {
                if(GetTheMeds)
                {
                    cout << "The door squeaks as you leave.";
                    Pause(0);
                    ll=false;
                }
                else
                {
                    cout << "I should get the medication for my Headache.";
                    Pause(0);
                }
            }
            else
            {
                cout << "The door squeaks as you leave.";
                Pause(0);
                ll=false;
            }
        }
        else if(NumChoice==3)
        {
            cout << "Nothing on the table.";
            Pause(0);
        }
        else
        {
            cout << "Only accepts nums 1-3. Putting in letters will cause issues in the near future.";
            Pause(0);
        }
    }
}

Room HallNO1(12,2, "HallNO1", "People occasionally walk through.");
void ENTRHallNO1()
{
    //                       X,Y
    HallNO1.placeInRoom('A', 0,0);
    HallNO1.placeInRoom('A', 1,0);
    HallNO1.placeInRoom('D', 0,11);
    HallNO1.placeInRoom('D', 1,11);
    HallNO1.placeInRoom('S', 0,9);
    HallNO1.placeInRoom('R', 1,7);
    HallNO1.placeInRoom('B', 0,6);
    HallNO1.placeInRoom('J', 1,4);
    HallNO1.placeInRoom('T', 0,3);
    HallNO1.placeInRoom('C', 1,2);
    HallNO1.coutNS(true, true);
    if(FndQuest(false, 0)==3)
    {
        mairie.Talk("Hey! "+you.GetName()+" I need to tell you something.", false, false);
        mairie.Talk("Go to the training room. There we will test you. ", false, false);
        cout << "How do you Respond Positively, Negatively, or neutral? [P/E/N]: ";
        bool ll = true;
        while(ll)
        {
            char inpt;
            inpt=getch();
            if(inpt=='p'||inpt=='P')
            {
                cout << 'P' << endl;
                you.Talk("Thank you Mairie. ", false, false);
                ll = false;
            }
            else if(inpt=='e'||inpt=='E')
            {
                cout << 'E' << endl;
                you.Talk("Fine. ", false, false);
                mairie.Talk("Okay?", false, false);
                ll = false;
            }
            else if(inpt=='n'||inpt=='N')
            {
                cout << 'N' << endl;
                you.action("Pause. ", false, false);
                ll = false;
            }
        }
    }
    bool ll = true;
    while(ll)
    {
        skipSpaces(1,2);
        HallNO1.printRoom();
        cout << "[1, A]: Double doors up." << endl;
        cout << "[2, D]: Double doors down." << endl;
        cout << "[3, S]: Labeled \"Small Room NO 1\"." << endl;
        cout << "[4, R]: Labeled \"Hospital Room NO 1\"." << endl;
        cout << "[5, B]: Labeled \"Room NO 2\"." << endl;
        cout << "[6, J]: Labeled \"Janitorial\"." << endl;
        cout << "[7, T]: Labeled \"The Hall to the Training Hall\"." << endl;
        cout << "[8, C]: Labeled \"Room NO 1\"." << endl;
        cout << "Type now!: ";
        string stringchoice;
        cin >> stringchoice;
        int NumChoice = StringToNumber(stringchoice);
        if(NumChoice==1)
        {
            cout << "Two guards stand at the doors disallowing you.";
            Pause(0);
        }
        else if(NumChoice==2)
        {
            cout << "Two guards stand at the doors disallowing you.";
            Pause(0);
        }
        else if(NumChoice==3)
        {
            if(LVL2Key)
            {
                ENTRSmallRoom();
            }
            else
            {
                cout << "Locked.";
                Pause(0);
            }
        }
        else if(NumChoice==4)
        {
            ENTRSpawn(true);
        }
        else if(NumChoice==5)
        {
            if(LVL1Key)
            {
                ENTRRoomNO2();
            }
            else
            {
                cout << "Locked.";
                Pause(0);
            }
        }
        else if(NumChoice==6)
        {
            cout << "Door rusted shut.";
            Pause(0);
        }
        else if(NumChoice==7)
        {
            ENTRTrainingRoomHH();
        }
        else if(NumChoice==8)
        {
            if(LVL1Key)
            {
                ENTRRoomNO1();
            }
            else
            {
                cout << "Locked.";
                Pause(0);
            }
        }
    }
}

 /*
  * This is the all mighty Quest function.
  *
  * You must bow down to it.
  *
  * If you don't I will personally take you out.
  */


bool Quest(bool ovr, int Q)
{
    cout << "Quest: " << FndQuest(ovr, Q) << " is loading..." << endl;
    skipSpaces(1,1);
    if(FndQuest(ovr, Q)==0)
    {
        cout << "Blet." << endl;
    }
    else if(FndQuest(ovr, Q)==1)
    {
        char prss;
        cout << "You must prove yourself before you can embark on this journey.";
        Pause(0);
        cout << "Press b!";
        prss = getch();
        if(prss=='b')
        {
            cout << endl << "So, you are that smart...";
            Pause(0);
        }
        else
        {
            return false;
        }
        cout << "But I am not here to just give you mindless support.";
        Pause(0);
        cout << "Press Backspace";
        prss = getch();
        if(prss=='\b')
        {
            cout << endl << "Fine you are good but can you manage this?";
            Pause(0);
        }
        else
        {
            return false;
        }
        cout << "Press pdq!";
        prss = getch();
        int i = 0;
        if(prss=='p')
        {
            cout << endl << "Dang!" << endl;
            i++;
        }
        else
        {
            return false;
        }
        prss = getch();
        if(prss=='d')
        {
            cout << "Darn!" << endl;
        }
        else
        {
            return false;
        }
        prss = getch();
        if(prss=='q')
        {
            cout << "Shoot!" << endl;
        }
        else
        {
            return false;
        }
        cout << "Fine! Let's see if you can handle this?";
        Pause(0);
        cout << "Get 100 dollars!";
        Pause(1);
        skipSpaces(1,0);
        skipSpaces(1,2);
        skipSpaces(1,0);
        cout << "YOU ARE NOW PLAYING IG!!!";
        Pause(0);
        #ifdef DEBUG
        int mny = 100;
        #else
        int mny = idleGame();
        #endif // DEBUG
        if(mny<=100)
        {
            cout << "I still disprove but you can call me Mairie.";
            Pause(0);
            mairie.Talk("I hate looking after the newcomers but I guess I have to...", false, false);
            *ptQ1 = true;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(FndQuest(ovr, Q)==2)
    {
        cout << "[unknown]: Are you picking on the new kid Mairie?";
        Pause(0);
        mairie.Talk("No. I swear!", false, false);
        cout << "[unknown]: I'm just kidding you!";
        Pause(0);
        mairie.action("Hesitates", false, false);
        cout << "[unknown]: My name is " << hikkomi.GetPrfName();
        Pause(0);
        hikkomi.action("Reaches out his hand to shake yours.", false, false);
        cout << "Do you take it? [Y/N]: ";
        bool ll = true;
        while(ll)
        {
            char schoice = getch();
            if(schoice=='y'||schoice=='Y')
            {
                cout << "Yes" << endl;
                hikkomi.action("shakes your hand.", false, false);
                hikkomi.Talk("What is your name?", false, false);
                string dname = "";
                cout << "Type your name: ";
                cin >> dname;
                you.SetName(dname);
                hikkomi.Talk("Nice to meet you, "+you.GetName()+".", false, false);
                ll=false;
            }
            else if(schoice=='n'||schoice=='N')
            {
                cout << "No" << endl;
                hikkomi.MakeSound("Hum-", false, false);
                mairie.Talk("Don't worry about him... He gets a bit cross sometimes.", false, false);
                ll = false;
            }
        }
        you.action("Get a sharp pain in your head and you reach up to touch it.", false, false);
        mairie.Talk("Are you okay?", false, false);
        cout << "Are you? [Y/N]: ";
        ll = true;
        while(ll)
        {
            char schoice = getch();
            if(schoice=='n'||schoice=='N')
            {
                cout << "No";
                mairie.Talk("Can you go to the medicine cabinet? ", true, false);
                cout << "Can you? [Y/N]: ";
                ll=true;
                while(ll)
                {
                    schoice = getch();
                    if(schoice=='y'||schoice=='Y')
                    {
                        cout << "Yes";
                        ll=false;
                        mairie.Talk("It is just in that cabinet in that corner.", true, false);
                    }
                    else if(schoice=='n'||schoice=='N')
                    {
                        cout << "No" << endl;
                        cout << "[intercom]: Can "+mairie.GetName()+" come to the main office.";
                        Pause(0);
                        ll=false;
                        mairie.Talk("Sorry, I got to go. But you can get it right?", false, false);
                    }
                }
            }
            else if(schoice=='Y'||schoice=='y')
            {
                cout << "Yes" << endl;
                mairie.Talk("Okay, but don't strain yourself.", false, false);
                cout << "[intercom]: Can "+mairie.GetName()+" come to the main office.";
                Pause(0);
                mairie.Talk("Sorry, I got to go.", false, false);
                ll=false;
            }
        }
        ENTRSpawn(false);
        *ptQ2 = true;
        return true;
    }
    else if(FndQuest(ovr, Q)==3)
    {
        ENTRHallNO1();
    }
    return false;
}
