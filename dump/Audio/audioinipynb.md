reference: [illinois.edu](https://publish.illinois.edu/augmentedlistening/tutorials/music-processing/tutorial-1-introduction-to-audio-processing-in-python/)

```python
import numpy as np
from numpy.fft import fft, ifft
import matlpotlib.pyplot as plt
import scipy.io.wavfile import read, write
from IPython.display import Audio

fs, data=read("sample.wav")
data = data[:,0]
print("sampling frequency is ", fs)

# to add audio play widget in ipynb
Audio(data, rate=fs)

# Plotting audio data
plt.figure()
plt.plot(data)
plt.xlabel("sample index")
plt.ylabel("amplitude")
plt.title("waveform of wave file")
plt.show()

```
