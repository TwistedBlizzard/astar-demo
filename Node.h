#ifndef NODE_H_
#define NODE_H_

#include <cmath>
#include "Vector2.h"

class Node {
private:
    Vector2 position;
    int fScore;
    int heuristic;
    int cost;
protected:
    void calculateHeuristic(Vector2 targetPos);
public:
    Node();
    virtual ~Node();

    void virtual initialise(Vector2 positon, Vector2 targetPos, int cost);
    void virtual initialise(Vector2 positon, Vector2 targetPos);

    Vector2 getPosition();
    int getFScore();
    int getHeuristic();
};

#endif