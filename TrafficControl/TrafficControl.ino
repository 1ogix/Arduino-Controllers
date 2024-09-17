//NORTH
int NG = 2;
int NY = 3;
int NR = 4;
//SOUTH
int SG = 5;
int SY = 6;
int SR = 7;
//PEDESTRIAN
int PG = 8;
int PR = 9;

void setup() {
  pinMode(NG, OUTPUT);
  pinMode(NY, OUTPUT);
  pinMode(NR, OUTPUT);
  pinMode(SG, OUTPUT);
  pinMode(SY, OUTPUT);
  pinMode(SR, OUTPUT);
  pinMode(PG, OUTPUT);
  pinMode(PR, OUTPUT);
}

void loop() {
  while (1) {
    northSouthTraffic();  
    southTraffic();  
  }
}

void northSouthTraffic() {
  // North Green, South Red, Pedestrian Green
  digitalWrite(NG, HIGH);   
  digitalWrite(SR, HIGH);   
  digitalWrite(PG, HIGH);   
  digitalWrite(NR, LOW);    
  digitalWrite(SG, LOW);    
  digitalWrite(PR, LOW);    
  delay(5000);             
  
  // North Yellow, 
  digitalWrite(NG, LOW);    
  digitalWrite(NY, HIGH);  
  digitalWrite(PG, HIGH);    
  digitalWrite(PR, LOW);   
  delay(3000);              
  
  // // North Red, 
  // digitalWrite(NY, LOW);    
  // digitalWrite(NR, HIGH);   
  // delay(5000);              
}

void southTraffic() {
  // South Green
  digitalWrite(NY, LOW); 
  digitalWrite(SG, HIGH); 
  digitalWrite(NR, HIGH);   
  digitalWrite(PR, HIGH);   
  digitalWrite(SR, LOW);    
  digitalWrite(NG, LOW);    
  digitalWrite(PG, LOW);    
  delay(5000);              
  
  // South Yellow
  digitalWrite(SG, LOW);    
  digitalWrite(SY, HIGH);   
  delay(3000);              
  
  // South Red
  digitalWrite(SY, LOW);    
  digitalWrite(SR, HIGH);          
}
