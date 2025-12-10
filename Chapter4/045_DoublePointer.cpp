//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;   // 노드가 들고 있는 실제 값
//    Node* next; // 다음 노드의 주소 (없으면 nullptr)
//};
//
//void InsertHead(Node** head, int value) {
//    Node* newNode = new Node{ value, *head };
//
//    *head = newNode;  // head 자체가 변경됨!
//
//    cout << newNode->data << " " << newNode->next << endl;
//}
//
//int main() {
//    Node* head = nullptr;
//    InsertHead(&head, 10);
//    InsertHead(&head, 20);
//
//    
//}