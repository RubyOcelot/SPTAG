#ifndef IVF_SCORESCHEME_H
#define IVF_SCORESCHEME_H

#include "../FowardDefine.h"
#include "../DocVectorItem.h"

class ScoreScheme
{
public:
    virtual ScoreScheme* clone()=0;
    virtual void postingStatisticsLoader(std::string)=0;
    virtual void keywordStatisticsLoader(std::string)=0;
    virtual void collectionStatisticsLoader(std::string)=0;
    virtual float score()=0;
    virtual DocId getDocId()=0;
};




#endif //IVF_SCORESCHEME_H
