#include "../inc/PostingItemIter.h"
#include "../inc/VectorScoreScheme.h"

ScoreScheme *PostingItemIter::getNext() {
    ScoreScheme* newItem=(modelItem.clone());
    //TESTC
    newItem->postingStatisticsLoader("");
    return nullptr;;
}

//TESTC
ScoreScheme *PostingItemIter::getFirst() {
    ScoreScheme* newItem=(modelItem.clone());
    newItem->postingStatisticsLoader("");
    return newItem;
}

PostingItemIter::PostingItemIter():modelItem(*(new VectorScoreScheme()) {
    )
}

ScoreScheme *PostingItemIter::skipTo(DocId docId) {
    //TBD
    return nullptr;
}

