#ifndef IVF_DISTANCEFUNCTION_H
#define IVF_DISTANCEFUNCTION_H

#include "../FowardDefine.h"

class DistanceFunction {
public:
    virtual float calc(VectorValueType&, VectorValueType&)=0;
};

class L2DistanceFunction: public DistanceFunction {
    float calc(VectorValueType&, VectorValueType&) override{
        //TESTC
        return 25.0;
    }
};


#endif //IVF_DISTANCEFUNCTION_H