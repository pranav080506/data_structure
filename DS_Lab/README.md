# DS Lab – BCS-351 | Data Structure Lab

**Student:** Pranav Gupta | **Roll No:** 2501921520279 | **Branch:** CSE-AI | **Sem:** III  
**Submitted to:** Mohit Kumar | **College:** GL Bajaj Institute of Technology and Management

---

## Folder Structure

```
DS_Lab/
├── Exp1_Sorting/               1a – 1f  (Bubble, Insertion, Selection, Shell, Radix, Quick)
├── Exp2_Searching_Hashing/     2a – 2i  (Linear/Binary Search, 7 Hashing methods)
├── Exp3_Stacks/                3a – 3e  (Array stack, LL stack, Postfix, Parens, Infix→Postfix)
├── Exp4_Queues/                4a – 4d  (LL Queue, Circular, Priority, Deque)
├── Exp5_LinkedLists/           5a – 5e  (Singly, Circular, Doubly, Poly Add, Comparison)
├── Exp6_Trees/                 6a – 6e  (BST, Max Heap, Min Heap, Expression Tree, Heapsort)
├── Exp7_Graphs/                7a – 7d  (Adj Matrix, BFS, Kruskal MST, Dijkstra)
├── outputs/                    One output .txt per program
├── .vscode/tasks.json          Build current file  (Ctrl+Shift+B)
├── .vscode/launch.json         Debug current file  (F5)
├── Makefile
└── README.md
```

---

## How to Compile & Run

### Option 1 — VS Code (recommended)

| Action | Shortcut |
|--------|----------|
| **Build** current `.c` file | `Ctrl+Shift+B` |
| **Debug** current `.c` file | `F5` |
| **Build & Run** (task) | `Ctrl+Shift+P` → *Run Task* → *Build and Run Current File* |

> **Tip:** Open any `.c` file, press `Ctrl+Shift+B` to compile it.  
> The binary is placed in the same folder. Press `F5` to launch the debugger.

### Option 2 — Makefile (terminal)

```bash
# Compile all 38 programs
make all

# Run a single program and save output to outputs/
make run-1a      # Bubble sort
make run-3c      # Postfix evaluation
make run-7c      # Kruskal MST

# Run ALL programs and capture outputs
make run-all

# Remove all compiled binaries
make clean
```

### Option 3 — Manual gcc

```bash
gcc -Wall -Wextra -g -std=c11 Exp1_Sorting/1a_bubble_sort.c \
    -o Exp1_Sorting/1a_bubble_sort
./Exp1_Sorting/1a_bubble_sort
```

---

## Expected Key Results

| Program | Verified Result |
|---------|----------------|
| 1a–1f (all sorts) | `3 11 12 22 25 45 56 64 78 90` |
| 2d Digit extraction | `379452 → 395` |
| 2e Fold shift       | `123456789 → 1368` |
| 2f Fold boundary    | `123456789 → 1764` |
| 2g Linear probe table | `[3]=23 [4]=43 [5]=13 [6]=33 [7]=27 [8]=55` |
| 3c Postfix eval     | `result = -4` |
| 3e Infix→Postfix    | `ABC*+DE/F+G*-` |
| 6a BST preorder     | `50 30 20 10 40 70 60 80` |
| 7b BFS from 0       | `0 1 5 2 4 3` |
| 7c Kruskal MST weight | `11` |

---

## Quick Experiment Index

| Exp | File | Topic |
|-----|------|-------|
| 1a | `Exp1_Sorting/1a_bubble_sort.c`      | Bubble Sort |
| 1b | `Exp1_Sorting/1b_insertion_sort.c`   | Insertion Sort |
| 1c | `Exp1_Sorting/1c_selection_sort.c`   | Selection Sort |
| 1d | `Exp1_Sorting/1d_shell_sort.c`       | Shell Sort |
| 1e | `Exp1_Sorting/1e_radix_sort.c`       | Radix Sort |
| 1f | `Exp1_Sorting/1f_quick_sort.c`       | Quick Sort |
| 2a | `Exp2_Searching_Hashing/2a_linear_search.c`      | Linear Search |
| 2b | `Exp2_Searching_Hashing/2b_binary_search.c`      | Binary Search |
| 2c | `Exp2_Searching_Hashing/2c_modulo_division.c`    | Modulo Division Hash |
| 2d | `Exp2_Searching_Hashing/2d_digit_extraction.c`   | Digit Extraction Hash |
| 2e | `Exp2_Searching_Hashing/2e_fold_shift.c`         | Fold Shift Hash |
| 2f | `Exp2_Searching_Hashing/2f_fold_boundary.c`      | Fold Boundary Hash |
| 2g | `Exp2_Searching_Hashing/2g_linear_probe.c`       | Linear Probing |
| 2h | `Exp2_Searching_Hashing/2h_direct_hashing.c`     | Direct Hashing |
| 2i | `Exp2_Searching_Hashing/2i_subtraction_hashing.c`| Subtraction Hashing |
| 3a | `Exp3_Stacks/3a_stack_array.c`            | Stack (Array) |
| 3b | `Exp3_Stacks/3b_stack_linked_list.c`      | Stack (Linked List) |
| 3c | `Exp3_Stacks/3c_postfix_evaluation.c`     | Postfix Evaluation |
| 3d | `Exp3_Stacks/3d_balanced_parenthesis.c`   | Balanced Parenthesis |
| 3e | `Exp3_Stacks/3e_infix_to_postfix.c`       | Infix to Postfix |
| 4a | `Exp4_Queues/4a_queue_linked_list.c`      | Queue (Linked List) |
| 4b | `Exp4_Queues/4b_circular_queue.c`         | Circular Queue |
| 4c | `Exp4_Queues/4c_priority_queue.c`         | Priority Queue |
| 4d | `Exp4_Queues/4d_deque.c`                  | Deque |
| 5a | `Exp5_LinkedLists/5a_singly_linked_list.c`   | Singly Linked List |
| 5b | `Exp5_LinkedLists/5b_circular_linked_list.c` | Circular Linked List |
| 5c | `Exp5_LinkedLists/5c_doubly_linked_list.c`   | Doubly Linked List |
| 5d | `Exp5_LinkedLists/5d_polynomial_addition.c`  | Polynomial Addition |
| 5e | `Exp5_LinkedLists/5e_array_vs_linked_list.c` | Array vs Linked List |
| 6a | `Exp6_Trees/6a_bst.c`            | Binary Search Tree |
| 6b | `Exp6_Trees/6b_max_heap.c`       | Max Heap |
| 6c | `Exp6_Trees/6c_min_heap.c`       | Min Heap |
| 6d | `Exp6_Trees/6d_expression_tree.c`| Expression Tree |
| 6e | `Exp6_Trees/6e_heapsort.c`       | Heap Sort |
| 7a | `Exp7_Graphs/7a_adjacency_matrix.c`| Adjacency Matrix |
| 7b | `Exp7_Graphs/7b_bfs.c`            | BFS |
| 7c | `Exp7_Graphs/7c_kruskal_mst.c`    | Kruskal's MST |
| 7d | `Exp7_Graphs/7d_dijkstra.c`       | Dijkstra's SSSP |
