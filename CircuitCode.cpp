int c1 = 1;
int c2 = 2;
int c3 = 3;
int c4 = 4;
int c5 = 5;

int r1 = 6;
int r2 = 7;
int r3 = 8;
int r4 = 9;
int r5 = 10;

int wait = 200;

void setup() {
    pinMode (c1, OUTPUT);
    pinMode (c2, OUTPUT);
    pinMode (c3, OUTPUT);
    pinMode (c4, OUTPUT);
    pinMode (c5, OUTPUT);

    pinMode (r1, OUTPUT);
    pinMode (r2, OUTPUT);
    pinMode (r3, OUTPUT);
    pinMode (r4, OUTPUT);
    pinMode (r5, OUTPUT);

}


void loop() {
    c1r1();
}

void c1r1(){
    digitalWrite (c1, HIGH);
    digitalWrite (c2, HIGH);
    digitalWrite (c3, HIGH);
    digitalWrite (c4, HIGH);
    digitalWrite (c5, HIGH);

    digitalWrite (r1, LOW);
    digitalWrite (r2, LOW);
    digitalWrite (r3, LOW);
    digitalWrite (r4, LOW);
    digitalWrite (r5, LOW);

    delay(4);
}








