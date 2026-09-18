#include <stdio.h>

int main()
{
    /* =========================================================
       VARIABLES CONTENANT LES VALEURS A AFFICHER
       ========================================================= */

    /* Anemometre */
    int vitesse = 245;

    /* Horizon artificiel */
    int assiette = 5;
    int roulis = 15;

    /* Altimetre */
    int alt = 35000;
    int ft = 200 ;

    /* Variometre */
    int vario = 500;

    /* Indicateur directionnel */
    int cap = 72;

    int deg = 0;

    /* =========================================================
       TABLEAU DE BORD
       ========================================================= */

    printf("===========================================================================\n");
    printf("|                         TABLEAU DE BORD                                |\n");
    printf("===========================================================================\n");

    printf("|    ANEMOMETRE     |     HORIZON ARTIFICIEL     |      ALTIMETRE        |\n");
    printf("|                   |                            |                       |\n");

    printf("|       %5d       |           30 deg           |       %2d   %2d       |\n",vitesse+55,ft+100,ft+120);
    printf("|        |          |        \\        /          |          |            |\n");

    printf("|   %5d--+        |         \\      /           |       %2d  +---       |\n",vitesse+5, ft+80);

    printf("|        |          |      ------+------         |          |            |\n");
    printf("| %5d ---+        |            +               |       %5d           |\n",vitesse-45, ft+60) ;

    printf("|        |          |           /|\\              |          |            |\n");

    printf("| %5d ---+        |        --- + ---           |       %2d +---        |\n",vitesse-95, ft+40);

    printf("|        |          |            |               |          |            |\n");

    printf("| %5d ---+        |         ASSIETTE           |           %2d         |\n",vitesse-145, ft+20);
    printf("|        |          |          %+d deg            |          |            |\n",
           assiette);

    printf("|  %5d ---+       |          ROULIS            |       VARIOMETRE      |\n", vitesse-195);

    printf("|        |          |          %+d deg           |        %+d ft/min    |\n",
           roulis, vario);

    printf("|     %5d         |                            |                       |\n",vitesse-245) ;

    printf("|                   |                            |                       |\n");
    printf("===========================================================================\n");

    /* =========================================================
       INDICATEUR DIRECTIONNEL
       ========================================================= */

    printf("|                    INDICATEUR DIRECTIONNEL                              |\n");
    printf("|                                                                         |\n");
    printf("|                 N                          deg                          |\n");
    printf("|                 |                           |                           |\n");
    printf("|           NO ---+--- NE                     %2d                          |\n", deg+30);
    printf("|                 |                           |                           |\n");
    printf("|            O ---+--- E                      %2d                          |\n", deg+20);
    printf("|                 |                           |                           |\n");
    printf("|           SO ---+--- SE                     %2d                          |\n", deg+10);
    printf("|                 |                           |                           |\n");
    printf("|                 S                         %2d deg                        |\n", deg+0 );
    printf("|                                                                         |\n");
    printf("|                         CAP : %03d deg -                                 |\n",cap+0);
    printf("===========================================================================\n");

    return 0;
}

