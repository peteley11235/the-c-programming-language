/*
Copyright 2017 Peter Ley

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* Exercise 2-1
 * Experiment to find out what happens when printf's argument string
 * contains \c, where c is some character not listed above.
 */

#include <stdio.h>

int main()
{
    printf("a: \a\n");
    printf("c: \c\n");
    printf("d: \d\n");
    printf("e: \e\n");
    printf("f: \f\n");
    printf("g: \g\n");
    printf("h: \h\n");
    printf("i: \i\n");
    printf("j: \j\n");
    printf("k: \k\n");
    printf("l: \l\n");
    printf("m: \m\n");
    printf("o: \o\n");
    printf("p: \p\n");
    printf("q: \q\n");
    printf("r: \r\n");
    printf("s: \s\n");
    printf("u: \u\n");
    printf("v: \v\n");
    printf("w: \w\n");
    printf("x: \x\n");
    printf("y: \y\n");
    printf("z: \z\n");
    printf("A: \A\n");
    printf("C: \C\n");
    printf("D: \D\n");
    printf("E: \E\n");
    printf("F: \F\n");
    printf("G: \G\n");
    printf("H: \H\n");
    printf("I: \I\n");
    printf("J: \J\n");
    printf("K: \K\n");
    printf("L: \L\n");
    printf("M: \M\n");
    printf("O: \O\n");
    printf("P: \P\n");
    printf("Q: \Q\n");
    printf("R: \R\n");
    printf("S: \S\n");
    printf("U: \U\n");
    printf("V: \V\n");
    printf("W: \W\n");
    printf("X: \X\n");
    printf("Y: \Y\n");
    printf("Z: \Z\n");
}
