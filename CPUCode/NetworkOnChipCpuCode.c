/*
 * NetworkOnChipCpuCode.c
 *
 *  Created on: 1 Mar 2015
 *      Author: selvakum002
 */
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <MaxSLiCInterface.h>
#include "Maxfiles.h"
#include "NetworkOnChip.h"


typedef uint16_t addr_t;
typedef uint16_t data_t;

typedef struct {
	uint8_t X;
	uint8_t Y;
} pe_addr_t;

int main()
{
	printf("Running DFE.\n");
	int status = 0;
	bool pe_in_vld_1_1 =1 ;
	pe_addr_t pe_in_peaddr_1_1= {2,3};
	addr_t pe_in_nodeaddr_1_1 =4;
	data_t pe_in_data_1_1 =5;
	uint8_t pe_out_bp_1_1 =6;

	NetworkOnChip(pe_in_peaddr_1_1.X,pe_in_peaddr_1_1.Y,pe_in_data_1_1,pe_in_nodeaddr_1_1,pe_in_vld_1_1,pe_out_bp_1_1,1);
	return status;

}


