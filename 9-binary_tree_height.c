#include "binary_trees.h"
/**
 * @binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to tree
 * @Return: Height
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
    
    size_t l = 0;
    size_t r = 0;

    if (tree == NULL)
    {
        return (0);
    }
    
    if (tree->left != NULL)
    {
        l += binary_tree_height2(tree->left);
    }
    
    if (tree->right != NULL)
    {
        r += binary_tree_height2(tree->right);
    }
    
    if (l > r)
    return (l + 1);
    return (r + 1);
}
/**
 *binary_tree_depth - measures the depth of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    return (binary_tree_height2(tree) - 1);
}
