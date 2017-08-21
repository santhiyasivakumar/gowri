#include<string.h>
void printArray(int arr[], int size)
{
  int k;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   leftRotate(arr, 2, 7);
   printArray(arr, 7);
   getchar();
   return 0;
}
