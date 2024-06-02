#include "cosine_distance.h"
#include <cmath>
#include <vector>


double dotProduct(const std::vector<int>& vec_1, const std::vector<int>& vec_2) {
    double dot = 0.0;
    for(size_t i = 0; i < vec_1.size(); i++) {
        dot += vec_1[i] * vec_2[i];
    }
    return dot;
}

double norm(const std::vector<int>& vec) {
    double sum = 0.0;
    for(double i : vec) {
        sum += i * i;
    }
    return std::sqrt(sum);
}

double cosineDistance(const std::vector<int>& u, const std::vector<int>& v) {
    double uv = dotProduct(u, v);
    double uu = dotProduct(u, u);
    double vv = dotProduct(v, v);
    return uv / std::sqrt(uu * vv);
}