#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
#include <vector>
void swap(vector<int>& arr, int i, int j) {
 int temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
}
void maxHeapify(vector<int>& arr, int n, int i) {
 int largest = i;
 int left = 2 * i + 1;
 int right = 2 * i + 2;
if (left < n && arr[left] > arr[largest]) {
 largest = left;
 }
if (right < n && arr[right] > arr[largest]) {
 largest = right;
 }
if (largest != i) {
 swap(arr, i, largest);
 maxHeapify(arr, n, largest);
 }
}
void minHeapify(vector<int>& arr, int n, int i) {
 int smallest = i;
 int left = 2 * i + 1;
 int right = 2 * i + 2;
if (left < n && arr[left] < arr[smallest]) {
 smallest = left;
 }
 if (right < n && arr[right] < arr[smallest]) {
 smallest = right;
 }
 if (smallest != i) {
 swap(arr, i, smallest);
 minHeapify(arr, n, smallest);
 }
}void buildMaxHeap(vector<int>& arr) {
 int n = arr.size();
 for (int i = n / 2 - 1; i >= 0; i--) {
 maxHeapify(arr, n, i);
 }
}
void buildMinHeap(vector<int>& arr) {
 int n = arr.size();
 for (int i = n / 2 - 1; i >= 0; i--) {
minHeapify(arr, n, i);
 }
}
signed main() {
 opti mise
 vector<int> maxHeap = {4, 10, 3, 5, 1};
 vector<int> minHeap = {4, 10, 3, 5, 1};
 buildMaxHeap(maxHeap);
 buildMinHeap(minHeap);
cout << "Max Heap: ";
 for (int num : maxHeap) {
 cout << num << " ";
 }
 cout << endl;
 cout << "Min Heap: ";
 for (int num : minHeap) {
 cout << num << " ";
 }
 cout << endl;
return 0;
}
