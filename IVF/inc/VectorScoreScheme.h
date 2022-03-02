#ifndef IVF_VECTORSCORESCHEME_H
#define IVF_VECTORSCORESCHEME_H

#include "interfaces/ScoreScheme.h"
#include "utils/DistanceFunction.h"


class VectorScoreScheme : public ScoreScheme {
public:
    ScoreScheme* clone() override;
    VectorScoreScheme(VectorValueType& queryVector);
    VectorScoreScheme(VectorValueType& queryVector, DistanceFunction &distFunc);
    VectorScoreScheme(DocId docId, VectorValueType& docVector, VectorValueType& queryVector,
                      DistanceFunction &distFunc);

    void postingStatisticsLoader(std::string) override;

    void keywordStatisticsLoader(std::string) override;

    void collectionStatisticsLoader(std::string) override;

    float score() override;
    DocId getDocId() override;

private:

    //DocVectorItem docVectorItem;
    DocId docId;
    VectorValueType docVector;
    VectorValueType queryVector;
    //default L2DistanceFunction
    DistanceFunction& distFunc;
    //int docNum;

};


#endif //IVF_VECTORSCORESCHEME_H
