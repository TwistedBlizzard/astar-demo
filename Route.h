#ifndef ROUTE_H_
#define ROUTE_H_

#include <queue>
#include "Vector2.h"

struct Route {
    std::queue<Vector2> route;
    
    Route add(Vector2 step) {
        route.push(step);
    }
};

#endif