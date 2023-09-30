# Binary Trees

This project contains various functions for working with binary trees in C.

## Usage

To use the binary tree functions, you can follow these steps:

1. Compile the source code using the following command: `gcc -Wall -Werror -Wextra -pedantic *.c -o binary_trees`
2. Include the `binary_trees.h` header file in your C code.
3. Use the binary tree functions in your C code.

## Files

The following files are included in this project:

* `0-binary_tree_node.c`: Creates a new binary tree node.
* `1-binary_tree_insert_left.c`: Inserts a new node as the left-child of a given node.
* `2-binary_tree_insert_right.c`: Inserts a new node as the right-child of a given node.
* `3-binary_tree_delete.c`: Deletes an entire binary tree.
* `4-binary_tree_is_leaf.c`: Checks if a given node is a leaf.
* `5-binary_tree_is_root.c`: Checks if a given node is a root.
* `6-binary_tree_preorder.c`: Traverses a binary tree in pre-order.
* `7-binary_tree_inorder.c`: Traverses a binary tree in-order.
* `8-binary_tree_postorder.c`: Traverses a binary tree in post-order.
* `9-binary_tree_height.c`: Measures the height of a binary tree.
* `10-binary_tree_depth.c`: Measures the depth of a node in a binary tree.
* `11-binary_tree_size.c`: Measures the size of a binary tree.
* `12-binary_tree_leaves.c`: Counts the leaves in a binary tree.
* `13-binary_tree_nodes.c`: Counts the nodes with at least 1 child in a binary tree.
* `14-binary_tree_balance.c`: Measures the balance factor of a binary tree.
* `15-binary_tree_is_full.c`: Checks if a binary tree is full.
* `16-binary_tree_is_perfect.c`: Checks if a binary tree is perfect.
* `17-binary_tree_sibling.c`: Finds the sibling of a node in a binary tree.
* `18-binary_tree_uncle.c`: Finds the uncle of a node in a binary tree.
* `binary_tree_print.c`: Provides a function for printing a binary tree.
* `binary_trees.h`: Contains function prototypes and struct definitions used by the binary tree functions.
* `README.md`: This file.

## Examples

Here are some examples of how to use the binary tree functions:

```
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);
    binary_tree_t *left = binary_tree_insert_left(root, 12);
    binary_tree_t *right = binary_tree_insert_right(root, 402);

    binary_tree_insert_left(left, 6);
    binary_tree_insert_right(left, 56);
    binary_tree_insert_left(right, 256);
    binary_tree_insert_right(right, 512);

    binary_tree_print(root);

    return (0);
}

This code creates a binary tree and prints it to the console:

       .-------(098)-------.
    .--(012)--.         .--(402)--.
 (006)     (056)     (256)     (512)
```
## Authors 
GuilleP2018 - JRMC-PR
