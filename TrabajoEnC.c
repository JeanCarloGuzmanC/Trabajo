#include <stdio.h>

void profesor();                                  //Definimo la función de estas variables 
void estudiante();

int validate(int Id_estudiante);                  //Se define el entero para darle valor a esa variable 
int i,x;

int Id_estudiante;                                //Estos son más valores 
int nota_1;
int nota_2;
int nota_3;

struct estudiantes_details                        //Es una declaración de tipo de datos compuestos, eso para funsiones agrupadas
{
    int Idestudiante;
    int nota1;
    int nota2;
    int nota3;
};

struct estudiantes_details s[3]={{1013258118,0,0,0},{1107843036,0,0,0},{1007253038,0,0,0}};        //Le aagregamos un valor o identidad a los objetos

int main()                     //Este se usa para ejecutar o llamar a la ejecución de un programa
{
    while (1)                  //Tiene asociado un bloque de sentencias que se ejecutarán secuencialmente
    {
        int choice;            //Es una variable que nos permite elegir una opcion ejecutable en el programa
        printf("\nSelecione su cargo.\n");                           //Esta función ejecuta un texto en pantalla
        printf("1. Profesor\n2. Estudiante\n3. Exit\nIngrese su respuesta\t");
        scanf("%d", &choice);             //Analizan una entrada de datos con formato y cargan el resultado en los argumentos

        switch (choice)                   //Hace que el control se transfiera a una instrucción labeled-statement en el cuerpo de la instrucción
        {
            case 1:                       //Se les dice "case" a cada que se interpreta una ación o opción
            {
                profesor();
                break;
            }
            case 2:
            {
                estudiante();
                break;
            }
            case 3:
            {
                exit (1);
            }
            default:
                printf("Ingrese una seleccion valida\n");
        }
    }
    
}

void profesor()                          //Aqui le damos las funciones al "profesor", lo que puede ver y/o modificar
{
    printf("\nIngrese el ID del estudiante: \t");
    scanf("%d", &Id_estudiante);

    printf("\nIngrese la nota 1: \t");
    scanf("%d", &nota_1);

    printf("\nIngrese la nota 2: \t");
    scanf("%d", &nota_2);

    printf("\nIngrese la nota 3: \t");
    scanf("%d", &nota_3);

    x=validate(Id_estudiante,nota_1,nota_2,nota_3);
    s[x].nota1+=nota_1;
    s[x].nota2+=nota_2;
    s[x].nota3+=nota_3;
    printf("\nRS:%d la nota(s) han sido actualizada(s)");
}

void estudiante()                      //Aqui le damos las funciones al "estudiante", y en estes caso solo podrá ver
{
    printf("\nIngresa tu ID de estudiante\t");
    scanf("%d", Id_estudiante);

    x=validate(Id_estudiante,nota_1,nota_2,nota_3);

    printf("\nRs:%d Estas son tus notas:", nota_1, nota_2, nota_3);
    printf("\nRs:%d Este es tu promedio:", nota_1 + nota_2 + nota_3 / 3);
}

int validate(int Id_estudiante)
{
    for ( i=0;i<3; i++)
    {
        if (s[i].Idestudiante=Id_estudiante)
        {
            if (s[i].Idestudiante==Id_estudiante)
            {
                return i;
                break;
            }
            
        }
        else
        {
            printf("\nEl ID de estudiante no se encontró...");
            exit(1);
        }
    }
    if (i==2)
    {
        printf("\nNo se encontranrón notas");
        exit(1);
    }
}


//Jean Carlo Guzmán Cárdenas ID:30000088991
