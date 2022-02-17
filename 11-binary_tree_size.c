#include "binary_trees.h"
/**
 * @binary_tree_size - Measures the size of a binary tree
 * 
 * @tree: Pointer to tree
 * @Return: size
 */
size_t binary_tree_size2(const binary_tree_t *tree)
{
    
    int l = 0;
    int r = 0;

    if (tree == NULL)
    {
        return (0);
    }
    
    if (tree->left != NULL)
    {
        l = binary_tree_size2(tree->left);
        l++;
    }
    
    if (tree->right != NULL)
    {
        r = binary_tree_size2(tree->right);
        r++;
    }
    
return (l + r);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    return (binary_tree_size2(tree) + 1);
}
