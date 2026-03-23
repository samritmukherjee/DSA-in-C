# DSA in C - Data Structure and Algorithm Programs

A collection of C programs implementing fundamental data structures and algorithms for learning and reference purposes.

## Program Descriptions

### Data Structures

#### **SinglyLinkedList.c**
Implementation of a singly linked list with operations:
- Insert at beginning
- Insert at any position
- Delete nodes
- Display list
- Supports dynamic memory allocation using pointers

#### **Stack.c**
Stack implementation using a fixed-size array:
- Push operation (add elements)
- Pop operation (remove elements)
- Display stack contents
- Overflow and underflow detection with size limit of 5

#### **Queue.c**
Queue implementation using a fixed-size array:
- Enqueue operation (add elements to rear)
- Dequeue operation (remove elements from front)
- Display queue contents
- Overflow and underflow detection with size limit of 5

#### **CircularQueueUsingswitch.c**
Circular Queue implementation:
- Enqueue operation in circular manner
- Dequeue operation with wrap-around
- Display elements
- Uses switch-case for menu-driven interface

### Searching Algorithms

#### **BinarySearch.c**
Binary search implementation on sorted arrays:
- Efficient search with O(log n) time complexity
- Returns the index of found element or -1 if not found
- Requires sorted input array

#### **LinearSearch.c**
Linear search implementation:
- Simple sequential search through array
- O(n) time complexity
- Works on both sorted and unsorted arrays

### Miscellaneous Programs

#### **Structure.c**
Basic C structure demonstrations:
- Struct definitions and usage
- Accessing struct members
- Working with arrays of structures

#### **CallByValue.c**
Demonstrates call-by-value parameter passing:
- Shows how changes to parameters don't affect original variables
- Passes copies of values to functions

#### **CallByReference.c**
Demonstrates call-by-reference parameter passing:
- Shows how pointers allow modification of original variables
- Passes memory addresses to functions
- Demonstrates pointer usage in C

## How to Compile and Run

### Compile a Program
```bash
gcc -o program_name program_name.c
```

### Run a Program
```bash
./program_name
```

### Example
```bash
gcc -o SinglyLinkedList SinglyLinkedList.c
./SinglyLinkedList
```

## Learning Path Recommendation

1. **Start with basics:**
   - CallByValue.c
   - CallByReference.c
   - Structure.c

2. **Learn searching:**
   - LinearSearch.c
   - BinarySearch.c

3. **Master data structures:**
   - Stack.c
   - Queue.c
   - CircularQueueUsingswitch.c
   - SinglyLinkedList.c

## Requirements

- GCC compiler
- Basic C programming knowledge
- Terminal/Command prompt

## Notes

- All programs are written in C for educational purposes
- Most programs use fixed-size arrays (SIZE = 5 for Stack/Queue)
- Modify constants as needed for different input sizes
- Programs include user-friendly menu systems for interactive testing

---

Happy Learning! 
