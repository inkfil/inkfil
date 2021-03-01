### gnuplot is amazing!


to start gnuplot prompt:

``` bash
gnuplot
```
to test gnuplot installation
``` bash
set terminal dumb
plot sin(x)
```

to set terminals:

``` bash
set term
set terminal
```

to save output as a file use:

``` bash
set output "output-file-name.extension"
```

``` bash
set terminal svg
set output "output.svg"
```
``` bash
set term eps
set output "output.eps"
```

wrirting gnuplot scripts

```gnuplot
# gnuplot_script_sample.gp
set terminal svg size 2048 1024 dynamic
set output "out.svg"
plot "data.txt" with lines
```

references:
[gnuplot reference duke.edu](https://people.duke.edu/~hpgavin/gnuplot.html)
[fsu.edu](http://hadron.physics.fsu.edu/~eugenio/comphy/gnuplotbook.pdf)
[gnuplot.info](http://www.gnuplot.info/docs_5.2/Gnuplot_5.2.pdf)
