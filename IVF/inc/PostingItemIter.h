#ifndef IVF_POSTINGITEMITER_H
#define IVF_POSTINGITEMITER_H


#include "interfaces/ScoreScheme.h"

class PostingItemIter {
public:
    //TESTC
    PostingItemIter();
    //TESTC
    ScoreScheme * getFirst();
    ScoreScheme * getNext();
    ScoreScheme * skipTo(DocId docId);
private:
    ScoreScheme& modelItem;
};


#endif //IVF_POSTINGITEMITER_H
