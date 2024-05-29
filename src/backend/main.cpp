#include <iostream>
#include <vector>
#include <iomanip>
#include "cosine_distance.h"
#include "word_to_vec.h"


int main() {
    std::vector<std::string> array1 = {"apple", "banana"};
    std::vector<std::string> array2 = {"cherry", "date"};
    std::vector<std::vector<std::string>> words = {array1, array2};
    int movies_amount = words.size();
    std::vector<std::vector<int>> vectors;
    std::map<std::string, unsigned long> dict;

    auto len = analyse_unique_words(dict, words);

    for (auto const& el : words) {
        std::vector<int> vec(len, 0);

        word_to_vec(dict, el, vec);
        vectors.push_back(vec);

        for (auto i = 0; i < 4; i++) {
            std::cout << vec[i] << ' ';
        }
        std::cout << '\n';
    }

    std::vector<std::vector<double>> matrix(movies_amount, std::vector<double>(movies_amount,0));
    for (int i = 0; i < movies_amount; i++){
        for (int j = i; j < movies_amount; j++){
            double dist = cosineDistance(vectors[i], vectors[j]);
            matrix[i][j] = dist;
            if (i != j) matrix[j][i] = dist;
        }
    }

    for (const auto& row : matrix){
        for (auto el : row){
            std::cout << std::fixed << std::setprecision(20) << el << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
