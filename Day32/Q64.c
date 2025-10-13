//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
void extract(int arr[],int n,int k);
int countd(int arr[],int n);
int count(int k);
int main(){

}
void extract(int arr[],int n,int k){
    while(k>0){
        for(int i =0;i<n;i++){
            int ldigit = k%10;
            arr[i]=ldigit;
            k=k/10;
        }
        
    }
}
int count(int k){
    int count1 = 0;
    while(k>0){
        k=k/10;
        count1++;
    }
    return count1;
}
int countd(int arr[],int n){
    
}

