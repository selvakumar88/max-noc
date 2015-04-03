# max-noc
This project implements the NoC design for maxeler platform.It covers 2D mesh , Torus, deflection torus for single chip , multichip design on Xilinx Virtex -6 FPGA.

#Build instructions

##  ##Command Line Execution
1. Clone the repository
2. Default run rules settings and xml works for all cases. For customising SLiC parameters, Maxfile Name and other parameers modify <NetworkTopology>.xml(under ../RunRules/DFE)
3. modify the settings based on network topology
    a)Add MeshCpuCode.c to MakeFile.include to CPU code ( TODO - Different make file for different Network topology)

##  ##IDE


1. Copy CPU code and Engine code into corresponding directories.
2. Create New RUN_RULE under with valid name ("DFE")
	1. Add the maxfile name, Manager under maxfile tab.
	2. Add USE_SLIC:=1 in the CPUCode tab to enable SLiC interface.

#Execution instruction


1. Use the command givens in makefile under CPU Code. (e.g. Make RUNRULE="DFE" runsim for executing the design)
2. Right Click RUNRULE and click Run