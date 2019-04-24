#ifndef GLM_SIMD_PLATFORM_H
#define GLM_SIMD_PLATFORM_H

#define GLM_ARCH_MIPS_BIT	(0x10000000)
#define GLM_ARCH_PPC_BIT	(0x20000000)
#define GLM_ARCH_ARM_BIT	(0x40000000)
#define GLM_ARCH_X86_BIT	(0x80000000)

#define GLM_ARCH_SIMD_BIT	(0x00001000)

#define GLM_ARCH_NEON_BIT	(0x00000001)
#define GLM_ARCH_SSE_BIT	(0x00000002)
#define GLM_ARCH_SSE2_BIT	(0x00000004)
#define GLM_ARCH_SSE3_BIT	(0x00000008)
#define GLM_ARCH_SSSE3_BIT	(0x00000010)
#define GLM_ARCH_SSE41_BIT	(0x00000020)
#define GLM_ARCH_SSE42_BIT	(0x00000040)
#define GLM_ARCH_AVX_BIT	(0x00000080)
#define GLM_ARCH_AVX2_BIT	(0x00000100)

#define GLM_ARCH_UNKNOWN	(0)
#define GLM_ARCH_X86		(GLM_ARCH_X86_BIT)
#define GLM_ARCH_SSE		(GLM_ARCH_SSE_BIT | GLM_ARCH_SIMD_BIT | GLM_ARCH_X86)
#define GLM_ARCH_SSE2		(GLM_ARCH_SSE2_BIT | GLM_ARCH_SSE)
#define GLM_ARCH_SSE3		(GLM_ARCH_SSE3_BIT | GLM_ARCH_SSE2)
#define GLM_ARCH_SSSE3		(GLM_ARCH_SSSE3_BIT | GLM_ARCH_SSE3)
#define GLM_ARCH_SSE41		(GLM_ARCH_SSE41_BIT | GLM_ARCH_SSSE3)
#define GLM_ARCH_SSE42		(GLM_ARCH_SSE42_BIT | GLM_ARCH_SSE41)
#define GLM_ARCH_AVX		(GLM_ARCH_AVX_BIT | GLM_ARCH_SSE42)
#define GLM_ARCH_AVX2		(GLM_ARCH_AVX2_BIT | GLM_ARCH_AVX)
#define GLM_ARCH_ARM		(GLM_ARCH_ARM_BIT)
#define GLM_ARCH_NEON		(GLM_ARCH_NEON_BIT | GLM_ARCH_SIMD_BIT | GLM_ARCH_ARM)
#define GLM_ARCH_MIPS		(GLM_ARCH_MIPS_BIT)
#define GLM_ARCH_PPC		(GLM_ARCH_PPC_BIT)

#endif /* GLM_SIMD_PLATFORM_H */