CC      = gcc
CFLAGS  = -Wall -Wextra -g -std=c11

EXP1 = Exp1_Sorting
EXP2 = Exp2_Searching_Hashing
EXP3 = Exp3_Stacks
EXP4 = Exp4_Queues
EXP5 = Exp5_LinkedLists
EXP6 = Exp6_Trees
EXP7 = Exp7_Graphs
OUT  = outputs

# ─── All targets ────────────────────────────────────────────────────────────────
BINS = \
  $(EXP1)/1a_bubble_sort     $(EXP1)/1b_insertion_sort \
  $(EXP1)/1c_selection_sort  $(EXP1)/1d_shell_sort      \
  $(EXP1)/1e_radix_sort      $(EXP1)/1f_quick_sort      \
  $(EXP2)/2a_linear_search   $(EXP2)/2b_binary_search   \
  $(EXP2)/2c_modulo_division $(EXP2)/2d_digit_extraction \
  $(EXP2)/2e_fold_shift      $(EXP2)/2f_fold_boundary   \
  $(EXP2)/2g_linear_probe    $(EXP2)/2h_direct_hashing  \
  $(EXP2)/2i_subtraction_hashing                        \
  $(EXP3)/3a_stack_array     $(EXP3)/3b_stack_linked_list \
  $(EXP3)/3c_postfix_evaluation $(EXP3)/3d_balanced_parenthesis \
  $(EXP3)/3e_infix_to_postfix                           \
  $(EXP4)/4a_queue_linked_list $(EXP4)/4b_circular_queue \
  $(EXP4)/4c_priority_queue  $(EXP4)/4d_deque           \
  $(EXP5)/5a_singly_linked_list $(EXP5)/5b_circular_linked_list \
  $(EXP5)/5c_doubly_linked_list $(EXP5)/5d_polynomial_addition \
  $(EXP5)/5e_array_vs_linked_list                       \
  $(EXP6)/6a_bst             $(EXP6)/6b_max_heap        \
  $(EXP6)/6c_min_heap        $(EXP6)/6d_expression_tree \
  $(EXP6)/6e_heapsort                                   \
  $(EXP7)/7a_adjacency_matrix $(EXP7)/7b_bfs            \
  $(EXP7)/7c_kruskal_mst     $(EXP7)/7d_dijkstra

.PHONY: all clean run-all \
  run-1a run-1b run-1c run-1d run-1e run-1f \
  run-2a run-2b run-2c run-2d run-2e run-2f \
  run-2g run-2h run-2i \
  run-3a run-3b run-3c run-3d run-3e \
  run-4a run-4b run-4c run-4d \
  run-5a run-5b run-5c run-5d run-5e \
  run-6a run-6b run-6c run-6d run-6e \
  run-7a run-7b run-7c run-7d

all: $(BINS)

# Generic rule: compile .c -> binary in same directory
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# ─── Individual run targets ──────────────────────────────────────────────────────
run-1a: $(EXP1)/1a_bubble_sort
	@./$(EXP1)/1a_bubble_sort | tee $(OUT)/1a_output.txt

run-1b: $(EXP1)/1b_insertion_sort
	@./$(EXP1)/1b_insertion_sort | tee $(OUT)/1b_output.txt

run-1c: $(EXP1)/1c_selection_sort
	@./$(EXP1)/1c_selection_sort | tee $(OUT)/1c_output.txt

run-1d: $(EXP1)/1d_shell_sort
	@./$(EXP1)/1d_shell_sort | tee $(OUT)/1d_output.txt

run-1e: $(EXP1)/1e_radix_sort
	@./$(EXP1)/1e_radix_sort | tee $(OUT)/1e_output.txt

run-1f: $(EXP1)/1f_quick_sort
	@./$(EXP1)/1f_quick_sort | tee $(OUT)/1f_output.txt

run-2a: $(EXP2)/2a_linear_search
	@./$(EXP2)/2a_linear_search | tee $(OUT)/2a_output.txt

run-2b: $(EXP2)/2b_binary_search
	@./$(EXP2)/2b_binary_search | tee $(OUT)/2b_output.txt

run-2c: $(EXP2)/2c_modulo_division
	@./$(EXP2)/2c_modulo_division | tee $(OUT)/2c_output.txt

run-2d: $(EXP2)/2d_digit_extraction
	@./$(EXP2)/2d_digit_extraction | tee $(OUT)/2d_output.txt

run-2e: $(EXP2)/2e_fold_shift
	@./$(EXP2)/2e_fold_shift | tee $(OUT)/2e_output.txt

run-2f: $(EXP2)/2f_fold_boundary
	@./$(EXP2)/2f_fold_boundary | tee $(OUT)/2f_output.txt

run-2g: $(EXP2)/2g_linear_probe
	@./$(EXP2)/2g_linear_probe | tee $(OUT)/2g_output.txt

run-2h: $(EXP2)/2h_direct_hashing
	@./$(EXP2)/2h_direct_hashing | tee $(OUT)/2h_output.txt

run-2i: $(EXP2)/2i_subtraction_hashing
	@./$(EXP2)/2i_subtraction_hashing | tee $(OUT)/2i_output.txt

run-3a: $(EXP3)/3a_stack_array
	@./$(EXP3)/3a_stack_array | tee $(OUT)/3a_output.txt

run-3b: $(EXP3)/3b_stack_linked_list
	@./$(EXP3)/3b_stack_linked_list | tee $(OUT)/3b_output.txt

run-3c: $(EXP3)/3c_postfix_evaluation
	@./$(EXP3)/3c_postfix_evaluation | tee $(OUT)/3c_output.txt

run-3d: $(EXP3)/3d_balanced_parenthesis
	@./$(EXP3)/3d_balanced_parenthesis | tee $(OUT)/3d_output.txt

run-3e: $(EXP3)/3e_infix_to_postfix
	@./$(EXP3)/3e_infix_to_postfix | tee $(OUT)/3e_output.txt

run-4a: $(EXP4)/4a_queue_linked_list
	@./$(EXP4)/4a_queue_linked_list | tee $(OUT)/4a_output.txt

run-4b: $(EXP4)/4b_circular_queue
	@./$(EXP4)/4b_circular_queue | tee $(OUT)/4b_output.txt

run-4c: $(EXP4)/4c_priority_queue
	@./$(EXP4)/4c_priority_queue | tee $(OUT)/4c_output.txt

run-4d: $(EXP4)/4d_deque
	@./$(EXP4)/4d_deque | tee $(OUT)/4d_output.txt

run-5a: $(EXP5)/5a_singly_linked_list
	@./$(EXP5)/5a_singly_linked_list | tee $(OUT)/5a_output.txt

run-5b: $(EXP5)/5b_circular_linked_list
	@./$(EXP5)/5b_circular_linked_list | tee $(OUT)/5b_output.txt

run-5c: $(EXP5)/5c_doubly_linked_list
	@./$(EXP5)/5c_doubly_linked_list | tee $(OUT)/5c_output.txt

run-5d: $(EXP5)/5d_polynomial_addition
	@./$(EXP5)/5d_polynomial_addition | tee $(OUT)/5d_output.txt

run-5e: $(EXP5)/5e_array_vs_linked_list
	@./$(EXP5)/5e_array_vs_linked_list | tee $(OUT)/5e_output.txt

run-6a: $(EXP6)/6a_bst
	@./$(EXP6)/6a_bst | tee $(OUT)/6a_output.txt

run-6b: $(EXP6)/6b_max_heap
	@./$(EXP6)/6b_max_heap | tee $(OUT)/6b_output.txt

run-6c: $(EXP6)/6c_min_heap
	@./$(EXP6)/6c_min_heap | tee $(OUT)/6c_output.txt

run-6d: $(EXP6)/6d_expression_tree
	@./$(EXP6)/6d_expression_tree | tee $(OUT)/6d_output.txt

run-6e: $(EXP6)/6e_heapsort
	@./$(EXP6)/6e_heapsort | tee $(OUT)/6e_output.txt

run-7a: $(EXP7)/7a_adjacency_matrix
	@./$(EXP7)/7a_adjacency_matrix | tee $(OUT)/7a_output.txt

run-7b: $(EXP7)/7b_bfs
	@./$(EXP7)/7b_bfs | tee $(OUT)/7b_output.txt

run-7c: $(EXP7)/7c_kruskal_mst
	@./$(EXP7)/7c_kruskal_mst | tee $(OUT)/7c_output.txt

run-7d: $(EXP7)/7d_dijkstra
	@./$(EXP7)/7d_dijkstra | tee $(OUT)/7d_output.txt

run-all: all
	@for t in run-1a run-1b run-1c run-1d run-1e run-1f \
	           run-2a run-2b run-2c run-2d run-2e run-2f \
	           run-2g run-2h run-2i \
	           run-3a run-3b run-3c run-3d run-3e \
	           run-4a run-4b run-4c run-4d \
	           run-5a run-5b run-5c run-5d run-5e \
	           run-6a run-6b run-6c run-6d run-6e \
	           run-7a run-7b run-7c run-7d; do \
	    $(MAKE) $$t; \
	done

# ─── Clean all binaries ─────────────────────────────────────────────────────────
clean:
	@rm -f $(BINS)
	@echo "Cleaned all binaries."
