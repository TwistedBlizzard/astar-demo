#include "Node.h"

void Node::initialise(Vector2 initPosition, Vector2 targetPos, int initCost) {
    position = initPosition;
    cost = initCost;
    calculateHeuristic(targetPos);
    fScore = cost + heuristic;
}

void Node::initialise(Vector2 initPosition, Vector2 targetPos) {
    initialise(initPosition, targetPos, 1);
}

Vector2 Node::getPosition() {
    return position;
}

void Node::calculateHeuristic(Vector2 targetPos) {
    int xComponent = abs(position.x - targetPos.x);
    int yComponent = abs(position.y - targetPos.y);
    heuristic = xComponent + yComponent;
}