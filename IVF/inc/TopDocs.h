#ifndef IVF_TOPDOCS_H
#define IVF_TOPDOCS_H

#include "FowardDefine.h"
#include "utils/DocWithScore.h"

class TopDocs
{
public:
//pair of DocId and score
    TopDocs();
    std::list<DocWithScore> value;
    void print();
    void add(DocWithScore);
};

void TopDocs::print() {
    for(auto iter:value){
        iter.print();
    }
}

TopDocs::TopDocs() {
    value=std::list<DocWithScore>();
}

void TopDocs::add(DocWithScore) {

}


#endif //IVF_TOPDOCS_H
