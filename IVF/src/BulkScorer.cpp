#include "../inc/BulkScorer.h"
#include "../inc/utils/Bits.h"

void BulkScorer::scoreAll(Collector collector, Bits liveDocs) {
    //collector.setScorer(scorer);
    DocId docId = scorer.getCurrentId();
    while (docId != -1 ) {
        if (liveDocs.get(docId)) {
            collector.collect(docId,scorer.score());
        }
        docId = scorer.next();
    }
}

int BulkScorer::score(Collector collector, Bits liveDocs, DocId min, DocId max) {
    return -1;
}

BulkScorer::BulkScorer(Scorer& scorer) :scorer(scorer){};
