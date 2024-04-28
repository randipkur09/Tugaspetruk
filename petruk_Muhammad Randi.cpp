#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Muhammad Randi Putra Kurniawan
//2317051009
bool searchWord(vector<string> matrix, string word) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // nyari horizontal
    for (int i = 0; i < rows; i++) {
        if (matrix[i].find(word) != string::npos) {
            return 1;
        }
    }

