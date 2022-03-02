#ifndef IVF_DOCPRIORITYQUEUE_H
#define IVF_DOCPRIORITYQUEUE_H

#include "../FowardDefine.h"
#include "DocWithScore.h"

//TBD
class DocPriorityQueue
{
public:
    DocPriorityQueue(int n);
    bool empty();
    void pop();
    DocWithScore top();
    void add(DocWithScore);
    float getMinScore();
private:
    int sizeLimit;
    float minScore;
    DocWithScore* heap;
    int curSize;
};

DocPriorityQueue::DocPriorityQueue(int n) : sizeLimit(n), curSize(0) {
    heap=new DocWithScore[n];
}

float DocPriorityQueue::getMinScore() {
    return top().value.second;
}

DocWithScore DocPriorityQueue::top() {
    //TBD empty?
    return (heap)[0];
}

#endif //IVF_DOCPRIORITYQUEUE_H
