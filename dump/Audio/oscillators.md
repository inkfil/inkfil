# WaveForms

### Sine WaveForm
```C++
#include<iostream>
#include<cmath>

void sine(){
	double freqinHz = 100.0;
	double amp = 5.0;
	double phase = 30.0;
	double samplerate = 44100;
	double tfos = 1.0/samplerate;   // time for one sample
	double tt = 1.5;                // total time to play tone
	double tnos = tt*samplerate;    // total no of sample to produce
	
	for(auto i=0; i<tnos; i++){
		std::cout<< amp*(std::sin(i*2*M_PI*freqinHz*tfos+phase))<<std::endl;
	}
}

int main(){

	sine();
	return 0;
}
```

### Square WaveForm
```C++
#include<iostream>
#include<cmath>

void square(){
	double freqinhz=100;
	double samplerate=44100;
	double amp=1.0;
	double phase=0.0;
	double tt=2.0;
	double tfos=1.0/samplerate;
	double tnos=tt*samplerate;
	
	for(auto i=0; i<tnos; i++){
		std::cout<< (std::signbit(std::sin(i*2*M_PI*freqinhz*tfos+phase))?-1:1)<<std::endl;
	}

}

int main(){
	square();
	return 0;
}

```

### Triangle WaveForm
```C++
#include<iostream>
#include<cmath>

// Not perfect triangle

void triangle(){
	double freqinhz=100.0;
	double samplerate=1000.0;
	double amp=1.0;
	double phase=0.0;
	double tt=1.0;
	double tfos=1.0/samplerate;
	double tnos=tt*samplerate;
	for(auto i=0; i<tnos; i++){
		// awesome effect shit
		// std::cout<< (amp*std::abs(1-fmod(i*2*M_PI*tfos*freqinhz,2.0)*2-1)) <<std::endl;
		std::cout<< (amp*std::abs(1-fmod(i*2*M_PI*tfos*freqinhz,2.0)*2-1)) <<std::endl;
	}
}

int main(){

	triangle();
	return 0;
}

```

### SawTooth WaveForm
```C++

```

### Inverse SawTooth WaveForm
```C++

```

### Pulse WaveForm
```C++

```
