#include "word_to_vec.h"
#include <string>
#include <map>
#include <iostream>
#include <vector>

unsigned long analyse_unique_words(
        std::map<std::string, unsigned long>& dict,
        const std::vector<std::vector<std::string>>& words)
{
    for (const auto& el : words){
        for (const auto& word : el){
            if (dict.find(word) == dict.end())
                dict[word] = dict.size();
        }
    }

    std::cout << "All words was analysed. There are " << dict.size() << " unique words.\n";
    return dict.size();
}

void word_to_vec(std::map<std::string, unsigned long>& dict,
                 const std::vector<std::string>& words,
                 std::vector<int>& vec)
{
    for (const auto & word : words)
        vec[dict[word]]++;

    for (auto el : vec){

    }
}