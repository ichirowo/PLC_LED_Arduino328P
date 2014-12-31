//ÉsÉìê›íË
#define IN0 0
#define IN1 1
#define IN2 2
#define IN3 3
#define IN4 4
#define IN5 5
#define IN6 6
#define IN7 7
#define IN8 8
#define IN9 9
#define IN10 10
#define IN11 11

#define OUT0 12
#define OUT1 13
#define OUT2 14
#define OUT3 15
#define OUT4 16
#define OUT5 17
#define OUT6 18
#define OUT7 19

#define Common0 20
#define Common1 21


void setup()
{
	pinMode(IN0, INPUT);
	pinMode(IN1, INPUT);
	pinMode(IN2, INPUT);
	pinMode(IN3, INPUT);
	pinMode(IN4, INPUT);
	pinMode(IN5, INPUT);
	pinMode(IN6, INPUT);
	pinMode(IN7, INPUT);
	pinMode(IN8, INPUT);
	pinMode(IN9, INPUT);
	pinMode(IN10, INPUT);
	pinMode(IN11, INPUT);

	pinMode(OUT0, OUTPUT);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT4, OUTPUT);
	pinMode(OUT5, OUTPUT);
	pinMode(OUT6, OUTPUT);
	pinMode(OUT7, OUTPUT);

	pinMode(Common0, OUTPUT);
	pinMode(Common1, OUTPUT);

}

void loop()
{

	digitalWrite(Common0, HIGH);
	digitalWrite(Common1, HIGH);
	
	digitalWrite(OUT0, !digitalRead(IN0));
	digitalWrite(OUT1, !digitalRead(IN1));
	digitalWrite(OUT2, !digitalRead(IN2));
	digitalWrite(OUT3, !digitalRead(IN3));
	digitalWrite(OUT4, !digitalRead(IN4));
	digitalWrite(OUT5, !digitalRead(IN5));
	digitalWrite(OUT6, HIGH);
	digitalWrite(OUT7, HIGH);

	digitalWrite(Common0, HIGH);
	digitalWrite(Common1, LOW);
	
	delayMicroseconds(100);
	
	
	digitalWrite(Common0, HIGH);
	digitalWrite(Common1, HIGH);
	
	digitalWrite(OUT0, !digitalRead(IN6));
	digitalWrite(OUT1, !digitalRead(IN7));
	digitalWrite(OUT2, !digitalRead(IN8));
	digitalWrite(OUT3, !digitalRead(IN9));
	digitalWrite(OUT4, !digitalRead(IN10));
	digitalWrite(OUT5, !digitalRead(IN11));
	digitalWrite(OUT6, HIGH);
	digitalWrite(OUT7, HIGH);
	
	digitalWrite(Common0, LOW);
	digitalWrite(Common1, HIGH);
	
	delayMicroseconds(100);
	
}