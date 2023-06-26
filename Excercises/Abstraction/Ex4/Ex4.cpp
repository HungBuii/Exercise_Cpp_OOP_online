// Skip bai thuc hanh 4 boi vi chua biet ve ma tran
#include <iostream>

class Matrix
{
public:

    Matrix(int _row, int _column) {
        while (_row % 2 == 0 || _column % 2 == 0) {
            std::cout << "Enter row: ";
            std::cin >> _row;
            std::cout << "Enter column: ";
            std::cin >> _column;
            std::cout << "\n";
        }
        row = _row;
        column = _column;
    }

    void inputData() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                std::cout << "Enter data in row " << i << " and column " << j << ": ";
                std::cin >> data[i][j];
                std::cout << "\n";
            }
        }
    }

    void showMatrixOriginal() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    void showMatrixProduct() {

    }


private:
    int row;
    int column;
    int data[2][2];
};

int main()
{
    Matrix* matrix_1 = new Matrix(2, 3);
    matrix_1->inputData();
    matrix_1->showMatrixOriginal();
}

