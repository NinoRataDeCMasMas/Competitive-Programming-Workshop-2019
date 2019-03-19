![](https://github.com/NinoRataDeCMasMas/Competitive-Programming-Workshop/blob/master/images/CompetitiveProgrammingWorkshop.png)

# Introducción
En el presente repositorio se encuentra el contenido didáctico del taller de Introducción a la Programación Competitiva, denominado _Competitive Programming Workshop_. El contenido se compone de códigos Competitivos de ejemplo y documentos con la información de los siguientes tópicos:

*   __Introducción a la Programación Competitiva__
*   __Algoritmos voraces (greedy)__
*   __Paradigma Divide y Vencerás__
*   __Algoritmos de búsqueda exhaustiva__
*   __Paradigma de Programación dinámica__

Cada módulo de información contiene una descripción del Paradigma correspondiente y sus ejemplos clásicos. Adicionalmente se contiene una serie de códigos competitivos alusivos al tema. Dichos programas han sido probados en páginas especializadas como [OmegaUp](https://omegaup.com/) y [UVa Online Judge](https://uva.onlinejudge.org/).

## ¿Qué es Programación Competitiva?

Es un deporte mental en el cual los participantes resuelven un conjunto de problemas bien especificados a través de programas de computadora. Los estudiantes universitarios, principalmente de ingeniería y carreras asociadas a ciencias de la computación, participan en las competencias organizadas por ACM ICPC.

![](https://github.com/NinoRataDeCMasMas/Competitive-Programming-Workshop/blob/master/images/icpcLogo.png){ width=50% } 

El concurso ACM ICPC es la competencia más importante y con mayor prestigio en el ámbito de la programación, que se lleva a cabo entre equipos de estudiantes que representan a las instituciones de educación superior. Entre marzo y octubre de cada año se realizan concursos preliminares a nivel nacional y los equipos mejor posicionados ganan un pase para competir en la Fase Regional que se celebra en Noviembre y comprende a México y Centro América. Finalmente los dos o tres mejores equipos dependiendo del desempeño alcanzado tienen la oportunidad de avanzar al “ACM International Collegiate Programming Contest World Finals”, por lo general celebrado el siguiente marzo o a mediados de abril.

## Comandos de compilación en C/C++

Si bien los concursos de esta índole permiten el uso de diversos lenguajes de programación como _java_, _haskell_ o _javascript_, el uso generalizado de _C/C++_ lo hace ser nuestro preferido para resolver problemas de competencia (salvo algunas excepciones que veremos en algunas secciones del taller). Para compilar adecuadamente nuestros códigos competitivos se usarán los siguientes comandos:

*   C (gcc 5.4.0). extensión: .c ```gcc -pipe -O2 -std=c11 <filename> -lm ```
*   C++ (g++ 5.4.0). extensión: .cc, .cpp ```gcc -pipe -O2 -std=c++14 <filename> -lm ```

En Linux y MacOS, lo más probable es que tengas el compilador requerido, en este caso _gcc_ y _g++_. En Windows, puedes usar tu compilador favorito o instalar, por ejemplo, _cygwin_.

## Veredictos

Los codigos Competitivos se someten a evaluacion al ser enviados a alguna de las paginas anteriores, o al sistema de competicion en una fase del concurso ACM ICPC. Después de unos segundos o minutos, se observara en la web una de estas respuestas:

*   __En la cola (QU):__ el juez está ocupado y no puede asistir a su presentación. Será juzgado lo antes posible.

*   __Aceptado (AC):__ OK! ¡Tu programa es correcto! Se produjo la respuesta correcta en un tiempo razonable y dentro del límite de uso de la memoria. ¡Felicidades!

*   __Error de presentación (PE):__ los resultados de su programa son correctos pero no se presentan de la manera correcta. Comprobar espacios, justificar, líneas de alimentación ...

*   __Respuesta incorrecta (WA):__ No se alcanzó la solución correcta para las entradas. Las entradas y salidas que usamos para probar los programas no son públicas, por lo que tendrá que detectar el error por sí mismo (es recomendable que se acostumbre a una verdadera dinámica de concurso ;-)). Si realmente cree que su código es correcto, puede contactarnos a través del enlace de la izquierda. Las salidas del juez no siempre son correctas ...

*   __Error de compilación (CE):__ el compilador no pudo compilar su programa. Por supuesto, los mensajes de advertencia no son mensajes de error. Los mensajes de salida del compilador son informados por correo electrónico.

*   __Error de tiempo de ejecución (RE):__ su programa falló durante la ejecución (falla de segmentación, excepción de punto flotante ...). La causa exacta no se informa al usuario para evitar la piratería. Asegúrese de que su programa devuelva un código 0 al shell. Si está utilizando Java, siga todas las especificaciones de envío.

*   __Time Limit Exceeded (TL):__ su programa intentó ejecutarse durante demasiado tiempo; este error no le permite saber si su programa alcanzaría la solución correcta al problema o no.

*   __Límite de memoria excedido (ML):__ su programa intentó usar más memoria de la que permite el juez. Si está seguro de que tal problema necesita más memoria, contáctenos.

*   __Límite de salida excedido (OL):__ su programa intentó escribir demasiada información. Esto suele ocurrir si entra en un bucle infinito.

*   __Error de envío (SE):__ El envío no tiene éxito. Esto se debe a algún error durante el proceso de envío o la corrupción de los datos.

*   __Función restringida (RF):__ su programa está tratando de usar una función que consideramos dañina para el sistema. Si obtiene este veredicto, probablemente sepa por qué ...

*   __No se puede juzgar (CJ):__ el juez no tiene entradas y salidas de prueba para el problema seleccionado. ¡Al elegir un problema, tenga cuidado de asegurarse de que el juez pueda juzgarlo!
