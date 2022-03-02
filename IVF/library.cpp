#include "src/IndexSearcher.cpp"

#include <iostream>
#include "inc/api.h"

void hello() {
    IndexSearcher searcher=IndexSearcher();
    VectorValueType vecValue=std::vector<float>({1,2,3});
    KeyVector kv=KeyVector(vecValue);
    KeywordQuery kwQuery=KeywordQuery(kv);
    TopDocs topDocs=searcher.search(kwQuery,1);
    topDocs.print();
}
