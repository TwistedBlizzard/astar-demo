#ifndef ASTAR_H_
#define ASTAR_H_

#include "GameObject.h"
#include "GameGrid.h"
#include "Route.h"
#include "Node.h"
#include "NodeList.h"

class AStar {
private:
    GameGrid *grid;
public:
    AStar();
    virtual ~AStar();

    void initialise(GameGrid *grid);

    Route getRoute(Vector2 startPos, Vector2 endPos);
    Route getRoute(GameObject *startObj, GameObject *endObj);

    bool checkList(NodeList nodeList, Vector2 position);
};

#endif