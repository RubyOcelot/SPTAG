#ifndef IVF_BOOLEANQUERY_H
#define IVF_BOOLEANQUERY_H

#include "interfaces/Query.h"

class BooleanQuery:public Query
{
    LogicOperator op;
    std::__cxx11::list<Query> subQuerys;
    Scorer& getScorer() override;

};


#endif //IVF_BOOLEANQUERY_H
