# SoSip mergeCounts

SoSip mergeCounts is part of the SoSip package, count the numbers of read into a single matrix.
TODO

## Installation

1. Clone this repository : `git clone https://github.com/SoSiP/mergeCount.git`
2. Compile mergeCounts : `make`
3. Place the mergeCounts binary somewhere acessible in your `$PATH`

## Example

**Counting and sorting reads with Samtools**

```
TODO
```

Consider using the sort command with `-S {resources.ram}G` and `--parallel
{threads}` parameters to speed-up the sorting for large k-mer libraries.

**Counts from bam file with mergeCounts**

```
mergeCounts file.bam > counts-matrix.tsv
```

