//
// Created by martas on 22.07.18.
//

#ifndef GTEST_WHATTOTEST_H
#define GTEST_WHATTOTEST_H

#include <cmath>
#include <gtest/gtest_prod.h>

class Wektor{

    int x;
    int y;
    double length;
    FRIEND_TEST(WektorTest, sumaXY_test);
    int sumaXY(){
        return x+y;
    }
public:
    Wektor(int x = 1, int y = 1): x(x), y(y){
        length = std::sqrt(x * x + y * y);
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    double getLength() const {
        return length;
    }


};


//#endif
#endif //GTEST_WHATTOTEST_H
