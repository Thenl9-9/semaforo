// Definición de pines
const int Alto = 7;
const int Cuidado = 8;
const int Continue = 9;

void setup() {
  // Inicialización de pines como salidas
  pinMode(Alto, OUTPUT);
  pinMode(Cuidado, OUTPUT);
  pinMode(Continue, OUTPUT);
}

void loop() {
  // Led verde encendido, rojo y amarillo apagados
  digitalWrite(Continue, HIGH);
  digitalWrite(Alto, LOW);
  digitalWrite(Cuidado, LOW);
  delay(5000); // Espera 5 segundos

  // Led amarillo encendido, rojo y verde apagados
  digitalWrite(Cuidado, HIGH);
  digitalWrite(Alto, LOW);
  digitalWrite(Continue, LOW);
  delay(2000); // Espera 2 segundos

  // led rojo encendido, verde y amarillo apagados
  digitalWrite(Alto, HIGH);
  digitalWrite(Continue, LOW);
  digitalWrite(Cuidado, LOW);
  delay(5000); // Espera 5 segundos
  //CUAYSMETCEL
}

