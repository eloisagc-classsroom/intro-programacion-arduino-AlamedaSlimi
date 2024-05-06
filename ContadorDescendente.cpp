// Definir los pines para los LEDs
const int ledPin0 = 4;
const int ledPin1 = 5;
const int ledPin2 = 6;
const int ledPin3 = 7;

// Variable para almacenar el valor del contador
int contador = 0;

void setup() {
  // Configurar los pines como salida
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Mostrar el valor actual del contador en los LEDs
  mostrarEnLEDs(contador);
  
  // Incrementar el contador
  contador--;
  
  // Si el contador alcanza el valor minimo (0), reiniciarlo a 15
  if (contador < 0) {
    contador = 15;
  }
  
  // Esperar un breve periodo de tiempo para que se pueda observar el cambio
  delay(500);
}

void mostrarEnLEDs(int valor) {
  // Convertir el valor a binario y mostrarlo en los LEDs
  digitalWrite(ledPin0, valor & 0x01);
  digitalWrite(ledPin1, (valor >> 1) & 0x01);
  digitalWrite(ledPin2, (valor >> 2) & 0x01);
  digitalWrite(ledPin3, (valor >> 3) & 0x01);
}
