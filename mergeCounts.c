#include <iostream>
#include <typeinfo>
#include <cmath>
#include <string.h>
#include </usr/local/bioinfo/htslib/1.3/include/htslib/sam.h>


int main(int argc, char *argv[]){
  /*open bam file*/
  samFile *fp_in = hts_open(argv[1],"r");
  /*read header*/
  bam_hdr_t *bamHdr = sam_hdr_read(fp_in); 
  /*initialize an alignment*/
  bam1_t *aln = bam_init1();
  size_t windows_nb = 0;
  size_t pos_act =0;
  size_t pos_act_mate =0;
  int i,j = 0;

  char **targetname = bamHdr->target_name;
  uint32_t *tarlen = bamHdr->target_len ;
  /*TODO : Allocated
   * good value*/
  size_t target_windows[1000000];

  for(i=0;tarlen[i];i++){
    target_windows[i]=windows_nb;
    windows_nb+=(tarlen[i]/10000+1);
  }
  i=0;
  size_t matrice[windows_nb][windows_nb];
  while(sam_read1(fp_in,bamHdr,aln) > 0) {
    if(aln->core.tid !=-1 && aln->core.mtid != -1){ 
      int32_t pos = aln->core.pos +1;
      char *chr = bamHdr->target_name[aln->core.tid] ;
      int32_t mate_pos = aln->core.mpos +1;
      char *mate_chr = bamHdr -> target_name[aln->core.mtid];
      if (i%1000000==0){
            std::cout<<i<<std::endl;
      }
      i++;
      if((strcmp(chr, mate_chr) != 0) || (std::abs(pos-mate_pos)>10000)){
        pos_act = target_windows[aln->core.tid]+pos/10000+1;
        pos_act_mate = target_windows[aln->core.mtid]+mate_pos/10000+1;
        matrice[pos_act][pos_act_mate]++;
      }
    }

  }/*
  for(i=0;i<windows_nb;i++){
    for(j=0;j<windows_nb;j++){
      std::cout<<matrice[i][j]<<"\t";
    }
    std::cout<<"\n";
  }*/
  bam_destroy1(aln);
  sam_close(fp_in);
  return 0;
}

