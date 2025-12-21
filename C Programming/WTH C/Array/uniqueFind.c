// find the unique number in a given Array where all the elements are being repeated twice with one value being unique

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={1,2,1,2,4};
    for(int i=0;i<5;i++){
        bool unique =false;
       for(int j=0;j<5;j++){
        if(i!=j && arr[i]==arr[j]){
            unique = true;
        }
       } 
       if(unique==false){
        printf("Unique Element : %d\n",arr[i]);
       }
    }
    return 0;
}