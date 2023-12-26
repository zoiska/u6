#include <stdio.h>

void aufg1(){
    int a[] = {1, 2, 3,4 ,5 , 6, 7, 8, 9, 10};
    int size = sizeof a / 4;
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void aufg2(){
    int a[10];
    for(int i = 0; i < 10; i++){
        printf("Eingabe für Element %d:\n", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int b = 0; b < 10; b++){
        printf("%d ", a[b]);
    }
    printf("\n");
    for(int c = 0; c < 10; c += 2){
        printf("%d ", a[c]);
    }
    printf("\n");
    for(int d = 9; d >= 0; d--){
        printf("%d ", a[d]);
    }
}

int minimum(int arr[], int num){
    if(num <= 0){
        return - 1;
    }
    int min = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d\n", min);
    return min;
}

int maximum(int arr[], int num){
    if(num <= 0){
        return - 1;
    }
    int max = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return max;
}

int summe(int arr[]){
    int size = sizeof arr / 4;
    int erg = 0;
    for(int i = 0; i < size; i++){
        erg += arr[i];
    }
    printf("%d\n", erg);
    return erg;
}

void copy(int start[], int num, int ziel[]){
    for(int i = 0; i < num; i++){
        ziel[i] = start[i];
    }
}

void aufg4a(){
    int mehrdim[3][5] = {' ', '#', '#', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', '#', '#', ' '};
    for(int j = 0; j <= 2; j++){
        for(int k = 0; k <= 4; k++){
            printf("%c", mehrdim[j][k]);
        }
        printf("\n");
    }
}

void aufg4b(){
    int mehrdim[3][5] = {' ', '#', '#', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', '#', '#', ' '};
    for(int j = 0; j <= 4; j++){
        for(int k = 0; k <= 2; k++){
            printf("%c", mehrdim[k][j]);
        }
        printf("\n");
    }
}

int main() {
    int f[] = {-2, 3, -4, 5};
    int g[4];
    //aufg1();
    //aufg2();
    //minimum(f, 4);
    //maximum(f, 4);
    //summe(f);
    //copy(f, 4, g);
    //aufg4a();
    //aufg4b();

    return 0;
}