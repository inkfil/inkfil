# Matplotlib api structure
  1. matplotlib.pyplot
  2. matplotlib.axis
  3. matplotlib.axes
  4. matplotlib.backend_managers
  5. matplotlib.figures
  
## matplotlib.pyplot
```python
import matplotlib.pyplot as plt
plt.figure()
plt.plot([1, 2, 3, 4])
plt.ylabel('some numbers')
plt.show()
```
```python
import matplotlib.pyplot as plt
import matplotlib.dates as mdates
#to pass the datapoints
plt.plot([],[],label="sample plot", marker='o',s=2, linewidth=1.5)
#arg1= all y datapoints 
#arg2= all x datapoints
#label these datapoints
#linewidth is the width of the line
#marker is the symbol used for plotting datapoints
#s is the size if the marker

plt.figure(1)
#arg1 flagsize=(w,h)

plt.subplot(nrows=x,ncols=y,figsize=(x,y)).set_axis_off()
#2 is the number of row to divide figure into
#1 is the number of col to divide figure into
#1 is the current active figure
plt.grid()
plt.legand()
plt.ylabel("")
plt.xlabel("")
plt.title("")
plt.show()
plt.axis(off)
plt.close()
#........................................................................
plt.imshow()
#arg:-
#X [m,n,3],[m,n,4],[m,n]
#cmap (matplotlib.colors.Colormap) (ignored if RBGA/RGB values are given)
#aspect (equals, auto) maintains the aspect ration (ie square pixels)
#interpolation

plt.imread()
plt.imread().shape

plt.hist(x,y,histtype='', rwidth=)
plt.bar(x,y,label='',color='',)
plt.scatter(x,y,label='',color='',marker='',s=)
plt.staclplot(x,[y1,y2,...,yn],colors=['y1color','y2color',...,'yncolor'])
plt.pie(x,[y1,y2,...,yn],colors=['y1color','y2color',...,'yncolor'],startangle=,shadow=True,explode=(0,0.1,0...),autopct='%1.1f%%')
plt.
```

```python
import numpy as np
import matplotlib.pyplot as plt

a=[0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180]
b=[180, 195, 210, 225, 240, 255, 270, 285, 300, 315, 330, 345, 360]

#plot 1
plt.plot(np.sin(a+b), label='sin(a+b)')
plt.plot((np.sin(a)*np.cos(b))+(np.cos(a)*np.sin(b)))

#plot 2
plt.plot(np.sin(a-b), label='sin(a-b)')
plt.plot((np.sin(a)*np.cos(b))-(np.cos(a)*np.sin(b)))

#plot 3
plt.plot(np.cos(a+b), label='cos(a+b)')
plt.plot((np.cos(a)*np.cos(b))-(np.sin(a)*np.sin(b)))

#plot 4
plt.plot(np.cos(a-b), label='cos(a-b)')
plt.plot((np.cos(a)*np.cos(b))+(np.sin(a)*np.sin(b)))

#plot 5
plt.plot(np.tan(a+b), label='tan(a+b)')
plt.plot((np.tan(a)+np.tan(b))/(1-(tan(a)*np.tan(b))))

#plot 6
plt.plot(np.tan(a-b), label='tan(a-b)')
plt.plot((np.tan(a)-np.tan(b))/(1+(tan(a)*np.tan(b)))

#plot 7
plt.plot(np.sin(a)+np.sin(b), label='sin(a)+sin(b)')
plt.plot(2*(np.sin((a+b)/2)*np.cos((a-b)/2)))

#plot 8
plt.plot(np.sin(a)-np.sin(b), label='sin(a)-sin(b)')
plt.plot(2*(np.cos((a+b)/2)*np.sin((a-b)/2)))

#plot 9
plt.plot(np.cos(a)+np.cos(b), label='cos(a)+cos(b)')
plt.plot(2*(np.cos((a+b)/2)*np.cos((a-b)/2)))

#plot 10
plt.plot(np.cos(a)-np.cos(b), label='cos(a)-cos(b)')
plt.plot(2*(np.sin(a+b)/2)*np.sin((a-b)/2)))
```
