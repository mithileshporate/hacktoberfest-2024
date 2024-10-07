struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Returns "maxDepth" which is the number of nodes 
// along the longest path from the root node down 
// to the farthest leaf node.
int maxDepth(Node *node) {
    if (node == nullptr)
        return 0;

    // compute the depth of left and right subtrees
    int lDepth = maxDepth(node->left);
    int rDepth = maxDepth(node->right);

    return max(lDepth, rDepth) + 1;
}
