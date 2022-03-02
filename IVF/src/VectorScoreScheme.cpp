#include "../inc/VectorScoreScheme.h"

ScoreScheme *VectorScoreScheme::clone() {
    return new VectorScoreScheme(docId, docVector, queryVector, distFunc);
}

//VectorScoreScheme::VectorScoreScheme(DocVectorItem vItem): vectorItem(vItem) {
//
//}

DocId VectorScoreScheme::getDocId() {
    return docId;
}

VectorScoreScheme::VectorScoreScheme(DocId docId, VectorValueType& docVector, VectorValueType& queryVector,
                                     DistanceFunction &distFunc)
        : docId(docId), docVector(docVector), queryVector(queryVector), distFunc(distFunc) {

}

float VectorScoreScheme::score() {
    //calc vector distance
    return 1/distFunc.calc(docVector, queryVector);
}

void VectorScoreScheme::postingStatisticsLoader(std::string) {
    //TESTC
    docId=5;
    docVector=VectorValueType({4,5,6});
}

VectorScoreScheme::VectorScoreScheme(VectorValueType &queryVector): queryVector(queryVector), distFunc(*(new L2DistanceFunction())) {

}
