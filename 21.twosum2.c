#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   int tar;
   scanf("%d",&tar);
   int l=0;
   int r=n-1;
   int re[2];
    for(int i=0;i<n;i++){
        int sum=arr[l]+arr[r];
        if(sum==tar){
            re[0]=l+1;
            re[1]=r+1;
        }
        else if(sum<tar){
            l++;
        }
        else{
            r--;
        }
    }
    printf("%d %d",re[0],re[1]);
    return 0;
}