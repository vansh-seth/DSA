
#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};
struct node *new(int item) {
  struct node *tmp = (struct node *)malloc(sizeof(struct node));
  tmp->key = item;
  tmp->left = tmp->right = NULL;
  return tmp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
  }
struct node *insert(struct node *node, int key) {
  if (node == NULL)
  return new(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}
struct node *min(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}
struct node *delete(struct node *root, int key) {
  if (root == NULL)
  return root;
  if (key < root->key)
    root->left = delete(root->left, key);
  else if (key > root->key)
    root->right = delete(root->right, key);

  else {
    if (root->left == NULL) {
      struct node *tmp = root->right;
      free(root);
      return tmp;
    } else if (root->right == NULL) {
      struct node *tmp = root->left;
      free(root);
      return tmp;
    }
    struct node *tmp = min(root->right);
    root->key = tmp->key;
    root->right = delete(root->right, tmp->key);
  }
  return root;
}
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: ");
  inorder(root);
  printf("\nAfter deleting 10\n");
  root = delete(root, 10);
  printf("Inorder traversal: ");
  inorder(root);
}
