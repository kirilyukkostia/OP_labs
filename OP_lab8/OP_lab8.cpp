#include <iostream>

double** input_matrix(int n, int m);
void print_matrix(double** mat, int n, int m);
int find_max_col(double** mat, int n, int m);
int find_min_col(double** mat, int n, int m);
void switch_col(double** mat, int n, int m);

int main()
{
    int n, m;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter m: ";
    std::cin >> m;

    std::cout << "Enter C matrix: \n";
    double** mat1 = input_matrix(n, m);
    std::cout << "Enter B matrix: \n";
    double** mat2 = input_matrix(n, m);

    switch_col(mat1, n, m);
    switch_col(mat2, n, m);

    std::cout << "Y matrix: \n";
    print_matrix(mat1, n, m);
    std::cout << "Z matrix: \n";
    print_matrix(mat2, n, m);


}

double** input_matrix(int n, int m) {
    double** mat = new double* [n];

    for (int i = 0; i < n; i++) {
        double* arr = new double[m];

        for (int j = 0; j < m; j++)
            std::cin >> arr[j];

        mat[i] = arr;
    }
    return mat;
}

void print_matrix(double** mat, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

int find_max_col(double** mat, int n, int m) {
    int max_num = mat[0][0], col = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max_num < mat[i][j]) {
                max_num = mat[i][j];
                col = j;
            }
        }
    }
    return col;
}

int find_min_col(double** mat, int n, int m) {
    int min_num = mat[0][0], col = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (min_num > mat[i][j]) {
                min_num = mat[i][j];
                col = j;
            }
        }
    }
    return col;
}

void switch_col(double** mat, int n, int m) {
    int first_col = find_max_col(mat, n, m);
    int second_col = find_min_col(mat, n, m);

    for (int i = 0; i < n; i++) {
        int temp = mat[i][first_col];
        mat[i][first_col] = mat[i][second_col];
        mat[i][second_col] = temp;
    }
}