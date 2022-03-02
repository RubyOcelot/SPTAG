#ifndef IVF_BOOLEANSCORER_H
#define IVF_BOOLEANSCORER_H

#include "interfaces/Scorer.h"

class BooleanScorer:public Scorer
{
public:
    BooleanScorer(LogicOperator op, std::list<Scorer> subScorer);

    float score() override;
    DocId next() override;
    DocId skipTo(DocId id) override;

private:
    LogicOperator op;
    std::list<Scorer> subScorers;
};

#endif //IVF_BOOLEANSCORER_H
