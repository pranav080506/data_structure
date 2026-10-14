# Data Structures & Algorithms Lab (BCS-351)

![C](https://img.shields.io/badge/Language-C11-blue.svg)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)
![Status](https://img.shields.io/badge/Course-BCS--351-orange.svg)
![College](https://img.shields.io/badge/Institution-GL%20Bajaj-red.svg)

Complete and verified C implementations for the **Data Structure Lab (BCS-351)** curriculum, covering Sorting, Searching, Hashing, Stacks, Queues, Linked Lists, Trees, and Graphs.

---

## 👨‍🎓 Student Details

- **Name:** Pranav Gupta
- **Roll Number:** 2501921520279
- **Branch:** Computer Science & Engineering (Artificial Intelligence) — CSE-AI
- **Semester:** III
- **Course:** Data Structure Lab (BCS-351)
- **Submitted To:** Mohit Kumar
- **College:** GL Bajaj Institute of Technology and Management

---

## 📂 Repository Structure

```
data_structure/
├── .gitignore
├── README.md                          <-- Root Documentation
└── DS_Lab/
    ├── Makefile                       <-- Centralized build & test automation
    ├── README.md                      <-- Lab guide & notes
    ├── .vscode/
    │   ├── launch.json                <-- VS Code C/C++ debugger (lldb/gdb)
    │   └── tasks.json                 <-- VS Code build & run tasks
    │
    ├── Exp1_Sorting/                  <-- Sorting Algorithms
    │   ├── 1a_bubble_sort.c
    │   ├── 1b_insertion_sort.c
    │   ├── 1c_selection_sort.c
    │   ├── 1d_shell_sort.c
    │   ├── 1e_radix_sort.c
    │   └── 1f_quick_sort.c
    │
    ├── Exp2_Searching_Hashing/        <-- Searching & Hash Collision Techniques
    │   ├── 2a_linear_search.c
    │   ├── 2b_binary_search.c
    │   ├── 2c_modulo_division.c
    │   ├── 2d_digit_extraction.c
    │   ├── 2e_fold_shift.c
    │   ├── 2f_fold_boundary.c
    │   ├── 2g_linear_probe.c
    │   ├── 2h_direct_hashing.c
    │   └── 2i_subtraction_hashing.c
    │
    ├── Exp3_Stacks/                   <-- Stack Implementations & Applications
    │   ├── 3a_stack_array.c
    │   ├── 3b_stack_linked_list.c
    │   ├── 3c_postfix_evaluation.c
    │   ├── 3d_balanced_parenthesis.c
    │   └── 3e_infix_to_postfix.c
    │
    ├── Exp4_Queues/                   <-- Queue Variants
    │   ├── 4a_queue_linked_list.c
    │   ├── 4b_circular_queue.c
    │   ├── 4c_priority_queue.c
    │   └── 4d_deque.c
    │
    ├── Exp5_LinkedLists/              <-- Linked Lists & Applications
    │   ├── 5a_singly_linked_list.c
    │   ├── 5b_circular_linked_list.c
    │   ├── 5c_doubly_linked_list.c
    │   ├── 5d_polynomial_addition.c
    │   └── 5e_array_vs_linked_list.c
    │
    ├── Exp6_Trees/                    <-- Binary Trees & Heaps
    │   ├── 6a_bst.c
    │   ├── 6b_max_heap.c
    │   ├── 6c_min_heap.c
    │   ├── 6d_expression_tree.c
    │   └── 6e_heapsort.c
    │
    ├── Exp7_Graphs/                   <-- Graph Algorithms
    │   ├── 7a_adjacency_matrix.c
    │   ├── 7b_bfs.c
    │   ├── 7c_kruskal_mst.c
    │   └── 7d_dijkstra.c
    │
    └── outputs/                       <-- Verified terminal output logs (38 files)
        ├── 1a_output.txt ... 7d_output.txt
```

---

## 📑 Syllabus & Experiments Index

### Experiment 1: Sorting Algorithms
| Exp ID | Program | Algorithm / Description | Time Complexity (Avg) |
|:------:|:--------|:------------------------|:---------------------:|
| **1a** | [`1a_bubble_sort.c`](DS_Lab/Exp1_Sorting/1a_bubble_sort.c) | Bubble Sort | $O(n^2)$ |
| **1b** | [`1b_insertion_sort.c`](DS_Lab/Exp1_Sorting/1b_insertion_sort.c) | Insertion Sort | $O(n^2)$ |
| **1c** | [`1c_selection_sort.c`](DS_Lab/Exp1_Sorting/1c_selection_sort.c) | Selection Sort | $O(n^2)$ |
| **1d** | [`1d_shell_sort.c`](DS_Lab/Exp1_Sorting/1d_shell_sort.c) | Shell Sort (Knuth/gap sequence) | $O(n \log^2 n)$ |
| **1e** | [`1e_radix_sort.c`](DS_Lab/Exp1_Sorting/1e_radix_sort.c) | Radix Sort (LSD base-10) | $O(d \cdot (n + k))$ |
| **1f** | [`1f_quick_sort.c`](DS_Lab/Exp1_Sorting/1f_quick_sort.c) | Quick Sort (Lomuto partition) | $O(n \log n)$ |

---

### Experiment 2: Searching & Hashing Techniques
| Exp ID | Program | Description | Key Characteristic |
|:------:|:--------|:------------|:-------------------|
| **2a** | [`2a_linear_search.c`](DS_Lab/Exp2_Searching_Hashing/2a_linear_search.c) | Linear Search | Sequential probe, unsorted data |
| **2b** | [`2b_binary_search.c`](DS_Lab/Exp2_Searching_Hashing/2b_binary_search.c) | Binary Search | Divide and conquer, $O(\log n)$ |
| **2c** | [`2c_modulo_division.c`](DS_Lab/Exp2_Searching_Hashing/2c_modulo_division.c) | Modulo-Division Hashing | $h(k) = k \bmod m$ |
| **2d** | [`2d_digit_extraction.c`](DS_Lab/Exp2_Searching_Hashing/2d_digit_extraction.c) | Digit Extraction Hashing | Extracts selected positional digits |
| **2e** | [`2e_fold_shift.c`](DS_Lab/Exp2_Searching_Hashing/2e_fold_shift.c) | Fold Shift Hashing | Partitions key and sums parts |
| **2f** | [`2f_fold_boundary.c`](DS_Lab/Exp2_Searching_Hashing/2f_fold_boundary.c) | Fold Boundary Hashing | Reverses boundary segments before addition |
| **2g** | [`2g_linear_probe.c`](DS_Lab/Exp2_Searching_Hashing/2g_linear_probe.c) | Linear Probing Collision Resolution | Open addressing: $(h(k) + i) \bmod m$ |
| **2h** | [`2h_direct_hashing.c`](DS_Lab/Exp2_Searching_Hashing/2h_direct_hashing.c) | Direct Address Table | $1:1$ key-to-index mapping |
| **2i** | [`2i_subtraction_hashing.c`](DS_Lab/Exp2_Searching_Hashing/2i_subtraction_hashing.c) | Subtraction Hashing | Offsets key by minimum index base |

---

### Experiment 3: Stacks & Applications
| Exp ID | Program | Description |
|:------:|:--------|:------------|
| **3a** | [`3a_stack_array.c`](DS_Lab/Exp3_Stacks/3a_stack_array.c) | Fixed-size array stack with push, pop, peek, overflow/underflow handling |
| **3b** | [`3b_stack_linked_list.c`](DS_Lab/Exp3_Stacks/3b_stack_linked_list.c) | Dynamic stack backed by singly linked list |
| **3c** | [`3c_postfix_evaluation.c`](DS_Lab/Exp3_Stacks/3c_postfix_evaluation.c) | Postfix arithmetic expression evaluation using operand stack |
| **3d** | [`3d_balanced_parenthesis.c`](DS_Lab/Exp3_Stacks/3d_balanced_parenthesis.c) | Balanced brackets validator for `()`, `{}`, and `[]` |
| **3e** | [`3e_infix_to_postfix.c`](DS_Lab/Exp3_Stacks/3e_infix_to_postfix.c) | Infix to postfix conversion via Shunting-Yard operator precedence |

---

### Experiment 4: Queues
| Exp ID | Program | Description |
|:------:|:--------|:------------|
| **4a** | [`4a_queue_linked_list.c`](DS_Lab/Exp4_Queues/4a_queue_linked_list.c) | Dynamic FIFO queue with front and rear pointers |
| **4b** | [`4b_circular_queue.c`](DS_Lab/Exp4_Queues/4b_circular_queue.c) | Fixed array circular queue using modulo arithmetic |
| **4c** | [`4c_priority_queue.c`](DS_Lab/Exp4_Queues/4c_priority_queue.c) | Ascending priority queue ordered by priority value |
| **4d** | [`4d_deque.c`](DS_Lab/Exp4_Queues/4d_deque.c) | Double-Ended Queue (insert/delete at both front and rear) |

---

### Experiment 5: Linked Lists
| Exp ID | Program | Description |
|:------:|:--------|:------------|
| **5a** | [`5a_singly_linked_list.c`](DS_Lab/Exp5_LinkedLists/5a_singly_linked_list.c) | Singly linked list (insert, delete, search, display) |
| **5b** | [`5b_circular_linked_list.c`](DS_Lab/Exp5_LinkedLists/5b_circular_linked_list.c) | Circular singly linked list with last-node loop |
| **5c** | [`5c_doubly_linked_list.c`](DS_Lab/Exp5_LinkedLists/5c_doubly_linked_list.c) | Doubly linked list with forward & backward traversals |
| **5d** | [`5d_polynomial_addition.c`](DS_Lab/Exp5_LinkedLists/5d_polynomial_addition.c) | Symbolic polynomial addition using node `(coeff, exp)` |
| **5e** | [`5e_array_vs_linked_list.c`](DS_Lab/Exp5_LinkedLists/5e_array_vs_linked_list.c) | Direct benchmark comparing insertion & traversal trade-offs |

---

### Experiment 6: Trees & Heaps
| Exp ID | Program | Description |
|:------:|:--------|:------------|
| **6a** | [`6a_bst.c`](DS_Lab/Exp6_Trees/6a_bst.c) | Binary Search Tree (Insert, Inorder, Preorder, Postorder, Search) |
| **6b** | [`6b_max_heap.c`](DS_Lab/Exp6_Trees/6b_max_heap.c) | Max-Heap implementation with `heapifyUp` and `extractMax` |
| **6c** | [`6c_min_heap.c`](DS_Lab/Exp6_Trees/6c_min_heap.c) | Min-Heap implementation with `heapifyUp` and `extractMin` |
| **6d** | [`6d_expression_tree.c`](DS_Lab/Exp6_Trees/6d_expression_tree.c) | Constructs binary expression tree from postfix & evaluates |
| **6e** | [`6e_heapsort.c`](DS_Lab/Exp6_Trees/6e_heapsort.c) | In-place Heap Sort using `maxHeapify` ($O(n \log n)$) |

---

### Experiment 7: Graphs
| Exp ID | Program | Description |
|:------:|:--------|:------------|
| **7a** | [`7a_adjacency_matrix.c`](DS_Lab/Exp7_Graphs/7a_adjacency_matrix.c) | Graph representation via 2D Adjacency Matrix |
| **7b** | [`7b_bfs.c`](DS_Lab/Exp7_Graphs/7b_bfs.c) | Breadth-First Search (BFS) graph traversal using queue |
| **7c** | [`7c_kruskal_mst.c`](DS_Lab/Exp7_Graphs/7c_kruskal_mst.c) | Minimum Spanning Tree (MST) using Kruskal's algorithm + Disjoint Set Union |
| **7d** | [`7d_dijkstra.c`](DS_Lab/Exp7_Graphs/7d_dijkstra.c) | Single-Source Shortest Path (SSSP) via Dijkstra's algorithm |

---

## 🚀 How to Build & Run

### 1. Using the Central Makefile (Recommended)

From the `DS_Lab/` directory:

```bash
cd DS_Lab

# Compile all 38 experiments at once
make all

# Run any specific experiment (e.g. 1a, 3e, 7c)
make run-1a
make run-3e
make run-7c

# Run ALL 38 experiments and update logs in outputs/
make run-all

# Remove compiled binaries
make clean
```

### 2. Running in VS Code
- **Compile open file:** Open any `.c` file and press `Ctrl+Shift+B` (or `Cmd+Shift+B` on macOS).
- **Debug open file:** Press `F5` to start debugging with pre-configured breakpoints and variable inspection.

### 3. Manual Compilation with GCC

```bash
# Example: Compile and run Quick Sort
gcc -Wall -Wextra -std=c11 DS_Lab/Exp1_Sorting/1f_quick_sort.c -o quick_sort
./quick_sort
```

---

## 📊 Sample Execution Outputs

Sample outputs for all 38 programs are automatically captured and saved in the [`DS_Lab/outputs/`](DS_Lab/outputs/) directory.

| Experiment | Target | Key Verified Output |
|:-----------|:-------|:--------------------|
| **1a–1f** | Sorting | `3 11 12 22 25 45 56 64 78 90` |
| **2d** | Digit Extraction | `379452 -> 395` |
| **2g** | Linear Probe | `[3]=23 [4]=43 [5]=13 [6]=33 [7]=27 [8]=55` |
| **3c** | Postfix Eval | `Result = -4` |
| **3e** | Infix → Postfix | `ABC*+DE/F+G*-` |
| **5d** | Poly Add | `5x^4 + 3x^3 + 7x^2 + 7` |
| **6a** | BST Preorder | `50 30 20 10 40 70 60 80` |
| **7c** | Kruskal MST | Total MST Weight = `11` |
| **7d** | Dijkstra | Shortest path distances from source node `0` |

---

## 📜 License & Academic Integrity

This project is created for academic coursework and reference under the BCS-351 Data Structure Lab syllabus.
All source files include headers referencing student and institutional details.
