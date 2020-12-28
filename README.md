# My first C library

This is a C library that given certain arguments, returns the index of `argv[]` array tha contains the longer item.

You can localize the source code in `./longer.c` file, to test it, install `gcc`.

Once installed, run the following command in order to generate the binary file:

```bash
$ gcc main.c longer.c -o main
```

Once you've generated the binary file, run the program using:

```bash
$ ./main [arg1] [arg2] ... [argN]
```

Then you'll see the most longer string of received on args :)