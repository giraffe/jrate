/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

extern int insn_current_length PARAMS ((rtx));
int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 371:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (128))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 368:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (128)))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 357:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (128)))
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 356:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (128)))
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_variable_length_p PARAMS ((rtx));
int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 371:
    case 368:
    case 357:
    case 356:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_default_length PARAMS ((rtx));
int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }

    case 423:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 404:
    case 403:
    case 402:
    case 401:
    case 399:
    case 398:
      if (get_attr_unit (insn) == UNIT_I387)
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 427:
    case 424:
    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 349:
    case 348:
    case 346:
    case 341:
    case 340:
    case 338:
    case 331:
    case 330:
    case 326:
    case 318:
    case 315:
    case 314:
    case 312:
    case 310:
      extract_insn_cached (insn);
      if (register_operand (operands[0], VOIDmode))
        {
	  return 2;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 344:
    case 336:
    case 334:
    case 328:
    case 324:
    case 322:
    case 308:
    case 306:
      extract_insn_cached (insn);
      if (register_operand (operands[0], SImode))
        {
	  return 2;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 0)
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 0)
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }

    case 464:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 467:
    case 466:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 397:
    case 396:
    case 393:
    case 390:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 77:
    case 76:
    case 67:
    case 62:
      return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);

    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 2 + get_attr_prefix_data16 (insn) + get_attr_length_address (insn);
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      return 4;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return 128 /* 0x80 */;

    case 830:
    case 829:
    case 378:
      return 3;

    case 388:
      return 13 /* 0xd */;

    case 387:
      return 11 /* 0xb */;

    case 386:
      return 14 /* 0xe */;

    case 385:
    case 381:
      return 12 /* 0xc */;

    case 383:
    case 380:
    case 377:
    case 25:
      return 1;

    case 376:
      return 0;

    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 384:
    case 382:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
    case 371:
      return 16 /* 0x10 */;

    case 493:
    case 368:
      return 5;

    case 357:
    case 356:
      return 6;

    case 122:
    case 121:
    case 24:
      return 2;

    default:
      return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);

    }
}

extern int bypass_p PARAMS ((rtx));
int
bypass_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 35:
    case 34:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_default_latency PARAMS ((rtx));
int
insn_default_latency (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 665:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 0;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (const0_operand (operands[2], SImode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 0;
        }

    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 0;
        }

    case 447:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 70 /* 0x46 */;
        }
      else
        {
	  return 0;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 1) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 397:
    case 396:
    case 393:
    case 390:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 0;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 353:
    case 352:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[0], VOIDmode)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[0], VOIDmode))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 351:
    case 349:
    case 342:
    case 340:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 350:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 341:
    case 339:
    case 338:
    case 337:
    case 336:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 333:
    case 331:
    case 317:
    case 315:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 335:
    case 334:
    case 332:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 316:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 298:
    case 297:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 301:
    case 300:
    case 295:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 294:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 289:
    case 287:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)) || (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 197:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_NONE)) || ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 0;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 157:
    case 146:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 761:
    case 695:
    case 694:
    case 677:
    case 628:
    case 627:
    case 586:
    case 585:
    case 467:
    case 466:
    case 461:
    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 206:
    case 204:
    case 177:
    case 176:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))) || (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))) || (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_LOAD))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))) || (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 55:
    case 53:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 57:
    case 56:
    case 49:
    case 44:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 41:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
    case 48:
    case 43:
    case 42:
    case 39:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 290:
    case 288:
    case 286:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (memory_operand (operands[1], VOIDmode))) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (memory_operand (operands[1], VOIDmode)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 35:
    case 34:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 199:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 201:
    case 200:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 667:
    case 666:
    case 664:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 0;

    default:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

extern int insn_alts PARAMS ((rtx));
int
insn_alts (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (const0_operand (operands[2], SImode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], DFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FDIV) || ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD))) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 397:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], TFmode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 396:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], XFmode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], SFmode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 351:
    case 349:
    case 342:
    case 340:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 350:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 341:
    case 339:
    case 338:
    case 337:
    case 336:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 333:
    case 331:
    case 317:
    case 315:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 335:
    case 334:
    case 332:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 316:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 298:
    case 297:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 301:
    case 300:
    case 295:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 294:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 289:
    case 287:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((memory_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 205:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_LOAD)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_NONE))) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 197:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 234:
    case 233:
    case 232:
    case 220:
    case 219:
    case 218:
    case 206:
    case 173:
    case 172:
    case 171:
    case 156:
    case 154:
    case 153:
    case 152:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 157:
    case 146:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 204:
    case 177:
    case 176:
    case 174:
    case 170:
    case 169:
    case 168:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 155:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 167:
    case 139:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 761:
    case 695:
    case 694:
    case 677:
    case 665:
    case 628:
    case 627:
    case 586:
    case 585:
    case 467:
    case 466:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 353:
    case 352:
    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 81:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))) || (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((get_attr_memory (insn) == MEMORY_BOTH) || (get_attr_memory (insn) == MEMORY_LOAD)) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 55:
    case 53:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 57:
    case 56:
    case 49:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 288:
    case 80:
    case 45:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (memory_operand (operands[1], VOIDmode))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 44:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 41:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)) || (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 48:
    case 43:
    case 42:
    case 39:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 290:
    case 286:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 78:
    case 50:
    case 37:
    case 36:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 35:
    case 34:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 199:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 5:
    case 4:
    case 3:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))) || ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 201:
    case 200:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 2:
    case 1:
    case 0:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 667:
    case 666:
    case 664:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 0;

    default:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_BOTH) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

extern int internal_dfa_insn_code PARAMS ((rtx));
int
internal_dfa_insn_code (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 665:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (const0_operand (operands[2], SImode))))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 761:
    case 695:
    case 694:
    case 677:
    case 628:
    case 627:
    case 586:
    case 585:
    case 467:
    case 466:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 461:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 447:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 3;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  return 15 /* 0xf */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], DFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 14 /* 0xe */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 397:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], TFmode))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 396:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], XFmode))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], SFmode))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 353:
    case 352:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[0], VOIDmode)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[0], VOIDmode))))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 351:
    case 349:
    case 342:
    case 340:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 350:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 341:
    case 339:
    case 338:
    case 337:
    case 336:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_1_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_1_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 333:
    case 331:
    case 317:
    case 315:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[1], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[1], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 335:
    case 334:
    case 332:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 316:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 298:
    case 297:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 301:
    case 300:
    case 295:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_ALU)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 294:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 289:
    case 287:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 205:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 197:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 1) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 0;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 234:
    case 233:
    case 232:
    case 220:
    case 219:
    case 218:
    case 206:
    case 173:
    case 172:
    case 171:
    case 156:
    case 154:
    case 153:
    case 152:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (which_alternative == 2)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 157:
    case 146:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 24 /* 0x18 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 204:
    case 177:
    case 176:
    case 174:
    case 170:
    case 169:
    case 168:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 155:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 167:
    case 139:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 81:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE))))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) || (which_alternative == 4)) && ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
        {
	  return 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 55:
    case 53:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 57:
    case 56:
    case 49:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 7;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 288:
    case 80:
    case 45:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 44:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 7;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 41:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_IMOV))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 48:
    case 43:
    case 42:
    case 39:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 7;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_UV) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 290:
    case 286:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 78:
    case 50:
    case 37:
    case 36:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 35:
    case 34:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 9;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 199:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 5:
    case 4:
    case 3:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case 201:
    case 200:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 2:
    case 1:
    case 0:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_NONE)))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 667:
    case 666:
    case 664:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 29 /* 0x1d */;

    default:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 29 /* 0x1d */;
        }

    }
}

extern int result_ready_cost PARAMS ((rtx));
int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (constant_call_address_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 467:
    case 466:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 7;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 464:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 1;
        }

    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 10 /* 0xa */;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 56 /* 0x38 */;
        }
      else
        {
	  return 1;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], DFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 397:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], TFmode)))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 396:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], XFmode)))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], SFmode)))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (constant_call_address_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[0], VOIDmode)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 1))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 1;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 3))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 299:
    case 151:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 2))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) || (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative != 0)) || ((which_alternative == 1) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) || (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_LOAD) && (which_alternative == 1))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1))) || ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 665:
    case 353:
    case 352:
    case 35:
    case 34:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 46:
    case 45:
    case 40:
    case 37:
    case 36:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if ((((ix86_cpu) == (CPU_ATHLON))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 31:
    case 28:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 761:
    case 695:
    case 694:
    case 677:
    case 667:
    case 666:
    case 664:
    case 628:
    case 627:
    case 586:
    case 585:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 461:
    case 447:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 1;

    default:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    }
}

extern int athlon_load_unit_ready_cost PARAMS ((rtx));
int
athlon_load_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_store_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_store_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_muladd_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_muladd_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_add_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_add_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_mul_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_mul_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 467:
    case 466:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 464:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], TFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], XFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], DFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], SFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 397:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], TFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 396:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], XFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else if ((which_alternative == 0) && (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) && ((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative == 3) || ((which_alternative == 4) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative == 3) || ((which_alternative == 4) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 3;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 3;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 100 /* 0x64 */;

    }
}

extern int athlon_muldiv_unit_ready_cost PARAMS ((rtx));
int
athlon_muldiv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 42 /* 0x2a */;

    }
}

extern unsigned int athlon_muldiv_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_muldiv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65578 /* min 1, max 42 */;

    }
}

extern int athlon_ieu_unit_ready_cost PARAMS ((rtx));
int
athlon_ieu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 464:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 2) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 164:
    case 163:
    case 161:
    case 160:
    case 159:
    case 158:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], QImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], QImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 3) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 162:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], HImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], HImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 2) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 150:
    case 149:
    case 148:
    case 147:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], SImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_INCDEC) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 55:
    case 53:
      if (((get_attr_type (insn) == TYPE_IMOVX) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_IMOV) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_IMOV) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 497:
    case 496:
    case 495:
    case 494:
    case 463:
    case 462:
    case 461:
    case 447:
    case 379:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
    case 353:
    case 352:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 204:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 83:
    case 82:
    case 80:
    case 79:
    case 78:
    case 57:
    case 56:
    case 54:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 40:
    case 39:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 84:
    case 81:
    case 6:
    case 3:
    case 0:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 42 /* 0x2a */;

    }
}

extern unsigned int athlon_ieu_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_ieu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65551 /* min 1, max 15 */;

    }
}

extern int athlon_directdec_unit_ready_cost PARAMS ((rtx));
int
athlon_directdec_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_vectordec_unit_ready_cost PARAMS ((rtx));
int
athlon_vectordec_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern unsigned int athlon_vectordec_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_vectordec_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 464:
    case 59:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 604:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 293:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 39:
    case 35:
    case 34:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 65537 /* min 1, max 1 */;

    default:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    }
}

extern int k6_fpu_unit_ready_cost PARAMS ((rtx));
int
k6_fpu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 397:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], TFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 396:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], XFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))) || (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 56 /* 0x38 */;

    }
}

extern unsigned int k6_fpu_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_fpu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 131128 /* min 2, max 56 */;

    }
}

extern int k6_store_unit_ready_cost PARAMS ((rtx));
int
k6_store_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 1) || (const0_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative != 3) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 299:
    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative != 2) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 2) && (! (pic_symbolic_operand (operands[2], SImode)))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 666:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      extract_insn_cached (insn);
      if (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 353:
    case 352:
    case 35:
    case 34:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 761:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 695:
    case 694:
    case 677:
    case 673:
    case 672:
    case 671:
    case 667:
    case 665:
    case 664:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 628:
    case 627:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 497:
    case 496:
    case 495:
    case 494:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
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
    case 357:
    case 356:
    case 355:
    case 354:
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
    case 18:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      return 10 /* 0xa */;

    default:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    }
}

extern unsigned int k6_store_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_store_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65546 /* min 1, max 10 */;

    }
}

extern int k6_load_unit_ready_cost PARAMS ((rtx));
int
k6_load_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if ((! (constant_call_address_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if ((! (constant_call_address_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 665:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 353:
    case 352:
    case 35:
    case 34:
      extract_insn_cached (insn);
      if (((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 46:
    case 45:
    case 40:
    case 37:
    case 36:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if ((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 761:
    case 695:
    case 694:
    case 677:
    case 667:
    case 666:
    case 664:
    case 628:
    case 627:
    case 586:
    case 585:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 145:
    case 144:
    case 143:
    case 142:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 10 /* 0xa */;

    default:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    }
}

extern unsigned int k6_load_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_load_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65546 /* min 1, max 10 */;

    }
}

extern int k6_branch_unit_ready_cost PARAMS ((rtx));
int
k6_branch_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int k6_alu_unit_ready_cost PARAMS ((rtx));
int
k6_alu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 164:
    case 163:
    case 161:
    case 160:
    case 159:
    case 158:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], QImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], QImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 162:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], HImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], HImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 150:
    case 149:
    case 148:
    case 147:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], SImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_INCDEC) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 461:
    case 353:
    case 352:
    case 145:
    case 144:
    case 143:
    case 142:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 55:
    case 53:
      if (((get_attr_type (insn) == TYPE_IMOV) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((get_attr_type (insn) == TYPE_IMOVX) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_IMOV) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 57:
    case 56:
    case 49:
    case 48:
    case 44:
    case 43:
    case 42:
    case 39:
      if ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 204:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 83:
    case 82:
    case 80:
    case 79:
    case 78:
    case 54:
    case 52:
    case 51:
    case 50:
    case 45:
    case 37:
    case 36:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      if (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 305:
    case 84:
    case 81:
    case 6:
    case 3:
    case 0:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 17 /* 0x11 */;

    }
}

extern unsigned int k6_alu_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_alu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int k6_alux_unit_ready_cost PARAMS ((rtx));
int
k6_alux_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) && (general_operand (operands[0], QImode)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 159:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((! (incdec_operand (operands[2], QImode))) || (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 3) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 2) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 146:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 305:
    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 0) || (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 55:
    case 53:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 447:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 461:
    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 82:
    case 79:
    case 54:
    case 52:
    case 51:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (general_operand (operands[0], QImode)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 17 /* 0x11 */;

    }
}

extern unsigned int k6_alux_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_alux_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int fpu_unit_ready_cost PARAMS ((rtx));
int
fpu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 397:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], TFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 396:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], XFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 465:
    case 464:
    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 467:
    case 466:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 56 /* 0x38 */;

    }
}

extern unsigned int fpu_unit_blockage_range PARAMS ((rtx));
unsigned int
fpu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65592 /* min 1, max 56 */;

    }
}

extern int ppro_p34_unit_ready_cost PARAMS ((rtx));
int
ppro_p34_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int ppro_p2_unit_ready_cost PARAMS ((rtx));
int
ppro_p2_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

extern int ppro_p01_unit_ready_cost PARAMS ((rtx));
int
ppro_p01_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int ppro_p0_unit_ready_cost PARAMS ((rtx));
int
ppro_p0_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 467:
    case 466:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 465:
    case 464:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 397:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], TFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 396:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], XFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((ix86_cpu) == (CPU_PENTIUMPRO)))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO)))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 305:
    case 99:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 447:
    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 145:
    case 144:
    case 143:
    case 142:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 56 /* 0x38 */;

    }
}

extern unsigned int ppro_p0_unit_blockage_range PARAMS ((rtx));
unsigned int
ppro_p0_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int function_units_used PARAMS ((rtx));
int
function_units_used (insn)
     rtx insn;
{
  enum attr_athlon_fpunits attr_athlon_fpunits = get_attr_athlon_fpunits (insn);
  enum attr_athlon_decode attr_athlon_decode = get_attr_athlon_decode (insn);
  enum attr_memory attr_memory = get_attr_memory (insn);
  enum attr_mode attr_mode = get_attr_mode (insn);
  enum attr_type attr_type = get_attr_type (insn);
  unsigned long accum = 0;

  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((((((((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ROTATE) || ((attr_type == TYPE_ISHIFT1) || ((attr_type == TYPE_ROTATE1) || ((attr_type == TYPE_LEA) || ((attr_type == TYPE_IBR) || (attr_type == TYPE_CLD))))))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV)) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FSGN) || (attr_type == TYPE_FISTP)))) || (attr_type == TYPE_FCMOV)) || (attr_type == TYPE_FCMP)) || (attr_type == TYPE_FMOV)) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC)))) ? (1) : (0));
  accum |= ((((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! ((attr_type == TYPE_IMOV) || (attr_type == TYPE_FMOV)))) || (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_IMOV) || (attr_type == TYPE_FMOV))) && (attr_memory == MEMORY_NONE))) ? (2) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_POP) || ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH)))) ? (4) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_PUSH) || ((attr_memory == MEMORY_STORE) || (attr_memory == MEMORY_BOTH)))) ? (8) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((((attr_type == TYPE_FOP) || ((attr_type == TYPE_FSGN) || ((attr_type == TYPE_FMOV) || ((attr_type == TYPE_FCMP) || ((attr_type == TYPE_FCMOV) || (attr_type == TYPE_FISTP)))))) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC))) || (attr_type == TYPE_IMUL))) ? (16) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ISHIFT1) || ((attr_type == TYPE_ROTATE) || ((attr_type == TYPE_ROTATE1) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || (attr_type == TYPE_CLD))))))) || (((attr_type == TYPE_ALU) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOVX) || (attr_type == TYPE_INCDEC))))))) && (general_operand (operands[0], QImode)))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (32) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ISHIFT1) || ((attr_type == TYPE_ROTATE) || ((attr_type == TYPE_ROTATE1) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ALU) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOVX) || ((attr_type == TYPE_INCDEC) || ((attr_type == TYPE_SETCC) || (attr_type == TYPE_LEA))))))))))))) || ((attr_type == TYPE_IMOV) && (attr_memory == MEMORY_NONE))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (64) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && ((attr_type == TYPE_CALL) || ((attr_type == TYPE_CALLV) || (attr_type == TYPE_IBR)))) ? (128) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((attr_type == TYPE_POP) || ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))) || ((attr_type == TYPE_STR) && ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))))) ? (256) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((attr_type == TYPE_LEA) || (attr_type == TYPE_STR)) || ((attr_type == TYPE_PUSH) || ((attr_memory == MEMORY_STORE) || (attr_memory == MEMORY_BOTH))))) ? (512) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && ((((attr_type == TYPE_FOP) || ((attr_type == TYPE_FMOV) || ((attr_type == TYPE_FCMP) || (attr_type == TYPE_FISTP)))) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC)))) ? (1024) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_athlon_decode == ATHLON_DECODE_VECTOR) || (attr_athlon_decode == ATHLON_DECODE_DIRECT))) ? (2048) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_decode == ATHLON_DECODE_DIRECT)) ? (4096) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (((((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ALU) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOV) || ((attr_type == TYPE_IMOVX) || ((attr_type == TYPE_LEA) || ((attr_type == TYPE_INCDEC) || ((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ISHIFT1) || ((attr_type == TYPE_ROTATE) || ((attr_type == TYPE_ROTATE1) || ((attr_type == TYPE_IBR) || ((attr_type == TYPE_CALL) || ((attr_type == TYPE_CALLV) || ((attr_type == TYPE_ICMOV) || ((attr_type == TYPE_CLD) || ((attr_type == TYPE_POP) || ((attr_type == TYPE_SETCC) || (attr_type == TYPE_PUSH))))))))))))))))))))) || (attr_type == TYPE_STR)) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (8192) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_type == TYPE_IMUL) || (attr_type == TYPE_IDIV))) ? (16384) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((((((((attr_type == TYPE_FPSPC) || (attr_type == TYPE_FDIV)) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FMUL) || (attr_type == TYPE_FISTP)))) || ((attr_type == TYPE_FMOV) && ((attr_memory == MEMORY_LOAD) && (attr_mode == MODE_XF)))) || ((attr_type == TYPE_FMOV) || (attr_type == TYPE_FSGN))) || ((attr_type == TYPE_FCMP) && (attr_athlon_decode == ATHLON_DECODE_DIRECT))) || ((attr_type == TYPE_FCMP) && (attr_athlon_decode == ATHLON_DECODE_VECTOR))) || (attr_type == TYPE_FCMOV))) ? (32768) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_MUL)) ? (65536) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_ADD)) ? (131072) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_athlon_fpunits == ATHLON_FPUNITS_MULADD) || ((attr_athlon_fpunits == ATHLON_FPUNITS_MUL) || (attr_athlon_fpunits == ATHLON_FPUNITS_ADD)))) ? (262144) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))) ? (1048576) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_STORE)) ? (524288) : (0));

  if (accum && accum == (accum & -accum))
    {
      int i;
      for (i = 0; accum >>= 1; ++i) continue;
      accum = i;
    }
  else
    accum = ~accum;
  return accum;
}

extern enum attr_athlon_fpunits get_attr_athlon_fpunits PARAMS ((rtx));
enum attr_athlon_fpunits
get_attr_athlon_fpunits (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 465:
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], TFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], XFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], DFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((which_alternative == 1) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (which_alternative != 0)
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((which_alternative == 0) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else
        {
	  return ATHLON_FPUNITS_MULADD;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      return ATHLON_FPUNITS_ADD;

    case 467:
    case 466:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
      return ATHLON_FPUNITS_MUL;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return ATHLON_FPUNITS_NONE;

    }
}

extern enum attr_athlon_decode get_attr_athlon_decode PARAMS ((rtx));
enum attr_athlon_decode
get_attr_athlon_decode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_DECODE_DIRECT;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 464:
    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 166:
    case 138:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 35:
    case 34:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 39:
    case 122:
    case 293:
    case 383:
    case 604:
      return ATHLON_DECODE_VECTOR;

    default:
      return ATHLON_DECODE_DIRECT;

    }
}

extern enum attr_fp_int_src get_attr_fp_int_src PARAMS ((rtx));
enum attr_fp_int_src
get_attr_fp_int_src (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 401:
    case 402:
    case 406:
    case 407:
    case 412:
    case 413:
    case 414:
    case 415:
      return FP_INT_SRC_TRUE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FP_INT_SRC_FALSE;

    }
}

extern enum attr_imm_disp get_attr_imm_disp PARAMS ((rtx));
enum attr_imm_disp
get_attr_imm_disp (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))) || ((which_alternative == 0) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode)))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 159:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 164:
    case 163:
    case 161:
    case 160:
    case 158:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 162:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 150:
    case 149:
    case 148:
    case 147:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 146:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 350:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 341:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 332:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 316:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 206:
    case 204:
    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 177:
    case 176:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 141:
    case 140:
    case 139:
      extract_insn_cached (insn);
      if ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode)))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 55:
    case 53:
    case 41:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 351:
    case 349:
    case 342:
    case 340:
    case 333:
    case 331:
    case 317:
    case 315:
    case 290:
    case 288:
    case 286:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 175:
    case 83:
    case 80:
    case 78:
    case 57:
    case 56:
    case 50:
    case 49:
    case 48:
    case 45:
    case 44:
    case 43:
    case 42:
    case 39:
    case 37:
    case 36:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return IMM_DISP_UNKNOWN;

    default:
      return IMM_DISP_FALSE;

    }
}

extern int get_attr_length_address PARAMS ((rtx));
int
get_attr_length_address (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_constrain_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_constrain_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 77:
    case 76:
    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 64:
    case 63:
    case 62:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      return 0;

    default:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_address_default (insn);

    }
}

extern int get_attr_length_immediate PARAMS ((rtx));
int
get_attr_length_immediate (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  return 0;
        }
      else if (which_alternative == 0)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 405:
    case 400:
      extract_constrain_insn_cached (insn);
      if (get_attr_unit (insn) == UNIT_SSE)
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 404:
    case 399:
      extract_constrain_insn_cached (insn);
      if ((get_attr_unit (insn) == UNIT_I387) || (get_attr_unit (insn) == UNIT_SSE))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 423:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
    case 402:
    case 401:
    case 398:
      extract_constrain_insn_cached (insn);
      if (get_attr_unit (insn) == UNIT_I387)
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return 0;
        }

    case 164:
    case 163:
    case 161:
    case 160:
    case 159:
    case 158:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], QImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if ((incdec_operand (operands[2], QImode)) || (which_alternative == 3))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 162:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], HImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((incdec_operand (operands[2], HImode)) || (which_alternative == 2))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 150:
    case 149:
    case 148:
    case 147:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], SImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))))
        {
	  return 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 3) || (which_alternative == 4))) || ((which_alternative != 3) && (which_alternative != 4)))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative == 9) || ((which_alternative == 10) || (which_alternative == 11))))))
        {
	  return 0;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 55:
    case 53:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

    case 201:
    case 200:
    case 198:
    case 197:
    case 196:
    case 57:
    case 56:
    case 49:
    case 48:
    case 44:
    case 43:
    case 42:
    case 39:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_immediate_default(insn,0);

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) && (which_alternative != 4)) && (((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 0;
        }
      else if ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */
		      abort(),1;
        }

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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 204:
    case 186:
    case 179:
    case 178:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 54:
    case 52:
    case 51:
    case 46:
    case 40:
    case 35:
    case 34:
    case 33:
    case 32:
    case 12:
    case 11:
    case 9:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_immediate_default(insn,1);

    case 0:
    case 3:
    case 6:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 371:
    case 368:
    case 357:
    case 356:
    case 37:
    case 199:
    case 211:
    case 212:
    case 226:
    case 237:
      return 1;

    case 378:
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern enum attr_memory get_attr_memory PARAMS ((rtx));
enum attr_memory
get_attr_memory (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return MEMORY_NONE;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative != 1) || (! (const0_operand (operands[2], SImode)))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return MEMORY_UNKNOWN;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((memory_operand (operands[2], VOIDmode)) || (((which_alternative == 2) || (which_alternative == 3)) && (memory_operand (operands[3], VOIDmode)))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 463:
    case 462:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((memory_operand (operands[2], VOIDmode)) || (memory_operand (operands[3], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return MEMORY_NONE;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((which_alternative == 1) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative == 0) || (which_alternative == 1)) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 159:
      extract_insn_cached (insn);
      if (((! (incdec_operand (operands[2], QImode))) && (memory_operand (operands[1], VOIDmode))) || ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((incdec_operand (operands[2], QImode)) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 299:
    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))) || ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative == 3) || (which_alternative == 4)))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))) && ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return MEMORY_UNKNOWN;
        }
      else
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return MEMORY_BOTH;
	    }
	  else
	    {
	      return MEMORY_STORE;
	    }
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((((which_alternative == 2) || (which_alternative == 3)) && ((which_alternative != 2) && (which_alternative != 3))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 55:
    case 53:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((! (get_attr_type (insn) == TYPE_IMOV)) && (! (get_attr_type (insn) == TYPE_IMOVX))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((! (get_attr_type (insn) == TYPE_IMOV)) && ((((which_alternative == 0) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0)))) || (((which_alternative == 1) || (which_alternative == 2)) && (aligned_operand (operands[1], HImode)))) || ((! ((TARGET_MOVX) != (0))) || ((which_alternative != 0) && (which_alternative != 2))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 841:
    case 840:
    case 839:
    case 838:
    case 837:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 813:
    case 812:
    case 811:
    case 810:
    case 809:
    case 808:
    case 807:
    case 806:
    case 805:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 769:
    case 768:
    case 767:
    case 766:
    case 765:
    case 738:
    case 737:
    case 736:
    case 735:
    case 734:
    case 733:
    case 732:
    case 731:
    case 730:
    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 723:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
    case 709:
    case 708:
    case 693:
    case 692:
    case 690:
    case 689:
    case 688:
    case 687:
    case 686:
    case 684:
    case 683:
    case 679:
    case 678:
    case 663:
    case 662:
    case 661:
    case 660:
    case 659:
    case 658:
    case 636:
    case 635:
    case 634:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 560:
    case 559:
    case 558:
    case 557:
    case 556:
    case 555:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
    case 538:
    case 537:
    case 536:
    case 535:
    case 534:
    case 533:
    case 532:
    case 531:
    case 530:
    case 529:
    case 528:
    case 527:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 501:
    case 500:
    case 479:
    case 476:
    case 473:
    case 470:
    case 428:
    case 425:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 131:
    case 129:
    case 125:
    case 117:
    case 116:
    case 109:
    case 107:
    case 105:
    case 103:
    case 101:
    case 100:
    case 99:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
    case 89:
    case 88:
    case 85:
    case 82:
    case 79:
    case 57:
    case 56:
    case 54:
    case 52:
    case 51:
    case 49:
    case 48:
    case 44:
    case 43:
    case 42:
    case 39:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && ((((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) || ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 353:
    case 352:
    case 35:
    case 34:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else
        {
	  return MEMORY_STORE;
        }

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) || (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 460:
    case 459:
    case 458:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
    case 664:
    case 667:
    case 826:
    case 827:
    case 828:
      return MEMORY_UNKNOWN;

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 448:
    case 449:
    case 450:
    case 451:
    case 452:
      return MEMORY_BOTH;

    case 453:
    case 454:
    case 455:
    case 456:
    case 457:
    case 666:
      return MEMORY_STORE;

    case 665:
      return MEMORY_LOAD;

    case 467:
    case 466:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 145:
    case 144:
    case 143:
    case 142:
    case 461:
    case 585:
    case 586:
    case 627:
    case 628:
    case 677:
    case 694:
    case 695:
    case 761:
      return MEMORY_NONE;

    default:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    }
}

extern int get_attr_modrm PARAMS ((rtx));
int
get_attr_modrm (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 423:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 404:
    case 403:
    case 402:
    case 401:
    case 399:
    case 398:
      if (get_attr_unit (insn) == UNIT_I387)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 164:
    case 163:
    case 161:
    case 160:
    case 159:
    case 158:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], QImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 162:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], HImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 150:
    case 149:
    case 148:
    case 147:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], SImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 146:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 465:
    case 464:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((! (((ix86_cpu) == (CPU_K6)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) || (which_alternative == 4)) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 57:
    case 56:
    case 49:
    case 44:
      extract_insn_cached (insn);
      if ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 55:
    case 53:
    case 41:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 35:
    case 34:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[0], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 196:
    case 197:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 427:
    case 424:
    case 394:
    case 391:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 467:
    case 466:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 397:
    case 396:
    case 393:
    case 390:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 77:
    case 76:
    case 67:
    case 62:
    case 29:
    case 26:
    case 24:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 39:
    case 42:
    case 43:
    case 48:
    case 356:
    case 357:
    case 368:
    case 377:
    case 378:
    case 380:
    case 383:
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern enum attr_mode get_attr_mode PARAMS ((rtx));
enum attr_mode
get_attr_mode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_SI;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 235:
    case 221:
    case 209:
    case 207:
    case 158:
    case 157:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 205:
    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_HI;
        }
      else
        {
	  return MODE_SI;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_DF;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_SI;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_DF;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_DF;
        }

    case 63:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DF;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_SF;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))
        {
	  return MODE_SF;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))))
        {
	  return MODE_DI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_DI;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 6)
        {
	  return MODE_QI;
        }
      else if ((((TARGET_MOVX) != (0)) && (which_alternative == 2)) || (((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((TARGET_PARTIAL_REG_DEPENDENCY) != (0)) || (((TARGET_PARTIAL_REG_STALL) != (0)) && ((TARGET_QIMODE_MATH) == (0)))))))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_QI;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) || ((((which_alternative == 1) || (which_alternative == 2)) && (aligned_operand (operands[1], HImode))) || ((which_alternative == 0) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0))))))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_HI;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 4)
        {
	  return MODE_DI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_SI;
        }

    case 53:
    case 55:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_QI;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_SF;
        }

    case 64:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DF;
        }

    case 69:
    case 68:
    case 70:
    case 71:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_SI;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_DF;
        }

    case 93:
    case 94:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_XF;
        }

    case 95:
    case 96:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else
        {
	  return MODE_XF;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else
        {
	  return MODE_SF;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_HI;
        }
      else
        {
	  return MODE_SI;
        }

    case 299:
    case 289:
    case 300:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 668:
    case 669:
    case 670:
    case 671:
    case 672:
    case 673:
    case 674:
    case 675:
    case 676:
    case 678:
    case 679:
    case 680:
    case 681:
    case 682:
    case 683:
    case 684:
      return MODE_V2SF;

    case 507:
    case 569:
    case 570:
    case 571:
    case 572:
    case 573:
    case 574:
    case 575:
    case 576:
    case 696:
    case 698:
    case 700:
    case 702:
    case 704:
    case 706:
    case 708:
    case 710:
    case 711:
    case 716:
    case 717:
    case 720:
    case 722:
    case 723:
    case 726:
    case 738:
    case 811:
    case 812:
    case 820:
    case 821:
    case 825:
    case 832:
    case 834:
    case 836:
      return MODE_V2DF;

    case 500:
    case 501:
    case 502:
    case 508:
    case 509:
    case 531:
    case 532:
    case 533:
    case 534:
    case 535:
    case 537:
    case 539:
    case 540:
    case 541:
    case 542:
    case 546:
    case 547:
    case 549:
    case 551:
    case 553:
    case 555:
    case 557:
    case 559:
    case 561:
    case 562:
    case 563:
    case 564:
    case 565:
    case 566:
    case 567:
    case 568:
    case 585:
    case 586:
    case 587:
    case 588:
    case 593:
    case 594:
    case 595:
    case 597:
    case 599:
    case 600:
    case 737:
    case 831:
    case 833:
    case 835:
    case 837:
    case 838:
      return MODE_V4SF;

    case 577:
    case 578:
    case 579:
    case 580:
    case 581:
    case 582:
    case 583:
    case 584:
    case 685:
    case 686:
    case 687:
    case 688:
    case 689:
    case 690:
    case 691:
    case 692:
    case 693:
    case 718:
    case 719:
    case 721:
    case 724:
    case 725:
    case 727:
    case 728:
    case 729:
    case 730:
    case 731:
    case 739:
    case 740:
    case 741:
    case 742:
    case 743:
    case 744:
    case 745:
    case 746:
    case 747:
    case 748:
    case 749:
    case 750:
    case 751:
    case 752:
    case 753:
    case 754:
    case 755:
    case 756:
    case 757:
    case 758:
    case 759:
    case 760:
    case 761:
    case 762:
    case 763:
    case 764:
    case 765:
    case 766:
    case 767:
    case 768:
    case 769:
    case 770:
    case 771:
    case 772:
    case 773:
    case 774:
    case 775:
    case 776:
    case 777:
    case 778:
    case 779:
    case 780:
    case 781:
    case 782:
    case 783:
    case 784:
    case 785:
    case 786:
    case 787:
    case 788:
    case 789:
    case 790:
    case 791:
    case 792:
    case 793:
    case 794:
    case 795:
    case 796:
    case 797:
    case 798:
    case 799:
    case 800:
    case 801:
    case 802:
    case 803:
    case 804:
    case 805:
    case 806:
    case 807:
    case 808:
    case 809:
    case 810:
    case 813:
    case 814:
    case 815:
    case 816:
    case 817:
    case 818:
    case 819:
    case 839:
      return MODE_TI;

    case 18:
    case 19:
    case 20:
    case 21:
    case 76:
    case 77:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 280:
    case 281:
    case 283:
    case 284:
    case 396:
    case 397:
    case 410:
    case 411:
    case 431:
    case 432:
    case 433:
    case 434:
    case 435:
    case 436:
    case 440:
    case 441:
    case 445:
    case 446:
    case 466:
    case 467:
      return MODE_XF;

    case 16:
    case 17:
    case 67:
    case 92:
    case 101:
    case 106:
    case 107:
    case 108:
    case 109:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 260:
    case 261:
    case 277:
    case 278:
    case 279:
    case 282:
    case 355:
    case 393:
    case 394:
    case 395:
    case 403:
    case 404:
    case 405:
    case 420:
    case 421:
    case 422:
    case 423:
    case 427:
    case 428:
    case 429:
    case 430:
    case 437:
    case 439:
    case 442:
    case 444:
    case 465:
    case 473:
    case 479:
    case 697:
    case 699:
    case 701:
    case 703:
    case 705:
    case 707:
    case 712:
    case 713:
    case 714:
    case 715:
    case 734:
    case 736:
    case 822:
    case 823:
    case 824:
    case 840:
    case 841:
      return MODE_DF;

    case 14:
    case 15:
    case 62:
    case 97:
    case 100:
    case 102:
    case 103:
    case 104:
    case 105:
    case 123:
    case 124:
    case 125:
    case 126:
    case 259:
    case 276:
    case 354:
    case 390:
    case 391:
    case 392:
    case 398:
    case 399:
    case 400:
    case 408:
    case 409:
    case 416:
    case 417:
    case 418:
    case 419:
    case 424:
    case 425:
    case 426:
    case 438:
    case 443:
    case 470:
    case 476:
    case 543:
    case 544:
    case 545:
    case 548:
    case 550:
    case 552:
    case 554:
    case 556:
    case 558:
    case 560:
    case 589:
    case 590:
    case 591:
    case 592:
    case 596:
    case 598:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 709:
    case 735:
      return MODE_SF;

    case 13:
    case 22:
    case 23:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
      return MODE_UNKNOWNFP;

    case 503:
    case 504:
    case 505:
    case 506:
    case 536:
    case 538:
    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
    case 613:
    case 614:
    case 615:
    case 616:
    case 617:
    case 618:
    case 619:
    case 620:
    case 621:
    case 622:
    case 623:
    case 624:
    case 625:
    case 626:
    case 627:
    case 628:
    case 629:
    case 630:
    case 631:
    case 632:
    case 633:
    case 634:
    case 635:
    case 636:
    case 637:
    case 638:
    case 639:
    case 640:
    case 641:
    case 642:
    case 643:
    case 644:
    case 645:
    case 646:
    case 647:
    case 648:
    case 649:
    case 650:
    case 651:
    case 652:
    case 653:
    case 654:
    case 655:
    case 656:
    case 657:
    case 658:
    case 659:
    case 660:
    case 661:
    case 662:
    case 663:
      return MODE_DI;

    case 0:
    case 1:
    case 2:
    case 24:
    case 25:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 39:
    case 43:
    case 51:
    case 52:
    case 54:
    case 78:
    case 79:
    case 83:
    case 84:
    case 85:
    case 86:
    case 88:
    case 90:
    case 139:
    case 140:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 155:
    case 167:
    case 168:
    case 169:
    case 170:
    case 178:
    case 183:
    case 184:
    case 185:
    case 186:
    case 191:
    case 192:
    case 193:
    case 194:
    case 196:
    case 203:
    case 204:
    case 215:
    case 216:
    case 217:
    case 229:
    case 230:
    case 231:
    case 245:
    case 246:
    case 285:
    case 286:
    case 293:
    case 294:
    case 295:
    case 304:
    case 305:
    case 307:
    case 309:
    case 323:
    case 325:
    case 337:
    case 345:
    case 401:
    case 402:
    case 406:
    case 407:
    case 412:
    case 413:
    case 414:
    case 415:
    case 448:
    case 451:
    case 452:
    case 453:
    case 456:
    case 461:
    case 462:
    case 480:
    case 732:
    case 733:
      return MODE_SI;

    case 3:
    case 4:
    case 5:
    case 40:
    case 42:
    case 44:
    case 45:
    case 46:
    case 80:
    case 81:
    case 82:
    case 89:
    case 121:
    case 122:
    case 152:
    case 153:
    case 154:
    case 156:
    case 171:
    case 172:
    case 173:
    case 179:
    case 195:
    case 197:
    case 206:
    case 218:
    case 219:
    case 220:
    case 232:
    case 233:
    case 234:
    case 247:
    case 248:
    case 287:
    case 288:
    case 297:
    case 298:
    case 311:
    case 313:
    case 327:
    case 329:
    case 339:
    case 347:
    case 449:
    case 454:
    case 463:
      return MODE_HI;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 48:
    case 49:
    case 50:
    case 56:
    case 57:
    case 141:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 174:
    case 175:
    case 176:
    case 177:
    case 180:
    case 181:
    case 182:
    case 187:
    case 188:
    case 199:
    case 200:
    case 201:
    case 208:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 249:
    case 250:
    case 290:
    case 301:
    case 316:
    case 317:
    case 319:
    case 332:
    case 333:
    case 335:
    case 342:
    case 343:
    case 350:
    case 351:
    case 352:
    case 353:
    case 450:
    case 455:
    case 457:
    case 458:
    case 459:
    case 460:
      return MODE_QI;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return MODE_UNKNOWN;

    }
}

extern enum attr_ppro_uops get_attr_ppro_uops PARAMS ((rtx));
enum attr_ppro_uops
get_attr_ppro_uops (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (const0_operand (operands[2], SImode)))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return PPRO_UOPS_MANY;
        }
      else
        {
	  return PPRO_UOPS_FEW;
        }

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 379:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return PPRO_UOPS_MANY;
        }
      else
        {
	  return PPRO_UOPS_FEW;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 57:
    case 56:
    case 49:
    case 44:
      if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 55:
    case 53:
    case 41:
      if (get_attr_type (insn) == TYPE_IMOV)
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode))))))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 497:
    case 496:
    case 495:
    case 494:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 382:
    case 381:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 138:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
    case 371:
    case 401:
    case 402:
    case 406:
    case 407:
    case 412:
    case 413:
    case 414:
    case 415:
      return PPRO_UOPS_MANY;

    case 828:
    case 827:
    case 826:
    case 667:
    case 666:
    case 665:
    case 664:
    case 467:
    case 466:
    case 464:
    case 463:
    case 462:
    case 447:
    case 353:
    case 352:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 46:
    case 40:
    case 35:
    case 34:
    case 33:
    case 32:
    case 24:
    case 39:
    case 42:
    case 43:
    case 48:
    case 121:
    case 122:
    case 139:
    case 167:
    case 183:
    case 185:
    case 186:
    case 187:
    case 188:
    case 191:
    case 194:
    case 195:
    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 293:
    case 304:
    case 383:
    case 384:
      return PPRO_UOPS_FEW;

    case 761:
    case 695:
    case 694:
    case 677:
    case 628:
    case 627:
    case 586:
    case 585:
    case 461:
    case 145:
    case 144:
    case 143:
    case 142:
    case 25:
    case 380:
      return PPRO_UOPS_ONE;

    default:
      if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    }
}

extern enum attr_pent_pair get_attr_pent_pair PARAMS ((rtx));
enum attr_pent_pair
get_attr_pent_pair (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return PENT_PAIR_PV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return PENT_PAIR_PV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 351:
    case 349:
    case 342:
    case 340:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (const_int_1_operand (operands[1], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 350:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 341:
    case 339:
    case 338:
    case 337:
    case 336:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (const_int_1_operand (operands[2], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 333:
    case 331:
    case 317:
    case 315:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (const_int_operand (operands[1], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 335:
    case 334:
    case 332:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 316:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (const_int_operand (operands[2], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 298:
    case 297:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode))))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))
        {
	  if (which_alternative == 0)
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 301:
    case 300:
    case 295:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 294:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 205:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  if ((which_alternative == 0) || (which_alternative == 1))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative != 0)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 81:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative != 0)
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 55:
    case 53:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  if (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) || (get_attr_mode (insn) == MODE_HI))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 46:
    case 40:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 35:
    case 34:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[0], VOIDmode)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 33:
    case 32:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 288:
    case 234:
    case 233:
    case 232:
    case 220:
    case 219:
    case 218:
    case 206:
    case 173:
    case 172:
    case 171:
    case 156:
    case 154:
    case 153:
    case 152:
    case 80:
    case 45:
    case 44:
    case 5:
    case 4:
    case 3:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_PU;
        }

    case 480:
    case 290:
    case 286:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 204:
    case 201:
    case 200:
    case 177:
    case 176:
    case 175:
    case 174:
    case 170:
    case 169:
    case 168:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 155:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
    case 83:
    case 78:
    case 57:
    case 56:
    case 50:
    case 49:
    case 37:
    case 36:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 2:
    case 1:
    case 0:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_UV;
        }

    case 196:
    case 197:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 1)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_UV;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 1)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative == 2)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      return PENT_PAIR_PV;

    case 139:
    case 167:
    case 461:
      return PENT_PAIR_PU;

    case 145:
    case 144:
    case 143:
    case 142:
      return PENT_PAIR_UV;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return PENT_PAIR_NP;

    }
}

extern enum attr_pent_prefix get_attr_pent_prefix PARAMS ((rtx));
enum attr_pent_prefix
get_attr_pent_prefix (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 405:
    case 404:
    case 400:
    case 399:
      if ((get_attr_prefix_0f (insn) == 1) || (get_attr_unit (insn) == UNIT_SSE))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 203:
    case 178:
    case 128:
    case 124:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 88:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) || (which_alternative != 0))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 296:
    case 99:
    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative != 3) && (which_alternative != 4))) || ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative != 0) && ((which_alternative != 3) && (which_alternative != 4)))) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative != 2) && (which_alternative != 3)) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 55:
    case 53:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) || (get_attr_mode (insn) == MODE_HI))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 427:
    case 424:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 497:
    case 496:
    case 495:
    case 494:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 480:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 461:
    case 455:
    case 453:
    case 450:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 423:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
    case 402:
    case 401:
    case 398:
    case 397:
    case 396:
    case 393:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
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
    case 357:
    case 356:
    case 351:
    case 350:
    case 349:
    case 348:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 328:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 312:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 295:
    case 294:
    case 292:
    case 291:
    case 290:
    case 289:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 250:
    case 249:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 204:
    case 202:
    case 201:
    case 200:
    case 199:
    case 198:
    case 196:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 177:
    case 176:
    case 175:
    case 174:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 157:
    case 155:
    case 150:
    case 149:
    case 148:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 106:
    case 105:
    case 104:
    case 103:
    case 102:
    case 100:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 87:
    case 86:
    case 83:
    case 78:
    case 77:
    case 76:
    case 75:
    case 74:
    case 73:
    case 72:
    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 64:
    case 63:
    case 62:
    case 60:
    case 58:
    case 57:
    case 56:
    case 50:
    case 49:
    case 48:
    case 43:
    case 39:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 29:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
    case 18:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 2:
    case 1:
    case 0:
      return PENT_PREFIX_FALSE;

    default:
      return PENT_PREFIX_TRUE;

    }
}

extern int get_attr_prefix_0f PARAMS ((rtx));
int
get_attr_prefix_0f (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 405:
    case 400:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_SSEADD) || ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_SSEDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 404:
    case 399:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_SSEADD) || (((which_alternative == 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_SSEDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 0;
        }

    case 179:
    case 178:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 205:
    case 203:
    case 128:
    case 124:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 99:
    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative != 3) && (which_alternative != 4)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative != 2) && (which_alternative != 3)) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 55:
    case 53:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 427:
    case 424:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 88:
    case 89:
      extract_constrain_insn_cached (insn);
      if ((! (((ix86_cpu) == (CPU_K6)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 841:
    case 840:
    case 839:
    case 838:
    case 837:
    case 836:
    case 835:
    case 834:
    case 833:
    case 832:
    case 831:
    case 828:
    case 827:
    case 826:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 813:
    case 812:
    case 811:
    case 810:
    case 809:
    case 808:
    case 807:
    case 806:
    case 805:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 795:
    case 794:
    case 793:
    case 792:
    case 791:
    case 790:
    case 789:
    case 788:
    case 787:
    case 786:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 780:
    case 779:
    case 778:
    case 777:
    case 776:
    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 769:
    case 768:
    case 767:
    case 766:
    case 765:
    case 764:
    case 763:
    case 762:
    case 761:
    case 760:
    case 759:
    case 758:
    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 743:
    case 742:
    case 741:
    case 740:
    case 739:
    case 738:
    case 737:
    case 736:
    case 735:
    case 734:
    case 733:
    case 732:
    case 731:
    case 730:
    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 723:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 709:
    case 708:
    case 707:
    case 706:
    case 705:
    case 704:
    case 703:
    case 702:
    case 701:
    case 700:
    case 699:
    case 698:
    case 697:
    case 696:
    case 695:
    case 694:
    case 693:
    case 692:
    case 691:
    case 690:
    case 689:
    case 688:
    case 687:
    case 686:
    case 685:
    case 684:
    case 683:
    case 682:
    case 681:
    case 680:
    case 679:
    case 678:
    case 677:
    case 676:
    case 675:
    case 674:
    case 673:
    case 672:
    case 671:
    case 670:
    case 669:
    case 668:
    case 667:
    case 666:
    case 665:
    case 664:
    case 663:
    case 662:
    case 661:
    case 660:
    case 659:
    case 658:
    case 657:
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 636:
    case 635:
    case 634:
    case 633:
    case 632:
    case 631:
    case 630:
    case 629:
    case 628:
    case 627:
    case 626:
    case 625:
    case 624:
    case 623:
    case 622:
    case 621:
    case 620:
    case 619:
    case 618:
    case 617:
    case 616:
    case 615:
    case 614:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 563:
    case 562:
    case 561:
    case 560:
    case 559:
    case 558:
    case 557:
    case 556:
    case 555:
    case 554:
    case 553:
    case 552:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
    case 538:
    case 537:
    case 536:
    case 535:
    case 534:
    case 533:
    case 532:
    case 531:
    case 530:
    case 529:
    case 528:
    case 527:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 501:
    case 500:
    case 479:
    case 476:
    case 473:
    case 470:
    case 463:
    case 462:
    case 428:
    case 425:
    case 395:
    case 392:
    case 355:
    case 354:
    case 353:
    case 352:
    case 131:
    case 129:
    case 125:
    case 117:
    case 116:
    case 101:
    case 92:
    case 90:
    case 85:
    case 82:
    case 79:
    case 54:
    case 52:
    case 51:
    case 31:
    case 28:
    case 293:
    case 304:
    case 384:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int get_attr_prefix_rep PARAMS ((rtx));
int
get_attr_prefix_rep (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 405:
    case 404:
    case 400:
    case 399:
      if (get_attr_unit (insn) == UNIT_SSE)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative != 0) && ((which_alternative != 3) && (which_alternative != 4)))) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 841:
    case 840:
    case 824:
    case 823:
    case 822:
    case 736:
    case 735:
    case 734:
    case 715:
    case 714:
    case 713:
    case 712:
    case 709:
    case 707:
    case 705:
    case 703:
    case 701:
    case 699:
    case 697:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 598:
    case 596:
    case 592:
    case 591:
    case 590:
    case 589:
    case 560:
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 545:
    case 544:
    case 543:
    case 479:
    case 476:
    case 473:
    case 470:
    case 428:
    case 425:
    case 395:
    case 392:
    case 355:
    case 354:
    case 131:
    case 129:
    case 125:
    case 101:
    case 92:
    case 451:
    case 452:
    case 456:
    case 457:
    case 458:
    case 459:
    case 460:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int get_attr_prefix_data16 PARAMS ((rtx));
int
get_attr_prefix_data16 (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 296:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 205:
    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 41:
      if (get_attr_mode (insn) == MODE_HI)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 836:
    case 834:
    case 832:
    case 825:
    case 821:
    case 820:
    case 812:
    case 811:
    case 738:
    case 726:
    case 723:
    case 722:
    case 720:
    case 717:
    case 716:
    case 711:
    case 710:
    case 708:
    case 706:
    case 704:
    case 702:
    case 700:
    case 698:
    case 696:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 507:
    case 463:
    case 454:
    case 449:
    case 347:
    case 339:
    case 329:
    case 327:
    case 313:
    case 311:
    case 298:
    case 297:
    case 288:
    case 287:
    case 248:
    case 247:
    case 234:
    case 233:
    case 232:
    case 220:
    case 219:
    case 218:
    case 206:
    case 197:
    case 195:
    case 179:
    case 173:
    case 172:
    case 171:
    case 156:
    case 154:
    case 153:
    case 152:
    case 122:
    case 121:
    case 89:
    case 82:
    case 81:
    case 80:
    case 46:
    case 45:
    case 44:
    case 42:
    case 40:
    case 5:
    case 4:
    case 3:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern enum attr_type get_attr_type PARAMS ((rtx));
enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 465:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FCMOV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FCMOV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_ICMOV;
        }
      else
        {
	  return TYPE_ICMOV;
        }

    case 205:
    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_IMOVX;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return TYPE_LEA;
        }
      else if (incdec_operand (operands[2], SImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_SSECVT;
        }

    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FMOV;
        }
      else
        {
	  return TYPE_SSECVT;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_SSEMOV;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_IMOV;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return TYPE_SSEMOV;
        }
      else
        {
	  return TYPE_MMXMOV;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_OTHER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_MMX;
        }
      else
        {
	  return TYPE_SSEMOV;
        }

    case 47:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0))))
        {
	  return TYPE_IMOV;
        }
      else if ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 41:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0)))) || (((which_alternative == 1) || (which_alternative == 2)) && (aligned_operand (operands[1], HImode))))
        {
	  return TYPE_IMOV;
        }
      else if (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 0:
    case 3:
    case 6:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_TEST;
        }
      else
        {
	  return TYPE_ICMP;
        }

    case 27:
    case 30:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FCMP;
        }
      else
        {
	  return TYPE_SSECMP;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return TYPE_MMXMOV;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return TYPE_SSEMOV;
        }
      else if (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))
        {
	  return TYPE_LEA;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 53:
      extract_constrain_insn_cached (insn);
      if ((register_operand (operands[0], QImode)) && ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 55:
      extract_constrain_insn_cached (insn);
      if ((register_operand (operands[0], QImode)) && ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MULTI;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_PUSH;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 81:
    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_ALU1;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SSECVT;
        }
      else
        {
	  return TYPE_FMOV;
        }

    case 124:
    case 128:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_SSECVT;
        }

    case 123:
    case 126:
    case 127:
    case 130:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 147:
    case 148:
    case 149:
    case 150:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], SImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LEA;
        }
      else
        {
	  if (incdec_operand (operands[2], HImode))
	    {
	      return TYPE_INCDEC;
	    }
	  else
	    {
	      return TYPE_ALU;
	    }
        }

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LEA;
        }
      else
        {
	  if (incdec_operand (operands[2], QImode))
	    {
	      return TYPE_INCDEC;
	    }
	  else
	    {
	      return TYPE_ALU;
	    }
        }

    case 159:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], QImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU1;
        }

    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 162:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], HImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 158:
    case 160:
    case 161:
    case 163:
    case 164:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], QImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 294:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 295:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 297:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 298:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 299:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 300:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 301:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 390:
    case 393:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 391:
    case 394:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  if (mult_operator (operands[3], SFmode))
	    {
	      return TYPE_SSEMUL;
	    }
	  else
	    {
	      return TYPE_SSEADD;
	    }
        }
      else
        {
	  if (mult_operator (operands[3], SFmode))
	    {
	      return TYPE_FMUL;
	    }
	  else
	    {
	      return TYPE_FOP;
	    }
        }

    case 392:
    case 395:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_SSEMUL;
        }
      else
        {
	  return TYPE_SSEADD;
        }

    case 396:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 397:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (mult_operator (operands[3], SFmode)))
        {
	  return TYPE_SSEMUL;
        }
      else if ((which_alternative == 2) && (div_operator (operands[3], SFmode)))
        {
	  return TYPE_SSEDIV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_SSEADD;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], SFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 398:
    case 401:
    case 402:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], SFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (mult_operator (operands[3], SFmode)))
        {
	  return TYPE_SSEMUL;
        }
      else if ((which_alternative == 2) && (div_operator (operands[3], SFmode)))
        {
	  return TYPE_SSEDIV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_SSEADD;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], DFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 400:
    case 405:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_SSEMUL;
        }
      else if (div_operator (operands[3], SFmode))
        {
	  return TYPE_SSEDIV;
        }
      else
        {
	  return TYPE_SSEADD;
        }

    case 403:
    case 406:
    case 407:
    case 408:
    case 409:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], DFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], DFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 410:
    case 412:
    case 414:
    case 416:
    case 418:
    case 420:
    case 422:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], XFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 411:
    case 413:
    case 415:
    case 417:
    case 419:
    case 421:
    case 423:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], TFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 424:
    case 427:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSPC;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 480:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU;
        }
      else if (const0_operand (operands[2], SImode))
        {
	  return TYPE_IMOV;
        }
      else
        {
	  return TYPE_LEA;
        }

    case 816:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SSECVT;
        }
      else
        {
	  return TYPE_SSEMOV;
        }

    case 631:
    case 632:
    case 633:
    case 647:
    case 648:
    case 649:
    case 650:
    case 651:
    case 652:
    case 653:
    case 654:
    case 655:
    case 656:
    case 657:
    case 685:
      return TYPE_MMXSHFT;

    case 505:
    case 506:
    case 536:
    case 634:
    case 635:
    case 636:
    case 658:
    case 659:
    case 660:
    case 661:
    case 662:
    case 663:
    case 678:
    case 679:
    case 683:
    case 684:
    case 692:
    case 693:
      return TYPE_MMXCVT;

    case 637:
    case 638:
    case 639:
    case 640:
    case 641:
    case 642:
    case 671:
    case 672:
    case 673:
      return TYPE_MMXCMP;

    case 622:
    case 623:
    case 624:
    case 625:
    case 676:
    case 691:
      return TYPE_MMXMUL;

    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
    case 613:
    case 614:
    case 615:
    case 616:
    case 617:
    case 618:
    case 619:
    case 620:
    case 621:
    case 626:
    case 627:
    case 628:
    case 629:
    case 630:
    case 643:
    case 644:
    case 645:
    case 646:
    case 668:
    case 669:
    case 670:
    case 674:
    case 675:
    case 680:
    case 681:
    case 682:
      return TYPE_MMXADD;

    case 503:
    case 504:
    case 538:
      return TYPE_MMXMOV;

    case 527:
    case 528:
    case 529:
    case 530:
    case 664:
    case 677:
    case 686:
    case 687:
    case 688:
    case 689:
    case 690:
    case 695:
      return TYPE_MMX;

    case 553:
    case 554:
    case 702:
    case 703:
      return TYPE_SSEDIV;

    case 92:
    case 101:
    case 116:
    case 117:
    case 125:
    case 129:
    case 131:
    case 533:
    case 534:
    case 535:
    case 539:
    case 540:
    case 541:
    case 542:
    case 546:
    case 593:
    case 594:
    case 599:
    case 600:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 716:
    case 717:
    case 718:
    case 719:
    case 720:
    case 721:
    case 722:
    case 723:
    case 724:
    case 725:
    case 726:
    case 727:
    case 728:
    case 729:
    case 730:
    case 731:
    case 732:
    case 733:
    case 734:
    case 735:
    case 736:
    case 737:
    case 738:
    case 765:
    case 766:
    case 767:
    case 768:
    case 769:
    case 798:
    case 799:
    case 800:
    case 801:
    case 802:
    case 803:
    case 804:
    case 805:
    case 806:
    case 807:
    case 808:
    case 809:
    case 810:
    case 812:
    case 814:
    case 815:
    case 820:
    case 821:
    case 822:
    case 823:
    case 824:
    case 825:
    case 839:
    case 840:
    case 841:
      return TYPE_SSECVT;

    case 28:
    case 31:
    case 354:
    case 355:
    case 587:
    case 588:
    case 589:
    case 590:
    case 591:
    case 592:
    case 710:
    case 711:
    case 712:
    case 713:
    case 714:
    case 715:
    case 770:
    case 771:
    case 772:
    case 773:
    case 774:
    case 775:
      return TYPE_SSECMP;

    case 551:
    case 552:
    case 700:
    case 701:
      return TYPE_SSEMUL;

    case 547:
    case 548:
    case 549:
    case 550:
    case 696:
    case 697:
    case 698:
    case 699:
    case 704:
    case 705:
    case 706:
    case 707:
    case 831:
    case 832:
    case 833:
    case 834:
    case 835:
    case 836:
      return TYPE_SSEADD;

    case 500:
    case 501:
    case 502:
    case 507:
    case 508:
    case 509:
    case 531:
    case 532:
    case 537:
    case 543:
    case 544:
    case 545:
    case 811:
    case 813:
    case 817:
    case 818:
    case 819:
      return TYPE_SSEMOV;

    case 425:
    case 428:
    case 470:
    case 473:
    case 476:
    case 479:
    case 555:
    case 556:
    case 557:
    case 558:
    case 559:
    case 560:
    case 595:
    case 596:
    case 597:
    case 598:
    case 665:
    case 666:
    case 667:
    case 694:
    case 708:
    case 709:
    case 826:
    case 827:
    case 828:
    case 837:
    case 838:
      return TYPE_SSE;

    case 755:
    case 756:
    case 757:
    case 758:
    case 759:
      return TYPE_SSEIMUL;

    case 780:
    case 781:
    case 782:
    case 783:
    case 784:
    case 785:
    case 786:
    case 787:
    case 788:
    case 789:
    case 790:
    case 791:
    case 792:
    case 793:
    case 794:
    case 795:
    case 796:
    case 797:
      return TYPE_SSEISHFT;

    case 739:
    case 740:
    case 741:
    case 742:
    case 743:
    case 744:
    case 745:
    case 746:
    case 747:
    case 748:
    case 749:
    case 750:
    case 751:
    case 752:
    case 753:
    case 754:
    case 760:
    case 761:
    case 762:
    case 763:
    case 764:
    case 776:
    case 777:
    case 778:
    case 779:
      return TYPE_SSEIADD;

    case 561:
    case 562:
    case 563:
    case 564:
    case 565:
    case 566:
    case 567:
    case 568:
    case 569:
    case 570:
    case 571:
    case 572:
    case 573:
    case 574:
    case 575:
    case 576:
    case 577:
    case 578:
    case 579:
    case 580:
    case 581:
    case 582:
    case 583:
    case 584:
    case 585:
    case 586:
      return TYPE_SSELOG;

    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 118:
    case 119:
    case 120:
      return TYPE_FISTP;

    case 62:
    case 67:
    case 76:
    case 77:
      return TYPE_FXCH;

    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 22:
    case 26:
    case 29:
      return TYPE_FCMP;

    case 466:
    case 467:
      return TYPE_FCMOV;

    case 426:
    case 429:
    case 430:
    case 431:
    case 432:
    case 433:
    case 434:
    case 435:
    case 436:
    case 437:
    case 438:
    case 439:
    case 440:
    case 441:
    case 442:
    case 443:
    case 444:
    case 445:
    case 446:
      return TYPE_FPSPC;

    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 276:
    case 277:
    case 278:
    case 279:
    case 280:
    case 281:
    case 282:
    case 283:
    case 284:
      return TYPE_FSGN;

    case 93:
    case 94:
    case 95:
    case 96:
    case 100:
    case 103:
    case 105:
    case 107:
    case 109:
      return TYPE_FMOV;

    case 447:
      return TYPE_CLD;

    case 448:
    case 449:
    case 450:
    case 451:
    case 452:
    case 453:
    case 454:
    case 455:
    case 456:
    case 457:
    case 458:
    case 459:
    case 460:
      return TYPE_STR;

    case 494:
    case 495:
    case 496:
    case 497:
      return TYPE_CALLV;

    case 372:
    case 373:
    case 374:
    case 375:
      return TYPE_CALL;

    case 34:
    case 35:
      return TYPE_POP;

    case 32:
    case 33:
    case 40:
    case 46:
      return TYPE_PUSH;

    case 462:
    case 463:
      return TYPE_ICMOV;

    case 352:
    case 353:
      return TYPE_SETCC;

    case 356:
    case 357:
    case 368:
    case 369:
    case 370:
    case 371:
    case 379:
      return TYPE_IBR;

    case 10:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
      return TYPE_TEST;

    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
      return TYPE_ICMP;

    case 187:
    case 188:
    case 191:
    case 194:
    case 195:
      return TYPE_IDIV;

    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
      return TYPE_IMUL;

    case 340:
    case 342:
    case 349:
    case 351:
      return TYPE_ROTATE1;

    case 336:
    case 337:
    case 338:
    case 339:
    case 341:
    case 343:
    case 344:
    case 345:
    case 346:
    case 347:
    case 348:
    case 350:
      return TYPE_ROTATE;

    case 315:
    case 317:
    case 331:
    case 333:
      return TYPE_ISHIFT1;

    case 293:
    case 304:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 316:
    case 318:
    case 319:
    case 322:
    case 323:
    case 324:
    case 325:
    case 326:
    case 327:
    case 328:
    case 329:
    case 330:
    case 332:
    case 334:
    case 335:
      return TYPE_ISHIFT;

    case 142:
    case 143:
    case 144:
    case 145:
      return TYPE_LEA;

    case 51:
    case 52:
    case 54:
    case 79:
    case 82:
    case 85:
    case 88:
    case 89:
    case 90:
      return TYPE_IMOVX;

    case 39:
    case 42:
    case 43:
    case 44:
    case 48:
    case 49:
    case 56:
    case 57:
      return TYPE_IMOV;

    case 245:
    case 246:
    case 247:
    case 248:
    case 249:
    case 250:
    case 285:
    case 287:
    case 289:
      return TYPE_NEGNOT;

    case 36:
    case 37:
    case 45:
    case 50:
    case 78:
    case 80:
    case 83:
    case 175:
    case 208:
    case 210:
    case 222:
    case 224:
    case 236:
    case 241:
    case 286:
    case 288:
    case 290:
      return TYPE_ALU1;

    case 139:
    case 140:
    case 141:
    case 165:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 176:
    case 177:
    case 204:
    case 206:
    case 207:
    case 209:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 223:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 237:
    case 238:
    case 239:
    case 240:
    case 242:
    case 243:
    case 461:
      return TYPE_ALU;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 13:
    case 17:
    case 20:
    case 21:
    case 23:
    case 63:
    case 64:
    case 68:
    case 69:
    case 70:
    case 71:
    case 189:
    case 190:
    case 192:
    case 193:
    case 291:
    case 292:
    case 302:
    case 303:
    case 320:
    case 321:
    case 381:
    case 385:
    case 386:
    case 387:
    case 388:
    case 493:
    case 520:
    case 521:
    case 522:
    case 523:
    case 524:
    case 525:
    case 526:
      return TYPE_MULTI;

    default:
      return TYPE_OTHER;

    }
}

extern enum attr_unit get_attr_unit PARAMS ((rtx));
enum attr_unit
get_attr_unit (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 465:
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], TFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], XFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else if ((get_attr_type (insn) == TYPE_SSEADD) || (((which_alternative == 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_SSEDIV)))
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], DFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 405:
    case 400:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_SSEADD) || ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_SSEDIV)))
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 399:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else if ((get_attr_type (insn) == TYPE_SSEADD) || (((which_alternative == 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_SSEDIV)))
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_SSE;
        }

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UNIT_I387;
        }
      else if (which_alternative != 1)
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_SSE;
        }

    case 98:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UNIT_I387;
        }
      else if ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_SSE;
        }

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return UNIT_I387;
        }
      else if ((which_alternative != 3) && (which_alternative != 4))
        {
	  return UNIT_SSE;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return UNIT_I387;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return UNIT_SSE;
        }
      else if ((which_alternative == 9) || ((which_alternative == 10) || (which_alternative == 11)))
        {
	  return UNIT_MMX;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return UNIT_SSE;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return UNIT_MMX;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return UNIT_UNKNOWN;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return UNIT_SSE;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return UNIT_MMX;
        }
      else
        {
	  return UNIT_INTEGER;
        }

    case 427:
    case 424:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UNIT_I387;
        }
      else
        {
	  return UNIT_SSE;
        }

    case 830:
    case 829:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 389:
    case 384:
    case 383:
    case 382:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 166:
    case 138:
    case 87:
    case 86:
    case 58:
    case 25:
      return UNIT_UNKNOWN;

    case 695:
    case 693:
    case 692:
    case 691:
    case 690:
    case 689:
    case 688:
    case 687:
    case 686:
    case 685:
    case 684:
    case 683:
    case 682:
    case 681:
    case 680:
    case 679:
    case 678:
    case 677:
    case 676:
    case 675:
    case 674:
    case 673:
    case 672:
    case 671:
    case 670:
    case 669:
    case 668:
    case 664:
    case 663:
    case 662:
    case 661:
    case 660:
    case 659:
    case 658:
    case 657:
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 636:
    case 635:
    case 634:
    case 633:
    case 632:
    case 631:
    case 630:
    case 629:
    case 628:
    case 627:
    case 626:
    case 625:
    case 624:
    case 623:
    case 622:
    case 621:
    case 620:
    case 619:
    case 618:
    case 617:
    case 616:
    case 615:
    case 614:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 538:
    case 536:
    case 530:
    case 529:
    case 528:
    case 527:
    case 506:
    case 505:
    case 504:
    case 503:
      return UNIT_MMX;

    case 841:
    case 840:
    case 839:
    case 838:
    case 837:
    case 836:
    case 835:
    case 834:
    case 833:
    case 832:
    case 831:
    case 828:
    case 827:
    case 826:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 813:
    case 812:
    case 811:
    case 810:
    case 809:
    case 808:
    case 807:
    case 806:
    case 805:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 795:
    case 794:
    case 793:
    case 792:
    case 791:
    case 790:
    case 789:
    case 788:
    case 787:
    case 786:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 780:
    case 779:
    case 778:
    case 777:
    case 776:
    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 769:
    case 768:
    case 767:
    case 766:
    case 765:
    case 764:
    case 763:
    case 762:
    case 761:
    case 760:
    case 759:
    case 758:
    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 743:
    case 742:
    case 741:
    case 740:
    case 739:
    case 738:
    case 737:
    case 736:
    case 735:
    case 734:
    case 733:
    case 732:
    case 731:
    case 730:
    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 723:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 709:
    case 708:
    case 707:
    case 706:
    case 705:
    case 704:
    case 703:
    case 702:
    case 701:
    case 700:
    case 699:
    case 698:
    case 697:
    case 696:
    case 694:
    case 667:
    case 666:
    case 665:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 563:
    case 562:
    case 561:
    case 560:
    case 559:
    case 558:
    case 557:
    case 556:
    case 555:
    case 554:
    case 553:
    case 552:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
    case 537:
    case 535:
    case 534:
    case 533:
    case 532:
    case 531:
    case 509:
    case 508:
    case 507:
    case 502:
    case 501:
    case 500:
    case 479:
    case 476:
    case 473:
    case 470:
    case 428:
    case 425:
    case 395:
    case 392:
    case 355:
    case 354:
    case 131:
    case 129:
    case 125:
    case 117:
    case 116:
    case 101:
    case 92:
    case 31:
    case 28:
      return UNIT_SSE;

    case 467:
    case 466:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 397:
    case 396:
    case 393:
    case 390:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 77:
    case 76:
    case 67:
    case 62:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 24:
    case 121:
    case 122:
      return UNIT_I387;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return UNIT_INTEGER;

    }
}

static int athlon_muldiv_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_muldiv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 42 /* 0x2a */;

    default:
      abort ();
    }
}

static int athlon_muldiv_unit_conflict_cost PARAMS ((rtx, rtx));
static int
athlon_muldiv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 42 /* 0x2a */;

    default:
      abort ();
    }
}

static int athlon_ieu_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_ieu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      casenum = 1;
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative == 2) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      if ((get_attr_type (insn) == TYPE_IMOV) || (get_attr_type (insn) == TYPE_IMOVX))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) || ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 497:
    case 496:
    case 495:
    case 494:
    case 480:
    case 463:
    case 462:
    case 461:
    case 447:
    case 379:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
    case 353:
    case 352:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 57:
    case 56:
    case 54:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 40:
    case 39:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 15 /* 0xf */;

    case 2:
      return 1;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int athlon_ieu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
athlon_ieu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      casenum = 1;
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative == 2) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 61:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      if ((get_attr_type (insn) == TYPE_IMOV) || (get_attr_type (insn) == TYPE_IMOVX))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) || ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 497:
    case 496:
    case 495:
    case 494:
    case 480:
    case 463:
    case 462:
    case 461:
    case 447:
    case 379:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
    case 353:
    case 352:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 57:
    case 56:
    case 54:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 40:
    case 39:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 15 /* 0xf */;

    case 2:
      return 1;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int athlon_vectordec_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_vectordec_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 128:
    case 124:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 98:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 130:
    case 127:
    case 126:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 96:
    case 95:
    case 94:
    case 93:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 91:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 66:
    case 65:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 464:
    case 59:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 46:
    case 40:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 604:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 293:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 166:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 39:
    case 35:
    case 34:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      casenum = 0;
      break;

    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      switch (recog_memoized (insn))
	{
        case 137:
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 0) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 128:
        case 124:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 1)
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 98:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 130:
        case 127:
        case 126:
        case 123:
        case 108:
        case 106:
        case 104:
        case 102:
        case 97:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 96:
        case 95:
        case 94:
        case 93:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 91:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 75:
        case 74:
        case 73:
        case 72:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 66:
        case 65:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 464:
        case 59:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && (which_alternative != 1))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 46:
        case 40:
        case 33:
        case 32:
	  extract_insn_cached (insn);
	  if (! (memory_operand (operands[1], VOIDmode)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 830:
        case 829:
        case 604:
        case 526:
        case 525:
        case 524:
        case 523:
        case 522:
        case 521:
        case 520:
        case 519:
        case 518:
        case 517:
        case 516:
        case 515:
        case 514:
        case 513:
        case 512:
        case 511:
        case 510:
        case 499:
        case 498:
        case 493:
        case 492:
        case 491:
        case 490:
        case 489:
        case 488:
        case 487:
        case 486:
        case 485:
        case 484:
        case 483:
        case 482:
        case 481:
        case 478:
        case 477:
        case 475:
        case 474:
        case 472:
        case 471:
        case 469:
        case 468:
        case 467:
        case 466:
        case 465:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 449:
        case 448:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 389:
        case 388:
        case 387:
        case 386:
        case 385:
        case 384:
        case 383:
        case 382:
        case 381:
        case 380:
        case 378:
        case 377:
        case 376:
        case 375:
        case 374:
        case 373:
        case 372:
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
        case 321:
        case 320:
        case 303:
        case 302:
        case 293:
        case 292:
        case 291:
        case 275:
        case 274:
        case 273:
        case 272:
        case 271:
        case 270:
        case 269:
        case 268:
        case 258:
        case 257:
        case 256:
        case 255:
        case 254:
        case 253:
        case 252:
        case 251:
        case 244:
        case 202:
        case 195:
        case 194:
        case 193:
        case 192:
        case 191:
        case 190:
        case 189:
        case 188:
        case 187:
        case 186:
        case 185:
        case 184:
        case 183:
        case 182:
        case 181:
        case 180:
        case 179:
        case 178:
        case 166:
        case 138:
        case 122:
        case 121:
        case 87:
        case 86:
        case 71:
        case 70:
        case 69:
        case 68:
        case 64:
        case 63:
        case 58:
        case 39:
        case 35:
        case 34:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 21:
        case 20:
        case 17:
        case 13:
	  return 1;

        default:
	  return 0;

      }

    default:
      abort ();
    }
}

static int k6_fpu_unit_blockage PARAMS ((rtx, rtx));
static int
k6_fpu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 2;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    default:
      abort ();
    }
}

static int k6_fpu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_fpu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 2;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    default:
      abort ();
    }
}

static int k6_store_unit_blockage PARAMS ((rtx, rtx));
static int
k6_store_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      casenum = 1;
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 299:
    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 145:
    case 144:
    case 143:
    case 142:
      casenum = 0;
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int k6_store_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_store_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
      casenum = 1;
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 299:
    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 145:
    case 144:
    case 143:
    case 142:
      casenum = 0;
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int k6_load_unit_blockage PARAMS ((rtx, rtx));
static int
k6_load_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 665:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 353:
    case 352:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 35:
    case 34:
      casenum = 0;
      break;

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 46:
    case 45:
    case 40:
    case 37:
    case 36:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 761:
    case 695:
    case 694:
    case 677:
    case 667:
    case 666:
    case 664:
    case 628:
    case 627:
    case 586:
    case 585:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 145:
    case 144:
    case 143:
    case 142:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      casenum = 1;
      break;

    default:
      casenum = 0;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    default:
      abort ();
    }
}

static int k6_load_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_load_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 497:
    case 496:
    case 495:
    case 494:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 375:
    case 374:
    case 373:
    case 372:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 665:
    case 452:
    case 451:
    case 450:
    case 449:
    case 448:
    case 353:
    case 352:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 35:
    case 34:
      casenum = 0;
      break;

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 46:
    case 45:
    case 40:
    case 37:
    case 36:
    case 33:
    case 32:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 673:
    case 672:
    case 671:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 355:
    case 354:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 761:
    case 695:
    case 694:
    case 677:
    case 667:
    case 666:
    case 664:
    case 628:
    case 627:
    case 586:
    case 585:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 499:
    case 498:
    case 493:
    case 492:
    case 491:
    case 490:
    case 489:
    case 488:
    case 487:
    case 486:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 478:
    case 477:
    case 475:
    case 474:
    case 472:
    case 471:
    case 469:
    case 468:
    case 467:
    case 466:
    case 465:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 383:
    case 382:
    case 381:
    case 380:
    case 378:
    case 377:
    case 376:
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
    case 321:
    case 320:
    case 303:
    case 302:
    case 292:
    case 291:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 244:
    case 202:
    case 193:
    case 192:
    case 190:
    case 189:
    case 166:
    case 145:
    case 144:
    case 143:
    case 142:
    case 138:
    case 122:
    case 121:
    case 87:
    case 86:
    case 71:
    case 70:
    case 69:
    case 68:
    case 64:
    case 63:
    case 58:
    case 25:
    case 24:
    case 23:
    case 21:
    case 20:
    case 17:
    case 13:
      casenum = 1;
      break;

    default:
      casenum = 0;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    default:
      abort ();
    }
}

static int k6_alu_unit_blockage PARAMS ((rtx, rtx));
static int
k6_alu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (get_attr_type (insn) == TYPE_ALU))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((incdec_operand (operands[2], QImode)) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((incdec_operand (operands[2], HImode)) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2))))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 57:
    case 56:
    case 49:
    case 48:
    case 44:
    case 43:
    case 42:
    case 39:
      if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 461:
    case 353:
    case 352:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 54:
    case 52:
    case 51:
    case 50:
    case 45:
    case 37:
    case 36:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_alu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (get_attr_type (insn) == TYPE_ALU))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((incdec_operand (operands[2], QImode)) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((incdec_operand (operands[2], HImode)) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 61:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2))))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 57:
    case 56:
    case 49:
    case 48:
    case 44:
    case 43:
    case 42:
    case 39:
      if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 461:
    case 353:
    case 352:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 293:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 54:
    case 52:
    case 51:
    case 50:
    case 45:
    case 37:
    case 36:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alux_unit_blockage PARAMS ((rtx, rtx));
static int
k6_alux_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 447:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
      casenum = 0;
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 159:
      extract_insn_cached (insn);
      if (! (incdec_operand (operands[2], QImode)))
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 3) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      extract_insn_cached (insn);
      casenum = 0;
      break;

    case 461:
    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 82:
    case 79:
    case 54:
    case 52:
    case 51:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alux_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_alux_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 447:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
      casenum = 0;
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 2;
      break;

    case 159:
      extract_insn_cached (insn);
      if (! (incdec_operand (operands[2], QImode)))
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 3) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 146:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
    case 81:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 55:
    case 53:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 47:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 41:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 1) && (which_alternative != 2)) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || (which_alternative == 2)))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 241:
    case 236:
    case 224:
    case 222:
    case 210:
    case 208:
    case 175:
    case 83:
    case 80:
    case 78:
    case 50:
    case 45:
    case 37:
    case 36:
      extract_insn_cached (insn);
      casenum = 0;
      break;

    case 461:
    case 243:
    case 242:
    case 240:
    case 239:
    case 238:
    case 237:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 223:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 209:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 177:
    case 176:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
    case 160:
    case 158:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 150:
    case 149:
    case 148:
    case 147:
    case 141:
    case 140:
    case 139:
    case 90:
    case 89:
    case 88:
    case 85:
    case 82:
    case 79:
    case 54:
    case 52:
    case 51:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int fpu_unit_blockage PARAMS ((rtx, rtx));
static int
fpu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
      casenum = 2;
      break;

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 465:
    case 464:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 467:
    case 466:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int fpu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
fpu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 426:
      casenum = 2;
      break;

    case 427:
    case 424:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 465:
    case 464:
    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 467:
    case 466:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int ppro_p0_unit_blockage PARAMS ((rtx, rtx));
static int
ppro_p0_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 467:
    case 466:
      casenum = 4;
      break;

    case 465:
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (which_alternative == 2))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      casenum = 2;
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 1;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 447:
    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 145:
    case 144:
    case 143:
    case 142:
      casenum = 0;
      break;

    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      casenum = 3;
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
      casenum = 6;
      break;

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 17 /* 0x11 */;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 1;

    case 7:
      return 1;

    case 8:
      return 1;

    default:
      abort ();
    }
}

static int ppro_p0_unit_conflict_cost PARAMS ((rtx, rtx));
static int
ppro_p0_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 480:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 467:
    case 466:
      casenum = 4;
      break;

    case 465:
    case 464:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 423:
    case 421:
    case 419:
    case 417:
    case 415:
    case 413:
    case 411:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 422:
    case 420:
    case 418:
    case 416:
    case 414:
    case 412:
    case 410:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 404:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 399:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 402:
    case 401:
    case 398:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 397:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 396:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 394:
    case 391:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 393:
    case 390:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 305:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 299:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (which_alternative == 2))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 301:
    case 300:
    case 298:
    case 297:
    case 295:
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 296:
    case 294:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 195:
    case 194:
    case 191:
    case 188:
    case 187:
      casenum = 2;
      break;

    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
      casenum = 1;
      break;

    case 157:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 146:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 447:
    case 379:
    case 371:
    case 370:
    case 369:
    case 368:
    case 357:
    case 356:
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
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 304:
    case 293:
    case 145:
    case 144:
    case 143:
    case 142:
      casenum = 0;
      break;

    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 120:
    case 119:
    case 118:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
      casenum = 3;
      break;

    case 99:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 130:
    case 128:
    case 127:
    case 126:
    case 124:
    case 123:
    case 108:
    case 106:
    case 104:
    case 102:
    case 98:
    case 97:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 96:
    case 95:
    case 94:
    case 93:
      casenum = 6;
      break;

    case 91:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 72:
    case 66:
    case 65:
    case 61:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 38:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 30:
    case 27:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 29:
    case 26:
    case 22:
    case 19:
    case 18:
    case 16:
    case 15:
    case 14:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 17 /* 0x11 */;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 1;

    case 7:
      return 1;

    case 8:
      return 1;

    default:
      abort ();
    }
}

const struct function_unit_desc function_units[] = {
  {"ppro_p0", 1, 1, 0, 0, 17, ppro_p0_unit_ready_cost, ppro_p0_unit_conflict_cost, 17, ppro_p0_unit_blockage_range, ppro_p0_unit_blockage}, 
  {"ppro_p01", 2, 2, 0, 1, 1, ppro_p01_unit_ready_cost, 0, 1, 0, 0}, 
  {"ppro_p2", 4, 1, 0, 1, 1, ppro_p2_unit_ready_cost, 0, 1, 0, 0}, 
  {"ppro_p34", 8, 1, 0, 1, 1, ppro_p34_unit_ready_cost, 0, 1, 0, 0}, 
  {"fpu", 16, 1, 0, 0, 56, fpu_unit_ready_cost, fpu_unit_conflict_cost, 56, fpu_unit_blockage_range, fpu_unit_blockage}, 
  {"k6_alux", 32, 1, 0, 0, 17, k6_alux_unit_ready_cost, k6_alux_unit_conflict_cost, 17, k6_alux_unit_blockage_range, k6_alux_unit_blockage}, 
  {"k6_alu", 64, 2, 0, 0, 17, k6_alu_unit_ready_cost, k6_alu_unit_conflict_cost, 17, k6_alu_unit_blockage_range, k6_alu_unit_blockage}, 
  {"k6_branch", 128, 1, 0, 1, 1, k6_branch_unit_ready_cost, 0, 1, 0, 0}, 
  {"k6_load", 256, 1, 0, 0, 10, k6_load_unit_ready_cost, k6_load_unit_conflict_cost, 10, k6_load_unit_blockage_range, k6_load_unit_blockage}, 
  {"k6_store", 512, 1, 0, 0, 10, k6_store_unit_ready_cost, k6_store_unit_conflict_cost, 10, k6_store_unit_blockage_range, k6_store_unit_blockage}, 
  {"k6_fpu", 1024, 1, 1, 0, 56, k6_fpu_unit_ready_cost, k6_fpu_unit_conflict_cost, 56, k6_fpu_unit_blockage_range, k6_fpu_unit_blockage}, 
  {"athlon_vectordec", 2048, 1, 0, 1, 1, athlon_vectordec_unit_ready_cost, 0, 1, athlon_vectordec_unit_blockage_range, athlon_vectordec_unit_blockage}, 
  {"athlon_directdec", 4096, 3, 0, 1, 1, athlon_directdec_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_ieu", 8192, 3, 0, 0, 15, athlon_ieu_unit_ready_cost, athlon_ieu_unit_conflict_cost, 15, athlon_ieu_unit_blockage_range, athlon_ieu_unit_blockage}, 
  {"athlon_muldiv", 16384, 1, 0, 0, 42, athlon_muldiv_unit_ready_cost, athlon_muldiv_unit_conflict_cost, 42, athlon_muldiv_unit_blockage_range, athlon_muldiv_unit_blockage}, 
  {"athlon_fp", 32768, 3, 0, 1, 1, athlon_fp_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_mul", 65536, 1, 0, 1, 1, athlon_fp_mul_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_add", 131072, 1, 0, 1, 1, athlon_fp_add_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_muladd", 262144, 2, 0, 1, 1, athlon_fp_muladd_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_store", 524288, 1, 0, 1, 1, athlon_fp_store_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_load", 1048576, 2, 0, 1, 1, athlon_load_unit_ready_cost, 0, 1, 0, 0}, 
};


int max_dfa_issue_rate = 2;
/* Vector translating external insn codes to internal ones.*/
static const unsigned char pentium_translate[] ATTRIBUTE_UNUSED = {
    0,     1,     2,     3,     2,     4,     3,     5,     5,     5,
    6,     7,     8,     5,     2,     2,     9,    10,    11,     4,
   12,    13,    14,     3,     5,     8,     7,     2,    15};

/* Comb vector for state transitions.  */
static const unsigned char pentium_transitions[] ATTRIBUTE_UNUSED = {
   19,    18,     2,     3,     4,    15,    17,    16,    15,    14,
   14,    13,     5,     5,     1,     0,     3,     6,     3,     0,
    4,     2,     4,     3,     3,     3,     2,     2,     6,     2,
    4,     4,     7,     4,     3,     3,     3,     0,     8,     4,
    3,     9,     3,    10,    11,     2,     4,     6,     4,    12,
    2,     6,     4,    19,     4,     6,     3,     3,     6,     6,
    0,     7};

/* Check vector for state transitions.  */
static const unsigned char pentium_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     5,     5,     5,     2,
    5,     3,     5,     5,     4,     5,     5,    15,    15,    15,
   13,    15,     6,    15,    15,     1,    15,    15,     7,     1,
   13,     8,     1,     9,    10,     1,    14,    14,    14,    11,
   16,    17,    12,    18,    16,    17,    14,    16,    17,    19,
   16,    17};

/* Base vector for state transitions.  */
static const unsigned char pentium_base[] = {
    0,    30,     4,     6,     9,    11,    17,    23,    26,    28,
   29,    34,    37,    25,    41,    22,    45,    46,    38,    44,
};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char pentium_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     2,     1,     1,     1,    24,
    2,     2,    12,     2,     2,     1,     1,     1,     1,     1,
   10,     1,     1,     5,     1,     1,     1,     1,     1,     1,
    1,    16,     1,     2,     8,     1,     2,     1,     1,     2,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     8,     2,     1,     4,     2,     1,
    1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char pentium_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     5,     5,     5,     2,
    5,     3,     5,     5,     4,     5,     5,    15,    15,    15,
   13,    15,     6,    15,    15,     1,    15,    15,     7,     1,
   13,     8,     1,     9,    10,     1,    14,    14,    14,    11,
   16,    17,    12,    18,    16,    17,    14,    16,    17,    19,
   16,    17};

/* Base vector for state insn alternatives.  */
static const unsigned char pentium_base_state_alts[] = {
    0,    30,     4,     6,     9,    11,    17,    23,    26,    28,
   29,    34,    37,    25,    41,    22,    45,    46,    38,    44,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.*/
static const unsigned char pentium_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,    34,    34,
   32,    34,    32,    34,     2,    32,    17,    17,    17,    17,
   17,    17,    17,    16,    34,    34,    34,    34,    34,    34,
   34,    32,    51,    51,    51,    51,    51,    51,    51,    48,
   34,    34,    32,     0,    32,    32,     2,     0,   170,   170,
  170,   170,   170,   170,   170,   160,   153,   153,   153,   153,
  153,   153,   153,   144,   136,   136,   136,   136,   136,   136,
  136,   128,   119,   119,   119,   119,   119,   119,   119,   112,
  102,   102,   102,   102,   102,   102,   102,    96,    85,    85,
   85,    85,    85,    85,    85,    80,    68,    68,    68,    68,
   68,    68,    68,    64,    51,    51,    48,    51,    51,    51,
   51,    48,    51,    51,    48,     0,    51,    51,    51,    48,
   17,    17,    16,     0,    16,    16,     1,     0,    17,    17,
   16,    17,    16,    17,     1,    16,   170,   170,   160,   170,
  160,   170,    10,   160,   204,   204,   204,   204,   204,   204,
  204,   192,   187,   187,   187,   187,   187,   187,   187,   176,
};

/* Vector for locked state flags.  */
static const unsigned char pentium_dead_lock[] = {
    0,     0,     1,     1,     1,     0,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     1,     1,
};

/* Vector translating external insn codes to internal ones.*/
static const unsigned char pentium_fpu_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     1,     0,     1,     2,     3,     0,     0,     0,
    0,     0,     1,     4,     5,     6,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     7};

/* Comb vector for state transitions.  */
static const unsigned char pentium_fpu_transitions[] ATTRIBUTE_UNUSED = {
    0,    72,    73,    71,    74,    32,     1,     0,    69,    74,
   73,    71,    75,     1,     2,    70,    70,    72,    73,    71,
    2,     3,     3,     0,     4,     5,     6,     7,     8,     4,
    9,     5,     6,     7,     8,     9,    10,    10,    11,    12,
   13,    14,    15,    11,    16,    12,    13,    14,    15,    16,
   17,    17,    18,    19,    20,    21,    22,    18,    23,    19,
   20,    21,    22,    23,    24,    24,    25,    26,    27,    28,
   29,    25,    30,    26,    27,    28,    29,    30,    31,    31,
   32,    33,    34,    35,    36,    32,    37,    33,    34,    35,
   36,    37,    38,    38,    39,    40,    41,    42,    43,    39,
   44,    40,    41,    42,    43,    44,    45,    45,    46,    47,
   48,    49,    50,    46,    51,    47,    48,    49,    50,    51,
   52,    52,    53,    54,    55,    56,    57,    53,    58,    54,
   55,    56,    57,    58,    59,    59,    60,    61,    62,    63,
   64,    60,    65,    61,    62,    63,    64,    65,    66,    66,
   67,    68,    71,    72,    73,    67,    74,    68,    69,    72,
    0,    71,    75,    70};

/* Check vector for state transitions.  */
static const unsigned char pentium_fpu_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,    69,    69,
   69,    69,    75,     1,     2,    69,    70,    70,    70,    70,
    1,     2,     3,    70,     4,     5,     6,     7,     8,     3,
    9,     4,     5,     6,     7,     8,    10,     9,    11,    12,
   13,    14,    15,    10,    16,    11,    12,    13,    14,    15,
   17,    16,    18,    19,    20,    21,    22,    17,    23,    18,
   19,    20,    21,    22,    24,    23,    25,    26,    27,    28,
   29,    24,    30,    25,    26,    27,    28,    29,    31,    30,
   32,    33,    34,    35,    36,    31,    37,    32,    33,    34,
   35,    36,    38,    37,    39,    40,    41,    42,    43,    38,
   44,    39,    40,    41,    42,    43,    45,    44,    46,    47,
   48,    49,    50,    45,    51,    46,    47,    48,    49,    50,
   52,    51,    53,    54,    55,    56,    57,    52,    58,    53,
   54,    55,    56,    57,    59,    58,    60,    61,    62,    63,
   64,    59,    65,    60,    61,    62,    63,    64,    66,    65,
   67,    68,    71,    72,    73,    66,    74,    67,    68,    71,
   72,    73,    75,    74};

/* Base vector for state transitions.  */
static const unsigned char pentium_fpu_base[] = {
    0,    13,    14,    22,    24,    25,    26,    27,    28,    30,
   36,    38,    39,    40,    41,    42,    44,    50,    52,    53,
   54,    55,    56,    58,    64,    66,    67,    68,    69,    70,
   72,    78,    80,    81,    82,    83,    84,    86,    92,    94,
   95,    96,    97,    98,   100,   106,   108,   109,   110,   111,
  112,   114,   120,   122,   123,   124,   125,   126,   128,   134,
  136,   137,   138,   139,   140,   142,   148,   150,   151,     8,
   16,   152,   153,   154,   156};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char pentium_fpu_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
    1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     0,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char pentium_fpu_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,    69,    69,
   69,    69,    75,     1,     2,    69,    70,    70,    70,    70,
    1,     2,     3,    70,     4,     5,     6,     7,     8,     3,
    9,     4,     5,     6,     7,     8,    10,     9,    11,    12,
   13,    14,    15,    10,    16,    11,    12,    13,    14,    15,
   17,    16,    18,    19,    20,    21,    22,    17,    23,    18,
   19,    20,    21,    22,    24,    23,    25,    26,    27,    28,
   29,    24,    30,    25,    26,    27,    28,    29,    31,    30,
   32,    33,    34,    35,    36,    31,    37,    32,    33,    34,
   35,    36,    38,    37,    39,    40,    41,    42,    43,    38,
   44,    39,    40,    41,    42,    43,    45,    44,    46,    47,
   48,    49,    50,    45,    51,    46,    47,    48,    49,    50,
   52,    51,    53,    54,    55,    56,    57,    52,    58,    53,
   54,    55,    56,    57,    59,    58,    60,    61,    62,    63,
   64,    59,    65,    60,    61,    62,    63,    64,    66,    65,
   67,    68,    71,    72,    73,    66,    74,    67,    68,    71,
   72,    73,    75,    74};

/* Base vector for state insn alternatives.  */
static const unsigned char pentium_fpu_base_state_alts[] = {
    0,    13,    14,    22,    24,    25,    26,    27,    28,    30,
   36,    38,    39,    40,    41,    42,    44,    50,    52,    53,
   54,    55,    56,    58,    64,    66,    67,    68,    69,    70,
   72,    78,    80,    81,    82,    83,    84,    86,    92,    94,
   95,    96,    97,    98,   100,   106,   108,   109,   110,   111,
  112,   114,   120,   122,   123,   124,   125,   126,   128,   134,
  136,   137,   138,   139,   140,   142,   148,   150,   151,     8,
   16,   152,   153,   154,   156};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.*/
static const unsigned char pentium_fpu_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
   68,    68,    70,    70,    70,     0,     0,    67,    67,    67,
   69,    69,    69,     0,     0,    66,    66,    66,    68,    68,
   68,     0,     0,    65,    65,    65,    67,    67,    67,     0,
    0,    64,    64,    64,    66,    66,    66,     0,     0,    63,
   63,    63,    65,    65,    65,     0,     0,    62,    62,    62,
   64,    64,    64,     0,     0,    61,    61,    61,    63,    63,
   63,     0,     0,    60,    60,    60,    62,    62,    62,     0,
    0,    59,    59,    59,    61,    61,    61,     0,     0,    58,
   58,    58,    60,    60,    60,     0,     0,    57,    57,    57,
   59,    59,    59,     0,     0,    56,    56,    56,    58,    58,
   58,     0,     0,    55,    55,    55,    57,    57,    57,     0,
    0,    54,    54,    54,    56,    56,    56,     0,     0,    53,
   53,    53,    55,    55,    55,     0,     0,    52,    52,    52,
   54,    54,    54,     0,     0,    51,    51,    51,    53,    53,
   53,     0,     0,    50,    50,    50,    52,    52,    52,     0,
    0,    49,    49,    49,    51,    51,    51,     0,     0,    48,
   48,    48,    50,    50,    50,     0,     0,    47,    47,    47,
   49,    49,    49,     0,     0,    46,    46,    46,    48,    48,
   48,     0,     0,    45,    45,    45,    47,    47,    47,     0,
    0,    44,    44,    44,    46,    46,    46,     0,     0,    43,
   43,    43,    45,    45,    45,     0,     0,    42,    42,    42,
   44,    44,    44,     0,     0,    41,    41,    41,    43,    43,
   43,     0,     0,    40,    40,    40,    42,    42,    42,     0,
    0,    39,    39,    39,    41,    41,    41,     0,     0,    38,
   38,    38,    40,    40,    40,     0,     0,    37,    37,    37,
   39,    39,    39,     0,     0,    36,    36,    36,    38,    38,
   38,     0,     0,    35,    35,    35,    37,    37,    37,     0,
    0,    34,    34,    34,    36,    36,    36,     0,     0,    33,
   33,    33,    35,    35,    35,     0,     0,    32,    32,    32,
   34,    34,    34,     0,     0,    31,    31,    31,    33,    33,
   33,     0,     0,    30,    30,    30,    32,    32,    32,     0,
    0,    29,    29,    29,    31,    31,    31,     0,     0,    28,
   28,    28,    30,    30,    30,     0,     0,    27,    27,    27,
   29,    29,    29,     0,     0,    26,    26,    26,    28,    28,
   28,     0,     0,    25,    25,    25,    27,    27,    27,     0,
    0,    24,    24,    24,    26,    26,    26,     0,     0,    23,
   23,    23,    25,    25,    25,     0,     0,    22,    22,    22,
   24,    24,    24,     0,     0,    21,    21,    21,    23,    23,
   23,     0,     0,    20,    20,    20,    22,    22,    22,     0,
    0,    19,    19,    19,    21,    21,    21,     0,     0,    18,
   18,    18,    20,    20,    20,     0,     0,    17,    17,    17,
   19,    19,    19,     0,     0,    16,    16,    16,    18,    18,
   18,     0,     0,    15,    15,    15,    17,    17,    17,     0,
    0,    14,    14,    14,    16,    16,    16,     0,     0,    13,
   13,    13,    15,    15,    15,     0,     0,    12,    12,    12,
   14,    14,    14,     0,     0,    11,    11,    11,    13,    13,
   13,     0,     0,    10,    10,    10,    12,    12,    12,     0,
    0,     9,     9,     9,    11,    11,    11,     0,     0,     8,
    8,     8,    10,    10,    10,     0,     0,     7,     7,     7,
    9,     9,     9,     0,     0,     6,     6,     6,     8,     8,
    8,     0,     0,     5,     5,     5,     7,     7,     7,     0,
    0,     4,     4,     4,     6,     6,     6,     0,     0,     3,
    3,     3,     5,     5,     5,     0,     0,     2,     2,     2,
    4,     4,     4,     0,     0,     1,     1,     1,     3,     3,
    3,     0,     0,     0,     0,     0,     2,     2,     2,     0,
    0,     0,     0,     0,     1,     1,     1,     0,     0,     2,
    2,     2,     2,     2,     2,     0,     0,     1,     1,     1,
    1,     1,     1,     0,     0,     3,     3,     3,     3,     3,
    3,     0,     0,     1,     1,     1,     2,     2,     2,     0,
};

/* Vector for locked state flags.  */
static const unsigned char pentium_fpu_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0};


#define DFA__ADVANCE_CYCLE 28

struct DFA_chip
{
  unsigned char pentium_automaton_state;
  unsigned char pentium_fpu_automaton_state;
};


int max_insn_queue_index = 127;

static int internal_min_issue_delay PARAMS ((int, struct DFA_chip *));
static int
internal_min_issue_delay (insn_code, chip)
	int insn_code;
	struct DFA_chip *chip  ATTRIBUTE_UNUSED;
{
  int temp ATTRIBUTE_UNUSED;
  int res = -1;

  switch (insn_code)
    {
    case 0: /* pent_mul */
    case 1: /* pent_str */
    case 3: /* pent_cld */
    case 7: /* pent_imov */
    case 8: /* pent_push */
    case 9: /* pent_pop */
    case 10: /* pent_call */
    case 11: /* pent_branch */
    case 16: /* pent_uv_both */
    case 17: /* pent_u_both */
    case 18: /* pent_v_both */
    case 19: /* pent_np_both */
    case 20: /* pent_uv_load */
    case 21: /* pent_u_load */
    case 22: /* pent_v_load */
    case 23: /* pent_np_load */
    case 24: /* pent_uv */
    case 25: /* pent_u */
    case 26: /* pent_v */
    case 27: /* pent_np */

      temp = pentium_min_issue_delay [(pentium_translate [insn_code] + chip->pentium_automaton_state * 16) / 2];
      temp = (temp >> (8 - (pentium_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;
      break;

    case 2: /* pent_block */
    case 4: /* pent_fmov */
    case 5: /* pent_fpmovxf */
    case 6: /* pent_fpstore */
    case 12: /* pent_fp */
    case 13: /* pent_fmul */
    case 14: /* pent_fdiv */
    case 15: /* pent_fpspc */
    case 28: /* $advance_cycle */

      temp = pentium_fpu_min_issue_delay [pentium_fpu_translate [insn_code] + chip->pentium_fpu_automaton_state * 8];
      res = temp;

      temp = pentium_min_issue_delay [(pentium_translate [insn_code] + chip->pentium_automaton_state * 16) / 2];
      temp = (temp >> (8 - (pentium_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;


    default:
      res = -1;
      break;
    }
  return res;
}

static int internal_state_transition PARAMS ((int, struct DFA_chip *));
static int
internal_state_transition (insn_code, chip)
	int insn_code;
	struct DFA_chip *chip  ATTRIBUTE_UNUSED;
{
  int temp ATTRIBUTE_UNUSED;

  switch (insn_code)
    {
    case 0: /* pent_mul */
    case 1: /* pent_str */
    case 3: /* pent_cld */
    case 7: /* pent_imov */
    case 8: /* pent_push */
    case 9: /* pent_pop */
    case 10: /* pent_call */
    case 11: /* pent_branch */
    case 16: /* pent_uv_both */
    case 17: /* pent_u_both */
    case 18: /* pent_v_both */
    case 19: /* pent_np_both */
    case 20: /* pent_uv_load */
    case 21: /* pent_u_load */
    case 22: /* pent_v_load */
    case 23: /* pent_np_load */
    case 24: /* pent_uv */
    case 25: /* pent_u */
    case 26: /* pent_v */
    case 27: /* pent_np */
      {

        temp = pentium_base [chip->pentium_automaton_state] + pentium_translate [insn_code];
        if (pentium_check [temp] != chip->pentium_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->pentium_automaton_state = pentium_transitions [temp];
        return -1;
      }
    case 2: /* pent_block */
    case 4: /* pent_fmov */
    case 5: /* pent_fpmovxf */
    case 6: /* pent_fpstore */
    case 12: /* pent_fp */
    case 13: /* pent_fmul */
    case 14: /* pent_fdiv */
    case 15: /* pent_fpspc */
    case 28: /* $advance_cycle */
      {
        unsigned char _pentium_fpu_automaton_state;

        temp = pentium_fpu_base [chip->pentium_fpu_automaton_state] + pentium_fpu_translate [insn_code];
        if (pentium_fpu_check [temp] != chip->pentium_fpu_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _pentium_fpu_automaton_state = pentium_fpu_transitions [temp];

        temp = pentium_base [chip->pentium_automaton_state] + pentium_translate [insn_code];
        if (pentium_check [temp] != chip->pentium_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->pentium_automaton_state = pentium_transitions [temp];
        chip->pentium_fpu_automaton_state = _pentium_fpu_automaton_state;
        return -1;
      }

    default:
      return -1;
    }
}


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

#ifdef __GNUC__
__inline__
#endif
static int dfa_insn_code PARAMS ((rtx));
static int
dfa_insn_code (insn)
	rtx insn;
{
  int insn_code;
  int temp;

  if (INSN_UID (insn) >= dfa_insn_codes_length)
    {
      temp = dfa_insn_codes_length;
      dfa_insn_codes_length = 2 * INSN_UID (insn);
      dfa_insn_codes = xrealloc (dfa_insn_codes, dfa_insn_codes_length * sizeof (int));
      for (; temp < dfa_insn_codes_length; temp++)
        dfa_insn_codes [temp] = -1;
    }
  if ((insn_code = dfa_insn_codes [INSN_UID (insn)]) < 0)
    {
      insn_code = internal_dfa_insn_code (insn);
      dfa_insn_codes [INSN_UID (insn)] = insn_code;
    }
  return insn_code;
}

int
state_transition (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return -1;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_transition (insn_code, state);
}


#if AUTOMATON_STATE_ALTS

static int internal_state_alts PARAMS ((int, struct DFA_chip *));
static int
internal_state_alts (insn_code, chip)
	int insn_code;
	struct DFA_chip *chip;
{
  int res;

  switch (insn_code)
    {
    case 0: /* pent_mul */
    case 1: /* pent_str */
    case 3: /* pent_cld */
    case 7: /* pent_imov */
    case 8: /* pent_push */
    case 9: /* pent_pop */
    case 10: /* pent_call */
    case 11: /* pent_branch */
    case 16: /* pent_uv_both */
    case 17: /* pent_u_both */
    case 18: /* pent_v_both */
    case 19: /* pent_np_both */
    case 20: /* pent_uv_load */
    case 21: /* pent_u_load */
    case 22: /* pent_v_load */
    case 23: /* pent_np_load */
    case 24: /* pent_uv */
    case 25: /* pent_u */
    case 26: /* pent_v */
    case 27: /* pent_np */
      {
        int temp;

        temp = pentium_base_state_alts [chip->pentium_automaton_state] + pentium_translate [insn_code];
        if (pentium_check_state_alts [temp] != chip->pentium_automaton_state)
          return 0;
        else
          res = pentium_state_alts [temp];
        break;
      }

    case 2: /* pent_block */
    case 4: /* pent_fmov */
    case 5: /* pent_fpmovxf */
    case 6: /* pent_fpstore */
    case 12: /* pent_fp */
    case 13: /* pent_fmul */
    case 14: /* pent_fdiv */
    case 15: /* pent_fpspc */
    case 28: /* $advance_cycle */
      {
        int temp;

        temp = pentium_fpu_base_state_alts [chip->pentium_fpu_automaton_state] + pentium_fpu_translate [insn_code];
        if (pentium_fpu_check_state_alts [temp] != chip->pentium_fpu_automaton_state)
          return 0;
        else
          res = pentium_fpu_state_alts [temp];

        temp = pentium_base_state_alts [chip->pentium_automaton_state] + pentium_translate [insn_code];
        if (pentium_check_state_alts [temp] != chip->pentium_automaton_state)
          return 0;
        else
          res += pentium_state_alts [temp];
        break;
      }


    default:
      res = 0;
      break;
    }
  return res;
}

int
state_alts (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_alts (insn_code, state);
}


#endif /* #if AUTOMATON_STATE_ALTS */

int
min_issue_delay (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_min_issue_delay (insn_code, state);
}

static int internal_state_dead_lock_p PARAMS ((struct DFA_chip *));
static int
internal_state_dead_lock_p (chip)
	struct DFA_chip *chip;
{
  if (pentium_dead_lock [chip->pentium_automaton_state])
    return 1/* TRUE */;
  if (pentium_fpu_dead_lock [chip->pentium_fpu_automaton_state])
    return 1/* TRUE */;
  return 0/* FALSE */;
}

int
state_dead_lock_p (state)
	state_t state;
{
  return internal_state_dead_lock_p (state);
}

int
state_size ()
{
  return sizeof (struct DFA_chip);
}

static void internal_reset PARAMS ((struct DFA_chip *));
static void
internal_reset (chip)
	struct DFA_chip *chip;
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state)
	 state_t state;
{
  internal_reset (state);
}

int
min_insn_conflict_delay (state, insn, insn2)
	state_t state;
	rtx insn;
	rtx insn2;
{
  struct DFA_chip DFA_chip;
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  memcpy (&DFA_chip, state, sizeof (DFA_chip));
  internal_reset (&DFA_chip);
  if (internal_state_transition (insn_code, &DFA_chip) > 0)
    abort ();
  return internal_min_issue_delay (insn2_code, &DFA_chip);
}

static int internal_insn_latency PARAMS ((int, int, rtx, rtx));
static int
internal_insn_latency (insn_code, insn2_code, insn, insn2)
	int insn_code;
	int insn2_code;
	rtx insn ATTRIBUTE_UNUSED;
	rtx insn2 ATTRIBUTE_UNUSED;
{
  switch (insn_code)
    {
    case 0:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 11 : 0);
    case 1:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 12 : 0);
    case 2:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 3:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 4:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 5:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 6:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 7:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 8:
      switch (insn2_code)
        {
        case 10:
          return 0;
        case 9:
          return 0;
        case 8:
          return 0;
        default:
          return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
        }
    case 9:
      switch (insn2_code)
        {
        case 10:
          return 0;
        case 9:
          return 0;
        case 8:
          return 0;
        default:
          return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
        }
    case 10:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 10 : 0);
    case 11:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 12:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 13:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 14:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 39 : 0);
    case 15:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 70 : 0);
    case 16:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 17:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 18:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 19:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 3 : 0);
    case 20:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 21:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 22:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 23:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 2 : 0);
    case 24:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 25:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 26:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 27:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 1 : 0);
    case 28:
      return (insn2_code != DFA__ADVANCE_CYCLE ? 0 : 0);
    default:
      return 0;
    }
}

int
insn_latency (insn, insn2)
	rtx insn;
	rtx insn2;
{
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  return internal_insn_latency (insn_code, insn2_code, insn, insn2);
}

void
print_reservation (f, insn)
	FILE *f;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        {
          fprintf (f, "nothing");
          return;
        }
    }
  else
    {
      fprintf (f, "nothing");
      return;
    }
  switch (insn_code)
    {
    case 0:
      fprintf (f, "pentium-np*11");
      break;
    case 1:
      fprintf (f, "pentium-np*12");
      break;
    case 2:
      fprintf (f, "(pentium-np+pentium-fp)");
      break;
    case 3:
      fprintf (f, "pentium-np*2");
      break;
    case 4:
      fprintf (f, "(pentium-fp+pentium-np)");
      break;
    case 5:
      fprintf (f, "((pentium-fp+pentium-np))*3");
      break;
    case 6:
      fprintf (f, "((pentium-fp+pentium-np))*2");
      break;
    case 7:
      fprintf (f, "pentium-firstuv");
      break;
    case 8:
      fprintf (f, "pentium-firstuv");
      break;
    case 9:
      fprintf (f, "pentium-firstuv");
      break;
    case 10:
      fprintf (f, "pentium-firstv,pentium-v*9");
      break;
    case 11:
      fprintf (f, "pentium-firstv");
      break;
    case 12:
      fprintf (f, "(pentium-firstu+pentium-fp),nothing,nothing");
      break;
    case 13:
      fprintf (f, "(pentium-firstuv+pentium-fp+pentium-fmul),pentium-fmul,nothing");
      break;
    case 14:
      fprintf (f, "(pentium-np+pentium-fp+pentium-fmul),((pentium-fp+pentium-fmul))*36,pentium-fmul*2");
      break;
    case 15:
      fprintf (f, "(pentium-np+pentium-fp+pentium-fmul),((pentium-fp+pentium-fmul))*67,pentium-fmul*2");
      break;
    case 16:
      fprintf (f, "pentium-firstuvboth,(pentium-uv+pentium-memory),pentium-uv");
      break;
    case 17:
      fprintf (f, "pentium-firstuboth,(pentium-u+pentium-memory),pentium-u");
      break;
    case 18:
      fprintf (f, "pentium-firstvboth,(pentium-v+pentium-memory),pentium-v");
      break;
    case 19:
      fprintf (f, "pentium-np,pentium-np,pentium-np");
      break;
    case 20:
      fprintf (f, "pentium-firstuvload,pentium-uv");
      break;
    case 21:
      fprintf (f, "pentium-firstuload,pentium-u");
      break;
    case 22:
      fprintf (f, "pentium-firstvload,pentium-v");
      break;
    case 23:
      fprintf (f, "pentium-np,pentium-np");
      break;
    case 24:
      fprintf (f, "pentium-firstuv");
      break;
    case 25:
      fprintf (f, "pentium-firstu");
      break;
    case 26:
      fprintf (f, "pentium-firstv");
      break;
    case 27:
      fprintf (f, "pentium-np");
      break;
    default:
      fprintf (f, "nothing");
    }
}

void
dfa_start ()
{
  int i;

  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = (int *) xmalloc (dfa_insn_codes_length * sizeof (int));
  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_finish ()
{
  free (dfa_insn_codes);
}

int length_unit_log = 0;
