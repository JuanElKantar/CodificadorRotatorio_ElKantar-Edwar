Proyecto de Codificador Rotatorio con Arduino
Este proyecto consiste en la integración y utilización de un codificador rotatorio con Arduino para detectar giros y direcciones del eje, así como la aplicación de los conceptos fundamentales relacionados. Se emplea el modelo CAC-40 que forma parte del kit de sensores 37 en uno.

Contenido del Repositorio
Archivos del Proyecto:
main.ino: Contiene el código principal para Arduino que interactúa con el codificador rotatorio.
/lib: Directorio que almacena posibles bibliotecas adicionales utilizadas.
README.md: Este archivo, proporcionando documentación sobre el proyecto.
Descripción del Código:
main.ino contiene el código principal del proyecto. Se explora el funcionamiento del codificador, la detección de giros en ambos sentidos y se implementa una lógica para filtrar rebotes mecánicos.
Uso del Codificador Rotatorio:
Componentes Requeridos:

Arduino UNO o similar.
Codificador rotatorio modelo CAC-40.
Cableado según las indicaciones en el código.
Instrucciones de Uso:

Conectar correctamente el codificador rotatorio al Arduino según el esquema definido.
Cargar el código en Arduino IDE y subirlo al Arduino.
Observar el monitor serial para ver las lecturas del codificador rotatorio al girar.
Conceptos Aplicados:
El proyecto explora y demuestra los siguientes conceptos:

Pulsos: Análisis de los pulsos generados por el codificador al girar.
Resistencias de pull-up: Uso de resistencias para mantener los niveles lógicos cuando no hay señal.
Rebotes Mecánicos: Implementación de una rutina anti-rebote para estabilizar las lecturas.
Consideraciones Finales:
El proyecto demuestra la comprensión de los conceptos mencionados y su aplicación práctica en la interacción con el codificador rotatorio.
