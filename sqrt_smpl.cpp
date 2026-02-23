#include <vector>

std::vector<unsigned int> sqrt_smpl(int val){
    if(val < 1) return {0, 0};
    std::vector<unsigned int> divids = {1, 1};
    for(unsigned int i = 2; val > 1; i++){
        while(val % i == 0){
            divids.push_back(i);
            val /= i;
        }
    }
    unsigned int full = 0, sqrt = 1;
    for(int i = 0; i < (int)(divids.size()) - 1; i++){
        if(divids[i] == divids[i + 1]){
            if(full == 0) full = 1;
            full *= divids[i];
            i--;
            divids.erase(divids.begin() + i + 1, divids.begin() + i + 3);
        }
    }
    for(unsigned int i : divids) sqrt *= i;
    if(sqrt == 1) sqrt = 0;
    if(full == 1 && sqrt != 0) full = 0;
    return {full, sqrt};
}
