#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: input tree
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (!(tree->right) && !(tree->left))
return (1);

return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
