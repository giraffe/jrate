/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:640 */
rtx
gen_cmpqi_ext_3_insn (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	0),
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:926 */
rtx
gen_x86_fnstsw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (VOIDmode,
	18)),
	24));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:939 */
rtx
gen_x86_sahf_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	25));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1079 */
rtx
gen_popsi1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1683 */
rtx
gen_movsi_insv_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2818 */
rtx
gen_swapxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2833 */
rtx
gen_swaptf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2863 */
rtx
gen_zero_extendhisi2_and (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3042 */
rtx
gen_zero_extendsidi2_32 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3231 */
rtx
gen_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3284 */
rtx
gen_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3310 */
rtx
gen_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3743 */
rtx
gen_truncdfsf2_3 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3757 */
rtx
gen_truncdfsf2_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4121 */
rtx
gen_fix_truncdi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4133 */
rtx
gen_fix_truncdi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4260 */
rtx
gen_fix_truncsi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4271 */
rtx
gen_fix_truncsi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4282 */
rtx
gen_fix_truncsfsi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4289 */
rtx
gen_fix_truncdfsi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4375 */
rtx
gen_fix_trunchi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4386 */
rtx
gen_fix_trunchi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4423 */
rtx
gen_x86_fnstcw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (HImode,
	18)),
	26));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4433 */
rtx
gen_x86_fldcw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	18),
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand0),
	28));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4449 */
rtx
gen_floathisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4525 */
rtx
gen_floathidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4601 */
rtx
gen_floathixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4612 */
rtx
gen_floathitf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4623 */
rtx
gen_floatsixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4634 */
rtx
gen_floatsitf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4645 */
rtx
gen_floatdixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4656 */
rtx
gen_floatditf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4786 */
rtx
gen_addqi3_cc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	27)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6221 */
rtx
gen_addqi_ext_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6425 */
rtx
gen_subsi3_carry (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7127 */
rtx
gen_divqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7138 */
rtx
gen_udivqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7350 */
rtx
gen_divmodhi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7407 */
rtx
gen_udivmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7520 */
rtx
gen_testsi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8111 */
rtx
gen_andqi_ext_0 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8517 */
rtx
gen_iorqi_ext_0 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8855 */
rtx
gen_xorqi_ext_0 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9282 */
rtx
gen_negsf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9289 */
rtx
gen_negsf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9421 */
rtx
gen_negdf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9428 */
rtx
gen_negdf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9742 */
rtx
gen_abssf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9749 */
rtx
gen_abssf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9870 */
rtx
gen_absdf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9877 */
rtx
gen_absdf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10464 */
rtx
gen_ashldi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10502 */
rtx
gen_x86_shld_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	GEN_INT (32),
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11177 */
rtx
gen_ashrdi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11215 */
rtx
gen_x86_shrd_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	GEN_INT (32),
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11260 */
rtx
gen_ashrsi3_31 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11673 */
rtx
gen_lshrdi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12569 */
rtx
gen_setcc_2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx (GET_CODE (operand1), QImode,
		gen_rtx_REG (VOIDmode,
	17),
		const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13115 */
rtx
gen_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13225 */
rtx
gen_doloop_end_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13534 */
rtx
gen_blockage (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	0);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13556 */
rtx
gen_return_internal ()
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13564 */
rtx
gen_return_pop_internal (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13573 */
rtx
gen_return_indirect_internal (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13581 */
rtx
gen_nop ()
{
  return const0_rtx;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13595 */
rtx
gen_set_got (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	12)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13636 */
rtx
gen_eh_return_si (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	13);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13654 */
rtx
gen_leave ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	6),
	GEN_INT (4))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	6),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13764 */
rtx
gen_ffssi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	23))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14599 */
rtx
gen_sqrtsf2_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14611 */
rtx
gen_sqrtsf2_1_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14620 */
rtx
gen_sqrtsf2_i387 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14640 */
rtx
gen_sqrtdf2_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14652 */
rtx
gen_sqrtdf2_1_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14661 */
rtx
gen_sqrtdf2_i387 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14682 */
rtx
gen_sqrtxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14692 */
rtx
gen_sqrttf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (TFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14742 */
rtx
gen_sindf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	21));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14751 */
rtx
gen_sinsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	21));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14771 */
rtx
gen_sinxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	21));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14780 */
rtx
gen_sintf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (1,
		operand1),
	21));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14789 */
rtx
gen_cosdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	22));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14798 */
rtx
gen_cossf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	22));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14818 */
rtx
gen_cosxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	22));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14827 */
rtx
gen_costf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (1,
		operand1),
	22));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14838 */
rtx
gen_cld ()
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15052 */
rtx
gen_strmovsi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	gen_rtx_MEM (SImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (4))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15084 */
rtx
gen_strmovhi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand2),
	gen_rtx_MEM (HImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (2))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15116 */
rtx
gen_strmovqi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand2),
	gen_rtx_MEM (QImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	const1_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15168 */
rtx
gen_rep_movsi (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand5,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand5,
	GEN_INT (2)),
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15208 */
rtx
gen_rep_movqi (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand3,
	operand5)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand4,
	operand5)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15397 */
rtx
gen_strsetsi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15423 */
rtx
gen_strsethi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15449 */
rtx
gen_strsetqi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15493 */
rtx
gen_rep_stossi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand4,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15529 */
rtx
gen_rep_stosqi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand3,
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15647 */
rtx
gen_cmpstrqi_nz_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15681 */
rtx
gen_cmpstrqi_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15745 */
rtx
gen_strlenqi_1 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (4,
		gen_rtx_MEM (BLKmode,
	operand5),
		operand2,
		operand3,
		operand4),
	20)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15913 */
rtx
gen_x86_movsicc_0_m1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_LTU (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	constm1_rtx,
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16536 */
rtx
gen_sse_movsfcc (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16551 */
rtx
gen_sse_movsfcc_eq (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_EQ (VOIDmode,
	operand3,
	operand4),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16563 */
rtx
gen_sse_movdfcc (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16578 */
rtx
gen_sse_movdfcc_eq (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_EQ (VOIDmode,
	operand3,
	operand4),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16778 */
rtx
gen_allocate_stack_worker_1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand0),
	10),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17802 */
rtx
gen_trap ()
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	GEN_INT (5));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17854 */
rtx
gen_movv4sf_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17866 */
rtx
gen_movv4si_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17878 */
rtx
gen_movv2di_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17890 */
rtx
gen_movv8qi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17902 */
rtx
gen_movv4hi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17914 */
rtx
gen_movv2si_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17926 */
rtx
gen_movv2sf_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17950 */
rtx
gen_movv2df_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17962 */
rtx
gen_movv8hi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17974 */
rtx
gen_movv16qi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18280 */
rtx
gen_movti_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18368 */
rtx
gen_sse_movmskps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18377 */
rtx
gen_mmx_pmovmskb (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18387 */
rtx
gen_mmx_maskmovq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8QImode,
	operand0),
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	32));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18409 */
rtx
gen_sse_movntv4sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18418 */
rtx
gen_sse_movntdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18427 */
rtx
gen_sse_movhlps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		GEN_INT (3),
		const0_rtx,
		const1_rtx))),
	GEN_INT (3)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18442 */
rtx
gen_sse_movlhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		GEN_INT (3),
		const0_rtx,
		const1_rtx))),
	GEN_INT (12)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18457 */
rtx
gen_sse_movhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	GEN_INT (12)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18469 */
rtx
gen_sse_movlps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	GEN_INT (3)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18491 */
rtx
gen_sse_loadss_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18502 */
rtx
gen_sse_movss (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18513 */
rtx
gen_sse_storess (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18523 */
rtx
gen_sse_shufps (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	41));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18538 */
rtx
gen_addv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18547 */
rtx
gen_vmaddv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18559 */
rtx
gen_subv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18568 */
rtx
gen_vmsubv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18580 */
rtx
gen_mulv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18589 */
rtx
gen_vmmulv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18601 */
rtx
gen_divv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18610 */
rtx
gen_vmdivv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18625 */
rtx
gen_rcpv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	42));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18634 */
rtx
gen_vmrcpv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	42),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18646 */
rtx
gen_rsqrtv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	43));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18655 */
rtx
gen_vmrsqrtv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	43),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18667 */
rtx
gen_sqrtv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18675 */
rtx
gen_vmsqrtv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18945 */
rtx
gen_sse2_andv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18964 */
rtx
gen_sse2_nandv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	gen_rtx_NOT (V2DImode,
	operand1),
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18984 */
rtx
gen_sse2_iorv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19004 */
rtx
gen_sse2_xorv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19016 */
rtx
gen_sse_clrv4sf (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		const0_rtx),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19027 */
rtx
gen_sse_clrv2df (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		const0_rtx),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19038 */
rtx
gen_maskcmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19048 */
rtx
gen_maskncmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19064 */
rtx
gen_vmmaskcmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2),
	gen_rtx_SUBREG (V4SImode,
	operand1,
	0),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19077 */
rtx
gen_vmmaskncmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_NOT (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2)),
	gen_rtx_SUBREG (V4SImode,
	operand1,
	0),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19096 */
rtx
gen_sse_comi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19109 */
rtx
gen_sse_ucomi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19125 */
rtx
gen_sse_unpckhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19144 */
rtx
gen_sse_unpcklps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19166 */
rtx
gen_smaxv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19175 */
rtx
gen_vmsmaxv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19187 */
rtx
gen_sminv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19196 */
rtx
gen_vmsminv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19210 */
rtx
gen_cvtpi2ps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	GEN_INT (12)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19222 */
rtx
gen_cvtps2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19232 */
rtx
gen_cvttps2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19243 */
rtx
gen_cvtsi2ss (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	GEN_INT (14)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19268 */
rtx
gen_cvtss2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19278 */
rtx
gen_cvtss2siq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DImode,
	gen_rtx_FIX (V4DImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19289 */
rtx
gen_cvttss2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19317 */
rtx
gen_addv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19326 */
rtx
gen_addv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19335 */
rtx
gen_addv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19344 */
rtx
gen_mmx_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19355 */
rtx
gen_ssaddv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19364 */
rtx
gen_ssaddv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19373 */
rtx
gen_usaddv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19382 */
rtx
gen_usaddv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19391 */
rtx
gen_subv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19400 */
rtx
gen_subv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19409 */
rtx
gen_subv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19418 */
rtx
gen_mmx_subdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19429 */
rtx
gen_sssubv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19438 */
rtx
gen_sssubv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19447 */
rtx
gen_ussubv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19456 */
rtx
gen_ussubv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19465 */
rtx
gen_mulv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19474 */
rtx
gen_smulv4hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19488 */
rtx
gen_umulv4hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19502 */
rtx
gen_mmx_pmaddwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2))))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2)))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		GEN_INT (3))))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		GEN_INT (3))))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19529 */
rtx
gen_mmx_iordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19540 */
rtx
gen_mmx_xordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19554 */
rtx
gen_mmx_clrdi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19563 */
rtx
gen_mmx_anddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19574 */
rtx
gen_mmx_nanddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19588 */
rtx
gen_mmx_uavgv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8QImode,
	gen_rtx_PLUS (V8QImode,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19608 */
rtx
gen_mmx_uavgv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19624 */
rtx
gen_mmx_psadbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19637 */
rtx
gen_mmx_pinsrw (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	operand3));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19648 */
rtx
gen_mmx_pextrw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19658 */
rtx
gen_mmx_pshufw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19671 */
rtx
gen_eqv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19680 */
rtx
gen_eqv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19689 */
rtx
gen_eqv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19698 */
rtx
gen_gtv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19707 */
rtx
gen_gtv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19716 */
rtx
gen_gtv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19728 */
rtx
gen_umaxv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19737 */
rtx
gen_smaxv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19746 */
rtx
gen_uminv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19755 */
rtx
gen_sminv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19767 */
rtx
gen_ashrv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19776 */
rtx
gen_ashrv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19785 */
rtx
gen_lshrv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19794 */
rtx
gen_lshrv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19804 */
rtx
gen_mmx_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19815 */
rtx
gen_ashlv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19824 */
rtx
gen_ashlv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19834 */
rtx
gen_mmx_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19848 */
rtx
gen_mmx_packsswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19858 */
rtx
gen_mmx_packssdw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19868 */
rtx
gen_mmx_packuswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19878 */
rtx
gen_mmx_punpckhbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	GEN_INT (85)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19905 */
rtx
gen_mmx_punpckhwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19924 */
rtx
gen_mmx_punpckhdq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	operand1,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19937 */
rtx
gen_mmx_punpcklbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	GEN_INT (85)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19964 */
rtx
gen_mmx_punpcklwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19983 */
rtx
gen_mmx_punpckldq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:19999 */
rtx
gen_emms ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	31),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20022 */
rtx
gen_ldmxcsr (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	37);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20030 */
rtx
gen_stmxcsr (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	40));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20118 */
rtx
gen_addv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20127 */
rtx
gen_subv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20136 */
rtx
gen_subrv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand2,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20145 */
rtx
gen_gtv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20154 */
rtx
gen_gev2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20163 */
rtx
gen_eqv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20172 */
rtx
gen_pfmaxv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20181 */
rtx
gen_pfminv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20190 */
rtx
gen_mulv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20199 */
rtx
gen_femms ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	46),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20222 */
rtx
gen_pf2id (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20230 */
rtx
gen_pf2iw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20240 */
rtx
gen_pfacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20258 */
rtx
gen_pfnacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20276 */
rtx
gen_pfpnacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20294 */
rtx
gen_pi2fw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20311 */
rtx
gen_floatv2si2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20322 */
rtx
gen_pavgusb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	49));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20335 */
rtx
gen_pfrcpv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	50));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20344 */
rtx
gen_pfrcpit1v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20354 */
rtx
gen_pfrcpit2v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	52));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20364 */
rtx
gen_pfrsqrtv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20373 */
rtx
gen_pfrsqit1v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	54));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20383 */
rtx
gen_pmulhrwv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		GEN_INT (32768),
		GEN_INT (32768),
		GEN_INT (32768),
		GEN_INT (32768)))),
	GEN_INT (16))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20403 */
rtx
gen_pswapdv2si2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20412 */
rtx
gen_pswapdv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20515 */
rtx
gen_addv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20524 */
rtx
gen_vmaddv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20535 */
rtx
gen_subv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20544 */
rtx
gen_vmsubv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20555 */
rtx
gen_mulv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20564 */
rtx
gen_vmmulv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20575 */
rtx
gen_divv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20584 */
rtx
gen_vmdivv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20597 */
rtx
gen_smaxv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20606 */
rtx
gen_vmsmaxv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20617 */
rtx
gen_sminv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20626 */
rtx
gen_vmsminv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20639 */
rtx
gen_sqrtv2df2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20647 */
rtx
gen_vmsqrtv2df2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20659 */
rtx
gen_maskcmpv2df3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), V2DImode,
		operand1,
		operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20669 */
rtx
gen_maskncmpv2df3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2DImode,
	gen_rtx (GET_CODE (operand3), V2DImode,
		operand1,
		operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20685 */
rtx
gen_vmmaskcmpv2df3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx (GET_CODE (operand3), V2DImode,
		operand1,
		operand2),
	gen_rtx_SUBREG (V2DImode,
	operand1,
	0),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20698 */
rtx
gen_vmmaskncmpv2df3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_NOT (V2DImode,
	gen_rtx (GET_CODE (operand3), V2DImode,
		operand1,
		operand2)),
	gen_rtx_SUBREG (V2DImode,
	operand1,
	0),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20717 */
rtx
gen_sse2_comi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20730 */
rtx
gen_sse2_ucomi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20745 */
rtx
gen_sse2_movmskpd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20754 */
rtx
gen_sse2_pmovmskb (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20763 */
rtx
gen_sse2_maskmovdqu (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V16QImode,
	operand0),
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	32));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20774 */
rtx
gen_sse2_maskmovdqu_rex64 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V16QImode,
	operand0),
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	32));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20785 */
rtx
gen_sse2_movntv2df (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20794 */
rtx
gen_sse2_movntv2di (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20803 */
rtx
gen_sse2_movntsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20816 */
rtx
gen_cvtdq2ps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20824 */
rtx
gen_cvtps2dq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20832 */
rtx
gen_cvttps2dq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20843 */
rtx
gen_cvtdq2pd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20855 */
rtx
gen_cvtpd2dq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20865 */
rtx
gen_cvttpd2dq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20876 */
rtx
gen_cvtpd2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20884 */
rtx
gen_cvttpd2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20893 */
rtx
gen_cvtpi2pd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20903 */
rtx
gen_cvtsd2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20921 */
rtx
gen_cvttsd2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20940 */
rtx
gen_cvtsi2sd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	GEN_INT (2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20967 */
rtx
gen_cvtsd2ss (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	GEN_INT (14)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20979 */
rtx
gen_cvtss2sd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand1,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	GEN_INT (2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20993 */
rtx
gen_cvtpd2ps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SUBREG (V4SFmode,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_SUBREG (V2SImode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand1),
	0),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))),
	0));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21005 */
rtx
gen_cvtps2pd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21020 */
rtx
gen_addv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21029 */
rtx
gen_addv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21038 */
rtx
gen_addv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21047 */
rtx
gen_addv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21056 */
rtx
gen_ssaddv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21065 */
rtx
gen_ssaddv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21074 */
rtx
gen_usaddv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21083 */
rtx
gen_usaddv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21092 */
rtx
gen_subv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21101 */
rtx
gen_subv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21110 */
rtx
gen_subv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21119 */
rtx
gen_subv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21128 */
rtx
gen_sssubv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21137 */
rtx
gen_sssubv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21146 */
rtx
gen_ussubv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21155 */
rtx
gen_ussubv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21164 */
rtx
gen_mulv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21173 */
rtx
gen_smulv8hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand2)),
	GEN_INT (16))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21185 */
rtx
gen_umulv8hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	GEN_INT (16))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21197 */
rtx
gen_sse2_umulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21210 */
rtx
gen_sse2_umulv2siv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2))))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2)))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21225 */
rtx
gen_sse2_pmaddwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		GEN_INT (4),
		GEN_INT (6))))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		GEN_INT (4),
		GEN_INT (6)))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		GEN_INT (3),
		GEN_INT (5),
		GEN_INT (7))))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		GEN_INT (3),
		GEN_INT (5),
		GEN_INT (7))))))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21257 */
rtx
gen_sse2_clrti (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21267 */
rtx
gen_sse2_uavgv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V16QImode,
	gen_rtx_PLUS (V16QImode,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V16QImode,
	gen_rtvec (16,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21287 */
rtx
gen_sse2_uavgv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21304 */
rtx
gen_sse2_psadbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21317 */
rtx
gen_sse2_pinsrw (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	operand3));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21329 */
rtx
gen_sse2_pextrw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21340 */
rtx
gen_sse2_pshufd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21350 */
rtx
gen_sse2_pshuflw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	55));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21360 */
rtx
gen_sse2_pshufhw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21372 */
rtx
gen_eqv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21381 */
rtx
gen_eqv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21390 */
rtx
gen_eqv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21399 */
rtx
gen_gtv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21408 */
rtx
gen_gtv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21417 */
rtx
gen_gtv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21429 */
rtx
gen_umaxv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21438 */
rtx
gen_smaxv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21447 */
rtx
gen_uminv16qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21456 */
rtx
gen_sminv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21468 */
rtx
gen_ashrv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21477 */
rtx
gen_ashrv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21486 */
rtx
gen_lshrv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21495 */
rtx
gen_lshrv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21504 */
rtx
gen_lshrv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21513 */
rtx
gen_ashlv8hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21522 */
rtx
gen_ashlv4si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21531 */
rtx
gen_ashlv2di3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21540 */
rtx
gen_ashrv8hi3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21549 */
rtx
gen_ashrv4si3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21558 */
rtx
gen_lshrv8hi3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21567 */
rtx
gen_lshrv4si3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21576 */
rtx
gen_lshrv2di3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21585 */
rtx
gen_ashlv8hi3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21594 */
rtx
gen_ashlv4si3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21603 */
rtx
gen_ashlv2di3_ti (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21616 */
rtx
gen_sse2_ashlti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_ASHIFT (TImode,
	operand1,
	gen_rtx_MULT (SImode,
	operand2,
	GEN_INT (8)))),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21627 */
rtx
gen_sse2_lshrti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (TImode,
	operand1,
	gen_rtx_MULT (SImode,
	operand2,
	GEN_INT (8)))),
	45));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21640 */
rtx
gen_sse2_unpckhpd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (V2DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21652 */
rtx
gen_sse2_unpcklpd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (V2DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21666 */
rtx
gen_sse2_packsswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21676 */
rtx
gen_sse2_packssdw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21686 */
rtx
gen_sse2_packuswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V8QImode,
	operand2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21696 */
rtx
gen_sse2_punpckhbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		GEN_INT (8),
		const0_rtx,
		GEN_INT (9),
		const1_rtx,
		GEN_INT (10),
		GEN_INT (2),
		GEN_INT (11),
		GEN_INT (3),
		GEN_INT (12),
		GEN_INT (4),
		GEN_INT (13),
		GEN_INT (5),
		GEN_INT (14),
		GEN_INT (6),
		GEN_INT (15),
		GEN_INT (7)))),
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		GEN_INT (8),
		const1_rtx,
		GEN_INT (9),
		GEN_INT (2),
		GEN_INT (10),
		GEN_INT (3),
		GEN_INT (11),
		GEN_INT (4),
		GEN_INT (12),
		GEN_INT (5),
		GEN_INT (13),
		GEN_INT (6),
		GEN_INT (14),
		GEN_INT (7),
		GEN_INT (15)))),
	GEN_INT (21845)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21723 */
rtx
gen_sse2_punpckhwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V8HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	GEN_INT (85)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21742 */
rtx
gen_sse2_punpckhdq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21757 */
rtx
gen_sse2_punpcklbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		GEN_INT (8),
		const1_rtx,
		GEN_INT (9),
		GEN_INT (2),
		GEN_INT (10),
		GEN_INT (3),
		GEN_INT (11),
		GEN_INT (4),
		GEN_INT (12),
		GEN_INT (5),
		GEN_INT (13),
		GEN_INT (6),
		GEN_INT (14),
		GEN_INT (7),
		GEN_INT (15)))),
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		GEN_INT (8),
		const0_rtx,
		GEN_INT (9),
		const1_rtx,
		GEN_INT (10),
		GEN_INT (2),
		GEN_INT (11),
		GEN_INT (3),
		GEN_INT (12),
		GEN_INT (4),
		GEN_INT (13),
		GEN_INT (5),
		GEN_INT (14),
		GEN_INT (6),
		GEN_INT (15),
		GEN_INT (7)))),
	GEN_INT (21845)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21784 */
rtx
gen_sse2_punpcklwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	gen_rtx_VEC_SELECT (V8HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	GEN_INT (85)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21803 */
rtx
gen_sse2_punpckldq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V4SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	GEN_INT (5)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21818 */
rtx
gen_sse2_punpcklqdq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	operand1,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21831 */
rtx
gen_sse2_punpckhqdq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	operand1,
	gen_rtx_VEC_SELECT (V2DImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21846 */
rtx
gen_sse2_movapd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	38));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21856 */
rtx
gen_sse2_movupd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	39));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21866 */
rtx
gen_sse2_movdqa (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	38));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21876 */
rtx
gen_sse2_movdqu (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	39));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21886 */
rtx
gen_sse2_movdq2q (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21909 */
rtx
gen_sse2_movq2dq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand1,
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21932 */
rtx
gen_sse2_movq (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21943 */
rtx
gen_sse2_loadd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx)),
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21957 */
rtx
gen_sse2_stored (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21967 */
rtx
gen_sse2_movhpd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand1,
	operand2,
	GEN_INT (2)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21978 */
rtx
gen_sse2_movlpd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand1,
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21999 */
rtx
gen_sse2_loadsd_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22010 */
rtx
gen_sse2_movsd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand1,
	operand2,
	const1_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22021 */
rtx
gen_sse2_storesd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22031 */
rtx
gen_sse2_shufpd (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	41));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22043 */
rtx
gen_sse2_clflush (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	57);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22087 */
rtx
gen_mwait (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	70);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22095 */
rtx
gen_monitor (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	69);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22106 */
rtx
gen_addsubv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	71));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22116 */
rtx
gen_addsubv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	71));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22126 */
rtx
gen_haddv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	72));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22136 */
rtx
gen_haddv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	72));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22146 */
rtx
gen_hsubv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	73));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22156 */
rtx
gen_hsubv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	73));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22166 */
rtx
gen_movshdup (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	74));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22175 */
rtx
gen_movsldup (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	75));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22184 */
rtx
gen_lddqu (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	76));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22193 */
rtx
gen_loadddup (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22201 */
rtx
gen_movddup (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:391 */
rtx
gen_cmpdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (DImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:404 */
rtx
gen_cmpsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (SImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:417 */
rtx
gen_cmphi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (HImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:430 */
rtx
gen_cmpqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (QImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:504 */
rtx
gen_cmpsi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:628 */
rtx
gen_cmpqi_ext_3 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	0),
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:691 */
rtx
gen_cmpxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:702 */
rtx
gen_cmptf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:713 */
rtx
gen_cmpdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:724 */
rtx
gen_cmpsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1027 */
rtx
gen_movsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1197 */
rtx
gen_movhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1328 */
rtx
gen_movstricthi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* Don't generate memory->memory moves, go through a register */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1358 */
rtx
gen_movqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1453 */
rtx
gen_reload_outqi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx op0, op1, op2;
  op0 = operands[0]; op1 = operands[1]; op2 = operands[2];

  if (reg_overlap_mentioned_p (op2, op0))
    abort ();
  if (! q_regs_operand (op1, QImode))
    {
      emit_insn (gen_movqi (op2, op1));
      op1 = op2;
    }
  emit_insn (gen_movqi (op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1486 */
rtx
gen_movstrictqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* Don't generate memory->memory moves, go through a register.  */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1715 */
rtx
gen_movdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1853 */
extern rtx gen_split_859 PARAMS ((rtx *));
rtx
gen_split_859 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1862 */
extern rtx gen_split_860 PARAMS ((rtx *));
rtx
gen_split_860 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:1997 */
rtx
gen_movsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2062 */
extern rtx gen_split_862 PARAMS ((rtx *));
rtx
gen_split_862 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = get_pool_constant (XEXP (operands[1], 0));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2075 */
extern rtx gen_split_863 PARAMS ((rtx *));
rtx
gen_split_863 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2171 */
rtx
gen_movdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2247 */
extern rtx gen_split_865 PARAMS ((rtx *));
rtx
gen_split_865 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2263 */
extern rtx gen_split_866 PARAMS ((rtx *));
rtx
gen_split_866 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2397 */
extern rtx gen_split_867 PARAMS ((rtx *));
rtx
gen_split_867 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2426 */
rtx
gen_movxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2432 */
rtx
gen_movtf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2561 */
extern rtx gen_split_870 PARAMS ((rtx *));
rtx
gen_split_870 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2572 */
extern rtx gen_split_871 PARAMS ((rtx *));
rtx
gen_split_871 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2579 */
extern rtx gen_split_872 PARAMS ((rtx *));
rtx
gen_split_872 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2782 */
extern rtx gen_split_873 PARAMS ((rtx *));
rtx
gen_split_873 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2797 */
extern rtx gen_split_874 PARAMS ((rtx *));
rtx
gen_split_874 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = get_pool_constant (XEXP (operands[1], 0));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2850 */
rtx
gen_zero_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    {
      operands[1] = force_reg (HImode, operands[1]);
      emit_insn (gen_zero_extendhisi2_and (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2872 */
extern rtx gen_split_876 PARAMS ((rtx *));
rtx
gen_split_876 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2889 */
rtx
gen_zero_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2924 */
extern rtx gen_split_878 PARAMS ((rtx *));
rtx
gen_split_878 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2936 */
extern rtx gen_split_879 PARAMS ((rtx *));
rtx
gen_split_879 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2949 */
extern rtx gen_split_880 PARAMS ((rtx *));
rtx
gen_split_880 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2959 */
rtx
gen_zero_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:2994 */
extern rtx gen_split_882 PARAMS ((rtx *));
rtx
gen_split_882 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3006 */
extern rtx gen_split_883 PARAMS ((rtx *));
rtx
gen_split_883 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3020 */
extern rtx gen_split_884 PARAMS ((rtx *));
rtx
gen_split_884 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3031 */
rtx
gen_zero_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (!TARGET_64BIT)
     {
       emit_insn (gen_zero_extendsidi2_32 (operands[0], operands[1]));
       DONE;
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3067 */
extern rtx gen_split_886 PARAMS ((rtx *));
rtx
gen_split_886 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3076 */
extern rtx gen_split_887 PARAMS ((rtx *));
rtx
gen_split_887 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3107 */
rtx
gen_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_extendsidi2_rex64 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3158 */
extern rtx gen_split_889 PARAMS ((rtx *));
rtx
gen_split_889 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	GEN_INT (31))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3173 */
extern rtx gen_split_890 PARAMS ((rtx *));
rtx
gen_split_890 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[1]) == 0
      && true_regnum (operands[2]) == 1
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[2], operands[1], GEN_INT (31)));
    }
  else
    {
      emit_move_insn (operands[2], operands[1]);
      emit_insn (gen_ashrsi3_31 (operands[2], operands[2], GEN_INT (31)));
    }
  emit_move_insn (operands[4], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3203 */
extern rtx gen_split_891 PARAMS ((rtx *));
rtx
gen_split_891 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  if (true_regnum (operands[3]) != true_regnum (operands[1]))
    emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[3]) == 0
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[4], operands[3], GEN_INT (31)));
      DONE;
    }

  if (true_regnum (operands[4]) != true_regnum (operands[1]))
    emit_move_insn (operands[4], operands[1]);

  emit_insn (gen_ashrsi3_31 (operands[4], operands[4], GEN_INT (31)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3339 */
extern rtx gen_split_892 PARAMS ((rtx *));
rtx
gen_split_892 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3359 */
extern rtx gen_split_893 PARAMS ((rtx *));
rtx
gen_split_893 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3372 */
extern rtx gen_split_894 PARAMS ((rtx *));
rtx
gen_split_894 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3392 */
extern rtx gen_split_895 PARAMS ((rtx *));
rtx
gen_split_895 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3405 */
extern rtx gen_split_896 PARAMS ((rtx *));
rtx
gen_split_896 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3419 */
rtx
gen_extendsfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3474 */
rtx
gen_extendsfxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3519 */
rtx
gen_extendsftf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3564 */
rtx
gen_extenddfxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (DFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3609 */
rtx
gen_extenddftf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (DFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3660 */
rtx
gen_truncdfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

   if (TARGET_80387)
     operands[2] = assign_386_stack_local (SFmode, 0);
   else
     {
	emit_insn (gen_truncdfsf2_sse_only (operands[0], operands[1]));
	DONE;
     }

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3766 */
extern rtx gen_split_903 PARAMS ((rtx *));
rtx
gen_split_903 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3775 */
extern rtx gen_split_904 PARAMS ((rtx *));
rtx
gen_split_904 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3785 */
extern rtx gen_split_905 PARAMS ((rtx *));
rtx
gen_split_905 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3795 */
rtx
gen_truncxfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (SFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3838 */
extern rtx gen_split_907 PARAMS ((rtx *));
rtx
gen_split_907 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3847 */
extern rtx gen_split_908 PARAMS ((rtx *));
rtx
gen_split_908 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3857 */
rtx
gen_trunctfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (SFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3900 */
extern rtx gen_split_910 PARAMS ((rtx *));
rtx
gen_split_910 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3909 */
extern rtx gen_split_911 PARAMS ((rtx *));
rtx
gen_split_911 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3920 */
rtx
gen_truncxfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (DFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3964 */
extern rtx gen_split_913 PARAMS ((rtx *));
rtx
gen_split_913 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3973 */
extern rtx gen_split_914 PARAMS ((rtx *));
rtx
gen_split_914 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:3983 */
rtx
gen_trunctfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (DFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4027 */
extern rtx gen_split_916 PARAMS ((rtx *));
rtx
gen_split_916 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4036 */
extern rtx gen_split_917 PARAMS ((rtx *));
rtx
gen_split_917 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4051 */
rtx
gen_fix_truncxfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4057 */
rtx
gen_fix_trunctfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4063 */
rtx
gen_fix_truncdfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT && TARGET_SSE2)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncdfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4078 */
rtx
gen_fix_truncsfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE && TARGET_64BIT)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncsfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4095 */
extern rtx gen_split_922 PARAMS ((rtx *));
rtx
gen_split_922 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, 0);
      emit_insn (gen_fix_truncdi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4144 */
extern rtx gen_split_923 PARAMS ((rtx *));
rtx
gen_split_923 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4159 */
extern rtx gen_split_924 PARAMS ((rtx *));
rtx
gen_split_924 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4190 */
rtx
gen_fix_truncxfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4196 */
rtx
gen_fix_trunctfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4202 */
rtx
gen_fix_truncdfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE2)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncdfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4217 */
rtx
gen_fix_truncsfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncsfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4234 */
extern rtx gen_split_929 PARAMS ((rtx *));
rtx
gen_split_929 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, 0);
      emit_insn (gen_fix_truncsi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4296 */
extern rtx gen_split_930 PARAMS ((rtx *));
rtx
gen_split_930 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4309 */
extern rtx gen_split_931 PARAMS ((rtx *));
rtx
gen_split_931 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4323 */
rtx
gen_fix_truncxfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4329 */
rtx
gen_fix_trunctfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4335 */
rtx
gen_fix_truncdfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4341 */
rtx
gen_fix_truncsfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4349 */
extern rtx gen_split_936 PARAMS ((rtx *));
rtx
gen_split_936 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, 0);
      emit_insn (gen_fix_trunchi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4396 */
extern rtx gen_split_937 PARAMS ((rtx *));
rtx
gen_split_937 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4408 */
extern rtx gen_split_938 PARAMS ((rtx *));
rtx
gen_split_938 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand4)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4460 */
rtx
gen_floatsisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4487 */
rtx
gen_floatdisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4536 */
rtx
gen_floatsidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4563 */
rtx
gen_floatdidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4668 */
extern rtx gen_split_943 PARAMS ((rtx *));
rtx
gen_split_943 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], operands[2]));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4688 */
rtx
gen_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4704 */
extern rtx gen_split_945 PARAMS ((rtx *));
rtx
gen_split_945 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	27)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4798 */
rtx
gen_addsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4841 */
extern rtx gen_split_947 PARAMS ((rtx *));
rtx
gen_split_947 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_PLUS (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4893 */
extern rtx gen_split_948 PARAMS ((rtx *));
rtx
gen_split_948 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:4942 */
extern rtx gen_split_949 PARAMS ((rtx *));
rtx
gen_split_949 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
  pat = gen_rtx_PLUS (Pmode,
  		      gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1],
		      					 operands[2]),
				    operands[3]),
  		      operands[4]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:5320 */
extern rtx gen_split_950 PARAMS ((rtx *));
rtx
gen_split_950 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  /* In -fPIC mode the constructs like (const (unspec [symbol_ref]))
     may confuse gen_lowpart.  */
  if (GET_MODE (operands[0]) != Pmode)
    {
      operands[1] = gen_lowpart (Pmode, operands[1]);
      operands[2] = gen_lowpart (Pmode, operands[2]);
    }
  operands[0] = gen_lowpart (SImode, operands[0]);
  pat = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:5400 */
extern rtx gen_split_951 PARAMS ((rtx *));
rtx
gen_split_951 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:5688 */
rtx
gen_addhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:5933 */
rtx
gen_addqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6310 */
rtx
gen_addxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6317 */
rtx
gen_addtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6324 */
rtx
gen_adddf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6331 */
rtx
gen_addsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6342 */
rtx
gen_subdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6358 */
extern rtx gen_split_959 PARAMS ((rtx *));
rtx
gen_split_959 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6452 */
rtx
gen_subsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6537 */
rtx
gen_subhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6581 */
rtx
gen_subqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6638 */
rtx
gen_subxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (XFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6645 */
rtx
gen_subtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6652 */
rtx
gen_subdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6659 */
rtx
gen_subsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6691 */
rtx
gen_mulsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6753 */
rtx
gen_mulhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6777 */
rtx
gen_mulqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6797 */
rtx
gen_umulqihi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6819 */
rtx
gen_mulqihi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6863 */
rtx
gen_umulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6908 */
rtx
gen_mulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:6963 */
rtx
gen_umulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7046 */
rtx
gen_smulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7097 */
rtx
gen_mulxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7104 */
rtx
gen_multf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7111 */
rtx
gen_muldf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7118 */
rtx
gen_mulsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7151 */
rtx
gen_divxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (XFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7158 */
rtx
gen_divtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (TFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7165 */
rtx
gen_divdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7172 */
rtx
gen_divsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7266 */
rtx
gen_divmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7315 */
extern rtx gen_split_985 PARAMS ((rtx *));
rtx
gen_split_985 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      if (true_regnum (operands[1]))
	abort();
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand4,
	GEN_INT (31))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7434 */
extern rtx gen_split_986 PARAMS ((rtx *));
rtx
gen_split_986 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7451 */
rtx
gen_udivmodhi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
operands[4] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7533 */
rtx
gen_testsi_ccno_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7554 */
rtx
gen_testqi_ccz_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7583 */
rtx
gen_testqi_ext_ccno_0 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1),
	const0_rtx));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7699 */
extern rtx gen_split_991 PARAMS ((rtx *));
rtx
gen_split_991 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT len = INTVAL (operands[1]);
  HOST_WIDE_INT pos = INTVAL (operands[2]);
  HOST_WIDE_INT mask;
  enum machine_mode mode, submode;

  mode = GET_MODE (operands[0]);
  if (GET_CODE (operands[0]) == MEM)
    {
      /* ??? Combine likes to put non-volatile mem extractions in QImode
	 no matter the size of the test.  So find a mode that works.  */
      if (! MEM_VOLATILE_P (operands[0]))
	{
	  mode = smallest_mode_for_size (pos + len, MODE_INT);
	  operands[0] = adjust_address (operands[0], mode, 0);
	}
    }
  else if (GET_CODE (operands[0]) == SUBREG
	   && (submode = GET_MODE (SUBREG_REG (operands[0])),
	       GET_MODE_BITSIZE (mode) > GET_MODE_BITSIZE (submode))
	   && pos + len <= GET_MODE_BITSIZE (submode))
    {
      /* Narrow a paradoxical subreg to prevent partial register stalls.  */
      mode = submode;
      operands[0] = SUBREG_REG (operands[0]);
    }
  else if (mode == HImode && pos + len <= 8)
    {
      /* Small HImode tests can be converted to QImode.  */
      mode = QImode;
      operands[0] = gen_lowpart (QImode, operands[0]);
    }

  mask  = ((HOST_WIDE_INT)1 << (pos + len)) - 1;
  mask &= ~(((HOST_WIDE_INT)1 << pos) - 1);

  operands[3] = gen_rtx_AND (mode, operands[0], gen_int_mode (mask, mode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	operand3,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7752 */
extern rtx gen_split_992 PARAMS ((rtx *));
rtx
gen_split_992 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_int_mode (INTVAL (operands[1]) >> 8, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7773 */
extern rtx gen_split_993 PARAMS ((rtx *));
rtx
gen_split_993 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7865 */
rtx
gen_andsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7912 */
extern rtx gen_split_995 PARAMS ((rtx *));
rtx
gen_split_995 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7921 */
extern rtx gen_split_996 PARAMS ((rtx *));
rtx
gen_split_996 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7930 */
extern rtx gen_split_997 PARAMS ((rtx *));
rtx
gen_split_997 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:7988 */
rtx
gen_andhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8036 */
rtx
gen_andqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8217 */
extern rtx gen_split_1000 PARAMS ((rtx *));
rtx
gen_split_1000 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8238 */
extern rtx gen_split_1001 PARAMS ((rtx *));
rtx
gen_split_1001 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8309 */
rtx
gen_iorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8402 */
rtx
gen_iorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8445 */
rtx
gen_iorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8590 */
extern rtx gen_split_1005 PARAMS ((rtx *));
rtx
gen_split_1005 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8611 */
extern rtx gen_split_1006 PARAMS ((rtx *));
rtx
gen_split_1006 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8685 */
rtx
gen_xorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8779 */
rtx
gen_xorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:8822 */
rtx
gen_xorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9011 */
rtx
gen_xorqi_cc_ext_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9031 */
extern rtx gen_split_1011 PARAMS ((rtx *));
rtx
gen_split_1011 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9052 */
extern rtx gen_split_1012 PARAMS ((rtx *));
rtx
gen_split_1012 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9073 */
rtx
gen_negdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9088 */
extern rtx gen_split_1014 PARAMS ((rtx *));
rtx
gen_split_1014 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
split_di (operands+1, 1, operands+2, operands+3);
   split_di (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (SImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (SImode,
	copy_rtx (operand1))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9135 */
rtx
gen_negsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9195 */
rtx
gen_neghi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9222 */
rtx
gen_negqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9251 */
rtx
gen_negsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_negsf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (SFmode);
	  rtx dest = operands[0];

	  operands[1] = force_reg (SFmode, operands[1]);
	  operands[0] = force_reg (SFmode, operands[0]);
	  emit_move_insn (reg,
			  gen_lowpart (SFmode,
				       gen_int_mode (0x80000000, SImode)));
	  emit_insn (gen_negsf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (NEG, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9300 */
extern rtx gen_split_1019 PARAMS ((rtx *));
rtx
gen_split_1019 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9310 */
extern rtx gen_split_1020 PARAMS ((rtx *));
rtx
gen_split_1020 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9320 */
extern rtx gen_split_1021 PARAMS ((rtx *));
rtx
gen_split_1021 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  if (operands_match_p (operands[0], operands[2]))
    {
      rtx tmp;
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9351 */
extern rtx gen_split_1022 PARAMS ((rtx *));
rtx
gen_split_1022 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9360 */
extern rtx gen_split_1023 PARAMS ((rtx *));
rtx
gen_split_1023 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_int_mode (0x80000000, SImode);
   operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9370 */
extern rtx gen_split_1024 PARAMS ((rtx *));
rtx
gen_split_1024 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  int size = GET_MODE_SIZE (GET_MODE (operands[1]));

  /* XFmode's size is 12, TFmode 16, but only 10 bytes are used.  */
  if (size >= 12)
    size = 10;
  operands[0] = adjust_address (operands[0], QImode, size - 1);
  operands[1] = gen_int_mode (0x80, QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9387 */
rtx
gen_negdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE2)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_negdf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (DFmode);
#if HOST_BITS_PER_WIDE_INT >= 64
	  rtx imm = gen_int_mode (((HOST_WIDE_INT)1) << 63, DImode);
#else
	  rtx imm = immed_double_const (0, 0x80000000, DImode);
#endif
	  rtx dest = operands[0];

	  operands[1] = force_reg (DFmode, operands[1]);
	  operands[0] = force_reg (DFmode, operands[0]);
	  emit_move_insn (reg, gen_lowpart (DFmode, imm));
	  emit_insn (gen_negdf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (NEG, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9450 */
extern rtx gen_split_1026 PARAMS ((rtx *));
rtx
gen_split_1026 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9460 */
extern rtx gen_split_1027 PARAMS ((rtx *));
rtx
gen_split_1027 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9484 */
extern rtx gen_split_1028 PARAMS ((rtx *));
rtx
gen_split_1028 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  if (operands_match_p (operands[0], operands[2]))
    {
      rtx tmp;
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9526 */
extern rtx gen_split_1029 PARAMS ((rtx *));
rtx
gen_split_1029 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9535 */
extern rtx gen_split_1030 PARAMS ((rtx *));
rtx
gen_split_1030 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[4] = gen_int_mode (0x80000000, SImode);
   split_di (operands+0, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9545 */
rtx
gen_negxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9552 */
rtx
gen_negtf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9570 */
extern rtx gen_split_1033 PARAMS ((rtx *));
rtx
gen_split_1033 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9579 */
extern rtx gen_split_1034 PARAMS ((rtx *));
rtx
gen_split_1034 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9600 */
extern rtx gen_split_1035 PARAMS ((rtx *));
rtx
gen_split_1035 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9609 */
extern rtx gen_split_1036 PARAMS ((rtx *));
rtx
gen_split_1036 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9711 */
rtx
gen_abssf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_abssf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (SFmode);
	  rtx dest = operands[0];

	  operands[1] = force_reg (SFmode, operands[1]);
	  operands[0] = force_reg (SFmode, operands[0]);
	  emit_move_insn (reg,
			  gen_lowpart (SFmode,
				       gen_int_mode (0x80000000, SImode)));
	  emit_insn (gen_abssf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (ABS, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9760 */
extern rtx gen_split_1038 PARAMS ((rtx *));
rtx
gen_split_1038 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9770 */
extern rtx gen_split_1039 PARAMS ((rtx *));
rtx
gen_split_1039 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9780 */
extern rtx gen_split_1040 PARAMS ((rtx *));
rtx
gen_split_1040 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)),
	gen_rtx_SUBREG (TImode,
	operand1,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9800 */
extern rtx gen_split_1041 PARAMS ((rtx *));
rtx
gen_split_1041 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9809 */
extern rtx gen_split_1042 PARAMS ((rtx *));
rtx
gen_split_1042 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_int_mode (~0x80000000, SImode);
   operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9819 */
extern rtx gen_split_1043 PARAMS ((rtx *));
rtx
gen_split_1043 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  int size = GET_MODE_SIZE (GET_MODE (operands[1]));

  /* XFmode's size is 12, TFmode 16, but only 10 bytes are used.  */
  if (size >= 12)
    size = 10;
  operands[0] = adjust_address (operands[0], QImode, size - 1);
  operands[1] = gen_int_mode (~0x80, QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9836 */
rtx
gen_absdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE2)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_absdf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (DFmode);
#if HOST_BITS_PER_WIDE_INT >= 64
	  rtx imm = gen_int_mode (((HOST_WIDE_INT)1) << 63, DImode);
#else
	  rtx imm = immed_double_const (0, 0x80000000, DImode);
#endif
	  rtx dest = operands[0];

	  operands[1] = force_reg (DFmode, operands[1]);
	  operands[0] = force_reg (DFmode, operands[0]);
	  emit_move_insn (reg, gen_lowpart (DFmode, imm));
	  emit_insn (gen_absdf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (ABS, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9899 */
extern rtx gen_split_1045 PARAMS ((rtx *));
rtx
gen_split_1045 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9909 */
extern rtx gen_split_1046 PARAMS ((rtx *));
rtx
gen_split_1046 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9919 */
extern rtx gen_split_1047 PARAMS ((rtx *));
rtx
gen_split_1047 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)),
	gen_rtx_SUBREG (TImode,
	operand1,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9953 */
extern rtx gen_split_1048 PARAMS ((rtx *));
rtx
gen_split_1048 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9962 */
extern rtx gen_split_1049 PARAMS ((rtx *));
rtx
gen_split_1049 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[4] = gen_int_mode (~0x80000000, SImode);
   split_di (operands+0, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	copy_rtx (operand3),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9972 */
rtx
gen_absxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (ABS, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9979 */
rtx
gen_abstf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (ABS, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:9997 */
extern rtx gen_split_1052 PARAMS ((rtx *));
rtx
gen_split_1052 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10006 */
extern rtx gen_split_1053 PARAMS ((rtx *));
rtx
gen_split_1053 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (~0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10024 */
extern rtx gen_split_1054 PARAMS ((rtx *));
rtx
gen_split_1054 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10033 */
extern rtx gen_split_1055 PARAMS ((rtx *));
rtx
gen_split_1055 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (~0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10163 */
rtx
gen_one_cmplsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10198 */
extern rtx gen_split_1057 PARAMS ((rtx *));
rtx
gen_split_1057 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10225 */
extern rtx gen_split_1058 PARAMS ((rtx *));
rtx
gen_split_1058 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	constm1_rtx))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10239 */
rtx
gen_one_cmplhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10265 */
extern rtx gen_split_1060 PARAMS ((rtx *));
rtx
gen_split_1060 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10280 */
rtx
gen_one_cmplqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10308 */
extern rtx gen_split_1062 PARAMS ((rtx *));
rtx
gen_split_1062 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10346 */
rtx
gen_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashldi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10483 */
extern rtx gen_split_1064 PARAMS ((rtx *));
rtx
gen_split_1064 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashldi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10493 */
extern rtx gen_split_1065 PARAMS ((rtx *));
rtx
gen_split_1065 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashldi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10520 */
rtx
gen_x86_shift_adj_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	GEN_INT (32)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10536 */
rtx
gen_x86_shift_adj_2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_move_insn (operands[1], const0_rtx);

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10564 */
rtx
gen_ashlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10615 */
extern rtx gen_split_1069 PARAMS ((rtx *));
rtx
gen_split_1069 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);
  pat = gen_rtx_MULT (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10636 */
extern rtx gen_split_1070 PARAMS ((rtx *));
rtx
gen_split_1070 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat, clob;
  emit_move_insn (operands[1], operands[0]);
  pat = gen_rtx_SET (VOIDmode, operands[0],
		     gen_rtx_ASHIFT (GET_MODE (operands[0]),
				     operands[0], operands[2]));
  clob = gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (CCmode, FLAGS_REG));
  emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2, pat, clob)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10695 */
extern rtx gen_split_1071 PARAMS ((rtx *));
rtx
gen_split_1071 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10788 */
rtx
gen_ashlhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:10914 */
rtx
gen_ashlqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11080 */
rtx
gen_ashrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashrdi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFTRT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11196 */
extern rtx gen_split_1075 PARAMS ((rtx *));
rtx
gen_split_1075 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashrdi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11206 */
extern rtx gen_split_1076 PARAMS ((rtx *));
rtx
gen_split_1076 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashrdi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11232 */
rtx
gen_x86_shift_adj_3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_insn (gen_ashrsi3_31 (operands[1], operands[1], GEN_INT (31)));

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11293 */
rtx
gen_ashrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11417 */
rtx
gen_ashrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11489 */
rtx
gen_ashrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11593 */
rtx
gen_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_lshrdi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (LSHIFTRT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11692 */
extern rtx gen_split_1082 PARAMS ((rtx *));
rtx
gen_split_1082 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_lshrdi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11702 */
extern rtx gen_split_1083 PARAMS ((rtx *));
rtx
gen_split_1083 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_lshrdi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11711 */
rtx
gen_lshrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11836 */
rtx
gen_lshrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:11908 */
rtx
gen_lshrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12043 */
rtx
gen_rotlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12102 */
rtx
gen_rotlhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12136 */
rtx
gen_rotlqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12231 */
rtx
gen_rotrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12293 */
rtx
gen_rotrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12327 */
rtx
gen_rotrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12390 */
rtx
gen_extv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12407 */
rtx
gen_extzv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12424 */
rtx
gen_insv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[1]) != 8 || INTVAL (operands[2]) != 8)
    FAIL;

  /* From mips.md: insert_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[0], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12452 */
rtx
gen_seq (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (EQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12458 */
rtx
gen_sne (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (NE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12464 */
rtx
gen_sgt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12470 */
rtx
gen_sgtu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12476 */
rtx
gen_slt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12482 */
rtx
gen_sltu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12488 */
rtx
gen_sge (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12494 */
rtx
gen_sgeu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12500 */
rtx
gen_sle (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12506 */
rtx
gen_sleu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12512 */
rtx
gen_sunordered (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12518 */
rtx
gen_sordered (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (ORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12524 */
rtx
gen_suneq (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNEQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12530 */
rtx
gen_sunge (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNGE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12536 */
rtx
gen_sungt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12542 */
rtx
gen_sunle (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNLE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12548 */
rtx
gen_sunlt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNLT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12554 */
rtx
gen_sltgt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LTGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12586 */
extern rtx gen_split_1114 PARAMS ((rtx *));
rtx
gen_split_1114 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12597 */
extern rtx gen_split_1115 PARAMS ((rtx *));
rtx
gen_split_1115 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12608 */
extern rtx gen_split_1116 PARAMS ((rtx *));
rtx
gen_split_1116 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, REVERSE_CONDITION (GET_CODE (new_op1),
					GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12628 */
extern rtx gen_split_1117 PARAMS ((rtx *));
rtx
gen_split_1117 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, REVERSE_CONDITION (GET_CODE (new_op1),
					GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12682 */
rtx
gen_beq (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (EQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12690 */
rtx
gen_bne (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (NE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12698 */
rtx
gen_bgt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12706 */
rtx
gen_bgtu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12714 */
rtx
gen_blt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12722 */
rtx
gen_bltu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12730 */
rtx
gen_bge (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12738 */
rtx
gen_bgeu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12746 */
rtx
gen_ble (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12754 */
rtx
gen_bleu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12762 */
rtx
gen_bunordered (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12770 */
rtx
gen_bordered (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (ORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12778 */
rtx
gen_buneq (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNEQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12786 */
rtx
gen_bunge (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNGE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12794 */
rtx
gen_bungt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12802 */
rtx
gen_bunle (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNLE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12810 */
rtx
gen_bunlt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNLT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12818 */
rtx
gen_bltgt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LTGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12870 */
extern rtx gen_split_1136 PARAMS ((rtx *));
rtx
gen_split_1136 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[0], VOIDmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:12886 */
extern rtx gen_split_1137 PARAMS ((rtx *));
rtx
gen_split_1137 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op0 = copy_rtx (operands[0]);
  operands[0] = new_op0;
  PUT_MODE (new_op0, VOIDmode);
  PUT_CODE (new_op0, REVERSE_CONDITION (GET_CODE (new_op0),
					GET_MODE (XEXP (new_op0, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op0, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13075 */
extern rtx gen_split_1138 PARAMS ((rtx *));
rtx
gen_split_1138 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
			operands[3], operands[4], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13092 */
extern rtx gen_split_1139 PARAMS ((rtx *));
rtx
gen_split_1139 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
			operands[3], operands[4], operands[5]);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand6,
	operand3,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13130 */
rtx
gen_indirect_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13149 */
rtx
gen_tablejump (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* In PIC mode, the table entries are stored GOT (32-bit) or PC (64-bit)
     relative.  Convert the relative address to an absolute address.  */
  if (flag_pic)
    {
      rtx op0, op1;
      enum rtx_code code;

      if (TARGET_64BIT)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = gen_rtx_LABEL_REF (Pmode, operands[1]);
	}
      else if (TARGET_MACHO || HAVE_AS_GOTOFF_IN_DATA)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = pic_offset_table_rtx;
	}
      else
	{
	  code = MINUS;
	  op0 = pic_offset_table_rtx;
	  op1 = operands[0];
	}

      operands[0] = expand_simple_binop (Pmode, code, op0, op1, NULL_RTX, 0,
					 OPTAB_DIRECT);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13206 */
rtx
gen_doloop_end (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
                                 
{
  /* Only use cloop on innermost loops.  */
  if (INTVAL (operands[3]) > 1)
    FAIL;
  if (GET_MODE (operands[0]) != SImode)
    FAIL;
  emit_jump_insn (gen_doloop_end_internal (operands[4], operands[0],
					   operands[0]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13258 */
extern rtx gen_split_1143 PARAMS ((rtx *));
rtx
gen_split_1143 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand0,
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13281 */
extern rtx gen_split_1144 PARAMS ((rtx *));
rtx
gen_split_1144 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand3),
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	copy_rtx (operand3)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand0,
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13309 */
extern rtx gen_peephole2_1145 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1145 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), 17);
  operands[5] = gen_rtx_REG (QImode, REGNO (operands[3]));
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13330 */
extern rtx gen_peephole2_1146 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1146 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), 17);
  operands[5] = gen_rtx_REG (QImode, REGNO (operands[3]));
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13358 */
rtx
gen_call_pop (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13405 */
rtx
gen_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13467 */
rtx
gen_call_value_pop (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
{
  ix86_expand_call (operands[0], operands[1], operands[2],
		    operands[3], operands[4]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand4)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13481 */
rtx
gen_call_value (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13495 */
rtx
gen_untyped_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int i;

  /* In order to give reg-stack an easier job in validating two
     coprocessor registers as containing a possible return value,
     simply pretend the untyped call returns a complex long double
     value.  */

  ix86_expand_call ((TARGET_FLOAT_RETURNS_IN_80387
		     ? gen_rtx_REG (XCmode, FIRST_FLOAT_REG) : NULL),
		    operands[0], const0_rtx, GEN_INT (SSE_REGPARM_MAX - 1),
		    NULL);

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage (const0_rtx));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13544 */
rtx
gen_return ()
{
  rtx _val = 0;
  start_sequence ();
  {
{
  if (current_function_pops_args)
    {
      rtx popc = GEN_INT (current_function_pops_args);
      emit_jump_insn (gen_return_pop_internal (popc));
      DONE;
    }
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13590 */
rtx
gen_prologue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_prologue (); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13604 */
rtx
gen_epilogue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_epilogue (1); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13609 */
rtx
gen_sibcall_epilogue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_epilogue (0); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13614 */
rtx
gen_eh_return (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  rtx tmp, sa = EH_RETURN_STACKADJ_RTX, ra = operands[0];

  /* Tricky bit: we write the address of the handler to which we will
     be returning into someone else's stack frame, one word below the
     stack address we wish to restore.  */
  tmp = gen_rtx_PLUS (Pmode, arg_pointer_rtx, sa);
  tmp = plus_constant (tmp, -UNITS_PER_WORD);
  tmp = gen_rtx_MEM (Pmode, tmp);
  emit_move_insn (tmp, ra);

  if (Pmode == SImode)
    emit_insn (gen_eh_return_si (sa));
  else
    emit_insn (gen_eh_return_di (sa));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13636 */
extern rtx gen_split_1157 PARAMS ((rtx *));
rtx
gen_split_1157 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13645 */
extern rtx gen_split_1158 PARAMS ((rtx *));
rtx
gen_split_1158 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13678 */
rtx
gen_ffssi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx out = gen_reg_rtx (SImode), tmp = gen_reg_rtx (SImode);
  rtx in = operands[1];

  if (TARGET_CMOVE)
    {
      emit_move_insn (tmp, constm1_rtx);
      emit_insn (gen_ffssi_1 (out, in));
      emit_insn (gen_rtx_SET (VOIDmode, out,
		  gen_rtx_IF_THEN_ELSE (SImode, 
		    gen_rtx_EQ (VOIDmode, gen_rtx_REG (CCZmode, FLAGS_REG),
				const0_rtx),
		    tmp,
		    out)));
      emit_insn (gen_addsi3 (out, out, const1_rtx));
      emit_move_insn (operands[0], out);
    }

  /* Pentium bsf instruction is extremly slow.  The following code is
     recommended by the Intel Optimizing Manual as a reasonable replacement:
           TEST    EAX,EAX
	   JZ      SHORT BS2
	   XOR     ECX,ECX
	   MOV     DWORD PTR [TEMP+4],ECX
	   SUB     ECX,EAX
	   AND     EAX,ECX
	   MOV     DWORD PTR [TEMP],EAX
	   FILD    QWORD PTR [TEMP]
	   FSTP    QWORD PTR [TEMP]
	   WAIT    ; WAIT only needed for compatibility with
	           ; earlier processors
	   MOV     ECX, DWORD PTR [TEMP+4]
	   SHR     ECX,20
	   SUB     ECX,3FFH
	   TEST    EAX,EAX       ; clear zero flag
       BS2:
     Following piece of code expand ffs to similar beast.
       */

  else if (TARGET_PENTIUM && !optimize_size && TARGET_80387)
    {
      rtx label = gen_label_rtx ();
      rtx lo, hi;
      rtx mem = assign_386_stack_local (DImode, 0);
      rtx fptmp = gen_reg_rtx (DFmode);
      split_di (&mem, 1, &lo, &hi);

      emit_move_insn (out, const0_rtx);

      emit_cmp_and_jump_insns (in, const0_rtx, EQ, 0, SImode, 1, label);

      emit_move_insn (hi, out);
      emit_insn (gen_subsi3 (out, out, in));
      emit_insn (gen_andsi3 (out, out, in));
      emit_move_insn (lo, out);
      emit_insn (gen_floatdidf2 (fptmp,mem));
      emit_move_insn (gen_rtx_MEM (DFmode, XEXP (mem, 0)), fptmp);
      emit_move_insn (out, hi);
      emit_insn (gen_lshrsi3 (out, out, GEN_INT (20)));
      emit_insn (gen_subsi3 (out, out, GEN_INT (0x3ff - 1)));

      emit_label (label);
      LABEL_NUSES (label) = 1;

      emit_move_insn (operands[0], out);
    }
  else
    {
      emit_move_insn (tmp, const0_rtx);
      emit_insn (gen_ffssi_1 (out, in));
      emit_insn (gen_rtx_SET (VOIDmode, 
		  gen_rtx_STRICT_LOW_PART (VOIDmode, gen_lowpart (QImode, tmp)),
		  gen_rtx_EQ (QImode, gen_rtx_REG (CCZmode, FLAGS_REG),
			      const0_rtx)));
      emit_insn (gen_negsi2 (tmp, tmp));
      emit_insn (gen_iorsi3 (out, out, tmp));
      emit_insn (gen_addsi3 (out, out, const1_rtx));
      emit_move_insn (operands[0], out);
    }
  DONE;  
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13812 */
rtx
gen_tls_global_dynamic_32 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx operand3;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (flag_pic)
    operands[2] = pic_offset_table_rtx;
  else
    {
      operands[2] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[2]));
    }
  operands[3] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	16)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13845 */
rtx
gen_tls_global_dynamic_64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand2),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	16))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13882 */
rtx
gen_tls_local_dynamic_base_32 (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
{
  if (flag_pic)
    operands[1] = pic_offset_table_rtx;
  else
    {
      operands[1] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[1]));
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13911 */
rtx
gen_tls_local_dynamic_base_64 (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
{
  operands[1] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:13923 */
extern rtx gen_split_1164 PARAMS ((rtx *));
rtx
gen_split_1164 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand3,
		operand2),
	16)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14548 */
extern rtx gen_split_1165 PARAMS ((rtx *));
rtx
gen_split_1165 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14568 */
extern rtx gen_split_1166 PARAMS ((rtx *));
rtx
gen_split_1166 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14590 */
rtx
gen_sqrtsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!TARGET_SSE_MATH)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14630 */
rtx
gen_sqrtdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!TARGET_SSE2 || !TARGET_SSE_MATH)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14844 */
rtx
gen_movstrsi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_movstr (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14895 */
rtx
gen_strmovsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovsi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovsi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14942 */
rtx
gen_strmovhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovhi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovhi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:14989 */
rtx
gen_strmovqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovqi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovqi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (QImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (QImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15244 */
rtx
gen_clrstrsi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
 if (ix86_expand_clrstr (operands[0], operands[1], operands[2]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15285 */
rtx
gen_strsetsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsetsi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetsi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15318 */
rtx
gen_strsethi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsethi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsethi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15351 */
rtx
gen_strsetqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsetqi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetqi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15563 */
rtx
gen_cmpstrsi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
{
  rtx addr1, addr2, out, outlow, count, countreg, align;

  out = operands[0];
  if (GET_CODE (out) != REG)
    out = gen_reg_rtx (SImode);

  addr1 = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  addr2 = copy_to_mode_reg (Pmode, XEXP (operands[2], 0));
  
  count = operands[3];
  countreg = ix86_zero_extend_to_Pmode (count);

  /* %%% Iff we are testing strict equality, we can use known alignment
     to good advantage.  This may be possible with combine, particularly
     once cc0 is dead.  */
  align = operands[4];

  emit_insn (gen_cld ());
  if (GET_CODE (count) == CONST_INT)
    {
      if (INTVAL (count) == 0)
	{
	  emit_move_insn (operands[0], const0_rtx);
	  DONE;
	}
      if (TARGET_64BIT)
	emit_insn (gen_cmpstrqi_nz_rex_1 (addr1, addr2, countreg, align,
					  addr1, addr2, countreg));
      else
	emit_insn (gen_cmpstrqi_nz_1 (addr1, addr2, countreg, align,
				      addr1, addr2, countreg));
    }
  else
    {
      if (TARGET_64BIT)
	{
	  emit_insn (gen_cmpdi_1_rex64 (countreg, countreg));
	  emit_insn (gen_cmpstrqi_rex_1 (addr1, addr2, countreg, align,
					 addr1, addr2, countreg));
	}
      else
	{
	  emit_insn (gen_cmpsi_1 (countreg, countreg));
	  emit_insn (gen_cmpstrqi_1 (addr1, addr2, countreg, align,
				     addr1, addr2, countreg));
	}
    }

  outlow = gen_lowpart (QImode, out);
  emit_insn (gen_cmpintqi (outlow));
  emit_move_insn (out, gen_rtx_SIGN_EXTEND (SImode, outlow));

  if (operands[0] != out)
    emit_move_insn (operands[0], out);

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15631 */
rtx
gen_cmpintqi (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
operands[1] = gen_reg_rtx (QImode);
   operands[2] = gen_reg_rtx (QImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15719 */
rtx
gen_strlensi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15732 */
rtx
gen_strlendi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15789 */
extern rtx gen_peephole2_1181 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1181 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15821 */
extern rtx gen_peephole2_1182 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1182 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15901 */
rtx
gen_movsicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15944 */
rtx
gen_movhicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15966 */
rtx
gen_movsfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:15990 */
rtx
gen_movdfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16030 */
extern rtx gen_split_1187 PARAMS ((rtx *));
rtx
gen_split_1187 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
split_di (operands+2, 1, operands+5, operands+6);
   split_di (operands+3, 1, operands+7, operands+8);
   split_di (operands, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand5,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		const0_rtx),
	operand6,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16049 */
rtx
gen_movxfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (XFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16057 */
rtx
gen_movtfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (TFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16091 */
rtx
gen_minsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16123 */
extern rtx gen_split_1191 PARAMS ((rtx *));
rtx
gen_split_1191 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16143 */
extern rtx gen_split_1192 PARAMS ((rtx *));
rtx
gen_split_1192 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GE (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16174 */
rtx
gen_mindf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16206 */
extern rtx gen_split_1194 PARAMS ((rtx *));
rtx
gen_split_1194 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16225 */
extern rtx gen_split_1195 PARAMS ((rtx *));
rtx
gen_split_1195 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GE (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16256 */
rtx
gen_maxsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16288 */
extern rtx gen_split_1197 PARAMS ((rtx *));
rtx
gen_split_1197 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16306 */
extern rtx gen_split_1198 PARAMS ((rtx *));
rtx
gen_split_1198 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16337 */
rtx
gen_maxdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16369 */
extern rtx gen_split_1200 PARAMS ((rtx *));
rtx
gen_split_1200 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16387 */
extern rtx gen_split_1201 PARAMS ((rtx *));
rtx
gen_split_1201 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16429 */
rtx
gen_pro_epilogue_adjust_stack (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_pro_epilogue_adjust_stack_rex64
		 (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16591 */
extern rtx gen_split_1203 PARAMS ((rtx *));
rtx
gen_split_1203 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
   ix86_compare_op0 = operands[5];
   ix86_compare_op1 = operands[4];
   operands[1] = gen_rtx_fmt_ee (swap_condition (GET_CODE (operands[1])),
				 VOIDmode, operands[5], operands[4]);
   ix86_expand_fp_movcc (operands);
   DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16617 */
extern rtx gen_split_1204 PARAMS ((rtx *));
rtx
gen_split_1204 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  /* If op2 == op3, op3 will be clobbered before it is used.
     This should be optimized out though.  */
  if (operands_match_p (operands[2], operands[3]))
    abort ();
  PUT_MODE (operands[1], GET_MODE (operands[0]));
  if (operands_match_p (operands[0], operands[4]))
    operands[6] = operands[4], operands[7] = operands[2];
  else
    operands[6] = operands[2], operands[7] = operands[4];
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand2),
	0),
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0)),
	gen_rtx_SUBREG (TImode,
	operand3,
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_IOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand6,
	0),
	gen_rtx_SUBREG (TImode,
	operand7,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16729 */
extern rtx gen_split_1205 PARAMS ((rtx *));
rtx
gen_split_1205 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], GET_MODE (operands[0]));
  if (!sse_comparison_operator (operands[1], VOIDmode)
      || !rtx_equal_p (operands[0], operands[4]))
    {
      rtx tmp = operands[5];
      operands[5] = operands[4];
      operands[4] = tmp;
      PUT_CODE (operands[1], swap_condition (GET_CODE (operands[1])));
    }
  if (!rtx_equal_p (operands[0], operands[4]))
    abort ();
  if (const0_operand (operands[2], GET_MODE (operands[0])))
    {
      operands[7] = operands[3];
      operands[6] = gen_rtx_NOT (TImode, gen_rtx_SUBREG (TImode, operands[0],
							 0));
    }
  else
    {
      operands[7] = operands[2];
      operands[6] = gen_rtx_SUBREG (TImode, operands[0], 0);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand0),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand0),
	0),
	gen_rtx_AND (TImode,
	operand6,
	gen_rtx_SUBREG (TImode,
	operand7,
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16767 */
rtx
gen_allocate_stack_worker (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  if (TARGET_64BIT)
    emit_insn (gen_allocate_stack_worker_rex64 (operands[0]));
  else
    emit_insn (gen_allocate_stack_worker_1 (operands[0]));
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16798 */
rtx
gen_allocate_stack (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
#ifdef CHECK_STACK_LIMIT
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < CHECK_STACK_LIMIT)
    emit_insn (gen_subsi3 (stack_pointer_rtx, stack_pointer_rtx,
			   operands[1]));
  else 
#endif
    emit_insn (gen_allocate_stack_worker (copy_to_mode_reg (SImode,
							    operands[1])));

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16822 */
rtx
gen_builtin_setjmp_receiver (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  emit_insn (gen_set_got (pic_offset_table_rtx));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16832 */
extern rtx gen_split_1209 PARAMS ((rtx *));
rtx
gen_split_1209 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   if (GET_CODE (operands[3]) != ASHIFT)
     operands[2] = gen_lowpart (SImode, operands[2]);
   PUT_MODE (operands[3], SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16858 */
extern rtx gen_split_1210 PARAMS ((rtx *));
rtx
gen_split_1210 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2]
     = gen_int_mode (INTVAL (operands[2])
		     & GET_MODE_MASK (GET_MODE (operands[0])),
		     SImode);
   operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16887 */
extern rtx gen_split_1211 PARAMS ((rtx *));
rtx
gen_split_1211 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1]
     = gen_int_mode (INTVAL (operands[1])
		     & GET_MODE_MASK (GET_MODE (operands[0])),
		     SImode);
   operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16906 */
extern rtx gen_split_1212 PARAMS ((rtx *));
rtx
gen_split_1212 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16920 */
extern rtx gen_split_1213 PARAMS ((rtx *));
rtx
gen_split_1213 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16932 */
extern rtx gen_split_1214 PARAMS ((rtx *));
rtx
gen_split_1214 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16953 */
extern rtx gen_peephole2_1215 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1215 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16962 */
extern rtx gen_peephole2_1216 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1216 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16973 */
extern rtx gen_peephole2_1217 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1217 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16982 */
extern rtx gen_peephole2_1218 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1218 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:16991 */
extern rtx gen_peephole2_1219 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1219 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17002 */
extern rtx gen_peephole2_1220 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1220 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17016 */
extern rtx gen_peephole2_1221 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1221 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
operands[2] = gen_rtx_REG (SImode, true_regnum (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17030 */
extern rtx gen_peephole2_1222 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1222 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
operands[2] = gen_rtx_REG (SImode, true_regnum (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17044 */
extern rtx gen_peephole2_1223 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1223 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17055 */
extern rtx gen_peephole2_1224 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1224 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17065 */
extern rtx gen_peephole2_1225 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1225 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17076 */
extern rtx gen_peephole2_1226 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1226 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17097 */
extern rtx gen_peephole2_1227 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1227 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17111 */
extern rtx gen_peephole2_1228 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1228 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17125 */
extern rtx gen_peephole2_1229 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1229 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17146 */
extern rtx gen_peephole2_1230 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1230 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17168 */
extern rtx gen_peephole2_1231 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1231 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17186 */
extern rtx gen_peephole2_1232 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1232 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	copy_rtx (operand1))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17221 */
extern rtx gen_peephole2_1233 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1233 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand0),
		copy_rtx (operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17235 */
extern rtx gen_peephole2_1234 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1234 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		copy_rtx (operand0))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17255 */
extern rtx gen_peephole2_1235 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1235 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17270 */
extern rtx gen_peephole2_1236 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1236 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		copy_rtx (operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17286 */
extern rtx gen_peephole2_1237 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1237 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      true_regnum (operands[0]));
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17300 */
extern rtx gen_peephole2_1238 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1238 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17311 */
extern rtx gen_peephole2_1239 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1239 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      true_regnum (operands[0]));
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17326 */
extern rtx gen_peephole2_1240 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1240 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17335 */
extern rtx gen_peephole2_1241 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1241 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17344 */
extern rtx gen_peephole2_1242 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1242 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17353 */
extern rtx gen_peephole2_1243 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1243 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17363 */
extern rtx gen_peephole2_1244 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1244 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17373 */
extern rtx gen_peephole2_1245 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1245 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[2])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17403 */
extern rtx gen_peephole2_1246 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1246 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17413 */
extern rtx gen_peephole2_1247 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1247 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17425 */
extern rtx gen_peephole2_1248 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1248 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17433 */
extern rtx gen_peephole2_1249 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1249 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17443 */
extern rtx gen_peephole2_1250 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1250 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17456 */
extern rtx gen_peephole2_1251 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1251 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17470 */
extern rtx gen_peephole2_1252 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1252 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17484 */
extern rtx gen_peephole2_1253 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1253 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17495 */
extern rtx gen_peephole2_1254 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1254 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17507 */
extern rtx gen_peephole2_1255 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1255 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17520 */
extern rtx gen_peephole2_1256 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1256 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17532 */
extern rtx gen_peephole2_1257 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1257 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17544 */
extern rtx gen_peephole2_1258 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1258 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17557 */
extern rtx gen_peephole2_1259 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1259 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	GEN_INT (128))),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17569 */
extern rtx gen_peephole2_1260 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1260 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	GEN_INT (128))),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17581 */
extern rtx gen_peephole2_1261 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1261 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17591 */
extern rtx gen_peephole2_1262 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1262 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17603 */
extern rtx gen_peephole2_1263 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1263 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17611 */
extern rtx gen_peephole2_1264 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1264 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17621 */
extern rtx gen_peephole2_1265 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1265 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17634 */
extern rtx gen_peephole2_1266 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1266 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17648 */
extern rtx gen_peephole2_1267 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1267 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17662 */
extern rtx gen_peephole2_1268 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1268 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17673 */
extern rtx gen_peephole2_1269 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1269 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17685 */
extern rtx gen_peephole2_1270 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1270 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17824 */
rtx
gen_conditional_trap (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
			      ix86_expand_compare (GET_CODE (operands[0]),
						   NULL, NULL),
			      operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx (GET_CODE (operand0), VOIDmode,
		operand2,
		const0_rtx),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17938 */
rtx
gen_movti (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    ix86_expand_move (TImode, operands);
  else
    ix86_expand_vector_move (TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17986 */
rtx
gen_movv2df (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:17995 */
rtx
gen_movv8hi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18004 */
rtx
gen_movv16qi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18013 */
rtx
gen_movv4sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18022 */
rtx
gen_movv4si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18031 */
rtx
gen_movv2di (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18040 */
rtx
gen_movv2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18049 */
rtx
gen_movv4hi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18058 */
rtx
gen_movv8qi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18067 */
rtx
gen_movv2sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18136 */
extern rtx gen_split_1283 PARAMS ((rtx *));
rtx
gen_split_1283 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[2] = change_address (operands[0], GET_MODE (operands[0]),
				 stack_pointer_rtx);
   operands[3] = GEN_INT (-GET_MODE_SIZE (GET_MODE (operands[0])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18159 */
extern rtx gen_split_1284 PARAMS ((rtx *));
rtx
gen_split_1284 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18170 */
extern rtx gen_split_1285 PARAMS ((rtx *));
rtx
gen_split_1285 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18181 */
extern rtx gen_split_1286 PARAMS ((rtx *));
rtx
gen_split_1286 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2DImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18192 */
extern rtx gen_split_1287 PARAMS ((rtx *));
rtx
gen_split_1287 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8HImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18203 */
extern rtx gen_split_1288 PARAMS ((rtx *));
rtx
gen_split_1288 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V16QImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18214 */
extern rtx gen_split_1289 PARAMS ((rtx *));
rtx
gen_split_1289 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18225 */
extern rtx gen_split_1290 PARAMS ((rtx *));
rtx
gen_split_1290 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4SImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18236 */
extern rtx gen_split_1291 PARAMS ((rtx *));
rtx
gen_split_1291 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2SImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18247 */
extern rtx gen_split_1292 PARAMS ((rtx *));
rtx
gen_split_1292 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4HImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18258 */
extern rtx gen_split_1293 PARAMS ((rtx *));
rtx
gen_split_1293 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8QImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18269 */
extern rtx gen_split_1294 PARAMS ((rtx *));
rtx
gen_split_1294 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18306 */
extern rtx gen_split_1295 PARAMS ((rtx *));
rtx
gen_split_1295 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18316 */
rtx
gen_sse_movaps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    {
      rtx tmp = gen_reg_rtx (V4SFmode);
      emit_insn (gen_sse_movaps (tmp, operands[1]));
      emit_move_insn (operands[0], tmp);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	38)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18341 */
rtx
gen_sse_movups (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    {
      rtx tmp = gen_reg_rtx (V4SFmode);
      emit_insn (gen_sse_movups (tmp, operands[1]));
      emit_move_insn (operands[0], tmp);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	39)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18481 */
rtx
gen_sse_loadss (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  emit_insn (gen_sse_loadss_1 (operands[0], operands[1],
			       CONST0_RTX (V4SFmode)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18717 */
rtx
gen_sse_andv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18744 */
rtx
gen_sse_nandv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0)),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18769 */
rtx
gen_sse_iorv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_IOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18796 */
rtx
gen_sse_xorv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18826 */
rtx
gen_sse2_andv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18853 */
rtx
gen_sse2_nandv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0)),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18878 */
rtx
gen_sse2_iorv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_IOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:18905 */
rtx
gen_sse2_xorv2df3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0)));
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20038 */
rtx
gen_sfence ()
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	44)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:20421 */
rtx
gen_prefetch (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int rw = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  if (rw != 0 && rw != 1)
    abort ();
  if (locality < 0 || locality > 3)
    abort ();
  if (GET_MODE (operands[0]) != Pmode && GET_MODE (operands[0]) != VOIDmode)
    abort ();

  /* Use 3dNOW prefetch in case we are asking for write prefetch not
     suported by SSE counterpart or the SSE prefetch is not available
     (K6 machines).  Otherwise use SSE prefetch as it allows specifying
     of locality.  */
  if (TARGET_3DNOW && (!TARGET_PREFETCH_SSE || rw))
    operands[2] = GEN_INT (3);
  else
    operands[1] = const0_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:21989 */
rtx
gen_sse2_loadsd (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  emit_insn (gen_sse2_loadsd_1 (operands[0], operands[1],
			        CONST0_RTX (V2DFmode)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22051 */
rtx
gen_sse2_mfence ()
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	59)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/yanxin/git/jrate/gcc/gcc/config/i386/i386.md:22068 */
rtx
gen_sse2_lfence ()
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (pattern, insn_code_number)
     rtx pattern ATTRIBUTE_UNUSED;
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 677:
    case 664:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11));
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12));
      XVECEXP (pattern, 0, 6) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13));
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14));
      XVECEXP (pattern, 0, 8) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15));
      XVECEXP (pattern, 0, 9) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29));
      XVECEXP (pattern, 0, 10) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30));
      XVECEXP (pattern, 0, 11) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31));
      XVECEXP (pattern, 0, 12) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32));
      XVECEXP (pattern, 0, 13) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33));
      XVECEXP (pattern, 0, 14) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34));
      XVECEXP (pattern, 0, 15) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35));
      XVECEXP (pattern, 0, 16) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36));
      break;

    case 484:
    case 483:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 482:
    case 481:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 371:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 367:
    case 366:
    case 365:
    case 364:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17));
      break;

    case 493:
    case 460:
    case 195:
    case 194:
    case 191:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 272:
    case 269:
    case 255:
    case 252:
    case 193:
    case 192:
    case 190:
    case 189:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 320:
    case 302:
    case 291:
    case 186:
    case 185:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 242:
    case 225:
    case 163:
    case 162:
    case 161:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    case 234:
    case 220:
    case 156:
    case 155:
    case 154:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 231:
    case 217:
    case 150:
    case 149:
    case 148:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 112:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 111:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 87:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 461:
    case 381:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 333:
    case 332:
    case 331:
    case 330:
    case 327:
    case 326:
    case 323:
    case 322:
    case 321:
    case 317:
    case 316:
    case 315:
    case 314:
    case 311:
    case 310:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 300:
    case 299:
    case 297:
    case 296:
    case 294:
    case 293:
    case 292:
    case 275:
    case 274:
    case 273:
    case 271:
    case 270:
    case 268:
    case 258:
    case 257:
    case 256:
    case 254:
    case 253:
    case 251:
    case 249:
    case 247:
    case 245:
    case 244:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 232:
    case 229:
    case 228:
    case 227:
    case 226:
    case 222:
    case 221:
    case 218:
    case 215:
    case 214:
    case 213:
    case 211:
    case 208:
    case 207:
    case 205:
    case 203:
    case 188:
    case 187:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 175:
    case 174:
    case 171:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 159:
    case 158:
    case 157:
    case 152:
    case 151:
    case 146:
    case 139:
    case 138:
    case 86:
    case 84:
    case 83:
    case 81:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (insn_code_number)
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 242:
    case 225:
    case 163:
    case 162:
    case 161:
    case 234:
    case 220:
    case 156:
    case 155:
    case 154:
    case 231:
    case 217:
    case 150:
    case 149:
    case 148:
    case 112:
    case 111:
      return 0;

    case 677:
    case 664:
    case 484:
    case 483:
    case 482:
    case 481:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 371:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 493:
    case 460:
    case 195:
    case 194:
    case 191:
    case 272:
    case 269:
    case 255:
    case 252:
    case 193:
    case 192:
    case 190:
    case 189:
    case 320:
    case 302:
    case 291:
    case 186:
    case 185:
    case 87:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 461:
    case 381:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 333:
    case 332:
    case 331:
    case 330:
    case 327:
    case 326:
    case 323:
    case 322:
    case 321:
    case 317:
    case 316:
    case 315:
    case 314:
    case 311:
    case 310:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 300:
    case 299:
    case 297:
    case 296:
    case 294:
    case 293:
    case 292:
    case 275:
    case 274:
    case 273:
    case 271:
    case 270:
    case 268:
    case 258:
    case 257:
    case 256:
    case 254:
    case 253:
    case 251:
    case 249:
    case 247:
    case 245:
    case 244:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 232:
    case 229:
    case 228:
    case 227:
    case 226:
    case 222:
    case 221:
    case 218:
    case 215:
    case 214:
    case 213:
    case 211:
    case 208:
    case 207:
    case 205:
    case 203:
    case 188:
    case 187:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 175:
    case 174:
    case 171:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 159:
    case 158:
    case 157:
    case 152:
    case 151:
    case 146:
    case 139:
    case 138:
    case 86:
    case 84:
    case 83:
    case 81:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      return 1;

    default:
      abort ();
    }
}
