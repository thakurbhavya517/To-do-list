c) /*Binary search operation without function*/

 #include <stdio.h>
 int main() {
 int arr[] = {1, 2, 3, 4, 78, 89, 91, 96};
 int n = sizeof(arr) / sizeof(arr[0]);
 int item;
 int low = 0, high = n- 1;
 int mid;
 int found = 0;
 printf("Which element are you looking for? \n");
 scanf("%d", &item);
 while (low <= high) {
 mid = (low + (high- low) / 2);
 if (arr[mid] == item) {
 found = 1;
 break;
 }
 else if (arr[mid] < item) {
 low = mid + 1;
 }
 else {
 high = mid- 1;
 }
 }
 if (found) {
 printf("Element %d found at index %d.\n", item, mid);
 }
 else {
 printf("Element %d not found in the array.\n", item);
 }
 return 0;
 }