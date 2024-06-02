#ifndef COSINE_DISTANCE_H
#define COSINE_DISTANCE_H

#include <cstddef>
#include <vector>

double dotProduct(const std::vector<int>& vec_1, const std::vector<int>& vec_2);
double norm(const std::vector<int>& vec);
double cosineDistance(const std::vector<int>& u, const std::vector<int>& v);

#endif
