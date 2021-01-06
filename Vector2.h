#ifndef VECTOR2_H_
#define VECTOR2_H_

struct Vector2 {
    int x;
    int y;

    bool compareVector(Vector2 otherVector) {
        bool xIsEqual = (x == otherVector.x);
        bool yIsEqual = (y == otherVector.y);
        return (xIsEqual && yIsEqual);
    }

    Vector2() {
        x = 0;
        y = 0;
    }

    Vector2(int initX, int initY) {
        x = initX;
        y = initY;
    }
};

#endif