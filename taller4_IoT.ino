int A = 2;        // Pin A del encoder
int B = 4;        // Pin B del encoder

int ANTERIOR = 50;          // Guarda la posición anterior
volatile int POSICION = 50; // Guarda la posición actual (se declara volatile para permitir cambios en una ISR)

void setup() {
  pinMode(A, INPUT);     // Configura el pin A como entrada
  pinMode(B, INPUT);     // Configura el pin B como entrada

  Serial.begin(9600);    // Inicializa la comunicación serial a 9600 baudios

  attachInterrupt(digitalPinToInterrupt(A), encoder, LOW);  // Adjunta la función de interrupción al pin A (pin 2) cuando está en LOW
  Serial.println("Listo");  // Muestra "Listo" en el monitor serial
}

void loop() {
  // Verifica si hay un cambio en la posición y lo muestra en el monitor serial
  if (POSICION != ANTERIOR) {
    Serial.println(POSICION);
    ANTERIOR = POSICION;  // Actualiza la posición anterior con la posición actual
  }
}

void encoder() {
  static unsigned long ultimaInterrupcion = 0;  // Guarda el tiempo del último cambio
  unsigned long tiempoInterrupcion = millis();  // Obtiene el tiempo actual en milisegundos

  // Verifica si han pasado más de 5 milisegundos desde la última interrupción
  if (tiempoInterrupcion - ultimaInterrupcion > 5) {
    // Verifica el estado del pin B (pin 4) para determinar la dirección del giro del encoder
    if (digitalRead(B) == HIGH) {
      POSICION++;     // Incrementa la posición si el pin B está en HIGH
    } else {
      POSICION--;     // Decrementa la posición si el pin B está en LOW
    }

    // Ajusta la posición para que esté en el rango de 0 a 100
    POSICION = min(100, max(0, POSICION));

    ultimaInterrupcion = tiempoInterrupcion;  // Actualiza el tiempo del último cambio
  }
}
