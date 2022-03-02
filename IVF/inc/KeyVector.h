#ifndef IVF_KEYVECTOR_H
#define IVF_KEYVECTOR_H

#include "interfaces/Keyword.h"

class KeyVector: public Keyword
{
public:
    KeyVector(VectorValueType& vecValue);
    Scorer& getScorer() override;
private:
    VectorValueType value;
    //default: VectorScoreScheme
    ScoreScheme& scoreScheme;
};

#endif //IVF_KEYVECTOR_H
