#include "ChildNode.h"

void ChildNode::initialise(Vector2 initPosition, Vector2 target, Node *initParent, int cost) {
    parent = initParent;
    Node::initialise(initPosition, target, cost);
}

void ChildNode::initialise(Vector2 initPosition, Vector2 target, Node *initParent) {
    initialise(initPosition, target, initParent, 1);
}