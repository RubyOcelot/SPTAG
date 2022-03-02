#ifndef IVF_BITS_H
#define IVF_BITS_H

#include "../FowardDefine.h"

class Bits{
public:
    Bits()= default;
    bool get(DocId docId);
};

bool Bits::get(DocId docId) {
    return true;
}


#endif //IVF_BITS_H
