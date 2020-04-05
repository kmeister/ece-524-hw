#!/usr/bin/env python3
import time

def some_computation(ii,jj,kk):
	return 100000.0 / (ii + jj + kk + 0.1)


def main():
	II = 100000
	JJ = 10
	KK = 10
	for ii in range(0,II):
		print(ii)
		for jj in range(0, JJ):
			for kk in range(0, KK):
				some_computation(ii, jj, kk)			

if __name__ == "__main__":
	st = time.time()
	main()
	elapsed = time.time() - st
	print(elapsed)
