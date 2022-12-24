Los servicios de streaming son contenidos de medios ya sean grabados o en vivo en los que tienes acceso a través de internet y aparatos móviles como lo son laptops, computadoras, smartphones, entre otros.
Su función radica en que los usuarios pueden hacer uso de ellos sin necesidad de esperar una descarga. Es uno de los servicios más utilizados en la actualidad.
Antes la gente se veía obligada a ver la televisión, en donde veías directamente lo que los dueños de los canales querían que vieras, todo esto a través de receptores satelitales o por cable.
Es por ello por lo que el streaming tuvo tanto impacto, el poder visualizar lo que tú eliges, sin verte en el aprieto de ver a una hora en específico o en un lugar en específico.
Ahora a través de bases de datos tienes la libertad de seleccionar y ver.
Algunos de estos servicios son los tan conocidos como Netflix, Amazon Prime, HBO, Disney+, entre otros.

Según datos del Instituto Federal de Telecomunicaciones, en el país se incrementó un 77% el gasto mensual en estas opciones.
Debido a ese interés por parte de los usuarios, cada vez existen más opciones en el catálogo de plataformas y aquí te decimos el precio y principales ofertas de cada una para que tomes una decisión más informada sobre cuáles contratar.
Y no solo eso, también existen páginas y aplicaciones como lo son Twitch, Youtube, Facebook, entre otros. En donde puedes hacer directos.


Directos en los que puedes compartir pantallas o videos a través de una transmisión en vivo donde tengas una audiencia.
Día con día este servicio va haciendo mejoras en diferentes cosas y campos, tanto en lo visual como lo auditivo.
Es por ello que se tiene tanto interés en estas áreas en la actualidad.

En el siguiente diagrama, podemos observar cómo está organizado este proyecto:
![Imagen](https://github.com/OscarUrenda/Plataforma-de-simulacion-de-streaming/blob/main/Diagrama%20streaming.PNG)


En este diagrama de UML podemos observar la clase padre Video. Esta clase posee un total de 6 atributos y 3 métodos. En los atributos decidí manejarlos public, debido a que al manejar punteros en el main lo hice para hacer más cómodo de manejar los datos.

En cuanto a los métodos podemos observar el constructor, un método para calificar los videos y un método virtual que es el que heredaremos a las clases hijas Película y Serie.

En la clase Película solamente tendremos un atributo además de los 6 que hereda de la clase padre Video. Y sus dos métodos son el constructor y el void para mostrar los datos.

Por otro lado, tenemos la clase Serie, la cual al igual que la clase Película, hereda los atributos de la clase padre Video y posee otros 3 atributos. También posee como métodos su constructor y el void para mostrar datos.

Por último, tenemos la clase Episodios, donde nos encontramos con 3 atributos y 2 métodos independientes. No heredamos de ninguna otra clase, sin embargo, si tiene una conexión finalmente con los videos en el código a la hora de seleccionar una serie.
