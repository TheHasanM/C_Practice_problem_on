#include <stdio.h>


void reverse(int arr[], int strt, int end)
{
 int temp=0;
 while(strt<end)
 {
     temp = arr[strt];
     arr[strt] = arr[end];
     arr[end] = temp;
     strt++;
     end--;
 }
    
}
int main()
{
    
    int arr[] = {1,2,3,4,5,6,7};
    int len = (sizeof(arr)/sizeof(arr[0])) - 1;
    reverse(arr,0, len );
    
    for(int i =0;i<=len;i++)
    printf("%d", arr[i]);

    return 0;
}