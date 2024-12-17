#include<conio.h>
#include<math.h>
int sum(int n);
int main(){
    printf("Sum is %d:",sum(5));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        int sumN=sum(n-1);
        int sumNm=sumN+n;
    }
}