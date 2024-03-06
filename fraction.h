#include <iostream>
#include <cstdint>
#include <math.h>

class fraction{
private:
    int32_t _num;
    uint32_t _denom;
public:

    fraction(int32_t num, uint32_t denom);


    fraction operator++()  {
        return fraction(_num+_denom, _denom);
    }

    fraction operator--()  {
        
        return fraction(_num-_denom,_denom );
    }

    fraction operator~()  {

        return fraction(_num*(-1), _denom);
    }

    bool operator>(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom > static_cast<double>(fract._num)/fract._denom;
        
    }
    bool operator>=(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom >= static_cast<double>(fract._num)/fract._denom;
        
    }

    bool operator<(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom < static_cast<double>(fract._num)/fract._denom;
    }
    

    bool operator<=(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom <= static_cast<double>(fract._num)/fract._denom;
    
    }



    bool operator!=(const fraction& fract) const {
        return static_cast<double>(_num)/_denom != static_cast<double>(fract._num)/fract._denom;
        
    }


    fraction operator^(uint32_t x)  {
        int32_t new_num = pow(_num, x ); 
        uint32_t new_denom =pow( _denom, x);
        return fraction(new_num, new_denom);
    }









    friend std::ostream& operator<<(std::ostream& os, const fraction& tmp){
        os << tmp._num << "/" << tmp._denom << std::endl;
        return os;
    }
};