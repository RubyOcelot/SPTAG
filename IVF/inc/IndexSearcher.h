#ifndef IVF_INDEXSEARCHER_H
#define IVF_INDEXSEARCHER_H

#include "FowardDefine.h"

class IndexSearcher
{
    //top n
    //use BulkScorer with query
public:
    TopDocs search(Query& query,int n);
    Bits getLiveDocs();
private:
};


#endif //IVF_INDEXSEARCHER_H
