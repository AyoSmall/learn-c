#include <iostream>

// This code implements a grid using C-style arrays
int main(){

    constexpr int y{3},x{5};
    int grid[y][x] = {};

    // Initialise array
    for (int i = 0; i < y; ++i){
        for (int j=0; j < x; ++j){
            grid[i][j] = 0;
        }
    }

    // Render array as grid (text)
    std::string grid_img = "|-|";
    std::string player_img = "|o|";
    for (int i = 0; i < y; ++i){
        for (int j = 0; j < x; ++j){
            // std::cout << grid_img;
            std::cout << grid[i][j];
        }
        std::cout << "\n";
    }

    return 0;
}

/*
// todo:
// Generate grid of (x,y) dimensions
// Generate exit at some coordinate
// End game when exit found
*/