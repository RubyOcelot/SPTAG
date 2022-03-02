#include "../inc/BooleanQuery.h"

Scorer &BooleanQuery::getScorer() {
    std::__cxx11::list<Scorer> subScorers = std::__cxx11::list<Scorer>();
    for (Query &q: subQuerys) {
        subScorers.push_back(q.getScorer());
    }
    Scorer &scorer = *(new BooleanScorer(op, subScorers));
    return scorer;
};