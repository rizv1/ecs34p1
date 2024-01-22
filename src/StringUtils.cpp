#include "StringUtils.h"
#include <iostream>
#include <cctype>
#include <string>


namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    // Replace code here
    return str.substr(start, str.length()-start);
}

std::string Capitalize(const std::string &str) noexcept{
    // Replace code here
    auto Copy = str;
    Copy[0] = toupper(str[0]);
    return Copy;
}

std::string Upper(const std::string &str) noexcept{
    // Replace code here
    
    auto Copy = str;
    int strlen = str.length();
    for (int i = 0; i < strlen; i++){
        Copy[i] = toupper(str[i]); 
    }
    return Copy;
}

std::string Lower(const std::string &str) noexcept{
    // Replace code here
    auto Copy = str;
    int strlen = str.length();
    for (int i = 0; i < strlen;i++){
        Copy[i] = tolower(str[i]); 
    }
    return Copy;
}

std::string LStrip(const std::string &str) noexcept{
    // Replace code here
    auto Copy = str;
    int i = 0;
    while (std::isspace(Copy[i])){
        i++;
    }
    Copy.erase(0,i);
    return Copy;
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    auto Copy = str;
    int strlen = Copy.length();
    int i = strlen;
    //std::cout<<Copy[i]<<"\n";
    while (std::isspace(Copy[i-1])){
        i--;
    }
    Copy.erase(i,strlen);
    return Copy;
}

std::string Strip(const std::string &str) noexcept{
    // Replace code here
    auto Copy = str;
    Copy = LStrip(Copy);
    Copy = RStrip(Copy);
    return Copy;
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    auto Copy = str;
    int strlen = Copy.length();
    int diff = width - strlen;

    if (diff > 0) {
        int leftPadding = diff / 2;
        int rightPadding = diff - leftPadding;
        return std::string(leftPadding, fill) + Copy + std::string(rightPadding, fill);
    }
    else {
        return Copy;
    }
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    auto Copy = str;
    int strlen = Copy.length();
    int diff = width - strlen;

    if (diff > 0) {
        return Copy + std::string(diff, fill);
    }
    else {
        return str;
    }
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    auto Copy = str;
    int strlen = Copy.length();
    int diff = width - strlen;

    if (diff > 0) {
        return std::string(diff, fill) + Copy;
    }
    else {
        return Copy;
    }
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    auto Copy = str;
    if (Copy.find(old) != std::string::npos){
        int strlen = old.length();
        while (Copy.find(old) != std::string::npos){
            int pos = Copy.find(old);
            Copy.replace(pos, strlen, rep);
        }
        return Copy;
    }
    else{
        return Copy;
    }
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};