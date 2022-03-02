#include "../inc/KeyVector.h"
#include "../inc/SimpleScorer.h"
#include "../inc/PostingItemIter.h"
#include "../inc/VectorScoreScheme.h"


Scorer &KeyVector::getScorer() {
    //TBD
    //call SPTAG
    //call storage
    //TESTC
    PostingItemIter* iter=new PostingItemIter();
    return *(new SimpleScorer(*iter));
}


KeyVector::KeyVector(VectorValueType& vecValue):value(vecValue),scoreScheme(*(new VectorScoreScheme(vecValue))) {

}
