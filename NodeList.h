#ifndef ASTARLIST_H_
#define ASTARLIST_H_

#include <list>
#include "Node.h"
#include "Vector2.h"

struct NodeList {
    std::list<Node *> nodeList;
    int lowestFIndex = 0;

    Node * contains(Vector2 position) {
        for (std::list<Node *>::iterator it=nodeList.begin(); it!=nodeList.end(); ++it) {
            Node *currentNode = *it;
            Vector2 currentPosition = currentNode->getPosition();
            if (position.compareVector(currentPosition)) {
                return currentNode;
            }
        }
        return nullptr;
    }

    bool empty() {
        return nodeList.empty();
    }

    void add(Node * newNode) {
        Node *currentNode = contains(newNode->getPosition());
        if (currentNode) {
            if (newNode->getFScore() < currentNode->getFScore()) {
                // Replace the old node with the new one
            }
        }
    }
};

#endif