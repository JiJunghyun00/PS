#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdlib.h>  // qsort 함수를 사용하기 위한 헤더 파일
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*200);
    int k=0;
    int temp[200]={0};
    int result=0;
    for(int i=0;i<200;i++)
    {
        temp[i]=-1;
    }
    for(int i=0;i<numbers_len;i++){
        for(int j=i+1;j<numbers_len;j++)
        {
            result=0;
            for(int m=0;m<k;m++)
            {
                if(temp[m]==numbers[i]+numbers[j]) result=1;
            }
            if(result==0)
            {
                temp[k]=numbers[i]+numbers[j];
                k++;
            }
            else
            { 
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        answer[i]=temp[i];
    }
    qsort(answer, k, sizeof(int), compare);
    return answer;
}