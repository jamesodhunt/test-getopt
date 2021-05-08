# test-getopt

Example program for testing `getopt(3)`.

## Usage

Clone this repository like this:

  ```bash
  $ git clone https://github.com/jamesodhunt/test-getopt
  $ cd test-getopt
  ```

Then, build the test program:

```bash
$ make
```

Now you can run the test program. The first argument is the `optstring` value
that will be passed to `getopt(3)`. Subsequent arguments are the options that
`getopt(3)` will parse. Examples:

```bash
$ ./test_getopt "ab:" -a -b "hello world"
$ ./test_getopt "12:" -1 -2 hello
```
