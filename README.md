# linked list with C programming language

## Définition d'un nœud de liste chaînée simple en C

```c
struct node {
    int data;
    struct node *link;
};
int data : Stocke une valeur représentant les données du nœud.
struct node *link : Pointeur vers le prochain nœud de la liste chaînée. Si ce nœud est le dernier, le pointeur sera NULL.