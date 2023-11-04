#include<stdio.h>
int main(){
int i,n,j,k,temp;
printf("Enter the size of array");
scanf("%d",&n);
int a[n];
printf("Enter tha target value");
scanf("%d",&k);
for(int i=0;i<n;i++){
     scanf("%d",&a[i]);}
     int c=0;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
     if(a[i]+a[j]==k){
         printf("%d %d",i,j);
         c=1;
          break;}
           } 
     if(c==1)
          break;
          
          
 }
          


return 0;


}
