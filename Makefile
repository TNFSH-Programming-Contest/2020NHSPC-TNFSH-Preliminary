nothing:

pA-import:
	cmsImportTask -c 2 ./pA/ -u

pA-check:
	cd pA && > solutions-check.txt
	cd pA && echo "pA.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/pA.cpp | tee -a solutions-check.txt
	cd pA && echo "pA_lazyBIT.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/pA_lazyBIT.cpp | tee -a solutions-check.txt
	cd pA && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt
	cd pA && echo "xiplus.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/xiplus.cpp | tee -a solutions-check.txt

pB-import:
	cmsImportTask -c 2 ./pB/ -u

pB-check:
	cd pB && > solutions-check.txt
	cd pB && echo "pB.cpp" >> solutions-check.txt
	cd pB && tps invoke solution/pB.cpp | tee -a solutions-check.txt
	cd pB && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pB && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pC-import:
	cmsImportTask -c 2 ./pC/ -u

pC-check:
	cd pC && > solutions-check.txt
	cd pC && echo "pC.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/pC.cpp | tee -a solutions-check.txt
	cd pC && echo "pC_online.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/pC_online.cpp | tee -a solutions-check.txt
	cd pC && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pC && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pD-import:
	cmsImportTask -c 2 ./pD/ -u

pD-check:
	cd pD && > solutions-check.txt
	cd pD && echo "stan.cpp" >> solutions-check.txt
	cd pD && tps invoke solution/stan.cpp | tee -a solutions-check.txt
	cd pD && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pD && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

pE-import:
	cmsImportTask -c 2 ./pE/ -u

pE-check:
	cd pE && > solutions-check.txt
	cd pE && echo "pE.cpp" >> solutions-check.txt
	cd pE && tps invoke solution/pE.cpp | tee -a solutions-check.txt
	cd pE && echo "100pt-by-Yazmau.cpp" >> solutions-check.txt
	cd pE && tps invoke solution/100pt-by-Yazmau.cpp | tee -a solutions-check.txt

import:
	cmsImportTask -c 2 ./pA/ -u
	cmsImportTask -c 2 ./pB/ -u
	cmsImportTask -c 2 ./pC/ -u
	cmsImportTask -c 2 ./pD/ -u
	cmsImportTask -c 2 ./pE/ -u

merge-pdf:
	cd pA && tps statement
	pdfunite cover.pdf pA/statement/index.pdf pB/statement/index.pdf pC/statement/index.pdf pD/statement/index.pdf pE/statement/index.pdf problems.pdf
	exiftool -Title="109學年度資訊學科能力競賽臺南一中校內初選試題本" -overwrite_original problems.pdf
	pdfunite cover.pdf pA/statement/index.pdf pA/statement/cover-and-pA.pdf
	mkdir -p pA/attachments
	mv problems.pdf pA/attachments
	rm pA/statement/index.pdf
	mv pA/statement/cover-and-pA.pdf pA/statement/index.pdf
	# cmsImportTask -c 2 ./pA/ -u/

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

statement:
	cd pA && tps statement
	cd pB && tps statement
	cd pC && tps statement
	cd pD && tps statement
	cd pE && tps statement
