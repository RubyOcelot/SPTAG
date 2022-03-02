#ifndef IVF_SIMPLESCORER_H
#define IVF_SIMPLESCORER_H

#include "interfaces/Scorer.h"
#include "../inc/PostingItemIter.h"

//Wrapper of underlying posting item iter.
class SimpleScorer:public Scorer
{
public:
    SimpleScorer(PostingItemIter& pIter);

    float score() override;
    DocId next() override;
    DocId skipTo(DocId id) override;
private:
    PostingItemIter& pIter;
};


#endif //IVF_SIMPLESCORER_H