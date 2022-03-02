
#include "../inc/api.h"
#include "../inc/IndexSearcher.h"
#include "../inc/interfaces/Query.h"
#include "../inc/TopDocs.h"
#include "../inc/utils/Bits.h"
#include "../inc/BulkScorer.h"

TopDocs IndexSearcher::search(Query& query,int n){
    //create pq with n, pass it to collector
    Bits liveDocs=getLiveDocs();
    Scorer& scorer=query.getScorer();
    BulkScorer bulkScorer=BulkScorer(scorer);
    Collector collector=Collector(n);
    bulkScorer.scoreAll(collector,liveDocs);
    return collector.topDocs();
}

Bits IndexSearcher::getLiveDocs() {
    return Bits();
}
