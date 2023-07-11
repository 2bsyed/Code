#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int isExternal(struct TreeNode* node) {
    return (node->left == NULL && node->right == NULL);
}

int isInternal(struct TreeNode* node) {
    return (node->left != NULL || node->right != NULL);
}

struct TreeNode* findSibling(struct TreeNode* root, int target) {
    if (root == NULL || root->left == NULL || root->right == NULL) {
        return NULL;
    }

    if (root->left->val == target) {
        return root->right;
    }

    if (root->right->val == target) {
        return root->left;
    }

    struct TreeNode* sibling = findSibling(root->left, target);
    if (sibling == NULL) {
        sibling = findSibling(root->right, target);
    }

    return sibling;
}

int isAncestor(struct TreeNode* root, int target) {
    if (root == NULL) {
        return 0;
    }

    if (root->val == target) {
        return 1;
    }

    return (isAncestor(root->left, target) || isAncestor(root->right, target));
}

int isDescendant(struct TreeNode* root, struct TreeNode* target) {
    if (root == NULL) {
        return 0;
    }

    if (root == target) {
        return 1;
    }

    return (isDescendant(root->left, target) || isDescendant(root->right, target));
}

int countNodesInGeneration(struct TreeNode* root, int generation) {
    if (root == NULL) {
        return 0;
    }

    if (generation == 0) {
        return 1;
    }

    return countNodesInGeneration(root->left, generation - 1) + countNodesInGeneration(root->right, generation - 1);
}

int getLevel(struct TreeNode* root, struct TreeNode* node, int level) {
    if (root == NULL) {
        return -1;
    }

    if (root == node) {
        return level;
    }

    int leftLevel = getLevel(root->left, node, level + 1);
    if (leftLevel != -1) {
        return leftLevel;
    }

    return getLevel(root->right, node, level + 1);
}

int getHeight(struct TreeNode* root) {
    if (root == NULL) {
        return -1;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}

int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("External Nodes: ");
    if (isExternal(root->left->left));
        // External Nodes
    printf("External Nodes: ");
    if (isExternal(root->left->left))
        printf("%d ", root->left->left->val);
    if (isExternal(root->left->right))
        printf("%d ", root->left->right->val);
    if (isExternal(root->right->left))
        printf("%d ", root->right->left->val);
    if (isExternal(root->right->right))
        printf("%d ", root->right->right->val);
    printf("\n");

    // Internal Nodes
    printf("Internal Nodes: ");
    if (isInternal(root))
        printf("%d ", root->val);
    if (isInternal(root->left))
        printf("%d ", root->left->val);
    if (isInternal(root->right))
        printf("%d ", root->right->val);
    printf("\n");

    // Siblings
    struct TreeNode* sibling = findSibling(root, 5);
    if (sibling != NULL)
        printf("Sibling of 5: %d\n", sibling->val);
    else
        printf("No sibling found for 5\n");

    // Ancestors
    printf("Ancestors of 5: ");
    if (isAncestor(root, 5))
        printf("%d ", root->val);
    if (isAncestor(root->left, 5))
        printf("%d ", root->left->val);
    printf("\n");

    // Descendants
    printf("Descendants of 2: ");
    if (isDescendant(root, root->left->left))
        printf("%d ", root->left->left->val);
    if (isDescendant(root, root->left->right))
        printf("%d ", root->left->right->val);
    printf("\n");

    // Nodes in a Generation
    int generation = 2;
    int count = countNodesInGeneration(root, generation);
    printf("Number of nodes in Generation %d: %d\n", generation, count);

    // Level of each node
    printf("Level of each node:\n");
    printf("Node: %d, Level: %d\n", root->val, getLevel(root, root, 0));
    printf("Node: %d, Level: %d\n", root->left->val, getLevel(root, root->left, 0));
    printf("Node: %d, Level: %d\n", root->right->val, getLevel(root, root->right, 0));

    // Height of the Tree
    int height = getHeight(root);
    printf("Height of the tree: %d\n", height);

    return 0;
}
