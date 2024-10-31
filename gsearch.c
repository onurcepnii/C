#include <stdio.h>
#include <string.h>

void* gsearch(const void* vpa, size_t size, size_t sz, const void* vpkey)
{
  const char* p = (const char*)vpa;

  while(size--){
    if(!memcmp(p, vpkey, sz))
      return (char*)p;
  p += sz;
  
  }
return NULL;

}

int main()
{
 int arr[] = {1, 2, 3, 4, 5};
    int key = 3;
    size_t size = sizeof(arr) / sizeof(arr[0]);
    size_t elementSize = sizeof(int);

    // gsearch call
    int* result = (int*)gsearch(arr, size, elementSize, &key);

    if (result != NULL)
        printf("Key found: %d\n", *result);

    else 
        printf("Key not found.\n");
    
}
