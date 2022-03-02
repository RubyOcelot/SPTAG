#ifndef IVF_SCORER_H
#define IVF_SCORER_H

#include "../FowardDefine.h"
#include "../PostingItem.h"
#include "ScoreScheme.h"

class Scorer
{
public:
    virtual float score()=0;
    virtual DocId next()=0;
    virtual DocId skipTo(DocId id)=0;

    PostingItem& getCurrentItem();
    DocId getCurrentId();
protected:
    //Or name it posting item?
    ScoreScheme* currentItem=nullptr;//TBM
};




#endif //IVF_SCORER_H
