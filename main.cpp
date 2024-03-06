#include <iostream>
#include "fraction.h"

int main(){
    fraction fract1= fraction(1, 3);
    std::cout<<fract1;
    fraction fract2= fraction(1, 3);
    std::cout<<fract2;


    bool result1= fract1!=fract2;//!=
    std::cout<<result1<<std::endl;

    bool result2= fract1>fract2;//>
    std::cout<<result2<<std::endl;

    bool result3= fract1>=fract2;//>=
    std::cout<<result3<<std::endl;

    bool result4= fract1<fract2;//<
    std::cout<<result4<<std::endl;

    bool result5= fract1<=fract2;//<=
    std::cout<<result5<<std::endl;

    fraction result6=fract1^5;
    std::cout<<result6;//^только с интами

    fraction result7=--fract1;
    std::cout<<result7;//--

    fraction result8=++fract1;
    std::cout<<result8;//++

    fraction result9=~fract1;
    std::cout<<result9;//~




    return 0;
}