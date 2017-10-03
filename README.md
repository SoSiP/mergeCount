# SoSip mergeCounts

SoSip mergeCounts is part of the SoSip package, count the numbers of read into a single matrix.
TODO

## Installation

1. Clone this repository : `git clone https://github.com/SoSiP/mergeCount.git`
2. module load bioinfo/htslib/1.3
3. Compile mergeCounts : `make`
3. Place the mergeCounts binary somewhere acessible in your `$PATH`

## Example

**Counting and sorting reads with Samtools**

```
TODO
```


**Counts from bam file with mergeCounts**

```
mergeCounts file-sorted.bam > matrix.tsv
```

## Licensing

MIT License

Copyright (c) 2017 Sofa Side Project

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Authors
     The main contributors to the library are:

 * [Clement AGRET](clement.agret@cirad.fr) (Creator)
 * [Gaetan DROC](gaetan.droc@cirad.fr)
 * [Gautier SARAH](gautier.sarah@cirad.fr)
