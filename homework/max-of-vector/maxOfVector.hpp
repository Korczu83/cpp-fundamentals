#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int num=vec[0];
for(auto element : vec){
if(element>num)
num=element;
}
return num;
}
