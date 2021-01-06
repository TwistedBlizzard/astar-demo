#ifndef CHILDNODE_H_
#define CHILDNODE_H_

#include "Node.h"

class ChildNode: public Node {
private:
    Node *parent;
public:
    ChildNode();
    virtual ~ChildNode();

    void initialise(Vector2 position, Vector2 target, Node *parent, int cost);
    void initialise(Vector2 position, Vector2 target, Node *parent);
};

#endif