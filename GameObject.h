#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include "Vector2.h"

class GameObject {
private:
    char displayChar = '\0';
    int id = -1;
    int xPos = -1;
    int yPos = -1 ;
public:
    GameObject();
    virtual ~GameObject();

    void virtual initialise(char displayChar, int id, int xPos, int yPos);

    Vector2 getPosition();
};

#endif