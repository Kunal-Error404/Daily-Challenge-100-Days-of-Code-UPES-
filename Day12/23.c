//Write a program to calculate a library fine based on late days.

#include <stdio.h>
void fee(int a);

int main(){
    int n;
    printf("ENTER THE NUMBER OF LATE DAYS:");
    scanf("%d",&n);
    fee(n);
    return 0;

}
void fee(int a){
    if(a>=1){
    int late;
    if(a>=1 && a<=4){
        late = 2*a;
        printf("YOUR FINE IS : %d",late);

    }
    else if( a>=5 && a<=8){
        late = 4*a;
        printf("YOUR FINE IS : %d",late);

    }
    else if(a>=9 && a<=15){
        late = 6*a;
        printf("YOUR FINE IS : %d",late);
    }
    else{
        printf("MEMBERSHIP CANCELLED");
    }
}
else{
    printf("ENTER POSITIVE VALUE OF DAYS");
}
}