nothing:

pA-check:
	cd pA && > solutions-check.txt
	cd pA && echo "pA.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/pA.cpp | tee -a solutions-check.txt
	cd pA && echo "pA_lazyBIT.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/pA_lazyBIT.cpp | tee -a solutions-check.txt
	cd pA && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pB-check:
	cd pB && > solutions-check.txt
	cd pB && echo "pB.cpp" >> solutions-check.txt
	cd pB && tps invoke solution/pB.cpp | tee -a solutions-check.txt
	cd pB && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pB && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pC-check:
	cd pC && > solutions-check.txt
	cd pC && echo "pC.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/pC.cpp | tee -a solutions-check.txt
	cd pC && echo "pC_online.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/pC_online.cpp | tee -a solutions-check.txt
	cd pC && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pD-check:
	cd pD && > solutions-check.txt
	cd pD && echo "pD.cpp" >> solutions-check.txt
	cd pD && tps invoke solution/pD.cpp | tee -a solutions-check.txt
	cd pD && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pD && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pE-check:
	cd pE && > solutions-check.txt
	cd pE && echo "pE.cpp" >> solutions-check.txt
	cd pE && tps invoke solution/pE.cpp | tee -a solutions-check.txt
	cd pE && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pE && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pA-statement:
	cd pA && tps statement
pB-statement:
	cd pB && tps statement
pC-statement:
	cd pC && tps statement
pD-statement:
	cd pD && tps statement
pE-statement:
	cd pE && tps statement

statement-all:
	if [ ! -d statement ]; then mkdir statement; fi
	cd pA && tps statement
	cd pB && tps statement
	cd pC && tps statement
	cd pD && tps statement
	cd pE && tps statement
	cp pA/statement/index.pdf statement/pA.pdf
	cp pB/statement/index.pdf statement/pB.pdf
	cp pC/statement/index.pdf statement/pC.pdf
	cp pD/statement/index.pdf statement/pD.pdf
	cp pE/statement/index.pdf statement/pE.pdf