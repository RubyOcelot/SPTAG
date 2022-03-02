#ifndef IVF_STATISTICS_H
#define IVF_STATISTICS_H

#include "FowardDefine.h"

class PostingStatistics{};
class vectorPostingStatistics:public PostingStatistics{
public:
    vectorPostingStatistics(){value=std::vector<float>();}
private:
    std::vector<float> value;
};

#endif //IVF_STATISTICS_H
