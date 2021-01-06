#ifndef GAMEGRID_H_
#define GAMEGRID_H_

#include <unordered_map>
#include "GameObject.h"

class GameGrid {
private:
    std::unordered_multimap<Vector2, GameObject> grid;
public:
    GameGrid();
    virtual ~GameGrid();

    void initialise();
    int getWeight(Vector2 position);
};

#endif