#include <stdio.h>


void reverse(int l, int arr[])
{
 int temp=0;
      int i=0;
 while(i<(l/2))
 {
     temp = arr[i];
     arr[i] = arr[l-i];
     arr[l-i] = temp;
     i++;
 }
    
}
int main()
{
    
    int arr[] = {1,2,3,4,5,6,7};
    int len = (sizeof(arr)/sizeof(arr[0])) - 1;
    
    reverse(len, arr);
    for(int i =0;i<=len;i++)
    printf("%d", arr[i]);

    return 0;
}