#include <stdio.h>

int main()
{
    char operateur; // ''
    float op1, op2; // 0.0
    float resultat; // 0.0

    printf("Quel type d'opération vous souhaitez faire\?\?\?\?(+,-,*,/)\n");
    scanf("%c", &operateur);
    // TODO: arrêter le programme si l'utilisateur n'appuie pas sur le bon opérateur

    printf("Veuillez saisir le premier opérande: ");
    scanf("%f", &op1);
    printf("Veuillez saisir le second opérande: ");
    scanf("%f", &op2);
    switch (operateur)
    {
    case '+':
        resultat = op1 + op2;
        break;
    case '-':
        resultat = op1 - op2;
        break;
    case '*':
        resultat = op1 * op2;
        break;
    case '/':
        resultat = op1 / op2;
        break;
    default:
        printf("VEUILLEZ RELIRE L'INSTRUCTION S'IL VOUS PLAIT!!!\n");
        // TODO: Il faut que le programme s'arrête à ce niveau puisqu'il 
        // y a une erreur au niveau de l'opérateur
    }
    printf("le résultat de votre opération est: %.2f\n", resultat);
    return 0;
}