# OpenGL

references:
[Song Ho's Website](http://www.songho.ca/opengl/)


how to install OpenGL: no need it is an api that is available to hardware natively

since OpenGL has no windowing system of its own, they need to use Native windowing systems provided by operating systems such as cocoa, winapi, X11 or wand, ...

you can use cross platform wrappers of these native windowing libraries such as GLFW(Graphics Library FrameWork), GLUT(OpenGL Utility Toolkit)

to install glfw
  1. download from [official GLFW website](https://www.glfw.org/download.html),```cd glfw```, ```cmake .``` then ```make install```
  2. sudo apt-get install libglfw3-dev
  
compiler options to link OpenGL with GLFW
```bash
g++ main.cpp -o window -Xlinker /usr/libs/libglfw3.a -lglfw3 -lGL -lopengl32 -lm -lX11 -lpthread -lXi -lXrandr 
```

compiler options to link OpenGL with GLUT
```bash
g++ main.cpp -o window lglut32 -lglu32 -lGL -lopengl32 -lm -lX11 -lpthread -lXi -lXrandr 
```

cmake options:
  I dont know cmake scripting yet (I will update this when I learn cmake)


