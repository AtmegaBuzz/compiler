#include <iostream>
#include <fstream>
#include<sstream>
#include <string.h>


int checkExtension(std::string filename){
    char delimiter = '.';
    return filename.substr(filename.find(delimiter)+1,filename.length())=="py";
}

std::string fetchCharStream(std::string filename){

    if (!checkExtension(filename)) std::cerr << "InvalidFileType: Filetype not support:" << std::endl;

    std::string charStream;

    std::fstream file;
    file.open(filename,std::ios::in);

    if (file){
        std::ostringstream instream;
        instream << file.rdbuf();
        charStream = instream.str();
        return charStream;
    }

    file.close();

    return "";

}


int main(){

    std::string filename;

    std::cin >> filename;

    std::string chr = fetchCharStream(filename);

    return 1;
}