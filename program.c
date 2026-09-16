#include <stdio.h>

int main()
{
    /* =========================================================
       VARIABLES CONTENANT LES VALEURS A AFFICHER
       ========================================================= */

    /* Anemometre */
    int vitesse = 245;
    char uniteVitesse[] = "kts";

    /* Horizon artificiel */
    int assiette = 5;
    int roulis = 15;

    /* Altimetre */
    int altitude = 35000;
    char uniteAltitude[] = "ft";

    /* Variometre */
    int vario = 500;

    /* Indicateur directionnel */
    int cap = 72;
    char direction[] = "ENE";


    /* =========================================================
       TABLEAU DE BORD
       ========================================================= */

    printf("===========================================================================\n");
    printf("|                         TABLEAU DE BORD                                |\n");
    printf("===========================================================================\n");

    printf("|    ANEMOMETRE     |     HORIZON ARTIFICIEL     |      ALTIMETRE        |\n");
    printf("|                   |                            |                       |\n");

    printf("|       300         |            30 deg          |       36     37       |\n");
    printf("|        |          |         \\        /         |          |            |\n");

    printf("|   250--+          |          \\      /          |       35  +---        |\n");

    printf("|        |          |     ------+------           |          |            |\n");
    printf("| 200 ---+          |           +                |       %5d %s        |\n",
           altitude, uniteAltitude);

    printf("|        |          |          /|\\               |          |            |\n");

    printf("| 150 ---+          |       --- + ---             |       34  +---        |\n");

    printf("|        |          |           |                |          |            |\n");

    printf("| 100 ---+          |        ASSIETTE            |          |            |\n");
    printf("|        |          |          %+d deg            |          |            |\n",
           assiette);

    printf("|  50 ---+          |         ROULIS             |       VARIOMETRE       |\n");

    printf("|        |          |          %+d deg            |        %+d ft/min      |\n",
           roulis, vario);

    printf("|       %3d %s       |                            |                       |\n",
           vitesse, uniteVitesse);

    printf("|                   |                            |                       |\n");
    printf("===========================================================================\n");

    /* =========================================================
       INDICATEUR DIRECTIONNEL
       ========================================================= */

    printf("|                    INDICATEUR DIRECTIONNEL                            |\n");
    printf("|                                                                       |\n");
    printf("|                 N                         0 deg                       |\n");
    printf("|                 |                           |                         |\n");
    printf("|            NO ---+--- NE               315 + 45                      |\n");
    printf("|                 |                           |                         |\n");
    printf("|            O ---+--- E                270 + 90                      |\n");
    printf("|                 |                           |                         |\n");
    printf("|            SO ---+--- SE               225 + 135                    |\n");
    printf("|                 |                           |                         |\n");
    printf("|                 S                         180 deg                     |\n");
    printf("|                                                                       |\n");
    printf("|                         CAP : %03d deg - %s                         |\n",
           cap, direction);
    printf("===========================================================================\n");

    return 0;
}

