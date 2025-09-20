//8. Найдите наименьший элемент в каждой строке трехмерного массива.
#include <iostream>
using namespace std;

int main() {
    int cube[2][3][4] = {
        {
            {5, 2, 8, 1},
            {9, 4, 3, 7},
            {6, 0, 2, 5}
        },
        {
            {15, 7, 22, 4},
            {18, 9, 12, 6},
            {3, 25, 8, 14}
        }
    };

    int layers = 2;
    int rows = 3;
    int cols = 4;

    for (int z = 0; z < layers; z++) {
        cout << "\nsloy " << z + 1 << ":"<<std::endl;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << cube[z][i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    cout << "Minimalniy na kajdoy stroke:" << endl;

    for (int z = 0; z < layers; z++) {
        cout << "\nsloy " << z + 1 << ":" << endl;

        for (int i = 0; i < rows; i++) {
            int min_element = cube[z][i][0]; 

            for (int j = 1; j < cols; j++) {
                if (cube[z][i][j] < min_element) {
                    min_element = cube[z][i][j];
                }
            }

            cout << "  Stroka " << i + 1 << ": " << min_element << endl;
        }
    }

    return 0;
}
