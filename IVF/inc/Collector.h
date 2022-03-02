#ifndef IVF_COLLECTOR_H
#define IVF_COLLECTOR_H

#include "FowardDefine.h"
#include "utils/DocPriorityQueue.h"
#include "TopDocs.h"

class Collector
{
private:
    //collects the results of a search. maintaining a priority queue for top docs.
    DocPriorityQueue& pq;

public:
    Collector(int n);
    void collect(DocId docId, float score);
    //return docs in pq
    TopDocs topDocs();
};

Collector::Collector(int n):pq(*(new DocPriorityQueue(n))) {
}

void Collector::collect(DocId docId, float score) {

}

TopDocs Collector::topDocs() {
    TopDocs td=TopDocs();
    while(!pq.empty()){
        td.value.push_front(pq.top());
        pq.pop();
    }
    return td;
}


#endif //IVF_COLLECTOR_H
