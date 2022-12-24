

Programación orientada a objetos

Gpo. 850

Prof. Rosa Guadalupe Paredes Juárez

**Proyecto Integrador**

Alumno: Oscar Javier Urenda Rodríguez

Matricula: A01741312

Profesional

Campus Guadalajara

30/Enero/2022





Contenido

[**Introducción**](#br2)[.....................................................................................................................................](#br2)[ ](#br2)[2](#br2)

[**Diagrama**](#br3)[** ](#br3)[de**](#br3)[** ](#br3)[clases**](#br3)[** ](#br3)[.......................................................................................................................](#br3)[ ](#br3)[3](#br3)

[**Liga**](#br4)[** ](#br4)[al**](#br4)[** ](#br4)[replit**](#br4)[** ](#br4)[(Código)**](#br4)[....................................................................................................................](#br4)[ ](#br4)[4](#br4)

[**Ejemplo**](#br4)[** ](#br4)[de**](#br4)[** ](#br4)[ejecución**](#br4)[** ](#br4)[(Capturas**](#br4)[** ](#br4)[de**](#br4)[** ](#br4)[pantalla)**](#br4)[.........................................................................](#br4)[ ](#br4)[4](#br4)

[**Argumentación**](#br8)[** ](#br8)[de**](#br8)[** ](#br8)[las**](#br8)[** ](#br8)[partes**](#br8)[** ](#br8)[del**](#br8)[** ](#br8)[proyecto**](#br8)[** ](#br8)[relacionadas**](#br8)[** ](#br8)[con**](#br8)[** ](#br8)[cada**](#br8)[** ](#br8)[uno**](#br8)[** ](#br8)[de**](#br8)[** ](#br8)[los**](#br8)[** ](#br8)[puntos**](#br8)

[**a**](#br8)[** ](#br8)[al**](#br8)[** ](#br8)[h**](#br8)[** ](#br8)[mencionados**](#br8)[** ](#br8)[arriba,**](#br8)[** ](#br8)[añadiendo**](#br8)[** ](#br8)[una**](#br8)[** ](#br8)[justificación**](#br8)[** ](#br8)[del**](#br8)[** ](#br8)[por**](#br8)[** ](#br8)[qué**](#br8)[** ](#br8)[se**](#br8)[** ](#br8)[optó**](#br8)[** ](#br8)[por**](#br8)[** ](#br8)[esa**](#br8)

[**solución**](#br8)[** ](#br8)[y**](#br8)[** ](#br8)[no**](#br8)[** ](#br8)[por**](#br8)[** ](#br8)[otras.**](#br8)[................................................................................................................](#br8)[ ](#br8)[8](#br8)

[**Identificación**](#br9)[** ](#br9)[de**](#br9)[** ](#br9)[casos**](#br9)[** ](#br9)[que**](#br9)[** ](#br9)[harían**](#br9)[** ](#br9)[que**](#br9)[** ](#br9)[el**](#br9)[** ](#br9)[proyecto**](#br9)[** ](#br9)[deje**](#br9)[** ](#br9)[de**](#br9)[** ](#br9)[funcionar.**](#br9)[..........................](#br9)[ ](#br9)[9](#br9)

[**Conclusión**](#br9)[** ](#br9)[personal.**](#br9)[....................................................................................................................](#br9)[ ](#br9)[9](#br9)

**Introducción**

Los servicios de streaming son contenidos de medios ya sean grabados o en vivo

en los que tienes acceso a través de internet y aparatos móviles como lo son

laptops, computadoras, smartphones, entre otros.

Su función radica en que los usuarios pueden hacer uso de ellos sin necesidad de

esperar una descarga. Es uno de los servicios más utilizados en la actualidad.

Antes la gente se veía obligada a ver la televisión, en donde veías directamente lo

que los dueños de los canales querían que vieras, todo esto a través de

receptores satelitales o por cable.

Es por ello por lo que el streaming tuvo tanto impacto, el poder visualizar lo que tú

eliges, sin verte en el aprieto de ver a una hora en específico o en un lugar en

específico.

Ahora a través de bases de datos tienes la libertad de seleccionar y ver.

Algunos de estos servicios son los tan conocidos como Netflix, Amazon Prime,

HBO, Disney+, entre otros.

Según datos del Instituto Federal de Telecomunicaciones, en el país se

incrementó un 77% el gasto mensual en estas opciones.

Debido a ese interés por parte de los usuarios, cada vez existen más opciones en

el catálogo de plataformas y aquí te decimos el precio y principales ofertas de

cada una para que tomes una decisión más informada sobre cuáles contratar.

Y no solo eso, también existen páginas y aplicaciones como lo son Twitch,

Youtube, Facebook, entre otros. En donde puedes hacer directos.





Directos en los que puedes compartir pantallas o videos a través de una

transmisión en vivo donde tengas una audiencia.

Día con día este servicio va haciendo mejoras en diferentes cosas y campos, tanto

en lo visual como lo auditivo.

Es por ello que se tiene tanto interés en estas áreas en la actualidad.

**Diagrama de clases**





En este diagrama de UML podemos observar la clase padre Video. Esta clase posee un total de 6

atributos y 3 métodos. En los atributos decidí manejarlos public, debido a que al manejar punteros

en el main lo hice para hacer más cómodo de manejar los datos.

En cuanto a los métodos podemos observar el constructor, un método para calificar los videos y

un método virtual que es el que heredaremos a las clases hijas Película y Serie.

En la clase Película solamente tendremos un atributo además de los 6 que hereda de la clase

padre Video. Y sus dos métodos son el constructor y el void para mostrar los datos.

Por otro lado, tenemos la clase Serie, la cual al igual que la clase Película, hereda los atributos de la

clase padre Video y posee otros 3 atributos. También posee como métodos su constructor y el

void para mostrar datos.

Por último, tenemos la clase Episodios, donde nos encontramos con 3 atributos y 2 métodos

independientes. No heredamos de ninguna otra clase, sin embargo, si tiene una conexión

finalmente con los videos en el código a la hora de seleccionar una serie.

**Liga al replit (Código)**

<https://replit.com/join/pyqsowbmco-oscarjavier1>

**Ejemplo de ejecución (Capturas de pantalla)**

















**Argumentación de las partes del proyecto relacionadas con cada uno de los**

**puntos a al h mencionados arriba, añadiendo una justificación del por qué se**

**optó por esa solución y no por otras.**

a) Se identifican de manera correcta las clases a utilizar.

Si, ya que utilizamos adecuadamente en todos los casos las clases creadas en la función main.

b) Se emplea de manera correcta el concepto de Herencia.

Si, se puede visualizar en el UML la relación existente entre las clases creadas.

c) Se emplea de manera correcta los modificadores de acceso.

Si, al igual que la anterior. Se puede observar en los métodos la utilización de modificadores

de acceso.

d) Se emplea de manera correcta la sobrecarga y sobre escritura de métodos.

Si, utilizamos sobrecarga para la parte de la calificación a los videos.

d) Se emplea de manera correcta el concepto de Polimorfismo.

Si, al utilizar el método virtual establecimos el uso del polimorfismo.

e) Se emplea de manera correcta el concepto de Clases Abstractas.

Si, ya que creamos clases en las que no se pueden declarar instancias u objetos.

f) Se sobrecarga al menos un operador en el conjunto de clases propuestas.

Si, sobrecargamos los valores de las calificaciones.





g) Se utiliza de manera correcta el uso de excepciones tanto predefinidas como

definidas por el programador.

Si, utilizamos en varias ocasiones diferentes condiciones/statements en con los que

manejamos excepciones.

**Identificación de casos que harían que el proyecto deje de funcionar.**

Pues realmente el proyecto tiene un buen manejo de excepciones.

Aunque se introduzcan valores no válidos, el mismo programa te lo marcará entonces no dejará de

funcionar.

El único problema que yo llego a identificar (Si es que le podemos denominar como problema) es

que no funciona de corrido, sino que cuando das la última orden, el programa termina y tienes

que volver a correrlo.

**Conclusión personal.**

Fue un proyecto muy interesante, sobre todo debido a que hablamos de streaming que

me parece un área bastante entretenida y la verdad es que yo le doy mucho uso en mi día

a día.

Emplear conceptos de C++ es muy interesante, puede no ser mi lenguaje de

programación favorito, pero el hecho de trabajar en programación orientada a objetos me

parece muy interesante.

Además de que siento que aprendí muchísimo, aunque se me hayan presentado

problemas en el camino, a través de investigación y apoyo con la profesora me puse

rápido al día y me pareció una experiencia muy enriquecedora la cual si recomendaría a

muchos en áreas de ingeniería y programación.

Espero en un futuro seguir trabajando con más de esto y desarrollar mis habilidades en

programación. Además de darle uso a lo aprendido, ya sea en este mismo lenguaje o en

otros. Ya que el conocimiento en programación es universal a mi parecer.

