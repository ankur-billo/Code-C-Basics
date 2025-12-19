// a program to count the number of students belonging to each of following groups of marks: 0-9,10-19,20-29,....,100.
#include <stdio.h>

#define max 50
#define COUNT 11

int main(){
    int ar[max];
    int high,low,i;
    int group[COUNT]={0};
    printf("Enter the marks of 50 students: ");
    for(i=0;i<max;i++){
        scanf("%d",&ar[i]);
        group[(int)(ar[i]/10)]++;
    }
    printf("Group   Range   Frequency\n\n");
    for(i=0;i<COUNT;i++){
        low=i*10;
        if(i==10){
            high=100;
        }
        else{
            high=low+9;
        }
        printf(" %d     %d to %d    %d\n",i+1,low,high,group[i]);
    }
        return 0;
}