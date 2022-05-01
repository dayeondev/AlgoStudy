#include <iostream>
using namespace std;

typedef struct NODE{
  char data;
  struct NODE* left;
  struct NODE* right;
}node;


typedef struct TREE{
  struct NODE* root;
  
}tree;

void search(node* root, char data, char left_data, char right_data){
  if(root == NULL){
    // cout << "return called\n";
    return;
  }
  else if(root->data == data){
    if(left_data != '.'){
      node* tmp_l = (node*)malloc(sizeof(node));
      root->left = tmp_l;
      root->left->data = left_data;
    }
    if(right_data != '.'){
      node* tmp_r = (node*)malloc(sizeof(node));
      root->right = tmp_r;
      root->right->data = right_data;
    }
  }
  else{
    search(root->left, data, left_data, right_data);
    search(root->right, data, left_data, right_data);
  }

}

void add(tree* t, char data, char left_data, char right_data){
  if(t->root == NULL){
    node* tmp = (node*)malloc(sizeof(node));
    t->root = tmp;

    if(data != '.'){
      t->root->data = data;
    }
    if(left_data != '.'){
      node* tmp_l = (node*)malloc(sizeof(node));
      t->root->left = tmp_l;
      t->root->left->data = left_data;
    }
    if(right_data != '.'){
      node* tmp_r = (node*)malloc(sizeof(node));
      t->root->right = tmp_r;
      t->root->right->data = right_data;
    }
    
  }
  else search(t->root, data, left_data, right_data);

}



void preorder(node* root){
  cout << root->data; //루트 출력
  if(root->left!=NULL){ //좌측의 최하단까지 내려간다.
    preorder(root->left);
  }
  if(root->right!=NULL){ //좌측의 최하단이 NULL임이 밝혀지면 그 다음으로 오른쪽을 탐색
    preorder(root->right);
  }
}

void inorder(node* root){
  if(root->left!=NULL){
    inorder(root->left);
  }
  cout << root->data;
  if(root->right!=NULL){
    inorder(root->right);
  }
}

void postorder(node* root){
  if(root->left!=NULL){
    postorder(root->left);
  }
  if(root->right!=NULL){
    postorder(root->right);
  }
  cout << root->data;
}


int main(){
  // cin.tie(NULL);
  // ios_base::sync_with_stdio(false);
  
  int n;
  char a, b, c;
  
  tree* t = (tree*)malloc(sizeof(tree));


  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> a;
    cin >> b;
    cin >> c;
    add(t, a, b, c);
  }


  preorder(t->root);
  cout << '\n';
  inorder(t->root);
  cout << '\n';
  postorder(t->root);



  return 0;
}