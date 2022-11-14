package guzman.jeancarlo;
import java.util.Scanner;
/**
 *
 * @author guzman.jeancarlo
 */
public class Semestre2Corte3 {

    public static void main(String[] args) {
        
        Scanner obj = new Scanner(System.in); //Introducimos el comando "Scanner"
        
        //Suma
        //Creamos las variable para sumarlas
        int s1;
        int s2;
        int s3;
        int s4;
        int s5;
        int resultadoS;
        //Creamos las entradas que el usuario responderá
        System.out.println("Suma");
        System.out.println("Si no quiere sumar más valores, ponga '0' en las demas entradas");
        
        System.out.println("Ingresa el primer valor");
        
        s1 = obj.nextInt(); //Declaramos el objeto "obj" en entero "int"
        
        System.out.println("Ingresa el segundo valor");
        
        s2 = obj.nextInt();
        
        System.out.println("Ingresa el tercer valor");
        
        s3 = obj.nextInt();
        
        System.out.println("Ingresa el cuarto valor");
        
        s4 = obj.nextInt();
        
        System.out.println("Ingresa el quinto valor");
        
        s5 = obj.nextInt();
        
        resultadoS = s1 + s2 + s3 +s4 +s5; //Creamos la variable para el resultado
        
        System.out.println("El resultado final: "+resultadoS); //Imprimimos el resultado en pantalla
        
        
        //Multiplicación
        //Creamos las variable para multiplicar
        int m1;
        int m2;
        int m3;
        int m4;
        int m5;
        int resultadoM;
        //Creamos las entradas
        System.out.println("");
        System.out.println("");
        System.out.println("");
        System.out.println("Multiplicar");
        System.out.println("Si no quiere multiplicar más valores, ponga '1' en las demas entradas");
        System.out.println("Ingresa el primer valor");
        
        m1 = obj.nextInt(); //Declaramos el objeto "obj" en entero "int"
        
        System.out.println("Ingresa el segundo valor");
        
        m2 = obj.nextInt();
        
        System.out.println("Ingresa el tercer valor");
        
        m3 = obj.nextInt();
        
        System.out.println("Ingresa el cuarto valor");
        
        m4 = obj.nextInt();
        
        System.out.println("Ingresa el quinto valor");
        
        m5 = obj.nextInt();
        
        resultadoM = m1 *m2 *m3 *m4 *m5; //Creamos la variable para el resultado
        
        System.out.println("El resultado final: "+resultadoM); //Imprimimos el resultado en pantalla

        
        //Promedio
        //Creamos las variable para sacar promedio
        
        float valor = 0; 
        float acum = 1; //Acumulado
        System.out.println("Ingrese la cantidad de valores a promediar");
        float cn = obj.nextFloat(); //Cantidad de valores
        
        while (acum<=cn){
            System.out.println("Ingresa la nota número:"+acum);
            float n = obj.nextFloat();
            valor += n;
            acum++;
        }
        float promedio = valor / cn;
        
        System.out.println("El promedio es: "+promedio);
    }
    
}

/*@author
guzman.jeancarlo
código 30000088991
*/