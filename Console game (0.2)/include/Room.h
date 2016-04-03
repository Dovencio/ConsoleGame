#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <tuple>

using namespace std;

class Room
{
    public:
        Room(int X,int Y, string NRoomName, string NSpecal);
        virtual ~Room();

        int GetroomX() { return roomX; }

        int GetroomY() { return roomY; }

        void doRoom();

        void setname(string val) { TheRoomName = val; }

        void setSpecal(string val) { TheRoomSpecal = val; }

        void coutNS(bool PreEnter, bool Specal)
        {
            if(PreEnter)
            {
                cout << "You are entering: ";
            }
            cout << TheRoomName << endl;
            if(Specal)
            {
                cout << TheRoomSpecal << endl;
            }
        }

        void constructRoom()
        {
            for(int a=0; a<50; a++)
            {
                for(int b=0; b<50; b++)
                {
                    TheRoom[b][a]="\0";
                }
            }
        }

        void emptySpaces(int X, int Y)
        {
            roomX = X;
            roomY = Y;
            for(int a=0; a<X; a++)
            {
                for(int b=0; b<Y; b++)
                {
                    TheRoom[b][a]= " ";
                }
            }
        }

        void printRoom()
        {
            for(int a=0; a<roomX; a++)
            {
                cout << "[";
                for(int b=0; b<roomY; b++)
                {
                    cout << TheRoom[b][a];
                }
                cout << "]" << endl;
            }
        }

        void placeInRoom(char obj, int X, int Y)
        {
            TheRoom[X][Y] = obj;
        }

    protected:
    private:
        string TheRoomName;
        string TheRoomSpecal;
        string TheRoom[50][50];
        int roomX;
        int roomY;
};

#endif // ROOM_H
