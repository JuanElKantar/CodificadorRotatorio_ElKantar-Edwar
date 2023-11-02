# Proyecto de Codificador Rotatorio con Arduino
Este proyecto consiste en la integración y utilización de un codificador rotatorio con Arduino para detectar giros y direcciones del eje, así como la aplicación de los conceptos fundamentales relacionados.

# Uso del Codificador Rotatorio:

- Conectar correctamente el codificador rotatorio al Arduino según el esquema definido.
- Cargar el código en Arduino UNO y subirlo al Arduino.
- Observar el monitor serial para ver las lecturas del codificador rotatorio al girar.
  
# Conceptos Aplicados:
El proyecto explora y demuestra los siguientes conceptos:

- Pulsos: Análisis de los pulsos generados por el codificador al girar.
- Resistencias de pull-up: Uso de resistencias para mantener los niveles lógicos cuando no hay señal.
- Rebotes Mecánicos: Implementación de una rutina anti-rebote para estabilizar las lecturas y evitar pulsos o giros no deseados.

# Explicacion del codigo
# 1 
![image](https://github.com/JuanElKantar/CodificadorRotatorio_ElKantar-Edwar/assets/128154436/4a933722-8575-4ae5-894c-764c3253b7cd)


Se definen los pines utilizados para conectar el codificador rotatorio al Arduino. Se establece la variable ANTERIOR para guardar la posición anterior del codificador y POSICION para almacenar la posición actual. La palabra clave volatile se utiliza para garantizar que la variable sea actualizada correctamente en una rutina de interrupción y para que sea global.
# 2
![image](https://github.com/JuanElKantar/CodificadorRotatorio_ElKantar-Edwar/assets/128154436/6935c587-0b72-416a-89a2-f7cfd296098b)

Se inicializa la configuración del sistema y luego monitorea y muestra en el monitor serial cualquier cambio en la posición del codificador rotatorio.
# 3
![image](https://github.com/JuanElKantar/CodificadorRotatorio_ElKantar-Edwar/assets/128154436/2d94b77b-9e45-481d-a195-c895264a9170)


Es la función asociada al codificador rotatorio, lo que hace es que controla los cambios del codificador, evitando los rebotes y actualizando la posición, poniendole un rango de 0 a 100






