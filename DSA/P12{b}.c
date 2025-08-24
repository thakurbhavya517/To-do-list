/*b) Linear search operation with function*/

 #include <stdio.h>
 int l_search(int ele, int arr[], int n) {
 for (int i = 0; i < n; i++) {
 if (arr[i] == ele) {
 printf("Element found at %d\n", i + 1);
 return i;
 }
 }
 printf("Element not found\n");
 return-1;
 }
 int main() {
 printf("Enter array size: ");
 int n;
 scanf("%d", &n);
 int arr[n];
 printf("Enter array elements: ");
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 int ele;
 printf("Enter element to be found: ");
 scanf("%d", &ele);
 l_search(ele, arr, n);
 return 0;
 }