#include <stdio.h>
#include <string.h>

// Aplicacion que determina el horoscopo y predice el futuro de un usuario. 
// Se basa en la fecha de nacimiento, nombre y sexo.
// Esta aplicacion determina tu signo zodiacal y predice como sera tu futuro, salud, relaciones, numero y color de la suerte. 
// Estas predicciones se basan en la fecha de nacimiento provista por el usuario. 

typedef struct { // permite definir tipos de datos con diferentes nombres
    char signo[10];
    char futuro[400];
    char salud[50];
    char relacion[400];
    char color[10];
    int numsuerte;

    } zodiaco;

int main(){

    zodiaco perfil;
    int userMes;
    int userDia;
    
    //Bienvenida al usuario e ingreso de fecha de nacimiento 
    printf("Ingresa tus datos a continuacion y recibe tu horoscopo!\n\n");
    printf("Fecha de nacimiento (Ej: 07/03):");
    printf("\nMes (MM): ");
    scanf("%d",&userMes);
    printf("Dia (DD): ");
    scanf("%d",&userDia);


    // Aquario Jan 20 - Feb 18
    if ((userMes == 1 && userDia >= 20 )||(userMes == 2 && userDia <= 18)){ // La función strcpy copia el contenido de la <cadena_fuente> en la <variable_destino>, siendo ésta un array de caracteres.
        strcpy(perfil.signo , "Aquario");
        strcpy(perfil.color , "Azul claro");
        strcpy(perfil.relacion , "Acuario enamorado puede marchar al ritmo de su propio baterista");
        strcpy(perfil.salud , "problemas y lesiones en las piernas");
        perfil.numsuerte = 2;
        strcpy(perfil.futuro , "Los acuarianos pueden contar con este año para su crecimiento perfilal");
    }

    // Piscis Feb 19 - Mar 20
    if ((userMes == 2 && userDia >= 19 )||(userMes == 3 && userDia <= 20)){
        strcpy(perfil.signo , "Piscis");
        strcpy(perfil.color , "Verde mar");
        strcpy(perfil.relacion , "Piscis enamorado es apasionado, intenso y singular");
        strcpy(perfil.salud , "problemas de senos nasales");
        perfil.numsuerte = 3;
        strcpy(perfil.futuro , "Las interacciones con los demás podrían ser más profundas, y seguramente habrá algo reconfortante en la forma en que usted y los demás hacen clic en este momento.");
    }

    // Aries Mar 21 - Apr 1
    if ((userMes == 3 && userDia >= 21 ) || (userMes == 4 && userDia <= 19)){
        strcpy(perfil.signo, "Aries");
        strcpy(perfil.color , "Rojo");
        strcpy(perfil.relacion , "Aries es una relacion caliente y tormentosa, y estable.");
        strcpy(perfil.salud , "Dolores de cabeza");
        perfil.numsuerte = 6;
        strcpy(perfil.futuro ,"El año 2021 comenzará con una nota muy positiva para Aries, experimentando instancias positivas, hechas de emociones y sentimientos.");
    }

    // Tauro Apr 20 - May 20
    if ((userMes == 4 && userDia >= 20 )||(userMes == 5 && userDia <= 20)){
        strcpy(perfil.signo , "Tauro");
        strcpy(perfil.color , "Rosado");
        strcpy(perfil.relacion , "Tauro enamorado es sensual al máximo y muy conectado con su cuerpo físico.");
        strcpy(perfil.salud , "Dolor de garganta");
        perfil.numsuerte = 15;
        strcpy(perfil.futuro , "2021 parece ser un año positivo para ti en el frente del amor.");
    }

    // Gemini May 21 - Jun 20
    if ((userMes == 5 && userDia >= 21 )||(userMes == 6 && userDia <= 20)){
        strcpy(perfil.signo , "Gemini");
        strcpy(perfil.color , "Amarillo");
        strcpy(perfil.relacion , "Dinámico, intenso y con tantas partes cambiantes en sus perfilalidades, a Géminis le encantan las citas.");
        strcpy(perfil.salud , "Dolor de gargantas");
        perfil.numsuerte = 3;
        strcpy(perfil.futuro , "Este será un año en el que estarás contento con el apoyo de la suerte e incluso con la reducción de obstáculos.");
    }

    // Cancer Jun 21 - Jul 22
    if ((userMes == 6 && userDia >= 21 )||(userMes == 7 && userDia <= 22)){
        strcpy(perfil.signo , "Cancer");
        strcpy(perfil.color , "Violeta");
        strcpy(perfil.relacion , "Sensuales, apasionados y súper en sintonía con sus cuerpos, los cánceres están altamente sintonizados con el amor y las sensaciones físicas.");
        strcpy(perfil.salud , "Dolor de cabeza");
        perfil.numsuerte = 2;
        strcpy(perfil.futuro , "Se concentrará en los asuntos financieros y planificará en consecuencia. En comparación con los gastos, ahorrará más.");
    }

    // Leo Jul 23 - Aug 22
    if ((userMes == 7 && userDia >= 23 )||(userMes == 8 && userDia <= 22)){
        strcpy(perfil.signo , "Leo");
        strcpy(perfil.color , "Dorado");
        strcpy(perfil.relacion , "Apasionado, intenso y ardiente, Leo ama mucho.");
        strcpy(perfil.salud , "Fiebres");
        perfil.numsuerte = 22;
        strcpy(perfil.futuro , "Leo verá otro año tan brillante y fantástico como su perfilalidad.");
    }

    // Virgo Aug 23 - Sep 22
    if ((userMes == 8 && userDia >= 23 )||(userMes == 9 && userDia <= 22)){
        strcpy(perfil.signo , "Virgo");
        strcpy(perfil.color , "Plateado");
        strcpy(perfil.relacion , "Virgo ama mucho y siempre busca el amor de las estrellas, del tipo en el que las almas, las mentes y los cuerpos se fusionan a la perfección.");
        strcpy(perfil.salud , "Estomagos nerviosos");
        perfil.numsuerte = 7;
        strcpy(perfil.futuro , "Hay un comienzo un poco doloroso para ti en el frente del amor. Podría haber angustia o malestar en su relación. Sin embargo, si atraviesas una separación, considérala mejor para tu futuro.");
    }

    // Libra Sep 23 - Oct 22
    if ((userMes == 9 && userDia >= 23 )||(userMes == 10 && userDia <= 22)){
        strcpy(perfil.signo , "Libra");
        strcpy(perfil.color , "Azul");
        strcpy(perfil.relacion , "Libra adora el coqueteo, ama el drama y la pompa del romance, y es uno de los pocos signos del zodíaco que realmente disfruta de las primeras citas.");
        strcpy(perfil.salud , "Dolores de espalda");
        perfil.numsuerte = 6;
        strcpy(perfil.futuro , "El año 2021 será un año de resultados mixtos para los nativos de Libra. Verás muchos colores de vida este año.");
    }

    // Escorpio Oct 23 - Nov 21
    if ((userMes == 10 && userDia >= 23 )||(userMes == 11 && userDia <= 21)){
        strcpy(perfil.signo , "Escorpio");
        strcpy(perfil.color , "Negro");
        strcpy(perfil.relacion , "Escorpio ama el romance y la pasión, incluidas las peleas nocturnas.");
        strcpy(perfil.salud , " UTI y otros problemas por debajo del cinturón");
        perfil.numsuerte = 9;
        strcpy(perfil.futuro , "No se distraiga con las tentaciones en su vida amorosa. Concéntrate y haz que la relación existente funcione.");
    }

    // Sagitario Nov 22 - Dec 21
    if ((userMes == 11 && userDia >= 22 )||(userMes == 12 && userDia <= 21)){
        strcpy(perfil.signo , "Sagitario");
        strcpy(perfil.color , "Celeste");
        strcpy(perfil.relacion , "Gobernado por el expansivo Júpiter, Sagitario es de gran corazón, abierto y siempre mira más allá de una lista de verificación.");
        strcpy(perfil.salud , "Dolores de espalda y problemas del nervio ciático.");
        perfil.numsuerte = 6;
        strcpy(perfil.futuro , "Los sagitario tendrán una relación efímera este año donde experimentarán el más alto nivel de introspección para satisfacer sus demandas de prosperidad.");
    }

    // Capricornio Dec 22 - Jan 19
    if ((userMes == 12 && userDia >= 22 )||(userMes == 1 && userDia <= 19)){
        strcpy(perfil.signo , "Capricornio");
        strcpy(perfil.color , "Rojo");
        strcpy(perfil.relacion , "Gobernado por el estricto Saturno, Capricornio conoce, espera e incluso disfruta las partes difíciles de la relación. ");
        strcpy(perfil.salud , "Dolores de rodilla");
        perfil.numsuerte = 5;
        strcpy(perfil.futuro , "2021 será el año en el que los Capricornio tendrán que hacer una profunda introspección sobre sus consideraciones y ambiciones en la vida.");
    }

    //Imprime resultados para el perfil del usuario
    printf("\n\nTu signo zodiacal es   : %s", perfil.signo);
    printf("\nTus relaciones           : %s", perfil.relacion);
    printf("\nTu salud                 : %s", perfil.salud);
    printf("\nTu numero de la suerte   : %d", perfil.numsuerte);
    printf("\nTu color de la suerte    : %s", perfil.color);
    printf("\nTu futuro                : %s", perfil.futuro);


    return 0;
}