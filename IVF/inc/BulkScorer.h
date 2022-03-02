#ifndef IVF_BULKSCORER_H
#define IVF_BULKSCORER_H

#include "FowardDefine.h"
#include "Collector.h"
#include "interfaces/Scorer.h"

class BulkScorer
{
public:
    BulkScorer(Scorer& scorer);
    Scorer& scorer;
    void scoreAll(Collector, Bits);
    int score(Collector collector, Bits liveDocs, DocId min, DocId max);
    //iter through docs and get score with scorer, call collect()
};




#endif //IVF_BULKSCORER_H
