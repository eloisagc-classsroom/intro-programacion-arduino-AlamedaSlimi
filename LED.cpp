//Configuracion del pin 13 para el LED
void setup(){
	pinMode(13, OUTPUT);
}

//Funcion para el ciclo de encendidos y apagados
void loop(){
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
}
