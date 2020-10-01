# ArtBot

A CLI tool to generate random, pretty png's. ArtBot is capable of producing images in any resolution. Different methods of producing images can be substituted for one another.

ArtBot can be built out of the box using make:

```
make clean
make
```

ArtBot can be run from the build folder:

```
./artbot
```

This will run ArtBot with a random seed, creating a png whose name is based on the seed. The default width is 256 pixels.

These details can be changed using command arguments.

| Key |                       Effect                       |
| :-: | :------------------------------------------------: |
| -n  |            Supply the name for the png             |
| -s  |  Supply the seed for the random number generation  |
| -w  | Supply the width and height in pixels of the image |

Here's an example command that would create a png called `test.png` with the random seed `1591005661` with resolution `4096`:

```
./artbot -n test -s 1591005661 -w 4096
```

| ![1](./img/demo1.png "Demo Image 1") | ![2](./img/demo2.png "Demo Image 2") |
| :----------------------------------: | :----------------------------------: |
| ![3](./img/demo3.png "Demo Image 3") | ![4](./img/demo4.png "Demo Image 4") |

In the future, ArtBot will have multiple different methods of generating images. The structure will permit 'plugging in' different generators, supplied as a command line argument. Also the solution will seek to avoid less interesting images that are produced, by restricting the random aspets of the generation.

Any suggestions are welcome, as are any contributions.

![Demo Image](https://github.com/gabrielbarker/ArtBot/raw/master/img/demo.png "High Res Demo Image")
