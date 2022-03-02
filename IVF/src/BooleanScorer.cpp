#include "../inc/BooleanScorer.h"


BooleanScorer::BooleanScorer(LogicOperator op, std::list<Scorer> subScorer): op(op), subScorers(std::move(subScorer)){};

float BooleanScorer::score() {
    if(currentItem!= nullptr)
        return currentItem->score();
    else return -1.0;//TBD
}

DocId BooleanScorer::next() {
    //TESTC
    return -1;
}

DocId BooleanScorer::skipTo(DocId id) {
    //TESTC
    return -1;
}
