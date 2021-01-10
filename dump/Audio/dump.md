## Audio Dump

AUDIO PROGRAMMING + AUDIO SYNTHESIS + AUDIO ANALYSIS

song recognition </br>
(audio fingerprint)=similar to fingerprint books in library </br>
shazam, sound hound, google, musixmatch, soundtracking, midomi </br>
(spectrum analysis, filtering, time domain data, frequency domain data, fft, dfft, ...) </br>

Reference:

- [Cameron Macleod - Implementing a Sound Identifier in Python](https://www.youtube.com/watch?v=LZ7THTB88AE)
- [Youtube - ECNG 3025 - Aniel Maharajh](https://www.youtube.com/playlist?list=PL87r6pfG2zYhtIzFzoXYBZLw_UbXFdwtT)
- [Youtube - ECE 260 - iamcanadian1867](https://www.youtube.com/playlist?list=PLbHYdvrWBMxYGMvQ3QG6paNu7CuIRL5dX)
- [Youtube - Modal Electronics COBALT8 Oscillator Algorithms 1 - 13 Walkthrough (RAW Sounds)](https://www.youtube.com/watch?v=K6vmabPw_sI&ab_channel=SYNTHANATOMY)
- [sample rates and bit depth in a nutshell](https://www.masteringthemix.com/blogs/learn/113159685-sample-rates-and-bit-depth-in-a-nutshell)
- [DSP | The Amp Hour Electronics Podcast](https://theamphour.com/tag/dsp/)
- [How to apply machine learning and deep learning methods to audio analysis | by Gideon Mendels | Towards Data Science](https://towardsdatascience.com/how-to-apply-machine-learning-and-deep-learning-methods-to-audio-analysis-615e286fcbbc)
- [Rhythm Tips for Identifying Music Genres by Ear | Musical U](https://www.musical-u.com/learn/rhythm-tips-for-identifying-music-genres-by-ear/)
- [Youtube - How Music Works - Acoustics for Musicians](https://www.youtube.com/playlist?list=PLIuyaIoM30LL3bl8t6nsF86CXFUagTHJw)
- [timur.audio – A blog about C++, music software, tech community, and life.](https://timur.audio/)
- [How does Audio Fingerprinting work - Emy](https://emysound.com/blog/open-source/2020/06/12/how-audio-fingerprinting-works.html)
- [Digital audio concepts - Web media technologies | MDN](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Audio_concepts)
- [PCM and WAV data structures - Programmer Sought](https://www.programmersought.com/article/7953541574/)
- [Music-Software-Development](http://www.music-software-development.com/music-data-structures.html)
- [Synthesized Signal Generators for Clock Distribution for up to 67 GHz](https://www.shf-communication.com/products/clock-generation/?gclid=CjwKCAiA2O39BRBjEiwApB2IkhmZ5YQIHfH4-RTJOiUNj9lI6VzKmFyIb3AA4wHH0tQ_BtHObupx7RoCcFQQAvD_BwE)
- [Geek Out With The Free "Maths" VST/AU Plugin By SocaLabs - Bedroom Producers Blog](https://bedroomproducersblog.com/2018/05/28/socalabs-maths/)
- [Revision Notes on Waves & Sound Waves | askIITians](https://www.askiitians.com/revision-notes/physics/waves-and-sound-waves/)
- [StackOverflow - C++ Reading the Data part of a WAV file - Stack Overflow](https://stackoverflow.com/questions/13660777/c-reading-the-data-part-of-a-wav-file)
- [Medium - Why I use JUCE. As an audio programmer, I’ve been using… | by Jatin Chowdhury | Medium](https://medium.com/@jatinchowdhury18/why-i-use-juce-fae2b1b7441e)
- [GitHub - adamstark/AudioFile: A simple C++ library for reading and writing audio files.](https://github.com/adamstark/AudioFile)
- [Samsung - Smart TV - Build | Samsung Developers](https://developer.samsung.com/smarttv/develop/extension-libraries/nacl/sample-based-tutorials/audio-in-cplusplus.html)
- [Github - Audio glitches on high sampling rate (Android/Termux/mpv) · Issue #154 · kcat/openal-soft](https://github.com/kcat/openal-soft/issues/154)
- [TheAudioProgrammer - How To Learn C++: A Guide For Newcomers to Audio Programming - The Audio Programmer](https://theaudioprogrammer.com/how-to-learn-c-a-guide-for-newcomers-to-audio-programming/)
- [Instructables - Weather Based Music Generator (ESP8266 Based Midi Generator)](https://www.instructables.com/id/Weather-Based-Music-Generator-ESP8266-Based-Midi-G/)
- [Standard MIDI file format, updated](http://www.music.mcgill.ca/~ich/classes/mumt306/StandardMIDIfileformat.html#:~:text=To%20any%20file%20system%2C%20a,bit%20byte%20streams%20in%20files)
- [How do synthesizers work? - Explain that Stuff](https://www.explainthatstuff.com/synthesizers.html)
- [What is a Synthesizers? The Complete Guide to Synths](https://www.musicianonamission.com/what-are-synthesizers/)
- [AudioTechnology - Lonerism: Tame Impala in the Studio](https://www.audiotechnology.com/features/lonerism-tame-impala-in-the-studio)
- [YouTube - Intro to Synthesizers | A Beginner's Guide](https://www.youtube.com/watch?v=UmcOvAv-egI)
- [YouTube - Real-time audio programming in C++ from first principles](https://www.youtube.com/watch?v=HVkcdhqWp5s)
- [Superpowered - C++ Audio Library Options (2018)](https://superpowered.com/audio-library-list)


Goal of Audio Fingerprinter:
    - smaller storage
    - speed of search
    - robustness in presence of noise
    - matching with short recordings


rate
    - sampling rate
    - bit rate 
channels
length
format


Process Flow:
    - chunk into 'n' ms segments
    - convert to frequency domain
    - find max 'n' points per chunk
    - chunk windows
    - pair points
    - hash


book fingerprint 

reduce noise using voice codec compression
hashed time frequency constellation 
analysis of audio

Audible's Magic Muscle Fish Algorithm
Content based archiving libraries using fingerprinting techniques
MACS: Music Audio Characterstics Sequenc Indexing for Similarity Retrieval

how to generate an audio spectrum from a WAV file?
mp3 streaming
ogg streaming
flac streaming
wav streaming
aac streaming
alac streaming
ogg types
    - ogg Vorbis
    - ogg Theora
    - ogg speex
    - ogg opus

is flac compresed?
bit rate is important
Sampling Technique for Audio?


44100HZ 16bit stereo: 44100 samples per second, sampled data recorded in 16-bit (2 bytes), two-channel (stereo) 22050HZ 8bit mono: 22050 samples per second, sampled data is recorded in 8 bits (1 byte), mono 48000HZ 32bit 51ch: 48,000 samples per second, sampled data is recorded in 32-bit (4-byte floating point), 5.1 channel

HLS
DRM (Digital Right Media)
AV Synchronization
DRM inn streaming
    - Microsoft PlayReady
    - XInfinity
AAC high quality at low bitrate

JUCE: C++ audio processing library
sample rate: (sample per second)
sampling: turning continous (Analog signal) data into descrete (digital signal) data

mono channel: left right channel is same
sterio channel: left channel is different than right channel
frame: sample per channel
Audio Buffer: used to transfer audio from audio card to system as chunks




Harmonics and Frequency Analysis. </br>
Waves and Vibrations. </br>
Digital Signal Processing. </br>
Audio Processing. </br>

Reference Books:

	1. 
	2. 
	3. 

Important Parameters in Audio Signal:
	1. Amplitude.
	2. Frequency.
	3. Wavelength.
	4. Sample Rate:
	5. Bit Depth (Dynamic Range)





Noise Reduction
Filtering
Compressing
Reverb
Delay
Equalising
Noise Gating
Modulation
Limiting
Chorus

PWM (Pulse Width Modulation)


Notes:

	Analog devices produce warm, distorted and fuzzy sounds
	MIDI is used modtly for electronic music and sound design
	Human hearing range is from 20Hz to 20KHz
	44100Hz is a4 note on keyboard
	16 bit with 44100Hz is most common audio setup
	
What is:

	But Depth?
	Pitch?
	Frequency-Pitch relation?
	

DIfference:

	Analog Synth Vs. Digital Synths
	Analog Mixers Vs. Digital Mixers
	Difference between Synth and Keyboard and MIDI Controllers
	Difference between Mono Audio and Stereo Audio

Oscillators:

	Oscillators are the heart of Synthesizers
		Sound wave generators
		Type of waveforms (Sin, SawTooth, Triangle, Square, noise, ...)
		Waveforms in different Notes (Frequencies, Amplitude, Pitch, ...)
	LFO (Low Frequency Oscillators)
    VCO (Voltage-controlled oscillator)



API/Tools for Audio Processing in C/C++:
	1. 
	
API for Audio/Video

	https://dolby.io/

	"audio": {
		  "codec": "aac",
		  "bitrate_kb": 128,
		  "bitrate_mode": "cbr",
		  "sample_rate": "48000",
		  "bit_depth": "16",
		  "channels": "2",
		  "channel_order": "L R",
		  "duration_sec": "10",
	}

