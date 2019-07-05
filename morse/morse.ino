char ch_hui = '?';



String out = "";

void setup() {

  // put your setup code here, to run once:

    Serial.begin(9600);

}



void loop() {

  // put your main code here, to run repeatedly:

  String a[26]={

".-**","-...","-.-.","-..*",".***","..-.","--.*","....","..**",".---","-.-*",".-..","--**","-.**","---*",".--.","--.-",".-.*","...*","-***","..-*","...-",".--*","-..-",".--*","--.."};

 if(Serial.available()>0){

      ch_hui = Serial.read(); 

      }else{

        Serial.print(out);

      }

    if(ch_hui==' ' || ch_hui=='\n'){

      out += " /";

      }

else{

out +=a[ch_hui-97];

}

}
