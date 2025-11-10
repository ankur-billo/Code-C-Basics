//Display three input numbers in sorted (non-decreasing) order.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int first,second,third;

if(a<=b && a<=c){
    
    first=a;
    if(b<=c){
        second=b;
        third=c;
    }
        else {
            second=c;
            third=b;
        }
}

if(b<=a && b<=c){
    
    first=b;
    if(a<=c){
        second=a;
        third=c;
    }
        else {
            second=c;
            third=a;
        }
        
}

if(c<=a && c<=b){
    
    first=c;
    if(a<=b){
        second=a;
        third=b;
    }
        else {
            second=b;
            third=a;
        }
        
}
printf("Sorted Numbers (non-decreasing order): %d %d %d/n",first,second,third);
    return 0;
}
