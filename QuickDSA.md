# my-dsa-journey

## Data Structures:

### 1. Arrays: 
> Basic operations, traversing, searching (linear and binary search)
- Concept: A fixed-size collection of elements of the same data type, stored in contiguous memory locations.
- Operations: Accessing elements, iterating, searching (linear search), basic insertions and deletions (shifting elements).
- Practice: Implement basic array operations in your mobile development language (e.g., Kotlin, Java, Swift). Solve coding problems like finding the maximum element or reversing an array.
- Resources:
  - GeeksForGeeks Arrays Tutorial: https://www.geeksforgeeks.org/array-data-structure/
  - LeetCode Array Problems: https://leetcode.com/tag/array/

### 2. Linked Lists: 
> Singly linked lists, doubly linked lists (basic operations, insertion, deletion)
- Concept: A linear data structure where elements (nodes) are not stored contiguously in memory. Each node contains data and a reference (pointer) to the next node.
- Types: Singly linked lists (one pointer per node) and doubly linked lists (pointers to both previous and next nodes).
- Operations: Traversing, searching, inserting elements at specific positions, deleting elements.
- Practice: Implement singly and doubly linked lists in your language. Solve problems like reversing a linked list or finding the middle element.
- Resources:
  - Introduction to Linked Lists: https://www.geeksforgeeks.org/data-structures/linked-list/
  - HackerRank Linked List Problems: https://www.hackerrank.com/domains/data-structures/linked-lists

### 3. Stacks: 
> LIFO (Last In First Out) principle, applications (function calls, undo/redo)
- Concept: LIFO (Last In First Out) principle. Elements are added and removed from the "top" of the stack.
- Operations: Push (add element), Pop (remove top element), Peek (access top element without removal).
- Applications: Function call management, undo/redo functionality, backtracking algorithms.
- Practice: Implement a stack using arrays or linked lists. Solve problems like balancing parentheses or evaluating postfix expressions.
- Resources:
  - GeeksForGeeks Stacks Tutorial: https://www.geeksforgeeks.org/stack-data-structure/
  - freeCodeCamp Stacks Video Tutorial: https://www.youtube.com/watch?v=rdmNr-9_RNY


### 4. Queues: 
> FIFO (First In First Out) principle, applications (task scheduling, message passing)
- Concept: FIFO (First In First Out) principle. Elements are added to the "back" and removed from the "front" of the queue.
- Operations: Enqueue (add element), Dequeue (remove front element), Peek (access front element without removal).
- Applications: Task scheduling, message passing, handling network requests.
- Practice: Implement a queue using arrays or linked lists. Solve problems like simulating a printer queue or implementing a breadth-first search algorithm.
- Resources:
  - Introduction to Queues: https://www.geeksforgeeks.org/stack-data-structure/
  - LeetCode Queue Problems: https://leetcode.com/tag/queue/

### 5. Hash Tables: 
> Key-value pair storage, efficient retrieval (understand basic hashing concepts)
- Concept: A data structure that uses a hashing function to map keys to values for efficient retrieval.
- Operations: Insert (key-value pair), Search (by key), Delete (by key).
- Applications: Implementing dictionaries, user login systems, caching mechanisms.
- Practice: Implement a basic hash table using arrays and understand basic hashing concepts (collision resolution). Solve problems like finding duplicate elements in an array or implementing a simple spell checker.
- Resources:
  - Hash Tables Tutorial: https://www.geeksforgeeks.org/hash-table-data-structure/
  - Abdul Bari Hash Table Video Tutorial: https://m.youtube.com/watch?v=2BldESGZKB8

### 6. Trees: 
> Binary Search Trees (BSTs) - searching, insertion, deletion (understand basic tree operations)

> Types of Trees:
- Binary Tree: Each node has at most two child nodes, typically referred to as left child and right child.
- Binary Search Tree (BST): A specific type of binary tree where the data in each node is greater than all elements in its left subtree and less than all elements in its right subtree. This enables efficient searching.

> Tree Operations:
- Traversal: Visiting each node in a specific order. Common traversal methods include:
- In-order traversal: Visit left subtree, root node, then right subtree. (Useful for printing a BST in sorted order)
- Pre-order traversal: Visit root node, then left subtree, then right subtree.
- Post-order traversal: Visit left subtree, then right subtree, then root node.
- Insertion: Adding a new node while maintaining the tree's structure (e.g., BST order).
- Deletion: Removing a node while preserving the tree's properties.
- Searching: Finding a specific node based on its data value (often very efficient in BSTs).

> Resources:
- GeeksForGeeks Trees Tutorial: https://www.geeksforgeeks.org/tree-data-structure/
- LeetCode Tree Problems: https://leetcode.com/tag/tree/
- Abdul Bari Binary Search Tree Video: https://m.youtube.com/watch?v=pYT9F8_LFTM (This video uses Javascript, but the concepts are applicable to most languages)


## Algorithms:

### Sorting Algorithms:-
- Concept: Arrange elements in a specific order (ascending or descending).
- Examples:
  - Bubble Sort: Simple but inefficient for large datasets. Imagine repeatedly swapping adjacent elements in a list until they are sorted, like bubbling up the largest bubbles to the top.
  - Selection Sort: Iteratively finds the minimum element and swaps it with the first unsorted element. Like selecting the best item one by one for a prize list.
  - Insertion Sort: Inserts each element into its correct position in a sorted sub-list. Like inserting a new player card into the right spot in a sorted binder based on their stats.
  - Merge Sort: Divides the list into sub-lists, sorts them recursively, and then merges them back in order. Imagine efficiently splitting and sorting a large deck of cards by dividing them into halves, then quarters, and so on, before merging them back in sorted order. (More efficient than bubble/selection sort for large datasets)
  - Quick Sort: Picks a pivot element and partitions the list based on it, placing elements less than the pivot before it and elements greater than it after it. Then sorts both sub-lists recursively. Like efficiently dividing a group of people based on their height using a chosen person as a reference, then sorting the shorter and taller groups separately. (Generally faster than merge sort for average cases)

### Searching Algorithms:-
- Concept: Find a specific element within a data structure.
- Examples:
  - Linear Search: Iterates through each element and compares it to the target value. Like searching for a book in a bookshelf by checking each book one by one.
  - Binary Search: Only applicable to sorted data. Repeatedly divides the search space in half until the target element is found or eliminated. Like efficiently searching a phonebook by repeatedly dividing the names in half based on alphabetical order. (Much faster than linear search for sorted data)

### Graph Algorithms:-
- Concept: Graphs represent relationships between nodes (vertices) connected by edges.
- Examples:
  - Breadth-First Search (BFS): Explores neighboring nodes level by level. Like finding your friend in a social network by first checking all their direct friends, then friends of friends, and so on. (Useful for navigation apps or social media recommendations)
  - Depth-First Search (DFS): Explores a branch as far as possible before backtracking. Like finding an exit in a maze by trying one path at a time and backtracking if you hit a dead end. (Useful for finding connected components in networks)

### Other Important Algorithms:-
- Dynamic Programming: Solves problems by breaking them down into sub-problems and storing solutions to reuse them efficiently. Used in various optimization problems. (Example: Efficiently calculating edit distance between two words for spell correction)
- Greedy Algorithms: Make the locally optimal choice at each step with the hope of finding a global optimum. May not always find the best solution. (Example: Finding the approximate shortest path by prioritizing edges with the shortest weights)

### Practice and Real-World Examples:

Many online platforms offer practice problems for these algorithms. 
Here are a few:
- LeetCode: https://leetcode.com/
- HackerRank: https://www.hackerrank.com/
- InterviewCake: https://www.interviewcake.com/

> Real-world uses of these algorithms are extensive in mobile apps:
- Sorting: Sorting product lists in an e-commerce app, arranging search results, or ordering tasks in a to-do list.
- Searching: Finding contacts in your address book or searching for specific items in a shopping app.
- Graph Algorithms: Implementing navigation features in a map app, recommending connections in social media apps, or finding the shortest route for a delivery app.
- Dynamic Programming: Optimizing video encoding for streaming services or implementing efficient auto-correction in a messaging app.
- Greedy Algorithms: Prioritizing tasks in a task scheduling app or finding an approximate solution for image compression.

Remember, this is not an exhaustive list, but it provides a foundation for understanding common algorithms and their applications in mobile development. As you delve deeper, you'll encounter more specialized algorithms relevant to specific app functionalities.


# Note

- Do all DSA practice with Kotlin
- You have already resources to learn only refer them.
- HackerRank Data Structure - https://www.youtube.com/playlist?list=PLI1t_8YX-Apv-UiRlnZwqqrRT8D1RhriX
- HackerRank Algorithm - https://www.youtube.com/playlist?list=PLI1t_8YX-ApvMthLj56t1Rf-Buio5Y8KL
- DS using Java - 
  - Telusko - https://www.youtube.com/playlist?list=PLsyeobzWxl7oRKwDi7wjrANsbhTX0IK0J
  - Apna college - https://www.youtube.com/playlist?list=PLfqMhTWNBTe3LtFWcvwpqTkUSlB32kJop
- CS Fundamental - https://www.youtube.com/playlist?list=PLMCXHnjXnTnszR6YSo1tQK2BMr15cC9Zh
- Kotlin 
  - Telusko - https://www.youtube.com/playlist?list=PLsyeobzWxl7rooJFZhc3qPLwVROovGCfh
  - FreeCodeCamp - https://www.youtube.com/watch?v=F9UC9DY-vIU&t=565s
- DSA Tools -
  - Visualizer - https://www.cs.usfca.edu/~galles/visualization/Algorithms.html
  - https://visualgo.net/en
  - For Practice use only HackerRank and Leet Code
