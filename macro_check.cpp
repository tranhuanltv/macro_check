#include <cstdio>

int main()
{
	#ifdef __BYTE_ORDER__
		printf("__BYTE_ORDER__ is: %d\n", __BYTE_ORDER__);
	#endif 

	#ifdef __BIG_ENDIAN__
		printf("__BIG_ENDIAN__\n");
	#endif
	
	#ifdef __BIG_ENDIAN
                printf("__BIG_ENDIAN\n");
        #endif

   	#ifdef _BIG_ENDIAN
                printf("_BIG_ENDIAN\n");
        #endif

	#ifdef _ARCH_PPC
		printf("_ARC__PPC\n");
	#endif

	#ifdef __powerpc__
		printf("__powerpc__\n");
	#endif

	#ifdef __powerpc
		printf("__powerpc\n");
	#endif

	#ifdef powerpc
		printf("powerpc\n");
	#endif

	#ifdef __arch64__
		printf("__arch64__\n");
	#endif

	#ifdef __sparc
		printf("__sparc\n");
	#endif
	
	printf("%s Done checking\n", __FUNCTION__)
	return 0
}
