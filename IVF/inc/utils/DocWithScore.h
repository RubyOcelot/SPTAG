#ifndef IVF_DOCWITHSCORE_H
#define IVF_DOCWITHSCORE_H

#include "../FowardDefine.h"

class DocWithScore
{
public:
    std::pair<DocId,float> value;
    void print();
};

void DocWithScore::print() {
    std::cout<<"doc_id: "<<value.first<<" score: "<<value.second<<std::endl;
}

#endif //IVF_DOCWITHSCORE_H
