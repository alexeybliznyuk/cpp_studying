#include <iostream>

//using namespace std;
class treeNode {
public:
	int val;
	treeNode* parent;
	treeNode* left;
	treeNode* right;
	/*treeNode() {
		int val = 0;
		treeNode* parent = nullptr;
		treeNode* left = nullptr;
		treeNode* right = nullptr;

	}*/
	/*treeNode(int data) {
		int val = data;
		treeNode* parent = nullptr;
		treeNode* left = nullptr;
		treeNode* right = nullptr;

	}*/
	treeNode(int data, treeNode* par) {
		val = data;
		parent = par;
		left = nullptr;
		right = nullptr;

	}
};

void depth_first_search(treeNode* root) {
	/*if (root != nullptr) {
		if (root->val == target) {
			return true;
		}

		else {
			deep_first_search(root->left, target);
			deep_first_search(root->right, target);
		}
	
	}*/

	if (root == nullptr) {
		return;
	}
	std::cout << root->val << "\t";
	depth_first_search(root->left);
	depth_first_search(root->right);
	 

}




int main()
{	
	treeNode* rootie = new treeNode(5, nullptr);
	treeNode* onezero = new treeNode(3, rootie);
	treeNode* twozero = new treeNode(2, onezero);
	treeNode* oneone = new treeNode(4, onezero);
	treeNode* zeroone = new treeNode(7, rootie);
	treeNode* oneone_s = new treeNode(6, zeroone);


	rootie->left = onezero;
	rootie->right = zeroone;
	onezero->left = twozero;
	onezero->right = oneone;
	zeroone->left = oneone_s;

	depth_first_search(rootie);


	return 0;


}
