# include <stdio.h>

int Factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * Factorial(n-1);
    }
}

int main(void){
    int N;
    scanf("%d", &N);

    int temp;
    temp = Factorial(N);

    printf("%d",temp);

    return 0;
}

// 1차 수정본 - git 사용을 위한.