#ifndef HEAP_H
#define HEAP_H

#include<vector>
#include<cmath> // for floor()
#include<algorithm>

template <typename T>
class Heap {
 private:

 public:
  std::vector<T> values;
  void heapify(int);
  Heap();  // constructs an empty heap

  // constructs a heap with the values from the given vector
  // the type T MUST provide comparison operators <, >, ==
  Heap(std::vector<T>);

  void insert(T);
  void remove(T);
  T getMin();
};

/*******************************/
// default constructor
/*******************************/

template <typename T>
Heap<T>::Heap() {}

/*******************************/
// constructs a heap with the values in the given vector
// the type T MUST provide comparison operators <, >, ==
/*******************************/

template <typename T>
Heap<T>::Heap(std::vector<T> start_values) {
  // copy the values into our heap vector
  for (int i = 0; i < start_values.size(); i++) {
    values.push_back(start_values.at(i));
  }

  // starting from last non-leaf node (last parent), heapify each
  // of the parents
  int initial_parent_index = floor(values.size() / 2) - 1;
  for (int parent_index = initial_parent_index; parent_index >= 0;
       parent_index--) {
    heapify(parent_index);
  }
}

/*******************************/
// add values to the heap
/*******************************/

template <typename T>
void Heap<T>::insert(T value) {
   // TO BE IMPLEMENTED
   this->values.push_back(value);
   
   int idx = this->values.size()-1;
   while(idx > 0) {
      int parent_idx = (idx - 1) / 2; // Calculate the parent index
      if (values[parent_idx] >= values[idx]) {
        std::swap(values[parent_idx], values[idx]);
      }
      idx = parent_idx;
   }
}

/*******************************/
/* delete values from the heap */
/*******************************/

template <typename T>
void Heap<T>::remove(T value) {
  // TO BE IMPLEMENTED
  int idx = 0;
  for (int i = 0; i < values.size(); i++) {
    if (values[i] == value) {
      idx = i;
      break;
    }
  }

  std::swap(values[idx], values[values.size()-1]);
  values.pop_back();

  //perform "bubble-down" operation to swap children that are smaller
  bool swapped = true;
  while (swapped) {
    swapped = false;
    auto l_idx = 2*idx + 1;
    auto r_idx = 2*idx + 2;
    int biggestchild = idx;

    if (l_idx < values.size() && values[l_idx] < values[biggestchild]) {
      biggestchild = l_idx;
      swapped = true;
    }
    if (r_idx < values.size() && values[r_idx] < values[biggestchild]) {
      biggestchild = r_idx;
      swapped = true;
    }

    if (swapped) {
      std::swap(values[idx], values[biggestchild]);
      idx = biggestchild;
    }
    
  }
  
}

/*******************************/
// find the smallest value in the heap
/*******************************/

template <typename T>
T Heap<T>::getMin() {
  return values[0];
}

/*******************************/
// private function to heapify a given 'node'
/*******************************/

template <typename T>
void Heap<T>::heapify(int parent_index) {
  // if we're outside the index range, return
  if (parent_index < 0 || parent_index >= values.size()) return;

  // find children indexes
  int left_child_index = parent_index * 2 + 1;
  int right_child_index = parent_index * 2 + 2;

  // if parent is larger than child, swap with smallest child
  int index_of_smallest = parent_index;

  // check if left child exists and if exists, is smallest value there
  if (left_child_index < values.size() &&
      values.at(left_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = left_child_index;
  }

  // check if left child exists and if exists, is smallest value there
  if (right_child_index < values.size() &&
      values.at(right_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = right_child_index;
  }

  // if parent is not smallest, swap with smallest child
  if (index_of_smallest != parent_index) {
    T temp = values.at(parent_index);
    values.at(parent_index) = values.at(index_of_smallest);
    values.at(index_of_smallest) = temp;
  }

  // move up the 'tree' to grandparent
  int grandparent = floor(parent_index/2) - 1;
  heapify(grandparent);
}

#endif