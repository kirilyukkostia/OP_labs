def input_matrix(n : int, m : int, pre_print : str = "Enter matrix: ") -> list:
    print(pre_print)
    mat = []
    for _ in range(n):
        mat.append(list(map(float, input().split())))
    return mat


def print_matrix(mat : list, pre_print : str = "Matrix: "):
    print(pre_print)
    for i in mat:
        print(*i)


def find_max_col(mat : list, n : int, m : int) -> int:
    max_num = mat[0][0]
    col = 0

    for i in range(n):
        for j in range(m):
            if mat[i][j] > max_num:
                max_num = mat[i][j]
                col = j
       
    return col


def find_min_col(mat : list, n : int, m : int) -> int:
    min_num = mat[0][0]
    col = 0

    for i in range(n):
        for j in range(m):
            if mat[i][j] < min_num:
                min_num = mat[i][j]
                col = j
       
    return col


def switch_col(mat : list, n : int, m : int):
    first_col = find_max_col(mat, n, m)
    second_col = find_min_col(mat, n, m)

    for i in range(n):
        temp = mat[i][first_col]
        mat[i][first_col] = mat[i][second_col]
        mat[i][second_col] = temp


n = int(input("Enter n: "))
m = int(input("Enter m: "))


mat1 = input_matrix(n, m, "Enter C matrix: ")
mat2 = input_matrix(n, m, "Enter B matrix: ")

switch_col(mat1, n, m)
switch_col(mat2, n, m)


print_matrix(mat1, "Y matrix: ")
print_matrix(mat2, "Z matrix: ")
