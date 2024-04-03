#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int d = 0, Node* n = nullptr)
	{
		data = d;
		next = n;
	}
};


//==================================================================

Node* VectorTOLL(vector<int> a)
{
	Node* Head = new Node(a[0]);
	Node* temp = Head;

	for (int i = 1; i < a.size(); i++){
		temp->next = new Node(a[i]);
		temp = temp->next;
	}
	return Head;
}

//==================================================================
void  PrintLL(Node* Head)
{
	Node* temp = Head;
	while (temp)
	{
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << endl;
}

//==================================================================
void InputVector(vector<int> a)
{

	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}
}

//==================================================================
bool isPalindrome(Node* head)
{
	if (head->next == nullptr) return true;
	Node* temp = head;

	stack<int> st;
	while (temp)
	{
		if (st.top() == temp->data)
		{
			st.pop();
		}
		else{
			st.push(temp->data);
		}

		temp = temp->next;
	}

	return st.empty();
}
//==================================================================
int main()
{
	vector<int> a = { 1, 2, 3, 4, 5 };

	InputVector(a);
	Node* Head = VectorTOLL(a);
	PrintLL(Head);
	cout << "LeetCode  : " << isPalindrome(Head);
	cout << endl;
	return 0;
}
