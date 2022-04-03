#include <iostream>
#include "fetcher/fetchCharStream.h"

int main(){

    std::string filename;
    std::cin >> filename;
    
    std::cout << fetchStream(filename);

    return 1;
}
