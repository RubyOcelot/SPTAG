#ifndef IVF_KEYWORD_H
#define IVF_KEYWORD_H

#include "../FowardDefine.h"
#include "Scorer.h"

class Keyword
{
public:
    virtual Scorer& getScorer()=0;
};


#endif //IVF_KEYWORD_H
