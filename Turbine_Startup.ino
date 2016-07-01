void setup() {

    // put your setup code here, to run once:
    analogReference(DEFAULT);

    int ap1=0;
    int ap2=1;
    int ap3=2;
    int ap4=3;
    int ap5=4;
    int aoilpressure=5;
    int afuelpressure=6;
    int at1=7;
    int at2=8;
    int at3=9;
    int at4=10;
    int at5=11;
    int aoiltemperature=12;
    int afueltemperature=13;
    int amassflow=14;
    int aoxysensor=15;
    int dstartbutton=0;
    int dmasterswitch=1;

    //converts temperature from thermocouple amplifier
    at1=((analogRead(at1)-1.25)/.005);
    at2=((analogRead(at2)-1.25)/.005);
    at3=((analogRead(at3)-1.25)/.005);
    at4=((analogRead(at4)-1.25)/.005);
    at5=((analogRead(at5)-1.25)/.005);
    ap1=(analogRead(ap1)/.008);
    ap2=(analogRead(ap2)/.008);
    ap3=(analogRead(ap3)/.008);
    ap4=(analogRead(ap4)/.008);
    ap5=(analogRead(ap5)/.008);



}

void loop() {

    // put your main code here, to run repeatedly:
    int dstartbutton=21;
    int dmasterswitch=1;
    int doilpump=2;
    int dfuelpump=3;
    int dfuel1=4;
    int dfuel2=5;
    int ap1=0;
    int ap2=1;
    int ap3=2;
    int ap5=4;
    int ap4=3;
    int aoilpressure=5;
    int afuelcontrol=6;
    int at1=7;
    int at2=8;
    int at3=9;
    int at4=10;
    int at5=11;
    int aoiltemperature=12;
    int afueltemperature=13;
    int amassflow=14;
    int aoxysensor=15;
    int dstartservo=6;
    int dstarter=7;
    int destop=8;
    int dignitor=9;


    at1=((analogRead(at1)-1.25)/.005);
    at2=((analogRead(at2)-1.25)/.005);
    at3=((analogRead(at3)-1.25)/.005);
    at4=((analogRead(at4)-1.25)/.005);
    at5=((analogRead(at5)-1.25)/.005);



              
