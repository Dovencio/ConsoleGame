#include "Room.h"

Room::Room(int X,int Y, string NRoomName, string NSpecal)
{
    this->constructRoom();
    this->emptySpaces(X, Y);
    this->setname(NRoomName);
    this->setSpecal(NSpecal);
}

Room::~Room()
{
    //dtor
}
