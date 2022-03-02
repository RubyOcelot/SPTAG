#include "../inc/interfaces/Scorer.h"

PostingItem& Scorer::getCurrentItem()
{
    return *currentItem;
}

DocId Scorer::getCurrentId()
{
    if(currentItem!= nullptr)
        return currentItem->getDocId();
    else return -1;
}