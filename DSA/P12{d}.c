/*d) Binary search operation with function*/

 #include <stdio.h>
 void sort(int a[], int b) {
 for (int i = 0; i < b- 1; i++) {
 for (int j = 0; j < b- i- 1; j++) {
 if (a[j] > a[j + 1]) {
 int temp = a[j];
 a[j] = a[j + 1];
 a[j + 1] = temp;
 }
 }
 }
 }
 void input(int a[], int b) {
 for (int i = 0; i < b; i++) {
 printf("Enter element %d of the array: \n", i + 1);
 scanf("%d", &a[i]);
 }
 sort(a, b);
 printf("\nSorted array: ");
 for (int i = 0; i < b; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
 }
 int binarySearch(int a[], int l, int u, int k) {
 if (l > u) {
 printf("Element not found\n");
 return 0;
 }
 int mid = l + (u- l) / 2;
 if (a[mid] == k) {
 printf("The element is in position %d\n", mid);
 return 1;
 }
 if (a[mid] < k) {
 return binarySearch(a, mid + 1, u, k);
 } else {
 return binarySearch(a, l, mid- 1, k);
 }
 }
int main() {
 int b;
 printf("Enter the number of elements in the array: \n");
 scanf("%d", &b);
 if (b <= 0) {
 printf("The number of elements must be greater than 0.\n");
 return 1;
 }
 int a[b];
 input(a, b);
 int key;
 printf("\nEnter the element to search for: ");
 scanf("%d", &key);
 binarySearch(a, 0, b- 1, key);
 return 0;
 }