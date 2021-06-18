/* Enter your solutions in this file */
#include <stdio.h>
/*average*/
float average(int arr[],int len){
  int sum = 0;
  float avg;
  for(int i = 0; i < len; i++){
    sum += arr[i];
  }
  avg = (float)sum/len;
  return avg;
}
/*factors*/
int factors(int n,int arr[]){
int cpy = n;
int cnt = 0;
int cnt1 =0;
for(int i = 2; i<n/2; i++){
if(n%i ==0){
for(int j=2; j<=i; j++){
if(i%j==0)
cnt+= 1;
}
if(cnt == 1){
while(cpy%i == 0){
arr[cnt1] = i;
cpy/= i;
cnt1+= 1;
}
cpy = n;}
cnt = 0;
}
else
continue;}
return cnt1;
}

/* max*/
int max(int arr[], int len){
int m = arr[0];
for(int i= 0; i< len; i++){
    if(arr[i]> m)
      m = arr[i];
}
  return m ;
}

/* min*/
int min(int arr[], int len){
int min;
min = arr[0];
for(int i=0; i<len; i++){
    if(arr[i]<min){
      min = arr[i];
    }
}
  return min;
}

/* mode*/
int mode(int arr[], int len){
  int arr2[len];
  int n,p, max;
  int count = 0;
  for(int i = 0; i < len; i++){
  n = arr[i];
  for(int j=0; j<len; j++){
  if( arr[j] == n)
  count = count +1 ;
  }
  arr2[i] = count;
  count = 0;
  }
  max = arr2[0];
  for(int i = 0; i < len; i++){
  if(arr2[i]> max){
  max = arr2[i];
  }
  }
  for(p =0; p<len; p++){
  if(max == arr2[p])
  break;
  }
  return arr[p];
  }
  
