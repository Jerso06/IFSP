#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;

    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value){
    Node* node = (Node*) malloc(sizeof(Node));

    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* inserir(Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }

    if(value < root->data){
        root->left = inserir(root->left, value);
    }else{
        root->right = inserir(root->right, value);
    }

    return root;
}

void printInOrder(Node* root) {
    if (root != NULL) {
        printInOrder(root->left);
        printf("%d ", root->data);
        printInOrder(root->right);
    }
}

int main()
{
    Node* root = NULL; // Árvore começa vazia

    // Populando a árvore usando a função insert
    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(valores) / sizeof(valores[0]);

    printf("Populando a arvore com os valores: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
        root = inserir(root, valores[i]);
    }

    // Exibindo os dados ordenados
    printf("\n\nImpressao em-ordem (valores ordenados): ");
    printInOrder(root);
    printf("\n");

    return 0;
}
