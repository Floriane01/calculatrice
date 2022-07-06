// Programmation impérative: le code est exécuté ligne après ligne

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operateur; // ''
    float op1, op2; // 0.0
    float resultat; // 0.0

    printf("Veuillez saisir votre operation avec 2 operandes et un operateur parmis (+,-,*,/)\n");

    // 9 + 2
    // 5 * 3
    scanf("%f %c %f", &op1, &operateur, &op2);

    // TODO: arrêter le programme si l'utilisateur n'appuie pas sur le bon opérateur
    if (operateur != '+' && operateur != '-' && operateur != '*' && operateur != '/')
    {
        printf("Veuillez sélectionner un opérateur entre le +, -, * et /\n");
        return EXIT_FAILURE;
    }

    // printf("Veuillez saisir le premier opérande: ");
    // scanf("%f", &op1);
    // printf("Veuillez saisir le second opérande: ");
    // scanf("%f", &op2);
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
    }

    printf("le résultat de votre opération est: %.2f\n", resultat);
    return EXIT_SUCCESS;
}