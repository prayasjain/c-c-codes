#include <bits/stdc++.h>
using namespace std;
struct trie
{
    long long int val;
    struct trie *left;
    struct trie *right;
};
struct trie *root;
int maxsize = 32;
struct trie *initialise()
{
    struct trie *node;
    node = new trie();
    node->val = -1;
    node->left = NULL;
    node->right = NULL;
    return node;
};
void insert(long long int n)
{
    struct trie *node;
    node = root;
    int i;

    for(i = maxsize - 1; i >= 0; i--) {
        if(n&(1 << i)) {
            if(node->right == NULL) {
                node->right = initialise();
            }
            node = node->right;
        }
        else {
            if(node->left == NULL) {
                node->left = initialise();
            }
            node = node->left;
        }
    }
    node->val = n;
}
int query(long long int n)
{
    int i;
    struct trie *node;
    node = root;

    for(i = maxsize - 1; i >= 0; i--) {
        if(n & (1 << i)) {
            if(node->left != NULL) {
                node = node->left;
            }
            else {
                node = node->right;
            }
        }
        else {
            if(node->right != NULL) {
                node = node->right;
            }
            else {
                node = node->left;
            }
        }
    }

    return node->val;
}



int main()
{
    long long int n;
    long long int a[100005];
    int i;
    long long int y;
    long long int x;
    long long int t;
    long long int max;
    int count;


    scanf("%lld",&t);
    while(t--) {
        root = initialise();
    cin>>n;
    max = 0;
    count = 0;
    for(i = 0; i < n; i++) {
        cin>>a[i];

    }



    insert(0);

    x = 0;

    for(i = 0; i < n; i++) {
        x = x ^ a[i];
        insert(x);
        y = query(x);
        y = y ^ x;
        if(y > max) {
            max = y;
        }
    }
    cout<<max<<endl;
    }


}
