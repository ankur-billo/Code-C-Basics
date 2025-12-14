#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the array elements: ");
    for(int i=0;i<10;i++){    
        scanf("%d",&arr[i]);
    }
    int num,key=0;
    printf("Enter the element to search : ");
    scanf("%d",&num);
    for(int i=0;i<10;i++){
        if(num==arr[i]){
            key=1;
            break;
    }
}
    if(key==1){
    printf("The element is FOUND!\n");
        }
        else{
            printf("The element is NOT Found!\n");
        }
    return 0;
}