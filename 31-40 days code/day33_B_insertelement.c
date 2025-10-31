//Q66:Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, pos, arr[100], key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > key)
            break;
    }
    
    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];
    
    arr[pos] = key;
    n++;
    
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
