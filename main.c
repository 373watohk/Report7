#include <stdio.h>

// 引数として型を指定する際に、配列ならば変数名に[]を加えて指定する。
void print_array(int scores[], int SIZE);
void print_array(int scores[], int SIZE){


    int tmp;
    for(int i=0; i<SIZE; ++i) {
        for (int j = i + 1; j < SIZE; ++j) {
            if (scores[i] > scores[j]) {
                tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;
            }

        }
    }
}



int main() {
   const int SIZE = 6;
   int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    printf("scores = %d %d %d %d %d %d\n",scores[0],scores[1],scores[2],scores[3],scores[4],scores[5]);
    print_array(scores, SIZE);
    printf("result = %d %d %d %d %d %d\n",scores[0],scores[1],scores[2],scores[3],scores[4],scores[5]);
    return 0;
}