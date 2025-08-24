/*PROGRAMNUMBER-12
 AIM:Write a program in C to perform LINEAR and BINARY search on an array.
 a)
 Linear search operation without function*/
 
 #include <stdio.h>
 int main() {
 int n = 6;
 int arr[] = {2, 5, 37, 35, 8, 76};
 int ele = 35;
 int found = 0;
 for (int i = 0; i < n; i++) {
 if (arr[i] == ele) {
 printf("Element found at position %d\n", i + 1);
 found = 1;
 break;
 }
 }
 if (!found) {
 printf("Element not found\n");
 }
 return 0;
 }