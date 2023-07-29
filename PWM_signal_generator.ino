// Constants
int F=50; // Frequency
int Fs=1000; // Sampling frequency
int n =1000; // Number of sampling
float t;
int sampling_interval;
byte samples[1000];

void setup() {
  pinMode(10,OUTPUT);
  for (int n=0; n<1000; n++)
  {
    t=(float)n/Fs;
    samples[n]=(byte)(127.0*sin(2*3.14*t)+127.0); // create sin wave
  }
  sampling_interval = 1000000/(F*n); // sampling interval Ts = 1/frequency * number of  sample 
}

void loop() {
  for (int j=0; j<1000; j++){
    analogWrite(10,samples[j]);
    delayMicroseconds(sampling_interval);
    }
}
