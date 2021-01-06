#include "AStar.h"

Route AStar::getRoute(Vector2 startPos, Vector2 endPos) {
    std::list<Node *> open;
    std::list<Node *> closed;

    Node *startNode = new Node();
    startNode->initialise(startPos, endPos);

    Route route;

    return route;
}

Route AStar::getRoute(GameObject *startObj, GameObject *endObj) {
    Vector2 startPos = startObj->getPosition();
    Vector2 endPos = endObj->getPosition();

    return AStar::getRoute(startPos, endPos);
}