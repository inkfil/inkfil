# RaspiCam

REFERENCE: [official raspberry picam module documentation](https://projects.raspberrypi.org/en/projects/getting-started-with-picamera)


```python
# sample picam instruction structure
from picamera import PiCamera
from time import sleep

camera = PiCamera()

camera.start_preview()
sleep(5)
camera.stop_preview()
```

```python
# for upside-down preview
camera = PiCamera()
camera.rotation = 180
camera.start_preview(alpha=200)\
# alpha can be 0-255
```

```python
# Take still pictures with Python code: part 1 (single still)
camera.start_preview()
sleep(5)
camera.capture('/home/pi/Desktop/image.jpg')
camera.stop_preview()
```

```python
# Take still pictures with Python code: part 2 (continous stream of stills)
Recording video with Python code
camera.start_preview()
for i in range(5):
    sleep(5)
    camera.capture('/home/pi/Desktop/image%s.jpg' % i)
camera.stop_preview()
```

```python
# Recording video with Python code
camera.start_preview()
camera.start_recording('/home/pi/Desktop/video.h264')
sleep(5)
camera.stop_recording()
camera.stop_preview()
```

```python
# Set the image resolution
camera.resolution = (2592, 1944)
camera.framerate = 15
camera.start_preview()
sleep(5)
camera.capture('/home/pi/Desktop/max.jpg')
camera.stop_preview()
```

```python
# Add text to your image
camera.start_preview()
camera.annotate_text = "Hello world!"
sleep(5)
camera.capture('/home/pi/Desktop/text.jpg')
camera.stop_preview()
```


```python
# Change the look of the added text
from picamera import PiCamera, Color
camera.start_preview()
camera.annotate_background = Color('blue')
camera.annotate_foreground = Color('yellow')
camera.annotate_text = " Hello world "
camera.annotate_text_size = 50
sleep(5)
camera.stop_preview()
```

```python
# Change the brightness of the preview: part 1
camera.start_preview()
camera.brightness = 70
sleep(5)
camera.capture('/home/pi/Desktop/bright.jpg')
camera.stop_preview()
```

```python
# Change the brightness of the preview: part 2
camera.start_preview()
for i in range(100):
    camera.annotate_text = "Brightness: %s" % i
    camera.brightness = i
    sleep(0.1)
camera.stop_preview()
```

```python
# Change the contrast of the preview
camera.start_preview()
for i in range(100):
    camera.annotate_text = "Contrast: %s" % i
    camera.contrast = i
    sleep(0.1)
camera.stop_preview()
```

```python
# to add image effects
camera.image_effect='none'
# options
    # none : default
    # negative
    # solarize
    # sketch
    # denoise
    # emboss
    # oilpaint
    # hatch
    # gpen
    # pastel
    # watercolor
    # film
    # blur
    # saturation
    # colorswap
    # washedout
    # posterise
    # colorpoint
    # colorbalance
    # cartoon
    # deinterlace1
    # deinterlace2

# part 1
camera.start_preview()
camera.image_effect = 'colorswap'
sleep(5)
camera.capture('/home/pi/Desktop/colorswap.jpg')
camera.stop_preview()

# part 2
camera.start_preview()
for effect in camera.IMAGE_EFFECTS:
    camera.image_effect = effect
    camera.annotate_text = "Effect: %s" % effect
    sleep(5)
camera.stop_preview()
```

```python
# Set the image exposure mode
camera.exposure_mode='auto'
# options
    # off
    # auto : default
    # night
    # nightpreview
    # backlight
    # spotlight
    # sports
    # snow
    # beach
    # verylong
    # fixedfps
    # antishake
    # fireworks

# part 1
camera.start_preview()
camera.exposure_mode = 'beach'
sleep(5)
camera.capture('/home/pi/Desktop/beach.jpg')
camera.stop_preview()

# part 2
camera.start_preview()
for expmode in camera.EXPOSURE_MODES:
    camera.exposure_mode = expmode
    camera.annotate_text = "Exposure mode: %s" % expmode
    sleep(5)
camera.stop_preview()
```

```python
# Change the image white balance
camera.awb_mode=''
    
    # off
    # auto : default
    # sunlight
    # cloudy
    # shade
    # tungsten
    # fluorescent
    # incandescent
    # flash
    # horizon

# part 1
camera.start_preview()
camera.awb_mode = 'sunlight'
sleep(5)
camera.capture('/home/pi/Desktop/sunlight.jpg')
camera.stop_preview()

# part 2
camera.start_preview()
for awbmode in camera.AWB_MODES:
    camera.awb_mode = awbmode
    camera.annotate_text = "Auto White Balance mode: %s" % awbmode
    sleep(5)
camera.stop_preview()
```

How to generate a video from the command line using avconv

```
[raspi and raspvid tuts](https://www.seeedstudio.com/blog/2020/01/20/20-best-raspberry-pi-camera-projects-to-try-in-2020/)
It covers the following:

    How to control the pi camera using Python
    How to use raspivid, raspistill and raspiyuv utilities
    How to use start_preview() and stop_preview() to display the image from the camera
    How to take photos using the capture() command
    How to record video using start_recording() and stop_recording()
    How to view the video via omxplayer
    How to change the brightness, contrast, and resolution in photos
    How to apply visual effects to video
```
```
python raspberrypi - camera project ideas
    Build an affordable crowd size estimator
    Build A Face Recognization Smart Lock
    Time-Lapse Photography with RPI and Pi Camera

rpi camera modules
    Raspberry Pi PiNoir Camera Module V2
    Raspberry Pi Infrared Camera Module
    Raspberry Pi Wide Angle Camera Module

Build a rpi homelab

raspi c++
https://www.uco.es/investiga/grupos/ava/node/40
https://stackoverflow.com/questions/33454649/cmake-error-at-cmakelists-txt3-find-package
https://github.com/cedricve/raspicam
https://awesomeopensource.com/projects/raspberry-pi-camera



```
