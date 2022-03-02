#ifndef IVF_QUERY_H
#define IVF_QUERY_H

#include "../FowardDefine.h"
#include "Keyword.h"
#include "../BooleanScorer.h"

class Query{
public:
    virtual Scorer& getScorer()=0;
//    Scorer& scorer;
};


#endif //IVF_QUERY_H
