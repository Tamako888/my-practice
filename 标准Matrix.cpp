//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <string.h>
//int main() {
//    int matrix[30][30], temp[30][30];
//    int n, m;
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= n; ++j)
//            scanf("%d", &matrix[i][j]);
//    for (int k = 1; k <= m; ++k) {
//        int x;
//        scanf("%d", &x);
//        memcpy(temp, matrix, sizeof(matrix));//复制函数：将matrix数组内容复制到temp数组中
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                switch (x) {
//                case 1:
//                    matrix[j][n - i + 1] = temp[i][j];//法则1
//                    break;
//                case 2:
//                    matrix[n - j + 1][i] = temp[i][j];//法则2
//                    break;
//                case 3:
//                    matrix[n - i + 1][n - j + 1] = temp[i][j];//法则3
//                    break;
//                }
//            }
//        }
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                printf("%d", matrix[i][j]);//输出
//                if (j != n) printf(" ");//注意:最后一个数字后面不要带空格
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}