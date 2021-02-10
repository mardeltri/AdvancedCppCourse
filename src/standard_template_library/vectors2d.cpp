// vectors.cpp : Creating vectors
#include <iostream>
#include <vector>


int main(){
    std::vector<std::vector<int>> grid(3, std::vector<int>(4, 7));
    for (int row=0; row<grid.size(); ++row){
        for (int col=0; col<grid.size(); ++col){
            std::cout << grid[row][col] << std::flush;
        }
        std::cout << std::endl;
    }

    return 0;
}
