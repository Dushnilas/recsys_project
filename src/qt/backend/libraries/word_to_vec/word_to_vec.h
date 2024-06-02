#ifndef WORD_TO_VEC_H
#define WORD_TO_VEC_H

#include <string>
#include <map>
#include <vector>

unsigned long analyse_unique_words(std::map<std::string, unsigned long>& dict, const std::vector<std::vector<std::string>>& words);
void word_to_vec(std::map<std::string, unsigned long>& dict, const std::vector<std::string>& words, std::vector<int>& vec);

#endif
