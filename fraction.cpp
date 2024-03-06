#include "fraction.h"

fraction::fraction(int32_t num, uint32_t denom){
    _num = num;
    if(denom!=0)
    _denom=denom;
}