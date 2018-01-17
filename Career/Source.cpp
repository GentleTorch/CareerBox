#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;


struct node
{
	int data;
	node *left, *right;

	node(int a) :data(a) { left = NULL, right = NULL; }
};

void BFS(node *root)
{
	queue<node*>que;
	que.push(root);
	node *tmp;
	
	while (!que.empty())
	{
		tmp = que.front();
		cout << tmp->data << " ";
		if (tmp->left != NULL)
			que.push(tmp->left);
		if (tmp->right != NULL)
			que.push(tmp->right);

		que.pop();
	}

	cout << endl;
}

void DFS(node *root)
{
	if (root == NULL)return;
	cout << root->data << " ";
	DFS(root->left);
	DFS(root->right);
}

int main()
{
	node *root = new node(1);
	int i;
	root->left = new node(3);
	root->right = new node(5);
	root->left->right = new node(7);
	root->right->left = new node(9);

	BFS(root);
	DFS(root);
	return 0;

}

