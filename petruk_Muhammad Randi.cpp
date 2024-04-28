#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Muhammad Randi Putra Kurniawan
//2317051009
bool cariKata(vector<string> matriks, string kata) {
    int baris = matriks.size();
    int kolom = matriks[0].size();

    // Mencari secara horizontal
    for (int i = 0; i < baris; i++) {
        if (matriks[i].find(kata) != string::npos) {
            return 1;
        }
    }


