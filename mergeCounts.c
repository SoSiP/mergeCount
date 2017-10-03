#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sam.h"

int main(int argc, char *argv[]){

  samFile *fp_in = hts_open(argv[1],"r"); //open bam file
  bam_hdr_t *bamHdr = sam_hdr_read(fp_in); //read header
  bam1_t *aln = bam_init1(); //initialize an alignment

  char *chrom = argv[2];
  int locus = atoi(argv[3]);

  printf("%s\t%d\n", chrom, locus);

  while(sam_read1(fp_in,bamHdr,aln) > 0){

    int32_t pos = aln->core.pos +1; //left most position of alignment in zero based coordianate (+1)
    char *chr = bamHdr->target_name[aln->core.tid] ; //contig name (chromosome)


    if(strcmp(chrom, chr) == 0){

        printf("%s\t%d\n",chr,pos);
    }
  }

  bam_destroy1(aln);
  sam_close(fp_in);

  return 0;
}
