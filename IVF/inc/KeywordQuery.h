#ifndef IVF_KEYWORDQUERY_H
#define IVF_KEYWORDQUERY_H

#include "interfaces/Query.h"

class KeywordQuery: public Query
{
public:
    KeywordQuery(Keyword& keyword);
    Keyword& keyword;
    Scorer& getScorer() override{
        Scorer& scorer=keyword.getScorer();
        return scorer;
    };
};


#endif //IVF_KEYWORDQUERY_H
