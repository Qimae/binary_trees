#include "binary_trees.h"
/**
 * @binary_tree_depth - Measures the depth of a node in binary tree
 * 
 * @tree: Pointer to the node to measure the depth
 * @Return: Height
 */
size_t binary_tree_depth2(const binary_tree_t *tree)
{
    
    size_t l = 0;

    if (tree == NULL)
    {
        return (0);
    }
    
    if (tree->parent != NULL)
    {
        l += binary_tree_depth2(tree->parent);
    }
    return (l + 1);
}
/**
 *binary_tree_depth - measures the depth of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    return (binary_tree_depth2(tree) - 1);
}
