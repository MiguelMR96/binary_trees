#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to be set in the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    if (!node)
        return (NULL);
    
    node->n = value;
    node->parent = parent;
    node->right = NULL;
    node->left = NULL;

    return (node);
}