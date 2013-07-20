/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_859 PARAMS ((rtx *));
extern rtx gen_split_860 PARAMS ((rtx *));
extern rtx gen_split_862 PARAMS ((rtx *));
extern rtx gen_split_863 PARAMS ((rtx *));
extern rtx gen_split_865 PARAMS ((rtx *));
extern rtx gen_split_866 PARAMS ((rtx *));
extern rtx gen_split_867 PARAMS ((rtx *));
extern rtx gen_split_870 PARAMS ((rtx *));
extern rtx gen_split_871 PARAMS ((rtx *));
extern rtx gen_split_872 PARAMS ((rtx *));
extern rtx gen_split_873 PARAMS ((rtx *));
extern rtx gen_split_874 PARAMS ((rtx *));
extern rtx gen_split_876 PARAMS ((rtx *));
extern rtx gen_split_878 PARAMS ((rtx *));
extern rtx gen_split_879 PARAMS ((rtx *));
extern rtx gen_split_880 PARAMS ((rtx *));
extern rtx gen_split_882 PARAMS ((rtx *));
extern rtx gen_split_883 PARAMS ((rtx *));
extern rtx gen_split_884 PARAMS ((rtx *));
extern rtx gen_split_886 PARAMS ((rtx *));
extern rtx gen_split_887 PARAMS ((rtx *));
extern rtx gen_split_889 PARAMS ((rtx *));
extern rtx gen_split_890 PARAMS ((rtx *));
extern rtx gen_split_891 PARAMS ((rtx *));
extern rtx gen_split_892 PARAMS ((rtx *));
extern rtx gen_split_893 PARAMS ((rtx *));
extern rtx gen_split_894 PARAMS ((rtx *));
extern rtx gen_split_895 PARAMS ((rtx *));
extern rtx gen_split_896 PARAMS ((rtx *));
extern rtx gen_split_903 PARAMS ((rtx *));
extern rtx gen_split_904 PARAMS ((rtx *));
extern rtx gen_split_905 PARAMS ((rtx *));
extern rtx gen_split_907 PARAMS ((rtx *));
extern rtx gen_split_908 PARAMS ((rtx *));
extern rtx gen_split_910 PARAMS ((rtx *));
extern rtx gen_split_911 PARAMS ((rtx *));
extern rtx gen_split_913 PARAMS ((rtx *));
extern rtx gen_split_914 PARAMS ((rtx *));
extern rtx gen_split_916 PARAMS ((rtx *));
extern rtx gen_split_917 PARAMS ((rtx *));
extern rtx gen_split_922 PARAMS ((rtx *));
extern rtx gen_split_923 PARAMS ((rtx *));
extern rtx gen_split_924 PARAMS ((rtx *));
extern rtx gen_split_929 PARAMS ((rtx *));
extern rtx gen_split_930 PARAMS ((rtx *));
extern rtx gen_split_931 PARAMS ((rtx *));
extern rtx gen_split_936 PARAMS ((rtx *));
extern rtx gen_split_937 PARAMS ((rtx *));
extern rtx gen_split_938 PARAMS ((rtx *));
extern rtx gen_split_943 PARAMS ((rtx *));
extern rtx gen_split_945 PARAMS ((rtx *));
extern rtx gen_split_947 PARAMS ((rtx *));
extern rtx gen_split_948 PARAMS ((rtx *));
extern rtx gen_split_949 PARAMS ((rtx *));
extern rtx gen_split_950 PARAMS ((rtx *));
extern rtx gen_split_951 PARAMS ((rtx *));
extern rtx gen_split_959 PARAMS ((rtx *));
extern rtx gen_split_985 PARAMS ((rtx *));
extern rtx gen_split_986 PARAMS ((rtx *));
extern rtx gen_split_991 PARAMS ((rtx *));
extern rtx gen_split_992 PARAMS ((rtx *));
extern rtx gen_split_993 PARAMS ((rtx *));
extern rtx gen_split_995 PARAMS ((rtx *));
extern rtx gen_split_996 PARAMS ((rtx *));
extern rtx gen_split_997 PARAMS ((rtx *));
extern rtx gen_split_1000 PARAMS ((rtx *));
extern rtx gen_split_1001 PARAMS ((rtx *));
extern rtx gen_split_1005 PARAMS ((rtx *));
extern rtx gen_split_1006 PARAMS ((rtx *));
extern rtx gen_split_1011 PARAMS ((rtx *));
extern rtx gen_split_1012 PARAMS ((rtx *));
extern rtx gen_split_1014 PARAMS ((rtx *));
extern rtx gen_split_1019 PARAMS ((rtx *));
extern rtx gen_split_1020 PARAMS ((rtx *));
extern rtx gen_split_1021 PARAMS ((rtx *));
extern rtx gen_split_1022 PARAMS ((rtx *));
extern rtx gen_split_1023 PARAMS ((rtx *));
extern rtx gen_split_1024 PARAMS ((rtx *));
extern rtx gen_split_1026 PARAMS ((rtx *));
extern rtx gen_split_1027 PARAMS ((rtx *));
extern rtx gen_split_1028 PARAMS ((rtx *));
extern rtx gen_split_1029 PARAMS ((rtx *));
extern rtx gen_split_1030 PARAMS ((rtx *));
extern rtx gen_split_1033 PARAMS ((rtx *));
extern rtx gen_split_1034 PARAMS ((rtx *));
extern rtx gen_split_1035 PARAMS ((rtx *));
extern rtx gen_split_1036 PARAMS ((rtx *));
extern rtx gen_split_1038 PARAMS ((rtx *));
extern rtx gen_split_1039 PARAMS ((rtx *));
extern rtx gen_split_1040 PARAMS ((rtx *));
extern rtx gen_split_1041 PARAMS ((rtx *));
extern rtx gen_split_1042 PARAMS ((rtx *));
extern rtx gen_split_1043 PARAMS ((rtx *));
extern rtx gen_split_1045 PARAMS ((rtx *));
extern rtx gen_split_1046 PARAMS ((rtx *));
extern rtx gen_split_1047 PARAMS ((rtx *));
extern rtx gen_split_1048 PARAMS ((rtx *));
extern rtx gen_split_1049 PARAMS ((rtx *));
extern rtx gen_split_1052 PARAMS ((rtx *));
extern rtx gen_split_1053 PARAMS ((rtx *));
extern rtx gen_split_1054 PARAMS ((rtx *));
extern rtx gen_split_1055 PARAMS ((rtx *));
extern rtx gen_split_1057 PARAMS ((rtx *));
extern rtx gen_split_1058 PARAMS ((rtx *));
extern rtx gen_split_1060 PARAMS ((rtx *));
extern rtx gen_split_1062 PARAMS ((rtx *));
extern rtx gen_split_1064 PARAMS ((rtx *));
extern rtx gen_split_1065 PARAMS ((rtx *));
extern rtx gen_split_1069 PARAMS ((rtx *));
extern rtx gen_split_1070 PARAMS ((rtx *));
extern rtx gen_split_1071 PARAMS ((rtx *));
extern rtx gen_split_1075 PARAMS ((rtx *));
extern rtx gen_split_1076 PARAMS ((rtx *));
extern rtx gen_split_1082 PARAMS ((rtx *));
extern rtx gen_split_1083 PARAMS ((rtx *));
extern rtx gen_split_1114 PARAMS ((rtx *));
extern rtx gen_split_1115 PARAMS ((rtx *));
extern rtx gen_split_1116 PARAMS ((rtx *));
extern rtx gen_split_1117 PARAMS ((rtx *));
extern rtx gen_split_1136 PARAMS ((rtx *));
extern rtx gen_split_1137 PARAMS ((rtx *));
extern rtx gen_split_1138 PARAMS ((rtx *));
extern rtx gen_split_1139 PARAMS ((rtx *));
extern rtx gen_split_1143 PARAMS ((rtx *));
extern rtx gen_split_1144 PARAMS ((rtx *));
extern rtx gen_peephole2_1145 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1146 PARAMS ((rtx, rtx *));
extern rtx gen_split_1157 PARAMS ((rtx *));
extern rtx gen_split_1158 PARAMS ((rtx *));
extern rtx gen_split_1164 PARAMS ((rtx *));
extern rtx gen_split_1165 PARAMS ((rtx *));
extern rtx gen_split_1166 PARAMS ((rtx *));
extern rtx gen_peephole2_1181 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1182 PARAMS ((rtx, rtx *));
extern rtx gen_split_1187 PARAMS ((rtx *));
extern rtx gen_split_1191 PARAMS ((rtx *));
extern rtx gen_split_1192 PARAMS ((rtx *));
extern rtx gen_split_1194 PARAMS ((rtx *));
extern rtx gen_split_1195 PARAMS ((rtx *));
extern rtx gen_split_1197 PARAMS ((rtx *));
extern rtx gen_split_1198 PARAMS ((rtx *));
extern rtx gen_split_1200 PARAMS ((rtx *));
extern rtx gen_split_1201 PARAMS ((rtx *));
extern rtx gen_split_1203 PARAMS ((rtx *));
extern rtx gen_split_1204 PARAMS ((rtx *));
extern rtx gen_split_1205 PARAMS ((rtx *));
extern rtx gen_split_1209 PARAMS ((rtx *));
extern rtx gen_split_1210 PARAMS ((rtx *));
extern rtx gen_split_1211 PARAMS ((rtx *));
extern rtx gen_split_1212 PARAMS ((rtx *));
extern rtx gen_split_1213 PARAMS ((rtx *));
extern rtx gen_split_1214 PARAMS ((rtx *));
extern rtx gen_peephole2_1215 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1216 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1217 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1218 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1219 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1220 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1221 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1222 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1223 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1224 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1225 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1226 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1227 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1228 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1229 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1230 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1231 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1232 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1233 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1234 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1235 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1236 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1237 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1238 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1239 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1240 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1241 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1242 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1243 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1244 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1245 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1246 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1247 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1248 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1249 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1250 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1251 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1252 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1253 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1254 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1255 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1256 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1257 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1258 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1259 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1260 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1261 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1262 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1263 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1264 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1265 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1266 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1267 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1268 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1269 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1270 PARAMS ((rtx, rtx *));
extern rtx gen_split_1283 PARAMS ((rtx *));
extern rtx gen_split_1284 PARAMS ((rtx *));
extern rtx gen_split_1285 PARAMS ((rtx *));
extern rtx gen_split_1286 PARAMS ((rtx *));
extern rtx gen_split_1287 PARAMS ((rtx *));
extern rtx gen_split_1288 PARAMS ((rtx *));
extern rtx gen_split_1289 PARAMS ((rtx *));
extern rtx gen_split_1290 PARAMS ((rtx *));
extern rtx gen_split_1291 PARAMS ((rtx *));
extern rtx gen_split_1292 PARAMS ((rtx *));
extern rtx gen_split_1293 PARAMS ((rtx *));
extern rtx gen_split_1294 PARAMS ((rtx *));
extern rtx gen_split_1295 PARAMS ((rtx *));



static int recog_1 PARAMS ((rtx, rtx, int *));
static int
recog_1 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L10172;
    case REG:
      goto L10173;
    default:
     break;
   }
 L10063: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L101;
    }
 L10071: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L803;
    }
 L10090: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L830;
    }
  goto ret0;

 L10172: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L281;
    }
  goto L10071;

 L281: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, HImode))
    {
      operands[1] = x1;
      return 40;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L10173: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 18)
    goto L834;
  goto L10063;

 L834: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 28)
    goto L835;
  x1 = XEXP (x0, 0);
  goto L10063;

 L835: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L836;
    }
  x1 = XEXP (x0, 0);
  goto L10063;

 L836: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 122;
    }
  x1 = XEXP (x0, 0);
  goto L10063;

 L101: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L10174;
  x1 = XEXP (x0, 0);
  goto L10071;

 L10174: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10180;
    case SIGN_EXTRACT:
      goto L357;
    case ZERO_EXTEND:
      goto L512;
    case SIGN_EXTEND:
      goto L593;
    case MULT:
      goto L1522;
    case IF_THEN_ELSE:
      goto L5146;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10071;

 L10180: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 24)
    goto L102;
  x1 = XEXP (x0, 0);
  goto L10071;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case CCFPmode:
      goto L10181;
    case CCFPUmode:
      goto L10182;
    default:
      break;
    }
 L174: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && (TARGET_80387))
    {
      return 24;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L10181: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L116;
  goto L174;

 L116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10183;
    case DFmode:
      goto L10184;
    case XFmode:
      goto L10185;
    case TFmode:
      goto L10186;
    default:
      break;
    }
 L103: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L104;
    }
  goto L174;

 L10183: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L117;
    }
  goto L103;

 L117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L118;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L118: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 15;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L10184: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L130;
    }
  goto L103;

 L130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L131;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L131: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 17;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L10185: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L149;
    }
  goto L103;

 L149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L150;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L150: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 20;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L10186: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L156;
    }
  goto L103;

 L156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, TFmode))
    {
      operands[2] = x3;
      goto L157;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L157: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 21;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L105;
    }
  goto L174;

 L105: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 13;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L174;

 L10182: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L168;
  goto L174;

 L168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L169;
    }
  goto L174;

 L169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L170;
    }
  goto L174;

 L170: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 23;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L174;

 L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L358;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L359;
  x1 = XEXP (x0, 0);
  goto L10071;

 L359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 52;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L513;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L513: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 80;
    }
 L525: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 81;
    }
 L530: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 82;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 89;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L10188;
  x1 = XEXP (x0, 0);
  goto L10071;

 L10188: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1553;
    case SIGN_EXTEND:
      goto L1571;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10187;
    default:
      x1 = XEXP (x0, 0);
      goto L10071;
   }
 L10187: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1523;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1554;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1555;
  x1 = XEXP (x0, 0);
  goto L10071;

 L1555: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1556;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1556: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 181;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1572;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1573;
  x1 = XEXP (x0, 0);
  goto L10071;

 L1573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1574;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1574: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 182;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1524;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L1524: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 179;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L5146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5147;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5148;
  x1 = XEXP (x0, 0);
  goto L10071;

 L5148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5149;
  x1 = XEXP (x0, 0);
  goto L10071;

 L5149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5150;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L5150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5151;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L5151: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 463;
    }
  x1 = XEXP (x0, 0);
  goto L10071;

 L803: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L10190;
 L284: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L285;
    }
  x1 = XEXP (x0, 0);
  goto L10090;

 L10190: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L804;
    case PLUS:
      goto L1087;
    case MINUS:
      goto L1416;
    case AND:
      goto L1972;
    case IOR:
      goto L2208;
    case XOR:
      goto L2458;
    case NEG:
      goto L2719;
    case NOT:
      goto L3086;
    case ASHIFT:
      goto L3208;
    case ASHIFTRT:
      goto L3413;
    case LSHIFTRT:
      goto L3637;
    case ROTATE:
      goto L3805;
    case ROTATERT:
      goto L3921;
    default:
     break;
   }
  goto L284;

 L804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L805;
    }
  goto L284;

 L805: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 118;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L1087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1088;
    }
  goto L284;

 L1088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1089;
    }
  goto L284;

 L1089: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 151;
    }
 L1103: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 152;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L1416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1417;
    }
  goto L284;

 L1417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1418;
    }
  goto L284;

 L1418: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 171;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1973;
    }
  goto L284;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1974;
    }
  goto L284;

 L1974: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 205;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2209;
    }
  goto L284;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2210;
    }
  goto L284;

 L2210: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 218;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2459;
    }
  goto L284;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2460;
    }
  goto L284;

 L2460: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L2719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2720;
    }
  goto L284;

 L2720: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 247;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3087;
    }
  goto L284;

 L3087: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, HImode, operands)))
    {
      return 287;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3209;
    }
  goto L284;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3210;
    }
  goto L284;

 L3210: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 296;
    }
 L3224: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 297;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3414;
    }
  goto L284;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3415;
    }
 L3428: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3429;
    }
  goto L284;

 L3415: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 310;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3428;

 L3429: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 311;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3638;
    }
  goto L284;

 L3638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3639;
    }
 L3652: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3653;
    }
  goto L284;

 L3639: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 326;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3652;

 L3653: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 327;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3806;
    }
  goto L284;

 L3806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3807;
    }
 L3820: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3821;
    }
  goto L284;

 L3807: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 338;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3820;

 L3821: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 339;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L3921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3922;
    }
  goto L284;

 L3922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3923;
    }
 L3936: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3937;
    }
  goto L284;

 L3923: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 346;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3936;

 L3937: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 347;
    }
  x1 = XEXP (x0, 1);
  goto L284;

 L285: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 41;
    }
  x1 = XEXP (x0, 0);
  goto L10090;

 L830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 26)
    goto L831;
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && (TARGET_80387))
    {
      return 121;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_2 PARAMS ((rtx, rtx, int *));
static int
recog_2 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L10207;
    case ZERO_EXTRACT:
      goto L381;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10068;
    default:
      goto L10069;
   }
 L10068: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L350;
    }
 L10069: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L766;
    }
 L10089: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L793;
    }
 L10101: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 19)
    goto L4860;
 L10094: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1009;
    }
  goto ret0;

 L10207: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L217;
    }
  goto L10069;

 L217: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      return 32;
    }
  x1 = XEXP (x0, 0);
  goto L10069;

 L381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L382;
    }
  goto ret0;

 L382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L383;
  goto ret0;

 L383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L390;
  goto ret0;

 L390: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10208;
 L384: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      return 56;
    }
  goto ret0;

 L10208: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L391;
    case PLUS:
      goto L1294;
    case IOR:
      goto L2337;
    case XOR:
      goto L2542;
    default:
     break;
   }
  goto L384;

 L391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10212;
  goto L384;

 L10212: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L392;
    case ZERO_EXTRACT:
      goto L2066;
    default:
     break;
   }
  goto L384;

 L392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L393;
    }
  goto L384;

 L393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L394;
  goto L384;

 L394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 255)
    {
      return 57;
    }
  goto L384;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2067;
    }
  goto L384;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2068;
  goto L384;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2118;
  goto L384;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10214;
 L2069: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2070;
    }
  goto L384;

 L10214: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2119;
    case ZERO_EXTRACT:
      goto L2149;
    default:
     break;
   }
  goto L2069;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2120;
    }
  goto L2069;

 L2120: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 213;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2069;

 L2149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2150;
    }
  goto L2069;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2151;
  goto L2069;

 L2151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 214;
    }
  goto L2069;

 L2070: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 211;
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L1294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1295;
  goto L384;

 L1295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1296;
    }
  goto L384;

 L1296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1297;
  goto L384;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1327;
  goto L384;

 L1327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1328;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1299;
    }
  goto L384;

 L1328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1329;
    }
  goto L384;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1330;
  goto L384;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 165;
    }
  goto L384;

 L1299: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 164;
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L2337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2338;
  goto L384;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2339;
    }
  goto L384;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2340;
  goto L384;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2368;
  goto L384;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10216;
 L2341: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2342;
    }
  goto L384;

 L10216: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2369;
    case ZERO_EXTRACT:
      goto L2399;
    default:
     break;
   }
  goto L2341;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2370;
    }
  goto L2341;

 L2370: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 227;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2341;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2400;
    }
  goto L2341;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2401;
  goto L2341;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 228;
    }
  goto L2341;

 L2342: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 226;
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L2542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2543;
  goto L384;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2544;
    }
  goto L384;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2545;
  goto L384;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2573;
  goto L384;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10218;
 L2546: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2547;
    }
  goto L384;

 L10218: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2574;
    case ZERO_EXTRACT:
      goto L2604;
    default:
     break;
   }
  goto L2546;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2575;
    }
  goto L2546;

 L2575: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 238;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2546;

 L2604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2605;
    }
  goto L2546;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2606;
  goto L2546;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 239;
    }
  goto L2546;

 L2547: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 237;
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L350: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10220;
 L256: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L257;
    }
 L266: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L267;
    }
  x1 = XEXP (x0, 0);
  goto L10069;

 L10220: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L351;
    case ZERO_EXTRACT:
      goto L369;
    case ZERO_EXTEND:
      goto L495;
    case SIGN_EXTEND:
      goto L589;
    default:
     break;
   }
  goto L256;

 L351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L352;
    }
  goto L256;

 L352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L353;
  goto L256;

 L353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 51;
    }
  goto L256;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L370;
    }
  goto L256;

 L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L371;
  goto L256;

 L371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 54;
    }
  goto L256;

 L495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10224;
    case QImode:
      goto L10226;
    default:
      break;
    }
  goto L256;

 L10224: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L496;
    }
 L10225: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L501;
    }
  goto L256;

 L496: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 78;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10225;

 L501: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 79;
    }
  x1 = XEXP (x0, 1);
  goto L256;

 L10226: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L542;
    }
  goto L256;

 L542: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 83;
    }
 L554: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 84;
    }
 L559: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 85;
    }
  x1 = XEXP (x0, 1);
  goto L256;

 L589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10227;
    case QImode:
      goto L10228;
    default:
      break;
    }
  goto L256;

 L10227: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 88;
    }
  goto L256;

 L10228: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 90;
    }
  goto L256;

 L257: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 36;
    }
  x1 = XEXP (x0, 1);
  goto L266;

 L267: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1
   && (TARGET_PENTIUM || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 37;
    }
  x1 = XEXP (x0, 0);
  goto L10069;

 L766: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10229;
 L270: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L271;
    }
  x1 = XEXP (x0, 0);
  goto L10089;

 L10229: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L767;
    case PLUS:
      goto L941;
    default:
     break;
   }
  goto L270;

 L767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L768;
    }
  goto L270;

 L768: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 113;
    }
  x1 = XEXP (x0, 1);
  goto L270;

 L941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L942;
  goto L270;

 L942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L943;
  goto L270;

 L943: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L944;
  goto L270;

 L944: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L945;
  goto L270;

 L945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L946;
    }
  goto L270;

 L946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L947;
    }
  goto L270;

 L947: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 139;
    }
  x1 = XEXP (x0, 1);
  goto L270;

 L271: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 38;
    }
  x1 = XEXP (x0, 0);
  goto L10089;

 L793: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10231;
 L972: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x1, SImode))
    {
      operands[1] = x1;
      return 142;
    }
 L1507: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == SImode)
    goto L10237;
  x1 = XEXP (x0, 0);
  goto L10101;

 L10231: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L794;
    case TRUNCATE:
      goto L1629;
    case UNSPEC:
      goto L10239;
    case IF_THEN_ELSE:
      goto L5129;
    default:
     break;
   }
  goto L972;

 L794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10242;
    case DFmode:
      goto L10243;
    default:
      break;
    }
  goto L972;

 L10242: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L795;
    }
  goto L972;

 L795: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 116;
    }
  x1 = XEXP (x0, 1);
  goto L972;

 L10243: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L800;
    }
  goto L972;

 L800: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 117;
    }
  x1 = XEXP (x0, 1);
  goto L972;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1630;
  goto L972;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1631;
  goto L972;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L10244;
  goto L972;

 L10244: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L1632;
    case SIGN_EXTEND:
      goto L1657;
    default:
     break;
   }
  goto L972;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1633;
    }
  goto L972;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1634;
  goto L972;

 L1634: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1635;
    }
  goto L972;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 185;
    }
  goto L972;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1658;
    }
  goto L972;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1659;
  goto L972;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1660;
    }
  goto L972;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 186;
    }
  goto L972;

 L10239: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10246;
    case 3:
      goto L10247;
    case 2:
      goto L10248;
    default:
      break;
    }
  goto L972;

 L10246: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 12)
    goto L4386;
  goto L972;

 L4386: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 381;
    }
  goto L972;

 L10247: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 16)
    goto L4428;
  goto L972;

 L4428: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4429;
    }
  goto L972;

 L4429: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (tls_symbolic_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4430;
    }
  goto L972;

 L4430: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (call_insn_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4431;
    }
  goto L972;

 L4431: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 385;
    }
 L4451: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 386;
    }
  x1 = XEXP (x0, 1);
  goto L972;

 L10248: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 17)
    goto L4467;
  goto L972;

 L4467: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4468;
    }
  goto L972;

 L4468: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_insn_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4469;
    }
  goto L972;

 L4469: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 387;
    }
 L4487: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 388;
    }
  x1 = XEXP (x0, 1);
  goto L972;

 L5129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LTU)
    goto L5130;
 L5137: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5138;
    }
  goto L972;

 L5130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5131;
  goto L5137;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5132;
  goto L5137;

 L5132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == -1)
    goto L5133;
  x2 = XEXP (x1, 0);
  goto L5137;

 L5133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 461;
    }
  x2 = XEXP (x1, 0);
  goto L5137;

 L5138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5139;
  goto L972;

 L5139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5140;
  goto L972;

 L5140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5141;
    }
  goto L972;

 L5141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5142;
    }
  goto L972;

 L5142: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 462;
    }
  x1 = XEXP (x0, 1);
  goto L972;

 L10237: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1508;
    case PLUS:
      goto L4507;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10101;

 L1508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1509;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L1509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1510;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L1510: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 178;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L4507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 17)
    goto L4508;
  x1 = XEXP (x0, 0);
  goto L10101;

 L4508: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4509;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L4509: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_insn_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4510;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L4510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CONST)
    goto L4511;
  x1 = XEXP (x0, 0);
  goto L10101;

 L4511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 6)
    goto L4512;
  x1 = XEXP (x0, 0);
  goto L10101;

 L4512: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4513;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L4513: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 389;
    }
  x1 = XEXP (x0, 0);
  goto L10101;

 L4860: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0)
    {
      return 447;
    }
  x1 = XEXP (x0, 0);
  goto L10094;

 L1009: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10249;
  goto ret0;

 L10249: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1010;
    case MINUS:
      goto L1360;
    case AND:
      goto L1945;
    case IOR:
      goto L2163;
    case XOR:
      goto L2413;
    case NEG:
      goto L2696;
    case NOT:
      goto L3070;
    case ASHIFT:
      goto L3181;
    case ASHIFTRT:
      goto L3345;
    case LSHIFTRT:
      goto L3583;
    case ROTATE:
      goto L3777;
    case ROTATERT:
      goto L3893;
    default:
     break;
   }
  goto ret0;

 L1010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1011;
    }
  goto ret0;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1012;
    }
  goto ret0;

 L1012: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 146;
    }
  goto ret0;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1361;
    }
  goto ret0;

 L1361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1362;
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1380;
    }
  goto ret0;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L1363;
  goto ret0;

 L1363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L1364;
  goto ret0;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L1365;
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1366;
    }
  goto ret0;

 L1366: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 167;
    }
  goto ret0;

 L1380: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 168;
    }
  goto ret0;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1946;
    }
  goto ret0;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1947;
    }
  goto ret0;

 L1947: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 203;
    }
  goto ret0;

 L2163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10262;
  goto ret0;

 L10262: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L3163;
    case ASHIFTRT:
      goto L3327;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10261;
    default:
      goto ret0;
   }
 L10261: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2164;
    }
  goto ret0;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3164;
  goto ret0;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3165;
    }
  goto ret0;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3166;
  goto ret0;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3167;
    }
  goto ret0;

 L3167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L3168;
  goto ret0;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L3169;
  goto ret0;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 293;
    }
  goto ret0;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3328;
  goto ret0;

 L3328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3329;
    }
  goto ret0;

 L3329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L3330;
  goto ret0;

 L3330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3331;
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L3332;
  goto ret0;

 L3332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L3333;
  goto ret0;

 L3333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 304;
    }
  goto ret0;

 L2164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2165;
    }
  goto ret0;

 L2165: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 215;
    }
  goto ret0;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2414;
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2415;
    }
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 229;
    }
  goto ret0;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2697;
    }
  goto ret0;

 L2697: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 245;
    }
  goto ret0;

 L3070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3071;
    }
  goto ret0;

 L3071: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 285;
    }
  goto ret0;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3182;
    }
  goto ret0;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3183;
    }
  goto ret0;

 L3183: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 294;
    }
  goto ret0;

 L3345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3346;
    }
  goto ret0;

 L3346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L10264;
 L3374: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3375;
    }
  goto ret0;

 L10264: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3347;
    }
 L10265: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3361;
    }
  goto L3374;

 L3347: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 305;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L10265;

 L3361: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 306;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3374;

 L3375: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 307;
    }
  goto ret0;

 L3583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3584;
    }
  goto ret0;

 L3584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3585;
    }
 L3598: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3599;
    }
  goto ret0;

 L3585: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 322;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3598;

 L3599: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 323;
    }
  goto ret0;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3778;
    }
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3779;
    }
 L3792: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3793;
    }
  goto ret0;

 L3779: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 336;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3792;

 L3793: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 337;
    }
  goto ret0;

 L3893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3894;
    }
  goto ret0;

 L3894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3895;
    }
 L3908: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3909;
    }
  goto ret0;

 L3895: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 344;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3908;

 L3909: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 345;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_3 PARAMS ((rtx, rtx, int *));
static int
recog_3 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L2864;
    case ABS:
      goto L3020;
    case SQRT:
      goto L4739;
    case UNSPEC:
      goto L10316;
    case IF_THEN_ELSE:
      goto L5202;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L10310;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L10311;
    default:
      goto ret0;
   }
 L10310: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, SFmode))
    {
      operands[1] = x1;
      goto L4012;
    }
 L10311: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, SFmode))
    {
      operands[3] = x1;
      goto L4517;
    }
  goto ret0;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2865;
    }
  goto ret0;

 L2865: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 259;
    }
  goto ret0;

 L3020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3021;
    }
  goto ret0;

 L3021: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 276;
    }
  goto ret0;

 L4739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L10318;
  goto ret0;

 L10318: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4740;
    }
 L10319: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4750;
    }
  goto ret0;

 L4740: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (TARGET_SSE_MATH && TARGET_MIX_SSE_I387)))
    {
      return 424;
    }
 L4745: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387)))
    {
      return 425;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L4750: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && !TARGET_SSE_MATH))
    {
      return 426;
    }
  goto ret0;

 L10316: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10320;
  goto ret0;

 L10320: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21:
      goto L4814;
    case 22:
      goto L4840;
    default:
      break;
    }
  goto ret0;

 L4814: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4815;
    }
  goto ret0;

 L4815: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 438;
    }
  goto ret0;

 L4840: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4841;
    }
  goto ret0;

 L4841: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 443;
    }
  goto ret0;

 L5202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case LT:
      goto L5203;
    case GT:
      goto L5295;
    default:
     break;
   }
 L5155: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5156;
    }
 L5399: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5400;
    }
 L5421: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == EQ)
    goto L5422;
 L5492: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5493;
    }
  goto ret0;

 L5203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L10322;
  goto L5155;

 L10322: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5204;
    }
 L10323: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5223;
    }
 L10324: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5231;
    }
  goto L5155;

 L5204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5205;
    }
  x3 = XEXP (x2, 0);
  goto L10323;

 L5205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5206;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10323;

 L5206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 468;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10323;

 L5223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5224;
    }
  x3 = XEXP (x2, 0);
  goto L10324;

 L5224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5225;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10324;

 L5225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 469;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10324;

 L5231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5232;
    }
  goto L5155;

 L5232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5233;
  x2 = XEXP (x1, 0);
  goto L5155;

 L5233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && reload_completed))
    {
      return 470;
    }
  x2 = XEXP (x1, 0);
  goto L5155;

 L5295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L10325;
  goto L5155;

 L10325: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5296;
    }
 L10326: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5315;
    }
 L10327: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5323;
    }
  goto L5155;

 L5296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5297;
    }
  x3 = XEXP (x2, 0);
  goto L10326;

 L5297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5298;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10326;

 L5298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 474;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10326;

 L5315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5316;
    }
  x3 = XEXP (x2, 0);
  goto L10327;

 L5316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5317;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10327;

 L5317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 475;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10327;

 L5323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5324;
    }
  goto L5155;

 L5324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5325;
  x2 = XEXP (x1, 0);
  goto L5155;

 L5325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && reload_completed))
    {
      return 476;
    }
  x2 = XEXP (x1, 0);
  goto L5155;

 L5156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5157;
  goto L5399;

 L5157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5158;
  goto L5399;

 L5158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5159;
    }
  x2 = XEXP (x1, 0);
  goto L5399;

 L5159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5160;
    }
  x2 = XEXP (x1, 0);
  goto L5399;

 L5160: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 464;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5399;

 L5400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L10328;
  goto L5421;

 L10328: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L5401;
    }
 L10329: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L5476;
    }
  goto L5421;

 L5401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L5402;
    }
  x3 = XEXP (x2, 0);
  goto L10329;

 L5402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5403;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10329;

 L5403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5404;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10329;

 L5404: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 481;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10329;

 L5476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L5477;
    }
  goto L5421;

 L5477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5478;
    }
  if (const0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5487;
    }
  x2 = XEXP (x1, 0);
  goto L5421;

 L5478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5479;
    }
  x2 = XEXP (x1, 0);
  goto L5421;

 L5479: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 485;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5421;

 L5487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5488;
    }
  x2 = XEXP (x1, 0);
  goto L5421;

 L5488: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 486;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5421;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L5423;
    }
  goto L5492;

 L5423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L5424;
    }
  goto L5492;

 L5424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5425;
    }
  x2 = XEXP (x1, 0);
  goto L5492;

 L5425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5426;
    }
  x2 = XEXP (x1, 0);
  goto L5492;

 L5426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 482;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5492;

 L5493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L5494;
    }
  goto ret0;

 L5494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L5495;
    }
  goto ret0;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5496;
    }
  if (const0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5505;
    }
  goto ret0;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5497;
    }
  goto ret0;

 L5497: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 487;
    }
  goto ret0;

 L5505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5506;
    }
  goto ret0;

 L5506: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 488;
    }
  goto ret0;

 L4012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4013;
    }
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4014;
    }
  goto ret0;

 L4014: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && reload_completed))
    {
      return 354;
    }
  goto ret0;

 L4517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L10332;
  goto ret0;

 L10332: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L4584;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4518;
    }
 L10331: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4578;
    }
  goto ret0;

 L4584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4585;
    }
  goto ret0;

 L4585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4586;
    }
  goto ret0;

 L4586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !TARGET_SSE_MATH))
    {
      return 401;
    }
  goto ret0;

 L4518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4519;
    }
  x2 = XEXP (x1, 0);
  goto L10331;

 L4519: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 390;
    }
 L4525: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 391;
    }
 L4531: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 392;
    }
 L4567: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 398;
    }
 L4573: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 399;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10331;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L10334;
  goto ret0;

 L10334: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L4592;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4579;
    }
  goto ret0;

 L4592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4593;
    }
  goto ret0;

 L4593: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !TARGET_SSE_MATH))
    {
      return 402;
    }
  goto ret0;

 L4579: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 400;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_4 PARAMS ((rtx, rtx, int *));
static int
recog_4 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L2869;
    case ABS:
      goto L3025;
    case SQRT:
      goto L4754;
    case UNSPEC:
      goto L10355;
    case IF_THEN_ELSE:
      goto L5248;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L10349;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L10350;
    default:
      goto ret0;
   }
 L10349: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, DFmode))
    {
      operands[1] = x1;
      goto L4018;
    }
 L10350: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, DFmode))
    {
      operands[3] = x1;
      goto L4535;
    }
  goto ret0;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10358;
  goto ret0;

 L10358: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L2875;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2870;
    }
  goto ret0;

 L2875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2876;
    }
  goto ret0;

 L2876: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 261;
    }
  goto ret0;

 L2870: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 260;
    }
  goto ret0;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10360;
  goto ret0;

 L10360: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3031;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3026;
    }
  goto ret0;

 L3031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3032;
    }
  goto ret0;

 L3032: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 278;
    }
  goto ret0;

 L3026: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 277;
    }
  goto ret0;

 L4754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10363;
  goto ret0;

 L10363: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4770;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4755;
    }
 L10362: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4765;
    }
  goto ret0;

 L4770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4771;
    }
  goto ret0;

 L4771: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 430;
    }
  goto ret0;

 L4755: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387)))
    {
      return 427;
    }
 L4760: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387)))
    {
      return 428;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10362;

 L4765: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (!TARGET_SSE2 || !TARGET_SSE_MATH)))
    {
      return 429;
    }
  goto ret0;

 L10355: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10364;
  goto ret0;

 L10364: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21:
      goto L4809;
    case 22:
      goto L4835;
    default:
      break;
    }
  goto ret0;

 L4809: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10367;
  goto ret0;

 L10367: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4820;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4810;
    }
  goto ret0;

 L4820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4821;
    }
  goto ret0;

 L4821: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 439;
    }
  goto ret0;

 L4810: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 437;
    }
  goto ret0;

 L4835: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10369;
  goto ret0;

 L10369: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4846;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4836;
    }
  goto ret0;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4847;
    }
  goto ret0;

 L4847: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 444;
    }
  goto ret0;

 L4836: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 442;
    }
  goto ret0;

 L5248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case LT:
      goto L5249;
    case GT:
      goto L5341;
    default:
     break;
   }
 L5164: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5165;
    }
 L5443: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5444;
    }
 L5465: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == EQ)
    goto L5466;
 L5528: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5529;
    }
  goto ret0;

 L5249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10370;
  goto L5164;

 L10370: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5250;
    }
 L10371: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5269;
    }
 L10372: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5277;
    }
  goto L5164;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5251;
    }
  x3 = XEXP (x2, 0);
  goto L10371;

 L5251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5252;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10371;

 L5252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_IEEE_FP && TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 471;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10371;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5270;
    }
  x3 = XEXP (x2, 0);
  goto L10372;

 L5270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5271;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10372;

 L5271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 472;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10372;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5278;
    }
  goto L5164;

 L5278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5279;
  x2 = XEXP (x1, 0);
  goto L5164;

 L5279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && reload_completed))
    {
      return 473;
    }
  x2 = XEXP (x1, 0);
  goto L5164;

 L5341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10373;
  goto L5164;

 L10373: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5342;
    }
 L10374: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5361;
    }
 L10375: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5369;
    }
  goto L5164;

 L5342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5343;
    }
  x3 = XEXP (x2, 0);
  goto L10374;

 L5343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5344;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10374;

 L5344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 477;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10374;

 L5361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5362;
    }
  x3 = XEXP (x2, 0);
  goto L10375;

 L5362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5363;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10375;

 L5363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 478;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10375;

 L5369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5370;
    }
  goto L5164;

 L5370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5371;
  x2 = XEXP (x1, 0);
  goto L5164;

 L5371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && reload_completed))
    {
      return 479;
    }
  x2 = XEXP (x1, 0);
  goto L5164;

 L5165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5166;
  goto L5443;

 L5166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5167;
  goto L5443;

 L5167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5168;
    }
  x2 = XEXP (x1, 0);
  goto L5443;

 L5168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5169;
    }
  x2 = XEXP (x1, 0);
  goto L5443;

 L5169: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 465;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5443;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10376;
  goto L5465;

 L10376: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L5445;
    }
 L10377: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L5512;
    }
  goto L5465;

 L5445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L5446;
    }
  x3 = XEXP (x2, 0);
  goto L10377;

 L5446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5447;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10377;

 L5447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5448;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10377;

 L5448: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 483;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10377;

 L5512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L5513;
    }
  goto L5465;

 L5513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5514;
    }
  if (const0_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5523;
    }
  x2 = XEXP (x1, 0);
  goto L5465;

 L5514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5515;
    }
  x2 = XEXP (x1, 0);
  goto L5465;

 L5515: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 489;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5465;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5524;
    }
  x2 = XEXP (x1, 0);
  goto L5465;

 L5524: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 490;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5465;

 L5466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L5467;
    }
  goto L5528;

 L5467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L5468;
    }
  goto L5528;

 L5468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5469;
    }
  x2 = XEXP (x1, 0);
  goto L5528;

 L5469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5470;
    }
  x2 = XEXP (x1, 0);
  goto L5528;

 L5470: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 484;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5528;

 L5529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L5530;
    }
  goto ret0;

 L5530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L5531;
    }
  goto ret0;

 L5531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5532;
    }
  if (const0_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5541;
    }
  goto ret0;

 L5532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5533;
    }
  goto ret0;

 L5533: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 491;
    }
  goto ret0;

 L5541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5542;
    }
  goto ret0;

 L5542: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 492;
    }
  goto ret0;

 L4018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4019;
    }
  goto ret0;

 L4019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4020;
    }
  goto ret0;

 L4020: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && reload_completed))
    {
      return 355;
    }
  goto ret0;

 L4535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10380;
  goto ret0;

 L10380: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4616;
    case FLOAT_EXTEND:
      goto L4630;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10378;
    default:
      goto L10379;
   }
 L10378: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4536;
    }
 L10379: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4610;
    }
  goto ret0;

 L4616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4617;
    }
  goto ret0;

 L4617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4618;
    }
  goto ret0;

 L4618: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 406;
    }
  goto ret0;

 L4630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4631;
    }
  goto ret0;

 L4631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4632;
    }
  goto ret0;

 L4632: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 408;
    }
  goto ret0;

 L4536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4537;
    }
  x2 = XEXP (x1, 0);
  goto L10379;

 L4537: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 393;
    }
 L4543: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_SSE2 && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 394;
    }
 L4549: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 395;
    }
 L4599: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 403;
    }
 L4605: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 404;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10379;

 L4610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10383;
  goto ret0;

 L10383: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4624;
    case FLOAT_EXTEND:
      goto L4638;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10382;
    default:
      goto ret0;
   }
 L10382: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4611;
    }
  goto ret0;

 L4624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4625;
    }
  goto ret0;

 L4625: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 407;
    }
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4639;
    }
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 409;
    }
  goto ret0;

 L4611: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 405;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_5 PARAMS ((rtx, rtx, int *));
static int
recog_5 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L441;
    }
 L10083: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L610;
    }
 L10092: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L884;
    }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L442;
    }
  x1 = XEXP (x0, 0);
  goto L10083;

 L442: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && optimize_size))
    {
      return 68;
    }
 L450: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && !optimize_size))
    {
      return 70;
    }
  x1 = XEXP (x0, 0);
  goto L10083;

 L610: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L10385;
 L457: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L458;
    }
  x1 = XEXP (x0, 0);
  goto L10092;

 L10385: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L611;
    case NEG:
      goto L2847;
    case ABS:
      goto L3003;
    default:
     break;
   }
  goto L457;

 L611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10388;
    case DFmode:
      goto L10389;
    default:
      break;
    }
  goto L457;

 L10388: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L612;
    }
  goto L457;

 L612: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 93;
    }
  x1 = XEXP (x0, 1);
  goto L457;

 L10389: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L622;
    }
  goto L457;

 L622: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 95;
    }
  x1 = XEXP (x0, 1);
  goto L457;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L2848;
    }
  goto L457;

 L2848: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && ix86_unary_operator_ok (NEG, XFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 257;
    }
  x1 = XEXP (x0, 1);
  goto L457;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L3004;
    }
  goto L457;

 L3004: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && ix86_unary_operator_ok (ABS, XFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 274;
    }
  x1 = XEXP (x0, 1);
  goto L457;

 L458: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE
   && optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 72;
    }
 L466: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE
   && !optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 74;
    }
  x1 = XEXP (x0, 0);
  goto L10092;

 L884: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L10390;
  goto ret0;

 L10390: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L885;
    case NEG:
      goto L2880;
    case ABS:
      goto L3036;
    case SQRT:
      goto L4775;
    case UNSPEC:
      goto L10398;
    case IF_THEN_ELSE:
      goto L5173;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L10393;
    default:
      goto ret0;
   }
 L10393: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, XFmode))
    {
      operands[3] = x1;
      goto L4553;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10400;
    case SImode:
      goto L10401;
    case DImode:
      goto L10402;
    default:
      break;
    }
  goto ret0;

 L10400: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L886;
    }
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 132;
    }
  goto ret0;

 L10401: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 134;
    }
  goto ret0;

 L10402: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L906;
    }
  goto ret0;

 L906: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 136;
    }
  goto ret0;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L10404;
  goto ret0;

 L10404: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L2886;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L2881;
    }
  goto ret0;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10405;
    case SFmode:
      goto L10406;
    default:
      break;
    }
  goto ret0;

 L10405: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2887;
    }
  goto ret0;

 L2887: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 263;
    }
  goto ret0;

 L10406: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2893;
    }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 264;
    }
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && reload_completed))
    {
      return 262;
    }
  goto ret0;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L10408;
  goto ret0;

 L10408: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3042;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L3037;
    }
  goto ret0;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10409;
    case SFmode:
      goto L10410;
    default:
      break;
    }
  goto ret0;

 L10409: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3043;
    }
  goto ret0;

 L3043: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 280;
    }
  goto ret0;

 L10410: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3049;
    }
  goto ret0;

 L3049: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 281;
    }
  goto ret0;

 L3037: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && reload_completed))
    {
      return 279;
    }
  goto ret0;

 L4775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L10412;
  goto ret0;

 L10412: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4786;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4776;
    }
  goto ret0;

 L4786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10413;
    case SFmode:
      goto L10414;
    default:
      break;
    }
  goto ret0;

 L10413: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4787;
    }
  goto ret0;

 L4787: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && !TARGET_NO_FANCY_MATH_387))
    {
      return 433;
    }
  goto ret0;

 L10414: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4799;
    }
  goto ret0;

 L4799: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && !TARGET_NO_FANCY_MATH_387))
    {
      return 435;
    }
  goto ret0;

 L4776: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && !TARGET_NO_FANCY_MATH_387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ))
    {
      return 431;
    }
  goto ret0;

 L10398: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10415;
  goto ret0;

 L10415: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21:
      goto L4825;
    case 22:
      goto L4851;
    default:
      break;
    }
  goto ret0;

 L4825: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4826;
    }
  goto ret0;

 L4826: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && !TARGET_NO_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 440;
    }
  goto ret0;

 L4851: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4852;
    }
  goto ret0;

 L4852: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && ! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && flag_unsafe_math_optimizations))
    {
      return 445;
    }
  goto ret0;

 L5173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5174;
    }
  goto ret0;

 L5174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5175;
  goto ret0;

 L5175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5176;
  goto ret0;

 L5176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5177;
    }
  goto ret0;

 L5177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L5178;
    }
  goto ret0;

 L5178: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_CMOVE))
    {
      return 466;
    }
  goto ret0;

 L4553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L10418;
  goto ret0;

 L10418: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4656;
    case FLOAT_EXTEND:
      goto L4684;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10417;
    default:
      goto ret0;
   }
 L10417: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4554;
    }
  goto ret0;

 L4656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4657;
    }
  goto ret0;

 L4657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L4658;
    }
  goto ret0;

 L4658: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && TARGET_USE_FIOP))
    {
      return 412;
    }
  goto ret0;

 L4684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10420;
    case DFmode:
      goto L10421;
    default:
      break;
    }
  goto ret0;

 L10420: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4685;
    }
  goto ret0;

 L4685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L4686;
    }
  goto ret0;

 L4686: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 416;
    }
  goto ret0;

 L10421: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4713;
    }
  goto ret0;

 L4713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L4714;
    }
  goto ret0;

 L4714: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 420;
    }
  goto ret0;

 L4554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L10423;
  goto ret0;

 L10423: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4671;
    case FLOAT_EXTEND:
      goto L4699;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10422;
    default:
      goto ret0;
   }
 L10422: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L4555;
    }
  goto ret0;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4672;
    }
  goto ret0;

 L4672: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387 && TARGET_USE_FIOP))
    {
      return 414;
    }
  goto ret0;

 L4699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10425;
    case DFmode:
      goto L10426;
    default:
      break;
    }
  goto ret0;

 L10425: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4700;
    }
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 418;
    }
  goto ret0;

 L10426: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L4728;
    }
  goto ret0;

 L4728: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 422;
    }
  goto ret0;

 L4555: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'))
    {
      return 396;
    }
 L4645: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 410;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_6 PARAMS ((rtx, rtx, int *));
static int
recog_6 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L445;
    }
 L10084: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L615;
    }
 L10093: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L889;
    }
  goto ret0;

 L445: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L446;
    }
  x1 = XEXP (x0, 0);
  goto L10084;

 L446: ATTRIBUTE_UNUSED_LABEL
  if ((optimize_size))
    {
      return 69;
    }
 L454: ATTRIBUTE_UNUSED_LABEL
  if ((!optimize_size))
    {
      return 71;
    }
  x1 = XEXP (x0, 0);
  goto L10084;

 L615: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L10427;
 L461: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L462;
    }
  x1 = XEXP (x0, 0);
  goto L10093;

 L10427: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L616;
    case NEG:
      goto L2859;
    case ABS:
      goto L3015;
    default:
     break;
   }
  goto L461;

 L616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10430;
    case DFmode:
      goto L10431;
    default:
      break;
    }
  goto L461;

 L10430: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L617;
    }
  goto L461;

 L617: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 94;
    }
  x1 = XEXP (x0, 1);
  goto L461;

 L10431: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L627;
    }
  goto L461;

 L627: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 96;
    }
  x1 = XEXP (x0, 1);
  goto L461;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2860;
    }
  goto L461;

 L2860: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (NEG, TFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 258;
    }
  x1 = XEXP (x0, 1);
  goto L461;

 L3015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3016;
    }
  goto L461;

 L3016: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (ABS, TFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 275;
    }
  x1 = XEXP (x0, 1);
  goto L461;

 L462: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && optimize_size
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || memory_operand (operands[0], TFmode))))
    {
      return 73;
    }
 L470: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && !optimize_size
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || memory_operand (operands[0], TFmode))))
    {
      return 75;
    }
  x1 = XEXP (x0, 0);
  goto L10093;

 L889: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L10432;
  goto ret0;

 L10432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L890;
    case NEG:
      goto L2897;
    case ABS:
      goto L3053;
    case SQRT:
      goto L4780;
    case UNSPEC:
      goto L10440;
    case IF_THEN_ELSE:
      goto L5182;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L10435;
    default:
      goto ret0;
   }
 L10435: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, TFmode))
    {
      operands[3] = x1;
      goto L4559;
    }
  goto ret0;

 L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10442;
    case SImode:
      goto L10443;
    case DImode:
      goto L10444;
    default:
      break;
    }
  goto ret0;

 L10442: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L891;
    }
  goto ret0;

 L891: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 133;
    }
  goto ret0;

 L10443: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L901;
    }
  goto ret0;

 L901: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 135;
    }
  goto ret0;

 L10444: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L911;
    }
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 137;
    }
  goto ret0;

 L2897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L10446;
  goto ret0;

 L10446: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L2903;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2898;
    }
  goto ret0;

 L2903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10447;
    case SFmode:
      goto L10448;
    default:
      break;
    }
  goto ret0;

 L10447: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2904;
    }
  goto ret0;

 L2904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 266;
    }
  goto ret0;

 L10448: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2910;
    }
  goto ret0;

 L2910: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 267;
    }
  goto ret0;

 L2898: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 265;
    }
  goto ret0;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L10450;
  goto ret0;

 L10450: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3059;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3054;
    }
  goto ret0;

 L3059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10451;
    case SFmode:
      goto L10452;
    default:
      break;
    }
  goto ret0;

 L10451: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3060;
    }
  goto ret0;

 L3060: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 283;
    }
  goto ret0;

 L10452: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3066;
    }
  goto ret0;

 L3066: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 284;
    }
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 282;
    }
  goto ret0;

 L4780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L10454;
  goto ret0;

 L10454: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4792;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4781;
    }
  goto ret0;

 L4792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10455;
    case SFmode:
      goto L10456;
    default:
      break;
    }
  goto ret0;

 L10455: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4793;
    }
  goto ret0;

 L4793: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387))
    {
      return 434;
    }
  goto ret0;

 L10456: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4805;
    }
  goto ret0;

 L4805: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387))
    {
      return 436;
    }
  goto ret0;

 L4781: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ))
    {
      return 432;
    }
  goto ret0;

 L10440: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10457;
  goto ret0;

 L10457: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21:
      goto L4830;
    case 22:
      goto L4856;
    default:
      break;
    }
  goto ret0;

 L4830: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4831;
    }
  goto ret0;

 L4831: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 441;
    }
  goto ret0;

 L4856: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4857;
    }
  goto ret0;

 L4857: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 446;
    }
  goto ret0;

 L5182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5183;
    }
  goto ret0;

 L5183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5184;
  goto ret0;

 L5184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5185;
  goto ret0;

 L5185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L5186;
    }
  goto ret0;

 L5186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L5187;
    }
  goto ret0;

 L5187: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE))
    {
      return 467;
    }
  goto ret0;

 L4559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L10460;
  goto ret0;

 L10460: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4663;
    case FLOAT_EXTEND:
      goto L4691;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10459;
    default:
      goto ret0;
   }
 L10459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4560;
    }
  goto ret0;

 L4663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4664;
    }
  goto ret0;

 L4664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L4665;
    }
  goto ret0;

 L4665: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP))
    {
      return 413;
    }
  goto ret0;

 L4691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10462;
    case DFmode:
      goto L10463;
    default:
      break;
    }
  goto ret0;

 L10462: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4692;
    }
  goto ret0;

 L4692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L4693;
    }
  goto ret0;

 L4693: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 417;
    }
  goto ret0;

 L10463: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4720;
    }
  goto ret0;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L4721;
    }
  goto ret0;

 L4721: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 421;
    }
  goto ret0;

 L4560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode)
    goto L10465;
  goto ret0;

 L10465: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L4678;
    case FLOAT_EXTEND:
      goto L4706;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10464;
    default:
      goto ret0;
   }
 L10464: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L4561;
    }
  goto ret0;

 L4678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4679;
    }
  goto ret0;

 L4679: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP))
    {
      return 415;
    }
  goto ret0;

 L4706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10467;
    case DFmode:
      goto L10468;
    default:
      break;
    }
  goto ret0;

 L10467: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4707;
    }
  goto ret0;

 L4707: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 419;
    }
  goto ret0;

 L10468: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L4735;
    }
  goto ret0;

 L4735: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 423;
    }
  goto ret0;

 L4561: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'))
    {
      return 397;
    }
 L4651: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 411;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_7 PARAMS ((rtx, rtx, int *));
static int
recog_7 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10470;
    case HImode:
      goto L10472;
    case QImode:
      goto L10474;
    default:
      break;
    }
 L60: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L61;
    }
 L79: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode)
    goto L10494;
  goto ret0;

 L10470: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L10;
    case NEG:
      goto L1040;
    case PLUS:
      goto L1073;
    case AND:
      goto L1875;
    case ZERO_EXTRACT:
      goto L1930;
    case IOR:
      goto L2194;
    case XOR:
      goto L2444;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10469;
    default:
      goto L10477;
   }
 L10469: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4;
    }
 L10477: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1056;
    }
  goto ret0;

 L10: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L11;
    }
  goto ret0;

 L11: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12;
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 1;
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1041;
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1042;
    }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 148;
    }
  goto ret0;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1074;
    }
  goto ret0;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1075;
    }
  goto ret0;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 150;
    }
  goto ret0;

 L1875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10497;
  goto ret0;

 L10497: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L1897;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1876;
    }
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L1898;
    }
  goto ret0;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1899;
  goto ret0;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1910;
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10498;
 L1900: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1901;
    }
  goto ret0;

 L10498: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L1911;
    case ZERO_EXTRACT:
      goto L1922;
    default:
     break;
   }
  goto L1900;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1912;
    }
  goto L1900;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 200;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L1900;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1923;
    }
  goto L1900;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1924;
  goto L1900;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1925;
  goto L1900;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 201;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L1900;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 199;
    }
  goto ret0;

 L1876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1877;
    }
  goto ret0;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 196;
    }
  goto ret0;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1931;
    }
  goto ret0;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1932;
    }
  goto ret0;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1933;
    }
  goto ret0;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 202;
    }
  goto ret0;

 L2194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2195;
    }
  goto ret0;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2196;
    }
  goto ret0;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 217;
    }
  goto ret0;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2445;
    }
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2446;
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 231;
    }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5;
    }
 L17: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L18;
    }
  x2 = XEXP (x1, 0);
  goto L10477;

 L5: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 0;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L17;

 L18: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 2;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10477;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1057;
    }
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 149;
    }
  goto ret0;

 L10472: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L29;
    case NEG:
      goto L1131;
    case PLUS:
      goto L1164;
    case AND:
      goto L1882;
    case IOR:
      goto L2239;
    case XOR:
      goto L2489;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10471;
    default:
      goto L10480;
   }
 L10471: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L23;
    }
 L10480: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1147;
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L31;
    }
  goto ret0;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 4;
    }
  goto ret0;

 L1131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1132;
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1133;
    }
  goto ret0;

 L1133: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 154;
    }
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1165;
    }
  goto ret0;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1166;
    }
  goto ret0;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 156;
    }
  goto ret0;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L1883;
    }
  goto ret0;

 L1883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1884;
    }
  goto ret0;

 L1884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 197;
    }
  goto ret0;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2240;
    }
  goto ret0;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2241;
    }
  goto ret0;

 L2241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 220;
    }
  goto ret0;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2490;
    }
  goto ret0;

 L2490: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2491;
    }
  goto ret0;

 L2491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 234;
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L24;
    }
 L36: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L37;
    }
  x2 = XEXP (x1, 0);
  goto L10480;

 L24: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 3;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L36;

 L37: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode)))
    {
      return 5;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10480;

 L1147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1148;
    }
  goto ret0;

 L1148: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 155;
    }
  goto ret0;

 L10474: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L54;
    case NEG:
      goto L1238;
    case PLUS:
      goto L1271;
    case AND:
      goto L1889;
    case IOR:
      goto L2314;
    case XOR:
      goto L2649;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10473;
    default:
      goto L10475;
   }
 L10473: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L42;
    }
 L10475: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L70;
  goto L60;

 L54: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L55;
    }
  goto L60;

 L55: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L56;
    }
  goto L60;

 L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 8;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1239;
    }
  goto L60;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1240;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L1240: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 161;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L60;

 L1271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1272;
    }
  goto L60;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1273;
    }
  goto L60;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 163;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L1890;
    }
  goto L60;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1891;
    }
  goto L60;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 198;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2315;
    }
  goto L60;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2316;
    }
  goto L60;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 225;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2650;
    }
  goto L60;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2651;
    }
  goto L60;

 L2651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 242;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L43;
    }
 L48: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L49;
    }
  x2 = XEXP (x1, 0);
  goto L10475;

 L43: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 6;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L48;

 L49: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 7;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10475;

 L70: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L71;
  goto L60;

 L71: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L72;
    }
  goto L60;

 L72: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L73;
  goto L60;

 L73: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L74;
  goto L60;

 L74: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L75;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L75: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 10;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L60;

 L61: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L62;
  x2 = XEXP (x1, 0);
  goto L79;

 L62: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L63;
  x2 = XEXP (x1, 0);
  goto L79;

 L63: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L64;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L64: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L65;
  x2 = XEXP (x1, 0);
  goto L79;

 L65: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 9;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L10494: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L80;
 L10495: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1254;
    }
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L81;
  goto L10495;

 L81: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L82;
    }
  goto L10495;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L83;
  goto L10495;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L84;
  goto L10495;

 L84: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L85;
    }
 L94: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L95;
  x2 = XEXP (x1, 0);
  goto L10495;

 L85: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 11;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L94;

 L95: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L96;
  x2 = XEXP (x1, 0);
  goto L10495;

 L96: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L97;
    }
  x2 = XEXP (x1, 0);
  goto L10495;

 L97: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L98;
  x2 = XEXP (x1, 0);
  goto L10495;

 L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (ix86_match_ccmode (insn, CCmode)))
    {
      return 12;
    }
  x2 = XEXP (x1, 0);
  goto L10495;

 L1254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1255;
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 162;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_8 PARAMS ((rtx, rtx, int *));
static int
recog_8 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case VEC_DUPLICATE:
      goto L5814;
    case PLUS:
      goto L5846;
    case MINUS:
      goto L5860;
    case MULT:
      goto L5874;
    case DIV:
      goto L5888;
    case UNSPEC:
      goto L10559;
    case SQRT:
      goto L5925;
    case VEC_SELECT:
      goto L6160;
    case SMAX:
      goto L6202;
    case SMIN:
      goto L6216;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10547;
    default:
      goto ret0;
   }
 L10547: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5778;
    }
  goto ret0;

 L5814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5815;
    }
  goto ret0;

 L5815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5816;
    }
  goto ret0;

 L5816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 543;
    }
  goto ret0;

 L5846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5847;
    }
  goto ret0;

 L5847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L5848;
    }
  goto ret0;

 L5848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5849;
  goto ret0;

 L5849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 548;
    }
  goto ret0;

 L5860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5861;
    }
  goto ret0;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L5862;
    }
  goto ret0;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5863;
  goto ret0;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 550;
    }
  goto ret0;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5875;
    }
  goto ret0;

 L5875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L5876;
    }
  goto ret0;

 L5876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5877;
  goto ret0;

 L5877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 552;
    }
  goto ret0;

 L5888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5889;
    }
  goto ret0;

 L5889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L5890;
    }
  goto ret0;

 L5890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L5891;
  goto ret0;

 L5891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 554;
    }
  goto ret0;

 L10559: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10561;
  goto ret0;

 L10561: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 42:
      goto L5901;
    case 43:
      goto L5913;
    default:
      break;
    }
  goto ret0;

 L5901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5902;
    }
  goto ret0;

 L5902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5903;
    }
  goto ret0;

 L5903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 556;
    }
  goto ret0;

 L5913: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5914;
    }
  goto ret0;

 L5914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5915;
    }
  goto ret0;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 558;
    }
  goto ret0;

 L5925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L5926;
    }
  goto ret0;

 L5926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5927;
    }
  goto ret0;

 L5927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 560;
    }
  goto ret0;

 L6160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6161;
    }
  goto ret0;

 L6161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6162;
  goto ret0;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10563;
  goto ret0;

 L10563: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2:
        goto L6163;
      case 0:
        goto L6181;
      default:
        break;
      }
  goto ret0;

 L6163: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6164;
  goto ret0;

 L6164: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6165;
  goto ret0;

 L6165: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6166;
  goto ret0;

 L6166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6167;
  goto ret0;

 L6167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6168;
    }
  goto ret0;

 L6168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6169;
  goto ret0;

 L6169: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6170;
  goto ret0;

 L6170: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6171;
  goto ret0;

 L6171: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6172;
  goto ret0;

 L6172: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6173;
  goto ret0;

 L6173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE))
    {
      return 593;
    }
  goto ret0;

 L6181: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6182;
  goto ret0;

 L6182: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6183;
  goto ret0;

 L6183: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6184;
  goto ret0;

 L6184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6185;
  goto ret0;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6186;
    }
  goto ret0;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6187;
  goto ret0;

 L6187: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6188;
  goto ret0;

 L6188: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6189;
  goto ret0;

 L6189: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6190;
  goto ret0;

 L6190: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6191;
  goto ret0;

 L6191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE))
    {
      return 594;
    }
  goto ret0;

 L6202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6203;
    }
  goto ret0;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6204;
    }
  goto ret0;

 L6204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6205;
  goto ret0;

 L6205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 596;
    }
  goto ret0;

 L6216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6217;
    }
  goto ret0;

 L6217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6218;
    }
  goto ret0;

 L6218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6219;
  goto ret0;

 L6219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 598;
    }
  goto ret0;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode)
    goto L10565;
  goto ret0;

 L10565: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_SELECT:
      goto L5779;
    case VEC_DUPLICATE:
      goto L6225;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10566;
    default:
      goto ret0;
   }
 L10566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5822;
    }
  goto ret0;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L5780;
    }
  goto ret0;

 L5780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5781;
  goto ret0;

 L5781: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L5782;
  goto ret0;

 L5782: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L5783;
  goto ret0;

 L5783: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L5784;
  goto ret0;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L5785;
  goto ret0;

 L5785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L10568;
  goto ret0;

 L10568: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 3:
        goto L10570;
      case 12:
        goto L10571;
      default:
        break;
      }
  goto ret0;

 L10570: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 539;
    }
  goto ret0;

 L10571: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 540;
    }
  goto ret0;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case V2SFmode:
      goto L10572;
    case SFmode:
      goto L10573;
    default:
      break;
    }
  goto ret0;

 L10572: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L6226;
  goto ret0;

 L6226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L6227;
    }
  goto ret0;

 L6227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 12
      && (TARGET_SSE))
    {
      return 599;
    }
  goto ret0;

 L10573: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L6250;
  goto ret0;

 L6250: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6251;
    }
  goto ret0;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 14
      && (TARGET_SSE))
    {
      return 602;
    }
  goto ret0;

 L5822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 544;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_9 PARAMS ((rtx, rtx, int *));
static int
recog_9 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6276;
    case SS_PLUS:
      goto L6301;
    case US_PLUS:
      goto L6313;
    case MINUS:
      goto L6325;
    case SS_MINUS:
      goto L6350;
    case US_MINUS:
      goto L6362;
    case ASHIFTRT:
      goto L6462;
    case EQ:
      goto L6521;
    case GT:
      goto L6539;
    case UMAX:
      goto L6557;
    case UMIN:
      goto L6569;
    case VEC_CONCAT:
      goto L6631;
    case VEC_MERGE:
      goto L6655;
    default:
     break;
   }
  goto ret0;

 L6276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6277;
    }
  goto ret0;

 L6277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6278;
    }
  goto ret0;

 L6278: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 606;
    }
  goto ret0;

 L6301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6302;
    }
  goto ret0;

 L6302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6303;
    }
  goto ret0;

 L6303: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 610;
    }
  goto ret0;

 L6313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6314;
    }
  goto ret0;

 L6314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6315;
    }
  goto ret0;

 L6315: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 612;
    }
  goto ret0;

 L6325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6326;
    }
  goto ret0;

 L6326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6327;
    }
  goto ret0;

 L6327: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 614;
    }
  goto ret0;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6351;
    }
  goto ret0;

 L6351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6352;
    }
  goto ret0;

 L6352: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 618;
    }
  goto ret0;

 L6362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6363;
    }
  goto ret0;

 L6363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6364;
    }
  goto ret0;

 L6364: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 620;
    }
  goto ret0;

 L6462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == PLUS)
    goto L6463;
  goto ret0;

 L6463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == PLUS)
    goto L6464;
  goto ret0;

 L6464: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L6465;
    }
  goto ret0;

 L6465: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L6466;
    }
  goto ret0;

 L6466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 8)
    goto L6467;
  goto ret0;

 L6467: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6468;
  goto ret0;

 L6468: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6469;
  goto ret0;

 L6469: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6470;
  goto ret0;

 L6470: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6471;
  goto ret0;

 L6471: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6472;
  goto ret0;

 L6472: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6473;
  goto ret0;

 L6473: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6474;
  goto ret0;

 L6474: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6475;
  goto ret0;

 L6475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 631;
    }
  goto ret0;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6522;
    }
  goto ret0;

 L6522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6523;
    }
  goto ret0;

 L6523: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 637;
    }
  goto ret0;

 L6539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6540;
    }
  goto ret0;

 L6540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6541;
    }
  goto ret0;

 L6541: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 640;
    }
  goto ret0;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6558;
    }
  goto ret0;

 L6558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6559;
    }
  goto ret0;

 L6559: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 643;
    }
  goto ret0;

 L6569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6570;
    }
  goto ret0;

 L6570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6571;
    }
  goto ret0;

 L6571: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 645;
    }
  goto ret0;

 L6631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L10601;
  goto ret0;

 L10601: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L6632;
    case US_TRUNCATE:
      goto L6648;
    default:
     break;
   }
  goto ret0;

 L6632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L6633;
    }
  goto ret0;

 L6633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L6634;
  goto ret0;

 L6634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L6635;
    }
  goto ret0;

 L6635: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 655;
    }
  goto ret0;

 L6648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L6649;
    }
  goto ret0;

 L6649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L6650;
  goto ret0;

 L6650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L6651;
    }
  goto ret0;

 L6651: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 657;
    }
  goto ret0;

 L6655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6656;
  goto ret0;

 L6656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L6657;
    }
  goto ret0;

 L6657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L6658;
  goto ret0;

 L6658: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10603;
  goto ret0;

 L10603: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4:
        goto L6659;
      case 0:
        goto L6713;
      default:
        break;
      }
  goto ret0;

 L6659: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6660;
  goto ret0;

 L6660: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L6661;
  goto ret0;

 L6661: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6662;
  goto ret0;

 L6662: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L6663;
  goto ret0;

 L6663: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6664;
  goto ret0;

 L6664: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L6665;
  goto ret0;

 L6665: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6666;
  goto ret0;

 L6666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6667;
  goto ret0;

 L6667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L6668;
    }
  goto ret0;

 L6668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L6669;
  goto ret0;

 L6669: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6670;
  goto ret0;

 L6670: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L6671;
  goto ret0;

 L6671: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6672;
  goto ret0;

 L6672: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L6673;
  goto ret0;

 L6673: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6674;
  goto ret0;

 L6674: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L6675;
  goto ret0;

 L6675: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6676;
  goto ret0;

 L6676: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L6677;
  goto ret0;

 L6677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_MMX))
    {
      return 658;
    }
  goto ret0;

 L6713: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L6714;
  goto ret0;

 L6714: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6715;
  goto ret0;

 L6715: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L6716;
  goto ret0;

 L6716: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6717;
  goto ret0;

 L6717: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L6718;
  goto ret0;

 L6718: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6719;
  goto ret0;

 L6719: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L6720;
  goto ret0;

 L6720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6721;
  goto ret0;

 L6721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L6722;
    }
  goto ret0;

 L6722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L6723;
  goto ret0;

 L6723: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L6724;
  goto ret0;

 L6724: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6725;
  goto ret0;

 L6725: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L6726;
  goto ret0;

 L6726: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6727;
  goto ret0;

 L6727: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L6728;
  goto ret0;

 L6728: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6729;
  goto ret0;

 L6729: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L6730;
  goto ret0;

 L6730: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6731;
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_MMX))
    {
      return 661;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_10 PARAMS ((rtx, rtx, int *));
static int
recog_10 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6282;
    case SS_PLUS:
      goto L6307;
    case US_PLUS:
      goto L6319;
    case MINUS:
      goto L6331;
    case SS_MINUS:
      goto L6356;
    case US_MINUS:
      goto L6368;
    case MULT:
      goto L6374;
    case TRUNCATE:
      goto L6380;
    case ASHIFTRT:
      goto L6479;
    case VEC_MERGE:
      goto L6498;
    case UNSPEC:
      goto L10623;
    case EQ:
      goto L6527;
    case GT:
      goto L6545;
    case SMAX:
      goto L6563;
    case SMIN:
      goto L6575;
    case LSHIFTRT:
      goto L6593;
    case ASHIFT:
      goto L6612;
    case VEC_CONCAT:
      goto L6639;
    default:
     break;
   }
  goto ret0;

 L6282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6283;
    }
  goto ret0;

 L6283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6284;
    }
  goto ret0;

 L6284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 607;
    }
  goto ret0;

 L6307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6308;
    }
  goto ret0;

 L6308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6309;
    }
  goto ret0;

 L6309: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 611;
    }
  goto ret0;

 L6319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6320;
    }
  goto ret0;

 L6320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6321;
    }
  goto ret0;

 L6321: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 613;
    }
  goto ret0;

 L6331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6332;
    }
  goto ret0;

 L6332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6333;
    }
  goto ret0;

 L6333: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 615;
    }
  goto ret0;

 L6356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6357;
    }
  goto ret0;

 L6357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6358;
    }
  goto ret0;

 L6358: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 619;
    }
  goto ret0;

 L6368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6369;
    }
  goto ret0;

 L6369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6370;
    }
  goto ret0;

 L6370: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 621;
    }
  goto ret0;

 L6374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6375;
    }
  goto ret0;

 L6375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6376;
    }
  goto ret0;

 L6376: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 622;
    }
  goto ret0;

 L6380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L6381;
  goto ret0;

 L6381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == MULT)
    goto L6382;
  goto ret0;

 L6382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L10624;
  goto ret0;

 L10624: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L6383;
    case ZERO_EXTEND:
      goto L6393;
    default:
     break;
   }
  goto ret0;

 L6383: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L6384;
    }
  goto ret0;

 L6384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6385;
  goto ret0;

 L6385: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L6386;
    }
  goto ret0;

 L6386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_MMX))
    {
      return 623;
    }
  goto ret0;

 L6393: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L6394;
    }
  goto ret0;

 L6394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L6395;
  goto ret0;

 L6395: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L6396;
    }
  goto ret0;

 L6396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 624;
    }
  goto ret0;

 L6479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L10626;
  goto ret0;

 L10626: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6480;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6582;
    }
  goto ret0;

 L6480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == PLUS)
    goto L6481;
  goto ret0;

 L6481: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L6482;
    }
  goto ret0;

 L6482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L6483;
    }
  goto ret0;

 L6483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 4)
    goto L6484;
  goto ret0;

 L6484: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6485;
  goto ret0;

 L6485: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6486;
  goto ret0;

 L6486: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6487;
  goto ret0;

 L6487: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6488;
  goto ret0;

 L6488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 632;
    }
  goto ret0;

 L6582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6583;
    }
  goto ret0;

 L6583: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 647;
    }
  goto ret0;

 L6498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L10629;
  goto ret0;

 L10629: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6682;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6499;
    }
  goto ret0;

 L6682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L6683;
    }
  goto ret0;

 L6683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6684;
  goto ret0;

 L6684: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10630;
  goto ret0;

 L10630: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 0:
        goto L6685;
      case 2:
        goto L6739;
      default:
        break;
      }
  goto ret0;

 L6685: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6686;
  goto ret0;

 L6686: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6687;
  goto ret0;

 L6687: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6688;
  goto ret0;

 L6688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6689;
  goto ret0;

 L6689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L6690;
    }
  goto ret0;

 L6690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6691;
  goto ret0;

 L6691: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6692;
  goto ret0;

 L6692: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6693;
  goto ret0;

 L6693: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6694;
  goto ret0;

 L6694: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6695;
  goto ret0;

 L6695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_MMX))
    {
      return 659;
    }
  goto ret0;

 L6739: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6740;
  goto ret0;

 L6740: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6741;
  goto ret0;

 L6741: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6742;
  goto ret0;

 L6742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6743;
  goto ret0;

 L6743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L6744;
    }
  goto ret0;

 L6744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L6745;
  goto ret0;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6746;
  goto ret0;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6747;
  goto ret0;

 L6747: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6748;
  goto ret0;

 L6748: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6749;
  goto ret0;

 L6749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_MMX))
    {
      return 662;
    }
  goto ret0;

 L6499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L6500;
  goto ret0;

 L6500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L6501;
  goto ret0;

 L6501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6502;
    }
  goto ret0;

 L6502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6503;
    }
  goto ret0;

 L6503: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 634;
    }
  goto ret0;

 L10623: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 41)
    goto L6515;
  goto ret0;

 L6515: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6516;
    }
  goto ret0;

 L6516: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6517;
    }
  goto ret0;

 L6517: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 636;
    }
  goto ret0;

 L6527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6528;
    }
  goto ret0;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6529;
    }
  goto ret0;

 L6529: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 638;
    }
  goto ret0;

 L6545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6546;
    }
  goto ret0;

 L6546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6547;
    }
  goto ret0;

 L6547: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 641;
    }
  goto ret0;

 L6563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6564;
    }
  goto ret0;

 L6564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6565;
    }
  goto ret0;

 L6565: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 644;
    }
  goto ret0;

 L6575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6576;
    }
  goto ret0;

 L6576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L6577;
    }
  goto ret0;

 L6577: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 646;
    }
  goto ret0;

 L6593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6594;
    }
  goto ret0;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6595;
    }
  goto ret0;

 L6595: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 649;
    }
  goto ret0;

 L6612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L6613;
    }
  goto ret0;

 L6613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6614;
    }
  goto ret0;

 L6614: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 652;
    }
  goto ret0;

 L6639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L6640;
  goto ret0;

 L6640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L6641;
    }
  goto ret0;

 L6641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L6642;
  goto ret0;

 L6642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L6643;
    }
  goto ret0;

 L6643: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 656;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_11 PARAMS ((rtx, rtx, int *));
static int
recog_11 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L10648;
    case SUBREG:
      goto L10649;
    default:
     break;
   }
 L10125: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L5735;
    }
 L10133: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L6046;
    }
  goto ret0;

 L10648: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L5691;
    }
  goto L10125;

 L5691: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L5692;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5692: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 520;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L10649: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L5930;
  goto L10125;

 L5930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V4SFmode:
      goto L10650;
    case SFmode:
      goto L10651;
    case V2DFmode:
      goto L10652;
    case DFmode:
      goto L10653;
    default:
      break;
    }
  goto L10125;

 L10650: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[0] = x2;
      goto L5931;
    }
  goto L10125;

 L5931: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L10654;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10654: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L5932;
    case IOR:
      goto L5962;
    case XOR:
      goto L5976;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L10658;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10658: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L5947;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5933;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L5948;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5949;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5949: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 563;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5934;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5934: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 561;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5963;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5964;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5964: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 565;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5977;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5978;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5978: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 567;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L10651: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5938;
    }
  goto L10125;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L10659;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10659: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L5939;
    case IOR:
      goto L5969;
    case XOR:
      goto L5983;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L10663;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10663: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L5955;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5940;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L5956;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5957;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5957: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 564;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5941;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5941: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 562;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5970;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5971;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5971: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 566;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5984;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5985;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5985: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 568;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L10652: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[0] = x2;
      goto L5989;
    }
  goto L10125;

 L5989: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L10664;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10664: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L5990;
    case IOR:
      goto L6020;
    case XOR:
      goto L6034;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L10668;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10668: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6005;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5991;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L6006;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6007;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6007: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 571;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5992;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5992: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 569;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6021;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6022;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6022: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 573;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6035;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6036;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6036: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 575;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L10653: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L5996;
    }
  goto L10125;

 L5996: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L10669;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10669: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L5997;
    case IOR:
      goto L6027;
    case XOR:
      goto L6041;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L10673;
  x1 = XEXP (x0, 0);
  goto L10125;

 L10673: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6013;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5998;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L6014;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6015;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6015: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 572;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L5999;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5999: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 570;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6028;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6029;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6029: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 574;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6042;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6043;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L6043: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 576;
    }
  x1 = XEXP (x0, 0);
  goto L10125;

 L5735: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L5736;
    }
  x1 = XEXP (x0, 0);
  goto L10133;

 L5736: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 531;
    }
  x1 = XEXP (x0, 0);
  goto L10133;

 L6046: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L10674;
  goto ret0;

 L10674: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L6047;
    case IOR:
      goto L6073;
    case XOR:
      goto L6085;
    default:
     break;
   }
  goto ret0;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L10678;
  goto ret0;

 L10678: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6060;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6048;
    }
  goto ret0;

 L6060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L6061;
    }
  goto ret0;

 L6061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6062;
    }
  goto ret0;

 L6062: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 579;
    }
  goto ret0;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6049;
    }
  goto ret0;

 L6049: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 577;
    }
  goto ret0;

 L6073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6074;
    }
  goto ret0;

 L6074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6075;
    }
  goto ret0;

 L6075: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 581;
    }
  goto ret0;

 L6085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L6086;
    }
  goto ret0;

 L6086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L6087;
    }
  goto ret0;

 L6087: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 583;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_12 PARAMS ((rtx, rtx, int *));
static int
recog_12 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6811;
    case MINUS:
      goto L6817;
    case SMAX:
      goto L6847;
    case SMIN:
      goto L6853;
    case MULT:
      goto L6859;
    case VEC_CONCAT:
      goto L6914;
    case FLOAT:
      goto L6977;
    case UNSPEC:
      goto L10717;
    case VEC_SELECT:
      goto L7055;
    default:
     break;
   }
  goto ret0;

 L6811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6812;
    }
  goto ret0;

 L6812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6813;
    }
  goto ret0;

 L6813: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 668;
    }
  goto ret0;

 L6817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L10722;
  goto ret0;

 L10722: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6818;
    }
 L10723: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6824;
    }
  goto ret0;

 L6818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6819;
    }
  x2 = XEXP (x1, 0);
  goto L10723;

 L6819: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 669;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10723;

 L6824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6825;
    }
  goto ret0;

 L6825: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 670;
    }
  goto ret0;

 L6847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6848;
    }
  goto ret0;

 L6848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6849;
    }
  goto ret0;

 L6849: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 674;
    }
  goto ret0;

 L6853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6854;
    }
  goto ret0;

 L6854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6855;
    }
  goto ret0;

 L6855: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 675;
    }
  goto ret0;

 L6859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6860;
    }
  goto ret0;

 L6860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6861;
    }
  goto ret0;

 L6861: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 676;
    }
  goto ret0;

 L6914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L10724;
  goto ret0;

 L10724: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6915;
    case MINUS:
      goto L6936;
    default:
     break;
   }
  goto ret0;

 L6915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6916;
  goto ret0;

 L6916: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L6917;
    }
  goto ret0;

 L6917: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6918;
  goto ret0;

 L6918: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L6919;
  goto ret0;

 L6919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6920;
  goto ret0;

 L6920: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L6921;
  goto ret0;

 L6921: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6922;
  goto ret0;

 L6922: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1)
    goto L6923;
  goto ret0;

 L6923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == PLUS)
    goto L6924;
  goto ret0;

 L6924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6925;
  goto ret0;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L6926;
    }
  goto ret0;

 L6926: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6927;
  goto ret0;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L6928;
  goto ret0;

 L6928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6929;
  goto ret0;

 L6929: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6930;
  goto ret0;

 L6930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6931;
  goto ret0;

 L6931: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW))
    {
      return 680;
    }
  goto ret0;

 L6936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6937;
  goto ret0;

 L6937: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L6938;
    }
  goto ret0;

 L6938: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6939;
  goto ret0;

 L6939: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L6940;
  goto ret0;

 L6940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6941;
  goto ret0;

 L6941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L6942;
  goto ret0;

 L6942: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6943;
  goto ret0;

 L6943: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1)
    goto L6944;
  goto ret0;

 L6944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L10726;
  goto ret0;

 L10726: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L6945;
    case PLUS:
      goto L6966;
    default:
     break;
   }
  goto ret0;

 L6945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6946;
  goto ret0;

 L6946: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L6947;
    }
  goto ret0;

 L6947: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6948;
  goto ret0;

 L6948: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L6949;
  goto ret0;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6950;
  goto ret0;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6951;
  goto ret0;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6952;
  goto ret0;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 681;
    }
  goto ret0;

 L6966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6967;
  goto ret0;

 L6967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L6968;
    }
  goto ret0;

 L6968: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6969;
  goto ret0;

 L6969: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L6970;
  goto ret0;

 L6970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L6971;
  goto ret0;

 L6971: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6972;
  goto ret0;

 L6972: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L6973;
  goto ret0;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 682;
    }
  goto ret0;

 L6977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10728;
  goto ret0;

 L10728: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L6978;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6994;
    }
  goto ret0;

 L6978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6979;
  goto ret0;

 L6979: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L6980;
  goto ret0;

 L6980: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == VEC_SELECT)
    goto L6981;
  goto ret0;

 L6981: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V2SImode))
    {
      operands[1] = x6;
      goto L6982;
    }
  goto ret0;

 L6982: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == PARALLEL
      && XVECLEN (x6, 0) == 1)
    goto L6983;
  goto ret0;

 L6983: ATTRIBUTE_UNUSED_LABEL
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 0)
    goto L6984;
  goto ret0;

 L6984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6985;
  goto ret0;

 L6985: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L6986;
  goto ret0;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == VEC_SELECT)
    goto L6987;
  goto ret0;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, operands[1]))
    goto L6988;
  goto ret0;

 L6988: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == PARALLEL
      && XVECLEN (x6, 0) == 1)
    goto L6989;
  goto ret0;

 L6989: ATTRIBUTE_UNUSED_LABEL
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 683;
    }
  goto ret0;

 L6994: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 684;
    }
  goto ret0;

 L10717: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10730;
    case 2:
      goto L10731;
    default:
      break;
    }
  goto ret0;

 L10730: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 50:
      goto L7004;
    case 53:
      goto L7021;
    default:
      break;
    }
  goto ret0;

 L7004: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7005;
    }
  goto ret0;

 L7005: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 686;
    }
  goto ret0;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7022;
    }
  goto ret0;

 L7022: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 689;
    }
  goto ret0;

 L10731: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51:
      goto L7009;
    case 52:
      goto L7015;
    case 54:
      goto L7026;
    default:
      break;
    }
  goto ret0;

 L7009: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7010;
    }
  goto ret0;

 L7010: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7011;
    }
  goto ret0;

 L7011: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 687;
    }
  goto ret0;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7016;
    }
  goto ret0;

 L7016: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7017;
    }
  goto ret0;

 L7017: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 688;
    }
  goto ret0;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7027;
    }
  goto ret0;

 L7027: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7028;
    }
  goto ret0;

 L7028: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 690;
    }
  goto ret0;

 L7055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7056;
    }
  goto ret0;

 L7056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7057;
  goto ret0;

 L7057: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L7058;
  goto ret0;

 L7058: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_3DNOW_A))
    {
      return 693;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_13 PARAMS ((rtx, rtx, int *));
static int
recog_13 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7071;
    case VEC_MERGE:
      goto L7077;
    case MINUS:
      goto L7085;
    case MULT:
      goto L7099;
    case DIV:
      goto L7113;
    case SMAX:
      goto L7127;
    case SMIN:
      goto L7141;
    case SQRT:
      goto L7155;
    case FLOAT:
      goto L7275;
    case FLOAT_EXTEND:
      goto L7365;
    case VEC_CONCAT:
      goto L7826;
    default:
     break;
   }
  goto ret0;

 L7071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7072;
    }
  goto ret0;

 L7072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7073;
    }
  goto ret0;

 L7073: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 696;
    }
  goto ret0;

 L7077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L10756;
  goto ret0;

 L10756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7078;
    case MINUS:
      goto L7092;
    case MULT:
      goto L7106;
    case DIV:
      goto L7120;
    case SMAX:
      goto L7134;
    case SMIN:
      goto L7148;
    case SQRT:
      goto L7161;
    case VEC_DUPLICATE:
      goto L8133;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10763;
    default:
      goto ret0;
   }
 L10763: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7329;
    }
  goto ret0;

 L7078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7079;
    }
  goto ret0;

 L7079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7080;
    }
  goto ret0;

 L7080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7081;
  goto ret0;

 L7081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 697;
    }
  goto ret0;

 L7092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7093;
    }
  goto ret0;

 L7093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7094;
    }
  goto ret0;

 L7094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7095;
  goto ret0;

 L7095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 699;
    }
  goto ret0;

 L7106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7107;
    }
  goto ret0;

 L7107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7108;
    }
  goto ret0;

 L7108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7109;
  goto ret0;

 L7109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 701;
    }
  goto ret0;

 L7120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7121;
    }
  goto ret0;

 L7121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7122;
    }
  goto ret0;

 L7122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7123;
  goto ret0;

 L7123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 703;
    }
  goto ret0;

 L7134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7135;
    }
  goto ret0;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7136;
    }
  goto ret0;

 L7136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7137;
  goto ret0;

 L7137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 705;
    }
  goto ret0;

 L7148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7149;
    }
  goto ret0;

 L7149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7150;
    }
  goto ret0;

 L7150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7151;
  goto ret0;

 L7151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 707;
    }
  goto ret0;

 L7161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7162;
    }
  goto ret0;

 L7162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7163;
    }
  goto ret0;

 L7163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 709;
    }
  goto ret0;

 L8133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8134;
    }
  goto ret0;

 L8134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8135;
    }
  goto ret0;

 L8135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 822;
    }
  goto ret0;

 L7329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DFmode)
    goto L10765;
  goto ret0;

 L10765: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_DUPLICATE:
      goto L7330;
    case FLOAT_EXTEND:
      goto L7346;
    default:
     break;
   }
  goto ret0;

 L7330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == FLOAT)
    goto L7331;
  goto ret0;

 L7331: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7332;
    }
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2
      && (TARGET_SSE2))
    {
      return 734;
    }
  goto ret0;

 L7346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7347;
  goto ret0;

 L7347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4SFmode))
    {
      operands[2] = x4;
      goto L7348;
    }
  goto ret0;

 L7348: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7349;
  goto ret0;

 L7349: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L7350;
  goto ret0;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1)
    goto L7351;
  goto ret0;

 L7351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2
      && (TARGET_SSE2))
    {
      return 736;
    }
  goto ret0;

 L7085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7086;
    }
  goto ret0;

 L7086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7087;
    }
  goto ret0;

 L7087: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 698;
    }
  goto ret0;

 L7099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7100;
    }
  goto ret0;

 L7100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7101;
    }
  goto ret0;

 L7101: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 700;
    }
  goto ret0;

 L7113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7114;
    }
  goto ret0;

 L7114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7115;
    }
  goto ret0;

 L7115: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 702;
    }
  goto ret0;

 L7127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7128;
    }
  goto ret0;

 L7128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7129;
    }
  goto ret0;

 L7129: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 704;
    }
  goto ret0;

 L7141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7142;
    }
  goto ret0;

 L7142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7143;
    }
  goto ret0;

 L7143: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 706;
    }
  goto ret0;

 L7155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7156;
    }
  goto ret0;

 L7156: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 708;
    }
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10767;
  goto ret0;

 L10767: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7276;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7310;
    }
  goto ret0;

 L7276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7277;
    }
  goto ret0;

 L7277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7278;
  goto ret0;

 L7278: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7279;
  goto ret0;

 L7279: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1
      && (TARGET_SSE2))
    {
      return 726;
    }
  goto ret0;

 L7310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 731;
    }
  goto ret0;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7366;
  goto ret0;

 L7366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7367;
    }
  goto ret0;

 L7367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7368;
  goto ret0;

 L7368: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7369;
  goto ret0;

 L7369: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1
      && (TARGET_SSE2))
    {
      return 738;
    }
  goto ret0;

 L7826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7827;
  goto ret0;

 L7827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7828;
    }
  goto ret0;

 L7828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7829;
  goto ret0;

 L7829: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10769;
  goto ret0;

 L10769: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1:
        goto L7830;
      case 0:
        goto L7841;
      default:
        break;
      }
  goto ret0;

 L7830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7831;
  goto ret0;

 L7831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7832;
    }
  goto ret0;

 L7832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7833;
  goto ret0;

 L7833: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 798;
    }
  goto ret0;

 L7841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7842;
  goto ret0;

 L7842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7843;
    }
  goto ret0;

 L7843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7844;
  goto ret0;

 L7844: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1
      && (TARGET_SSE2))
    {
      return 799;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_14 PARAMS ((rtx, rtx, int *));
static int
recog_14 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7373;
    case SS_PLUS:
      goto L7397;
    case US_PLUS:
      goto L7409;
    case MINUS:
      goto L7421;
    case SS_MINUS:
      goto L7445;
    case US_MINUS:
      goto L7457;
    case ASHIFTRT:
      goto L7563;
    case EQ:
      goto L7646;
    case GT:
      goto L7664;
    case UMAX:
      goto L7682;
    case UMIN:
      goto L7694;
    case VEC_CONCAT:
      goto L7848;
    case VEC_MERGE:
      goto L7872;
    default:
     break;
   }
  goto ret0;

 L7373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7374;
    }
  goto ret0;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7375;
    }
  goto ret0;

 L7375: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 739;
    }
  goto ret0;

 L7397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7398;
    }
  goto ret0;

 L7398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7399;
    }
  goto ret0;

 L7399: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 743;
    }
  goto ret0;

 L7409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7410;
    }
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7411;
    }
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 745;
    }
  goto ret0;

 L7421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7422;
    }
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7423;
    }
  goto ret0;

 L7423: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 747;
    }
  goto ret0;

 L7445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7446;
    }
  goto ret0;

 L7446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7447;
    }
  goto ret0;

 L7447: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 751;
    }
  goto ret0;

 L7457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7458;
    }
  goto ret0;

 L7458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7459;
    }
  goto ret0;

 L7459: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 753;
    }
  goto ret0;

 L7563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == PLUS)
    goto L7564;
  goto ret0;

 L7564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V16QImode
      && GET_CODE (x3) == PLUS)
    goto L7565;
  goto ret0;

 L7565: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V16QImode))
    {
      operands[1] = x4;
      goto L7566;
    }
  goto ret0;

 L7566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V16QImode))
    {
      operands[2] = x4;
      goto L7567;
    }
  goto ret0;

 L7567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V16QImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 16)
    goto L7568;
  goto ret0;

 L7568: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7569;
  goto ret0;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7570;
  goto ret0;

 L7570: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7571;
  goto ret0;

 L7571: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7572;
  goto ret0;

 L7572: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7573;
  goto ret0;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7574;
  goto ret0;

 L7574: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7575;
  goto ret0;

 L7575: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7576;
  goto ret0;

 L7576: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 8);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7577;
  goto ret0;

 L7577: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 9);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7578;
  goto ret0;

 L7578: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 10);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7579;
  goto ret0;

 L7579: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 11);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7580;
  goto ret0;

 L7580: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 12);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7581;
  goto ret0;

 L7581: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 13);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7582;
  goto ret0;

 L7582: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 14);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7583;
  goto ret0;

 L7583: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 15);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7584;
  goto ret0;

 L7584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 762;
    }
  goto ret0;

 L7646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7647;
    }
  goto ret0;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7648;
    }
  goto ret0;

 L7648: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 770;
    }
  goto ret0;

 L7664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7665;
    }
  goto ret0;

 L7665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7666;
    }
  goto ret0;

 L7666: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 773;
    }
  goto ret0;

 L7682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7683;
    }
  goto ret0;

 L7683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7684;
    }
  goto ret0;

 L7684: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 776;
    }
  goto ret0;

 L7694: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7695;
    }
  goto ret0;

 L7695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7696;
    }
  goto ret0;

 L7696: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 778;
    }
  goto ret0;

 L7848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L10827;
  goto ret0;

 L10827: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L7849;
    case US_TRUNCATE:
      goto L7865;
    default:
     break;
   }
  goto ret0;

 L7849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7850;
    }
  goto ret0;

 L7850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7851;
  goto ret0;

 L7851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7852;
    }
  goto ret0;

 L7852: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 800;
    }
  goto ret0;

 L7865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7866;
    }
  goto ret0;

 L7866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L7867;
  goto ret0;

 L7867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7868;
    }
  goto ret0;

 L7868: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 802;
    }
  goto ret0;

 L7872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7873;
  goto ret0;

 L7873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[1] = x3;
      goto L7874;
    }
  goto ret0;

 L7874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 16)
    goto L7875;
  goto ret0;

 L7875: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10829;
  goto ret0;

 L10829: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 8:
        goto L7876;
      case 0:
        goto L7962;
      default:
        break;
      }
  goto ret0;

 L7876: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7877;
  goto ret0;

 L7877: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 9)
    goto L7878;
  goto ret0;

 L7878: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7879;
  goto ret0;

 L7879: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 10)
    goto L7880;
  goto ret0;

 L7880: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7881;
  goto ret0;

 L7881: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 11)
    goto L7882;
  goto ret0;

 L7882: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7883;
  goto ret0;

 L7883: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 8);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12)
    goto L7884;
  goto ret0;

 L7884: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 9);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L7885;
  goto ret0;

 L7885: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 10);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 13)
    goto L7886;
  goto ret0;

 L7886: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 11);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7887;
  goto ret0;

 L7887: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 12);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 14)
    goto L7888;
  goto ret0;

 L7888: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 13);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7889;
  goto ret0;

 L7889: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 14);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 15)
    goto L7890;
  goto ret0;

 L7890: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 15);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7891;
  goto ret0;

 L7891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7892;
  goto ret0;

 L7892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[2] = x3;
      goto L7893;
    }
  goto ret0;

 L7893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 16)
    goto L7894;
  goto ret0;

 L7894: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7895;
  goto ret0;

 L7895: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L7896;
  goto ret0;

 L7896: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7897;
  goto ret0;

 L7897: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 9)
    goto L7898;
  goto ret0;

 L7898: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7899;
  goto ret0;

 L7899: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 10)
    goto L7900;
  goto ret0;

 L7900: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7901;
  goto ret0;

 L7901: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 11)
    goto L7902;
  goto ret0;

 L7902: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 8);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L7903;
  goto ret0;

 L7903: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 9);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12)
    goto L7904;
  goto ret0;

 L7904: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 10);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7905;
  goto ret0;

 L7905: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 11);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 13)
    goto L7906;
  goto ret0;

 L7906: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 12);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7907;
  goto ret0;

 L7907: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 13);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 14)
    goto L7908;
  goto ret0;

 L7908: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 14);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7909;
  goto ret0;

 L7909: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 15);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 15)
    goto L7910;
  goto ret0;

 L7910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 21845
      && (TARGET_SSE2))
    {
      return 803;
    }
  goto ret0;

 L7962: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L7963;
  goto ret0;

 L7963: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7964;
  goto ret0;

 L7964: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 9)
    goto L7965;
  goto ret0;

 L7965: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7966;
  goto ret0;

 L7966: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 10)
    goto L7967;
  goto ret0;

 L7967: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7968;
  goto ret0;

 L7968: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 11)
    goto L7969;
  goto ret0;

 L7969: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 8);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L7970;
  goto ret0;

 L7970: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 9);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12)
    goto L7971;
  goto ret0;

 L7971: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 10);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7972;
  goto ret0;

 L7972: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 11);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 13)
    goto L7973;
  goto ret0;

 L7973: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 12);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7974;
  goto ret0;

 L7974: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 13);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 14)
    goto L7975;
  goto ret0;

 L7975: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 14);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7976;
  goto ret0;

 L7976: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 15);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 15)
    goto L7977;
  goto ret0;

 L7977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7978;
  goto ret0;

 L7978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[2] = x3;
      goto L7979;
    }
  goto ret0;

 L7979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 16)
    goto L7980;
  goto ret0;

 L7980: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L7981;
  goto ret0;

 L7981: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7982;
  goto ret0;

 L7982: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 9)
    goto L7983;
  goto ret0;

 L7983: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7984;
  goto ret0;

 L7984: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 10)
    goto L7985;
  goto ret0;

 L7985: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7986;
  goto ret0;

 L7986: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 11)
    goto L7987;
  goto ret0;

 L7987: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7988;
  goto ret0;

 L7988: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 8);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12)
    goto L7989;
  goto ret0;

 L7989: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 9);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L7990;
  goto ret0;

 L7990: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 10);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 13)
    goto L7991;
  goto ret0;

 L7991: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 11);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7992;
  goto ret0;

 L7992: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 12);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 14)
    goto L7993;
  goto ret0;

 L7993: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 13);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7994;
  goto ret0;

 L7994: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 14);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 15)
    goto L7995;
  goto ret0;

 L7995: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 15);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7996;
  goto ret0;

 L7996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 21845
      && (TARGET_SSE2))
    {
      return 806;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_15 PARAMS ((rtx, rtx, int *));
static int
recog_15 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L7265;
    case UNSPEC:
      goto L10853;
    case VEC_CONCAT:
      goto L7283;
    case PLUS:
      goto L7385;
    case MINUS:
      goto L7433;
    case EQ:
      goto L7658;
    case GT:
      goto L7676;
    case ASHIFTRT:
      goto L7712;
    case LSHIFTRT:
      goto L7724;
    case ASHIFT:
      goto L7742;
    case VEC_MERGE:
      goto L7940;
    default:
     break;
   }
  goto ret0;

 L7265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7266;
    }
  goto ret0;

 L7266: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 724;
    }
  goto ret0;

 L10853: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10855;
    case 2:
      goto L10856;
    default:
      break;
    }
  goto ret0;

 L10855: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 30)
    goto L7270;
  goto ret0;

 L7270: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7271;
    }
  goto ret0;

 L7271: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 725;
    }
  goto ret0;

 L10856: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 41)
    goto L7628;
  goto ret0;

 L7628: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7629;
    }
  goto ret0;

 L7629: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7630;
    }
  goto ret0;

 L7630: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 767;
    }
  goto ret0;

 L7283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10857;
  goto ret0;

 L10857: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L7284;
    case UNSPEC:
      goto L10859;
    default:
     break;
   }
  goto ret0;

 L7284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7285;
    }
  goto ret0;

 L7285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 2)
    goto L7286;
  goto ret0;

 L7286: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7287;
  goto ret0;

 L7287: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE2))
    {
      return 727;
    }
  goto ret0;

 L10859: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L7292;
  goto ret0;

 L7292: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7293;
    }
  goto ret0;

 L7293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 2)
    goto L7294;
  goto ret0;

 L7294: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7295;
  goto ret0;

 L7295: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE2))
    {
      return 728;
    }
  goto ret0;

 L7385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L10861;
  goto ret0;

 L10861: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L7524;
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7386;
    }
  goto ret0;

 L7524: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7525;
  goto ret0;

 L7525: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7526;
  goto ret0;

 L7526: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7527;
    }
  goto ret0;

 L7527: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7528;
  goto ret0;

 L7528: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L7529;
  goto ret0;

 L7529: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L7530;
  goto ret0;

 L7530: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 4)
    goto L7531;
  goto ret0;

 L7531: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 6)
    goto L7532;
  goto ret0;

 L7532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7533;
  goto ret0;

 L7533: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7534;
  goto ret0;

 L7534: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7535;
    }
  goto ret0;

 L7535: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7536;
  goto ret0;

 L7536: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L7537;
  goto ret0;

 L7537: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L7538;
  goto ret0;

 L7538: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 4)
    goto L7539;
  goto ret0;

 L7539: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 6)
    goto L7540;
  goto ret0;

 L7540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == MULT)
    goto L7541;
  goto ret0;

 L7541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7542;
  goto ret0;

 L7542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7543;
  goto ret0;

 L7543: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L7544;
  goto ret0;

 L7544: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7545;
  goto ret0;

 L7545: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L7546;
  goto ret0;

 L7546: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3)
    goto L7547;
  goto ret0;

 L7547: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 5)
    goto L7548;
  goto ret0;

 L7548: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 7)
    goto L7549;
  goto ret0;

 L7549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7550;
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7551;
  goto ret0;

 L7551: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L7552;
  goto ret0;

 L7552: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7553;
  goto ret0;

 L7553: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L7554;
  goto ret0;

 L7554: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3)
    goto L7555;
  goto ret0;

 L7555: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 5)
    goto L7556;
  goto ret0;

 L7556: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 7
      && (TARGET_SSE2))
    {
      return 760;
    }
  goto ret0;

 L7386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7387;
    }
  goto ret0;

 L7387: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 741;
    }
  goto ret0;

 L7433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7434;
    }
  goto ret0;

 L7434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7435;
    }
  goto ret0;

 L7435: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 749;
    }
  goto ret0;

 L7658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7659;
    }
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7660;
    }
  goto ret0;

 L7660: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 772;
    }
  goto ret0;

 L7676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7677;
    }
  goto ret0;

 L7677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7678;
    }
  goto ret0;

 L7678: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 775;
    }
  goto ret0;

 L7712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7713;
    }
  goto ret0;

 L7713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7714;
    }
 L7762: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7763;
  goto ret0;

 L7714: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 781;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7762;

 L7763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7764;
    }
  goto ret0;

 L7764: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 789;
    }
  goto ret0;

 L7724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7725;
    }
  goto ret0;

 L7725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7726;
    }
 L7776: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7777;
  goto ret0;

 L7726: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 783;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7776;

 L7777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7778;
    }
  goto ret0;

 L7778: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 791;
    }
  goto ret0;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7743;
    }
  goto ret0;

 L7743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7744;
    }
 L7797: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7798;
  goto ret0;

 L7744: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 786;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7797;

 L7798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7799;
    }
  goto ret0;

 L7799: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 794;
    }
  goto ret0;

 L7940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L10862;
  goto ret0;

 L10862: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_SELECT:
      goto L7941;
    case VEC_DUPLICATE:
      goto L8104;
    default:
     break;
   }
  goto ret0;

 L7941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7942;
    }
  goto ret0;

 L7942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L7943;
  goto ret0;

 L7943: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10864;
  goto ret0;

 L10864: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2:
        goto L7944;
      case 0:
        goto L8030;
      default:
        break;
      }
  goto ret0;

 L7944: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7945;
  goto ret0;

 L7945: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7946;
  goto ret0;

 L7946: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7947;
  goto ret0;

 L7947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7948;
  goto ret0;

 L7948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L7949;
    }
  goto ret0;

 L7949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L7950;
  goto ret0;

 L7950: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7951;
  goto ret0;

 L7951: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7952;
  goto ret0;

 L7952: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7953;
  goto ret0;

 L7953: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7954;
  goto ret0;

 L7954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE2))
    {
      return 805;
    }
  goto ret0;

 L8030: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8031;
  goto ret0;

 L8031: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8032;
  goto ret0;

 L8032: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8033;
  goto ret0;

 L8033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8034;
  goto ret0;

 L8034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L8035;
    }
  goto ret0;

 L8035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8036;
  goto ret0;

 L8036: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8037;
  goto ret0;

 L8037: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8038;
  goto ret0;

 L8038: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8039;
  goto ret0;

 L8039: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8040;
  goto ret0;

 L8040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE2))
    {
      return 808;
    }
  goto ret0;

 L8104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8105;
    }
  goto ret0;

 L8105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 4)
    goto L8106;
  goto ret0;

 L8106: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8107;
  goto ret0;

 L8107: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8108;
  goto ret0;

 L8108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8109;
  goto ret0;

 L8109: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8110;
  goto ret0;

 L8110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 818;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_16 PARAMS ((rtx, rtx, int *));
static int
recog_16 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7379;
    case SS_PLUS:
      goto L7403;
    case US_PLUS:
      goto L7415;
    case MINUS:
      goto L7427;
    case SS_MINUS:
      goto L7451;
    case US_MINUS:
      goto L7463;
    case MULT:
      goto L7469;
    case TRUNCATE:
      goto L7475;
    case ASHIFTRT:
      goto L7588;
    case VEC_MERGE:
      goto L7611;
    case UNSPEC:
      goto L10885;
    case EQ:
      goto L7652;
    case GT:
      goto L7670;
    case SMAX:
      goto L7688;
    case SMIN:
      goto L7700;
    case LSHIFTRT:
      goto L7718;
    case ASHIFT:
      goto L7736;
    case VEC_CONCAT:
      goto L7856;
    default:
     break;
   }
  goto ret0;

 L7379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7380;
    }
  goto ret0;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7381;
    }
  goto ret0;

 L7381: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 740;
    }
  goto ret0;

 L7403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7404;
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7405;
    }
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 744;
    }
  goto ret0;

 L7415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7416;
    }
  goto ret0;

 L7416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7417;
    }
  goto ret0;

 L7417: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 746;
    }
  goto ret0;

 L7427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7428;
    }
  goto ret0;

 L7428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7429;
    }
  goto ret0;

 L7429: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 748;
    }
  goto ret0;

 L7451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7452;
    }
  goto ret0;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7453;
    }
  goto ret0;

 L7453: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 752;
    }
  goto ret0;

 L7463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7464;
    }
  goto ret0;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7465;
    }
  goto ret0;

 L7465: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 754;
    }
  goto ret0;

 L7469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7470;
    }
  goto ret0;

 L7470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7471;
    }
  goto ret0;

 L7471: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 755;
    }
  goto ret0;

 L7475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L7476;
  goto ret0;

 L7476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8SImode
      && GET_CODE (x3) == MULT)
    goto L7477;
  goto ret0;

 L7477: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8SImode)
    goto L10887;
  goto ret0;

 L10887: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L7478;
    case ZERO_EXTEND:
      goto L7488;
    default:
     break;
   }
  goto ret0;

 L7478: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7479;
    }
  goto ret0;

 L7479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L7480;
  goto ret0;

 L7480: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7481;
    }
  goto ret0;

 L7481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_SSE2))
    {
      return 756;
    }
  goto ret0;

 L7488: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7489;
    }
  goto ret0;

 L7489: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L7490;
  goto ret0;

 L7490: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7491;
    }
  goto ret0;

 L7491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_SSE2))
    {
      return 757;
    }
  goto ret0;

 L7588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode)
    goto L10889;
  goto ret0;

 L10889: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L7589;
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7707;
    }
  goto ret0;

 L7589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8HImode
      && GET_CODE (x3) == PLUS)
    goto L7590;
  goto ret0;

 L7590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8HImode))
    {
      operands[1] = x4;
      goto L7591;
    }
  goto ret0;

 L7591: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V8HImode))
    {
      operands[2] = x4;
      goto L7592;
    }
  goto ret0;

 L7592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8HImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 8)
    goto L7593;
  goto ret0;

 L7593: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7594;
  goto ret0;

 L7594: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7595;
  goto ret0;

 L7595: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7596;
  goto ret0;

 L7596: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7597;
  goto ret0;

 L7597: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7598;
  goto ret0;

 L7598: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7599;
  goto ret0;

 L7599: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7600;
  goto ret0;

 L7600: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7601;
  goto ret0;

 L7601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 763;
    }
  goto ret0;

 L7707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7708;
    }
 L7755: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7756;
  goto ret0;

 L7708: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 780;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7755;

 L7756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7757;
    }
  goto ret0;

 L7757: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 788;
    }
  goto ret0;

 L7611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode)
    goto L10892;
  goto ret0;

 L10892: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7915;
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7612;
    }
  goto ret0;

 L7915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7916;
    }
  goto ret0;

 L7916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L7917;
  goto ret0;

 L7917: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10893;
  goto ret0;

 L10893: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4:
        goto L7918;
      case 0:
        goto L8004;
      default:
        break;
      }
  goto ret0;

 L7918: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7919;
  goto ret0;

 L7919: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7920;
  goto ret0;

 L7920: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7921;
  goto ret0;

 L7921: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7922;
  goto ret0;

 L7922: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7923;
  goto ret0;

 L7923: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7924;
  goto ret0;

 L7924: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7925;
  goto ret0;

 L7925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7926;
  goto ret0;

 L7926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7927;
    }
  goto ret0;

 L7927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L7928;
  goto ret0;

 L7928: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7929;
  goto ret0;

 L7929: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L7930;
  goto ret0;

 L7930: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7931;
  goto ret0;

 L7931: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L7932;
  goto ret0;

 L7932: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7933;
  goto ret0;

 L7933: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L7934;
  goto ret0;

 L7934: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7935;
  goto ret0;

 L7935: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L7936;
  goto ret0;

 L7936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_SSE2))
    {
      return 804;
    }
  goto ret0;

 L8004: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L8005;
  goto ret0;

 L8005: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8006;
  goto ret0;

 L8006: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8007;
  goto ret0;

 L8007: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8008;
  goto ret0;

 L8008: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8009;
  goto ret0;

 L8009: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8010;
  goto ret0;

 L8010: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8011;
  goto ret0;

 L8011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8012;
  goto ret0;

 L8012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L8013;
    }
  goto ret0;

 L8013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L8014;
  goto ret0;

 L8014: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L8015;
  goto ret0;

 L8015: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8016;
  goto ret0;

 L8016: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8017;
  goto ret0;

 L8017: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8018;
  goto ret0;

 L8018: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8019;
  goto ret0;

 L8019: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8020;
  goto ret0;

 L8020: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8021;
  goto ret0;

 L8021: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8022;
  goto ret0;

 L8022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_SSE2))
    {
      return 807;
    }
  goto ret0;

 L7612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L7613;
  goto ret0;

 L7613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L7614;
  goto ret0;

 L7614: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7615;
    }
  goto ret0;

 L7615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7616;
    }
  goto ret0;

 L7616: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 765;
    }
  goto ret0;

 L10885: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L10895;
  goto ret0;

 L10895: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 55:
      goto L7634;
    case 56:
      goto L7640;
    default:
      break;
    }
  goto ret0;

 L7634: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7635;
    }
  goto ret0;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7636;
    }
  goto ret0;

 L7636: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 768;
    }
  goto ret0;

 L7640: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7641;
    }
  goto ret0;

 L7641: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7642;
    }
  goto ret0;

 L7642: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 769;
    }
  goto ret0;

 L7652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7653;
    }
  goto ret0;

 L7653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7654;
    }
  goto ret0;

 L7654: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 771;
    }
  goto ret0;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7671;
    }
  goto ret0;

 L7671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7672;
    }
  goto ret0;

 L7672: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 774;
    }
  goto ret0;

 L7688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7689;
    }
  goto ret0;

 L7689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7690;
    }
  goto ret0;

 L7690: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 777;
    }
  goto ret0;

 L7700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7701;
    }
  goto ret0;

 L7701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7702;
    }
  goto ret0;

 L7702: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 779;
    }
  goto ret0;

 L7718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7719;
    }
  goto ret0;

 L7719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7720;
    }
 L7769: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7770;
  goto ret0;

 L7720: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 782;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7769;

 L7770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7771;
    }
  goto ret0;

 L7771: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 790;
    }
  goto ret0;

 L7736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7737;
    }
  goto ret0;

 L7737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7738;
    }
 L7790: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7791;
  goto ret0;

 L7738: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 785;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7790;

 L7791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7792;
    }
  goto ret0;

 L7792: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 793;
    }
  goto ret0;

 L7856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7857;
  goto ret0;

 L7857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7858;
    }
  goto ret0;

 L7858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7859;
  goto ret0;

 L7859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L7860;
    }
  goto ret0;

 L7860: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 801;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_17 PARAMS ((rtx, rtx, int *));
static int
recog_17 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L10070;
    case CCFPmode:
      goto L10064;
    case CCFPUmode:
      goto L10065;
    case CCmode:
      goto L10066;
    case SImode:
      goto L10067;
    case QImode:
      goto L10072;
    case DImode:
      goto L10075;
    case SFmode:
      goto L10077;
    case DFmode:
      goto L10079;
    case XFmode:
      goto L10081;
    case TFmode:
      goto L10082;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L2;
 L180: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCFPmode:
      goto L10102;
    case CCFPUmode:
      goto L10103;
    default:
      break;
    }
 L301: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L302;
    case PC:
      goto L4292;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L974;
    default:
      goto L5590;
   }
 L974: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L975;
    }
 L5590: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L5591;
 L5610: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V4SFmode:
      goto L10104;
    case V4SImode:
      goto L10105;
    case V2DImode:
      goto L10106;
    case V8QImode:
      goto L10127;
    case V4HImode:
      goto L10108;
    case V2SImode:
      goto L10109;
    case V2SFmode:
      goto L10110;
    case V2DFmode:
      goto L10111;
    case V8HImode:
      goto L10112;
    case V16QImode:
      goto L10113;
    case TImode:
      goto L10124;
    case SImode:
      goto L10126;
    case DImode:
      goto L10129;
    case SFmode:
      goto L10131;
    case CCFPmode:
      goto L10137;
    case CCFPUmode:
      goto L10138;
    default:
      break;
    }
 L6805: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L6806;
 L6809: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V2SFmode:
      goto L10144;
    case V2SImode:
      goto L10145;
    case V8QImode:
      goto L10146;
    case V4HImode:
      goto L10147;
    case V2DFmode:
      goto L10148;
    case V2DImode:
      goto L10149;
    case CCFPmode:
      goto L10150;
    case CCFPUmode:
      goto L10151;
    case SImode:
      goto L10152;
    case V16QImode:
      goto L10153;
    case V4SFmode:
      goto L10157;
    case V4SImode:
      goto L10158;
    case V8HImode:
      goto L10160;
    case DImode:
      goto L10161;
    case TImode:
      goto L10162;
    case DFmode:
      goto L10168;
    default:
      break;
    }
 L8159: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L8160;
 L8176: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V4SFmode:
      goto L10169;
    case V2DFmode:
      goto L10170;
    case V16QImode:
      goto L10171;
    default:
      break;
    }
  goto ret0;

 L10070: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10064: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 18)
    goto L108;
  goto L1;

 L108: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L109;
  x1 = XEXP (x0, 0);
  goto L1;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10203;
    case DFmode:
      goto L10204;
    case XFmode:
      goto L10205;
    case TFmode:
      goto L10206;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10203: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L110;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L111;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L111: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 14;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10204: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L123;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L124;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L124: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 16;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10205: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L136;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L137;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L137: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 18;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10206: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L142;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L143;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L143: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 19;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10065: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 18)
    goto L160;
  goto L1;

 L160: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L161;
  x1 = XEXP (x0, 0);
  goto L1;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L162;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L163;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L163: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 22;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10066: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L177;
  goto L1;

 L177: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 25)
    goto L178;
  x1 = XEXP (x0, 0);
  goto L1;

 L178: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      return 25;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10067: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10072: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L319;
    }
 L10073: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L362;
    }
 L10095: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1535;
    }
  goto L1;

 L319: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, QImode))
    {
      operands[1] = x1;
      return 46;
    }
  x1 = XEXP (x0, 0);
  goto L10073;

 L362: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L10266;
 L322: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L323;
    }
 L374: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == SUBREG
      && XINT (x1, 1) == 0)
    goto L375;
  x1 = XEXP (x0, 0);
  goto L10095;

 L10266: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L363;
    case PLUS:
      goto L1178;
    case MINUS:
      goto L1454;
    case AND:
      goto L1999;
    case IOR:
      goto L2253;
    case XOR:
      goto L2503;
    case NEG:
      goto L2742;
    case NOT:
      goto L3102;
    case ASHIFT:
      goto L3249;
    case ASHIFTRT:
      goto L3467;
    case LSHIFTRT:
      goto L3691;
    case ROTATE:
      goto L3849;
    case ROTATERT:
      goto L3949;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case LEU:
    case LTU:
    case GEU:
    case GTU:
    case UNORDERED:
    case ORDERED:
    case UNLE:
    case UNLT:
    case UNGE:
    case UNGT:
    case LTGT:
    case UNEQ:
      goto L10279;
    default:
      goto L322;
   }
 L10279: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L4001;
    }
  goto L322;

 L363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L364;
    }
  goto L322;

 L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L365;
  goto L322;

 L365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 53;
    }
  goto L322;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1179;
    }
  goto L322;

 L1179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1180;
    }
  goto L322;

 L1180: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 157;
    }
 L1194: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 158;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L1454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1455;
    }
  goto L322;

 L1455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1456;
    }
  goto L322;

 L1456: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 174;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2000;
    }
  goto L322;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2001;
    }
  goto L322;

 L2001: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 207;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2254;
    }
  goto L322;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2255;
    }
  goto L322;

 L2255: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 221;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2504;
    }
  goto L322;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2505;
    }
  goto L322;

 L2505: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 235;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2743;
    }
  goto L322;

 L2743: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 249;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3103;
    }
  goto L322;

 L3103: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 289;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3250;
    }
  goto L322;

 L3250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3251;
    }
  goto L322;

 L3251: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 299;
    }
 L3265: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 300;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3468;
    }
  goto L322;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3469;
    }
 L3498: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3499;
    }
  goto L322;

 L3469: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 314;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3498;

 L3499: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 316;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3692;
    }
  goto L322;

 L3692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3693;
    }
 L3722: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3723;
    }
  goto L322;

 L3693: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 330;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3722;

 L3723: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 332;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3850;
    }
  goto L322;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3851;
    }
 L3880: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3881;
    }
  goto L322;

 L3851: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 341;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3880;

 L3881: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 343;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L3949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3950;
    }
  goto L322;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3951;
    }
 L3980: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3981;
    }
  goto L322;

 L3951: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 348;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3980;

 L3981: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 350;
    }
  x1 = XEXP (x0, 1);
  goto L322;

 L4001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4002;
  goto L322;

 L4002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return 352;
    }
  goto L322;

 L323: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 47;
    }
  x1 = XEXP (x0, 1);
  goto L374;

 L375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L376;
  x1 = XEXP (x0, 0);
  goto L10095;

 L376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L377;
    }
  x1 = XEXP (x0, 0);
  goto L10095;

 L377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L378;
  x1 = XEXP (x0, 0);
  goto L10095;

 L378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    {
      return 55;
    }
  x1 = XEXP (x0, 0);
  goto L10095;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L10280;
  x1 = XEXP (x0, 0);
  goto L1;

 L10280: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1536;
    case DIV:
      goto L1672;
    case UDIV:
      goto L1686;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1537;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1538;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1538: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 180;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1673;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1674;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1674: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 187;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1687;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1688;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1688: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 188;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10075: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L397;
    }
 L10076: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L569;
    }
 L10096: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1587;
    }
  goto L1;

 L397: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DImode))
    {
      operands[1] = x1;
      return 58;
    }
  x1 = XEXP (x0, 0);
  goto L10076;

 L569: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10283;
 L400: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L401;
    }
  x1 = XEXP (x0, 0);
  goto L10096;

 L10283: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L570;
    case SIGN_EXTEND:
      goto L584;
    case FIX:
      goto L714;
    case PLUS:
      goto L923;
    case MINUS:
      goto L1342;
    case NEG:
      goto L2684;
    default:
     break;
   }
  goto L400;

 L570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L571;
    }
  goto L400;

 L571: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 86;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L585;
    }
  goto L400;

 L585: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 87;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L715;
    }
  goto L400;

 L715: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 110;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L924;
    }
  goto L400;

 L924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L925;
    }
  goto L400;

 L925: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 138;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1343;
    }
  goto L400;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1344;
    }
  goto L400;

 L1344: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 166;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2685;
    }
  goto L400;

 L2685: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 244;
    }
  x1 = XEXP (x0, 1);
  goto L400;

 L401: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 59;
    }
  x1 = XEXP (x0, 0);
  goto L10096;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10289;
  x1 = XEXP (x0, 0);
  goto L1;

 L10289: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1588;
    case ASHIFT:
      goto L3128;
    case ASHIFTRT:
      goto L3292;
    case LSHIFTRT:
      goto L3555;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L10293;
  x1 = XEXP (x0, 0);
  goto L1;

 L10293: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1589;
    case SIGN_EXTEND:
      goto L1607;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1590;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1591;
  x1 = XEXP (x0, 0);
  goto L1;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1592;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1592: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 183;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1608;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1609;
  x1 = XEXP (x0, 0);
  goto L1;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1610;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L1610: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 184;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3129;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3130;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3130: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 291;
    }
 L3144: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 292;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3293;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3294;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3294: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 302;
    }
 L3308: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 303;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3556;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3557;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3557: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 320;
    }
 L3571: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 321;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10077: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L404;
    }
 L10078: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L646;
    }
 L10086: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L651;
    }
 L10087: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L656;
    }
 L10097: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2793;
    }
 L10099: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2863;
    }
  goto L1;

 L404: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L10078;

 L646: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L647;
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L408;
    }
  x1 = XEXP (x0, 0);
  goto L10086;

 L647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L648;
    }
  x1 = XEXP (x0, 0);
  goto L10086;

 L648: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 99;
    }
  x1 = XEXP (x0, 0);
  goto L10086;

 L408: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode))))
    {
      return 61;
    }
  x1 = XEXP (x0, 0);
  goto L10086;

 L651: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L10295;
  x1 = XEXP (x0, 0);
  goto L10087;

 L10295: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L652;
    case NEG:
      goto L2765;
    case ABS:
      goto L2921;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10087;

 L652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L10298;
    case XFmode:
      goto L10299;
    case TFmode:
      goto L10300;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L10298: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L653;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L653: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 100;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L10299: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L671;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L671: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 103;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L10300: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L684;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L684: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 105;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2766;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L2766: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2922;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L2922: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (ABS, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 268;
    }
  x1 = XEXP (x0, 0);
  goto L10087;

 L656: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L10301;
  x1 = XEXP (x0, 0);
  goto L10097;

 L10301: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L657;
    case FLOAT:
      goto L840;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10097;

 L657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L658;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L658: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_80387 && TARGET_SSE2))
    {
      return 101;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10303;
    case SImode:
      goto L10304;
    case DImode:
      goto L10305;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L10303: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L841;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L841: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE))
    {
      return 123;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L10304: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L846;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L846: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE || TARGET_MIX_SSE_I387)))
    {
      return 124;
    }
 L851: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 125;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L10305: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L856;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L856: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE || !TARGET_64BIT || TARGET_MIX_SSE_I387)))
    {
      return 126;
    }
  x1 = XEXP (x0, 0);
  goto L10097;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L10306;
  x1 = XEXP (x0, 0);
  goto L10099;

 L10306: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L2794;
    case ABS:
      goto L2950;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10099;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2795;
    }
  x1 = XEXP (x0, 0);
  goto L10099;

 L2795: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE
   && ix86_unary_operator_ok (NEG, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 253;
    }
  x1 = XEXP (x0, 0);
  goto L10099;

 L2950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2951;
    }
  x1 = XEXP (x0, 0);
  goto L10099;

 L2951: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (ABS, SFmode, operands) && !TARGET_SSE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 270;
    }
  x1 = XEXP (x0, 0);
  goto L10099;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L10308;
  x1 = XEXP (x0, 0);
  goto L1;

 L10308: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L10079: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L418;
    }
 L10080: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L600;
    }
 L10085: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L605;
    }
 L10088: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L695;
    }
 L10098: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2834;
    }
 L10100: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2868;
    }
  goto L1;

 L418: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L419;
    }
  x1 = XEXP (x0, 0);
  goto L10080;

 L419: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES))
    {
      return 63;
    }
 L423: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    {
      return 64;
    }
  x1 = XEXP (x0, 0);
  goto L10080;

 L600: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L601;
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L427;
    }
  x1 = XEXP (x0, 0);
  goto L10085;

 L601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L602;
    }
  x1 = XEXP (x0, 0);
  goto L10085;

 L602: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_80387 || TARGET_SSE2)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 91;
    }
  x1 = XEXP (x0, 0);
  goto L10085;

 L427: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (optimize_size || !TARGET_INTEGER_DFMODE_MOVES)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 65;
    }
 L431: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && !optimize_size && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 66;
    }
  x1 = XEXP (x0, 0);
  goto L10085;

 L605: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10335;
  x1 = XEXP (x0, 0);
  goto L10088;

 L10335: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L606;
    case FLOAT:
      goto L860;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10088;

 L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L607;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L607: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_80387 && TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 92;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10337;
    case SImode:
      goto L10338;
    case DImode:
      goto L10339;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L10337: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L861;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L861: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE2))
    {
      return 127;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L10338: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L866;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L866: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || TARGET_MIX_SSE_I387)))
    {
      return 128;
    }
 L871: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 129;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L10339: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L876;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L876: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_64BIT)))
    {
      return 130;
    }
 L881: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 131;
    }
  x1 = XEXP (x0, 0);
  goto L10088;

 L695: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10340;
  x1 = XEXP (x0, 0);
  goto L10098;

 L10340: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L696;
    case NEG:
      goto L2806;
    case ABS:
      goto L2962;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10098;

 L696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case XFmode:
      goto L10343;
    case TFmode:
      goto L10344;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L10343: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L697;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L697: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 107;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L10344: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L710;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L710: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 109;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L2806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2807;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L2807: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 254;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L2962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2963;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L2963: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (ABS, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 271;
    }
  x1 = XEXP (x0, 0);
  goto L10098;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10345;
  x1 = XEXP (x0, 0);
  goto L10100;

 L10345: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L2835;
    case ABS:
      goto L2991;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10100;

 L2835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2836;
    }
  x1 = XEXP (x0, 0);
  goto L10100;

 L2836: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 256;
    }
  x1 = XEXP (x0, 0);
  goto L10100;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2992;
    }
  x1 = XEXP (x0, 0);
  goto L10100;

 L2992: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 273;
    }
  x1 = XEXP (x0, 0);
  goto L10100;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10347;
  x1 = XEXP (x0, 0);
  goto L1;

 L10347: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L10081: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10082: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L180;

 L3: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L180;

 L10102: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L181;
  goto L301;

 L181: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L182;
  x1 = XEXP (x0, 0);
  goto L301;

 L182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L183;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L184;
    }
 L189: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L190;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L184: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_CMOVE
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 26;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L189;

 L190: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 27;
    }
 L196: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 28;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L10103: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L199;
  goto L301;

 L199: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L200;
  x1 = XEXP (x0, 0);
  goto L301;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L201;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L202;
    }
 L207: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L208;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L202: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_CMOVE
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 29;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L207;

 L208: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 30;
    }
 L214: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L301;

 L302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10500;
    case QImode:
      goto L10502;
    default:
      break;
    }
  goto L5590;

 L10500: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L303;
    }
 L10501: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L315;
    }
  goto L5590;

 L303: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L304;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L10501;

 L304: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 44;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L10501;

 L315: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L316;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L316: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 45;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L10502: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1207;
    }
 L10503: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L346;
    }
  goto L5590;

 L1207: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L10504;
 L334: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L335;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L10503;

 L10504: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1208;
    case MINUS:
      goto L1470;
    case AND:
      goto L2015;
    case IOR:
      goto L2269;
    case XOR:
      goto L2519;
    case ASHIFTRT:
      goto L3483;
    case LSHIFTRT:
      goto L3707;
    case ROTATE:
      goto L3835;
    case ROTATERT:
      goto L3965;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case LEU:
    case LTU:
    case GEU:
    case GTU:
    case UNORDERED:
    case ORDERED:
    case UNLE:
    case UNLT:
    case UNGE:
    case UNGT:
    case LTGT:
    case UNEQ:
      goto L10513;
    default:
      goto L334;
   }
 L10513: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L4007;
    }
  goto L334;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1209;
  goto L334;

 L1209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1210;
    }
  goto L334;

 L1210: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 159;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1471;
  goto L334;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1472;
    }
  goto L334;

 L1472: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 175;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L2015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2016;
  goto L334;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2017;
    }
  goto L334;

 L2017: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 208;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L2269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2270;
  goto L334;

 L2270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2271;
    }
  goto L334;

 L2271: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 222;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L2519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2520;
  goto L334;

 L2520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2521;
    }
  goto L334;

 L2521: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 236;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L3483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3484;
  goto L334;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3485;
    }
 L3514: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3515;
    }
  goto L334;

 L3485: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 315;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3514;

 L3515: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 317;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L3707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3708;
  goto L334;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3709;
    }
 L3738: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3739;
    }
  goto L334;

 L3709: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 331;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3738;

 L3739: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 333;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L3835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3836;
  goto L334;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3837;
    }
 L3866: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3867;
    }
  goto L334;

 L3837: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 340;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3866;

 L3867: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 342;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3966;
  goto L334;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3967;
    }
 L3996: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3997;
    }
  goto L334;

 L3967: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 349;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3996;

 L3997: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 351;
    }
  x1 = XEXP (x0, 1);
  goto L334;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4008;
  goto L334;

 L4008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return 353;
    }
  goto L334;

 L335: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 49;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L10503;

 L346: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L347;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L347: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 50;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4292: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      return 369;
    }
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L4024;
    case LABEL_REF:
      goto L4289;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L4025;
    }
 L4056: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4057;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L4026;
  goto L4056;

 L4026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4027;
  goto L4056;

 L4027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4028;
    case PC:
      goto L4037;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4056;

 L4028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L4029;

 L4029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 356;
    }
  x2 = XEXP (x1, 0);
  goto L4056;

 L4037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4038;
  x2 = XEXP (x1, 0);
  goto L4056;

 L4038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 357;

 L4057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L4058;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4059;
    }
 L4081: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4082;
    }
 L4255: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4256;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4060;
    case PC:
      goto L4129;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4081;

 L4060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4061;

 L4061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 358;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4081;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4130;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4081;

 L4130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4131;

 L4131: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 361;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4081;

 L4082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4083;
    case PC:
      goto L4153;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4255;

 L4083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4084;

 L4084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    goto L10514;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4255;

 L10514: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 359;
    }
 L10515: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 360;
    }
 L10516: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 364;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4255;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4154;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4255;

 L4154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4155;

 L4155: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 362;
    }
 L4179: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 363;
    }
 L4232: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 365;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4255;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4257;
    case PC:
      goto L4283;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4258;

 L4258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 366;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4284;
  x1 = XEXP (x0, 0);
  goto L5590;

 L4284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4285;

 L4285: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 367;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L4289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 368;

 L975: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS)
    goto L976;
  x1 = XEXP (x0, 0);
  goto L5590;

 L976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L993;
    case MULT:
      goto L985;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5590;

 L993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L994;
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L978;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L994: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (index_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L995;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L995: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L996;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L997;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L998;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L998: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])))
    {
      return 145;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L979;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L980;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L980: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 143;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L986;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L987;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L988;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L988: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 144;
    }
  x1 = XEXP (x0, 0);
  goto L5590;

 L5591: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L5592;
  x1 = XEXP (x0, 0);
  goto L5610;

 L5592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L5593;
  x1 = XEXP (x0, 0);
  goto L5610;

 L5593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10517;
  x1 = XEXP (x0, 0);
  goto L5610;

 L10517: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5594;
    }
 L10518: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5600;
    }
  x1 = XEXP (x0, 0);
  goto L5610;

 L5594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  return 496;

 L5600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  return 497;

 L10104: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L5611;
    }
 L10118: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L5667;
    }
 L10128: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L5766;
    }
 L10130: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L5776;
    }
  goto L6805;

 L5611: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L10520;
  x1 = XEXP (x0, 0);
  goto L10118;

 L10520: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10523;
    case VEC_MERGE:
      goto L5801;
    case CONST_VECTOR:
    case SUBREG:
    case REG:
    case MEM:
      goto L10519;
    default:
      x1 = XEXP (x0, 0);
      goto L10118;
   }
 L10519: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L5612;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L10523: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10525;
  x1 = XEXP (x0, 0);
  goto L10118;

 L10525: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 38:
      goto L5740;
    case 39:
      goto L5745;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5740: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5741;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5741: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 532;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5745: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5746;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5746: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 533;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5802;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5803;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L10527;
  x1 = XEXP (x0, 0);
  goto L10118;

 L10527: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 12:
        goto L10529;
      case 3:
        goto L10530;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L10118;

 L10529: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 541;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L10530: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 542;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5612: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 500;
    }
  x1 = XEXP (x0, 0);
  goto L10118;

 L5667: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L5668;
    }
 L5711: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L5712;
    }
  x1 = XEXP (x0, 0);
  goto L10128;

 L5668: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 514;
    }
  x1 = XEXP (x0, 1);
  goto L5711;

 L5712: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 525;
    }
  x1 = XEXP (x0, 0);
  goto L10128;

 L5766: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L5767;
  x1 = XEXP (x0, 0);
  goto L10130;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5768;
    }
  x1 = XEXP (x0, 0);
  goto L10130;

 L5768: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 537;
    }
  x1 = XEXP (x0, 0);
  goto L10130;

 L5776: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L10531;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10531: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_MERGE:
      goto L5777;
    case UNSPEC:
      goto L10543;
    case PLUS:
      goto L5839;
    case MINUS:
      goto L5853;
    case MULT:
      goto L5867;
    case DIV:
      goto L5881;
    case SQRT:
      goto L5919;
    case SMAX:
      goto L6195;
    case SMIN:
      goto L6209;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L10548;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10548: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10543: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L10574;
    case 1:
      goto L10575;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10574: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 41)
    goto L5832;
  x1 = XEXP (x0, 0);
  goto L6805;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5833;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5833: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5834;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5834: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5835;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5835: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 546;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10575: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 42:
      goto L5895;
    case 43:
      goto L5907;
    case 45:
      goto L6097;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5895: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5896;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5896: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 555;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5907: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5908;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5908: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 557;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6097: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE))
    {
      return 585;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5840;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5841;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5841: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 547;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5854;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5855;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5855: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 549;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5868;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5869;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5869: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 551;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5882;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L5883;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5883: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 553;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5920;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5920: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 559;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6196;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6197;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6197: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 595;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6210;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6211;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6211: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 597;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10105: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L5615;
    }
 L10119: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L5671;
    }
  if (register_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L6104;
    }
  goto L6805;

 L5615: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L5616;
    }
  x1 = XEXP (x0, 0);
  goto L10119;

 L5616: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 501;
    }
  x1 = XEXP (x0, 0);
  goto L10119;

 L5671: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L5672;
    }
 L5715: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L5716;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5672: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 515;
    }
  x1 = XEXP (x0, 1);
  goto L5715;

 L5716: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 526;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SImode)
    goto L10579;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10579: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NOT:
      goto L6111;
    case VEC_MERGE:
      goto L6118;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L10578;
    default:
      x1 = XEXP (x0, 0);
      goto L6805;
   }
 L10578: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V4SImode))
    {
      operands[3] = x1;
      goto L6105;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (sse_comparison_operator (x2, V4SImode))
    {
      operands[3] = x2;
      goto L6112;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6113;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6114;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6114: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 588;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L10582;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10582: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6128;
  if (sse_comparison_operator (x2, V4SImode))
    {
      operands[3] = x2;
      goto L6119;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, V4SImode))
    {
      operands[3] = x3;
      goto L6129;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4SFmode))
    {
      operands[1] = x4;
      goto L6130;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6130: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V4SFmode))
    {
      operands[2] = x4;
      goto L6131;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L6132;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6133;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 590;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6120;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6121;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L6122;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6123;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 589;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6106;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6107;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6107: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 587;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10106: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L5619;
    }
 L10115: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L5655;
    }
  if (register_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L6052;
    }
  goto L6805;

 L5619: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2DImode))
    {
      operands[1] = x1;
      goto L5620;
    }
  x1 = XEXP (x0, 0);
  goto L10115;

 L5620: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 502;
    }
  x1 = XEXP (x0, 0);
  goto L10115;

 L5655: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2DImode))
    {
      operands[1] = x1;
      goto L5656;
    }
 L5699: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V2DImode))
    {
      operands[1] = x1;
      goto L5700;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5656: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 511;
    }
  x1 = XEXP (x0, 1);
  goto L5699;

 L5700: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 522;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6052: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode)
    goto L10583;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10583: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L6053;
    case IOR:
      goto L6079;
    case XOR:
      goto L6091;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode)
    goto L10587;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10587: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6067;
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L6054;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L6068;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L6069;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6069: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 580;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L6055;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6055: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 578;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L6080;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L6081;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6081: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 582;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L6092;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L6093;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6093: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 584;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10127: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L5759;
 L10107: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L5623;
    }
 L10122: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L5683;
    }
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L6275;
    }
  goto L6805;

 L5759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5760;
    }
  goto L10107;

 L5760: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 32)
    goto L5761;
  x1 = XEXP (x0, 0);
  goto L10107;

 L5761: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5762;
    }
  x1 = XEXP (x0, 0);
  goto L10107;

 L5762: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L5763;
    }
  x1 = XEXP (x0, 0);
  goto L10107;

 L5763: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT))
    {
      return 536;
    }
  x1 = XEXP (x0, 0);
  goto L10107;

 L5623: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L5624;
    }
  x1 = XEXP (x0, 0);
  goto L10122;

 L5624: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 503;
    }
  x1 = XEXP (x0, 0);
  goto L10122;

 L5683: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L5684;
    }
 L5727: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L5728;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5684: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 518;
    }
  x1 = XEXP (x0, 1);
  goto L5727;

 L5728: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 529;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6275: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L10588;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10588: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10108: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L5627;
    }
 L10121: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L5679;
    }
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L6281;
    }
  goto L6805;

 L5627: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L5628;
    }
  x1 = XEXP (x0, 0);
  goto L10121;

 L5628: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 504;
    }
  x1 = XEXP (x0, 0);
  goto L10121;

 L5679: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L5680;
    }
 L5723: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L5724;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5680: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 517;
    }
  x1 = XEXP (x0, 1);
  goto L5723;

 L5724: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 528;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6281: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L10605;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10605: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10109: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L5631;
    }
 L10120: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L5675;
    }
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L6230;
    }
  goto L6805;

 L5631: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L5632;
    }
  x1 = XEXP (x0, 0);
  goto L10120;

 L5632: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 505;
    }
  x1 = XEXP (x0, 0);
  goto L10120;

 L5675: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L5676;
    }
 L5719: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L5720;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5676: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 516;
    }
  x1 = XEXP (x0, 1);
  goto L5719;

 L5720: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 527;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6230: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L10632;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10632: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L6231;
    case PLUS:
      goto L6288;
    case MINUS:
      goto L6337;
    case EQ:
      goto L6533;
    case GT:
      goto L6551;
    case ASHIFTRT:
      goto L6587;
    case LSHIFTRT:
      goto L6599;
    case ASHIFT:
      goto L6618;
    case VEC_MERGE:
      goto L6699;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L10641;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10641: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L6232;
    case UNSPEC:
      goto L10643;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6233;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L6234;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6234: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6235;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6235: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1
      && (TARGET_SSE))
    {
      return 600;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10643: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L6240;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6240: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6241;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L6242;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6242: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6243;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1
      && (TARGET_SSE))
    {
      return 601;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10645;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10645: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L6401;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6289;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6402;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6403;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6403: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L6404;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6404: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L6405;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6405: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L6406;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6406: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L6407;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6408;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6409;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6409: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L6410;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6410: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L6411;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6411: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L6412;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6412: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L6413;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == MULT)
    goto L6414;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6415;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6415: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6416;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6416: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6417;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6417: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L6418;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6418: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L6419;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6419: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3)
    goto L6420;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6421;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6422;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6423;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6423: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L6424;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6424: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L6425;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6425: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3
      && (TARGET_MMX))
    {
      return 625;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L6290;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6290: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 608;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6338;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L6339;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6339: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 616;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6534;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L6535;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6535: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 639;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6552;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L6553;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6553: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 642;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6588;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6589;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6589: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 648;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6600;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6601;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6601: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 650;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6619;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6620;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6620: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 653;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10647;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10647: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6754;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L6700;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L6755;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L6756;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6756: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6757;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6757: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6758;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L6759;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_MMX))
    {
      return 663;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6701;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L6702;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L6703;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6703: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L6704;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6704: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6705;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_MMX))
    {
      return 660;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10110: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L5635;
    }
 L10123: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L5687;
    }
  goto L6805;

 L5635: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L5636;
    }
  x1 = XEXP (x0, 0);
  goto L10123;

 L5636: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 506;
    }
  x1 = XEXP (x0, 0);
  goto L10123;

 L5687: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L5688;
    }
 L5731: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L5732;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5688: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 519;
    }
  x1 = XEXP (x0, 1);
  goto L5731;

 L5732: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 530;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10111: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L5639;
    }
 L10114: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L5651;
    }
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L6100;
    }
  goto L6805;

 L5639: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      goto L5640;
    }
  x1 = XEXP (x0, 0);
  goto L10114;

 L5640: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 507;
    }
  x1 = XEXP (x0, 0);
  goto L10114;

 L5651: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      goto L5652;
    }
 L5695: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      goto L5696;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5652: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 510;
    }
  x1 = XEXP (x0, 1);
  goto L5695;

 L5696: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 521;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6100: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 45)
    goto L6101;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6101: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE2))
    {
      return 586;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10112: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L5643;
    }
 L10116: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L5659;
    }
  goto L6805;

 L5643: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V8HImode))
    {
      operands[1] = x1;
      goto L5644;
    }
  x1 = XEXP (x0, 0);
  goto L10116;

 L5644: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 508;
    }
  x1 = XEXP (x0, 0);
  goto L10116;

 L5659: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V8HImode))
    {
      operands[1] = x1;
      goto L5660;
    }
 L5703: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V8HImode))
    {
      operands[1] = x1;
      goto L5704;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5660: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 512;
    }
  x1 = XEXP (x0, 1);
  goto L5703;

 L5704: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 523;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10113: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L5647;
    }
 L10117: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L5663;
    }
  goto L6805;

 L5647: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V16QImode))
    {
      operands[1] = x1;
      goto L5648;
    }
  x1 = XEXP (x0, 0);
  goto L10117;

 L5648: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 509;
    }
  x1 = XEXP (x0, 0);
  goto L10117;

 L5663: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V16QImode))
    {
      operands[1] = x1;
      goto L5664;
    }
 L5707: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, V16QImode))
    {
      operands[1] = x1;
      goto L5708;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5664: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 513;
    }
  x1 = XEXP (x0, 1);
  goto L5707;

 L5708: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 524;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10124: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L6805;

 L10126: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5749;
    }
 L10143: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L6802;
    }
  goto L6805;

 L5749: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10679;
  x1 = XEXP (x0, 0);
  goto L10143;

 L10679: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10682;
    case VEC_SELECT:
      goto L6255;
    case ZERO_EXTEND:
      goto L6507;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10143;

 L10682: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L5750;
  x1 = XEXP (x0, 0);
  goto L10143;

 L5750: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V4SFmode:
      goto L10683;
    case V8QImode:
      goto L10684;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L10683: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5751;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L5751: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 534;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L10684: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5756;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L5756: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 535;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L10685;
  x1 = XEXP (x0, 0);
  goto L10143;

 L10685: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L6256;
    case UNSPEC:
      goto L10687;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6257;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L6258;
  x1 = XEXP (x0, 0);
  goto L10143;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 603;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L10687: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L6270;
  x1 = XEXP (x0, 0);
  goto L10143;

 L6270: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6271;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L6272;
  x1 = XEXP (x0, 0);
  goto L10143;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 605;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6508;
  x1 = XEXP (x0, 0);
  goto L10143;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L6509;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6510;
  x1 = XEXP (x0, 0);
  goto L10143;

 L6510: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6511;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6511: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 635;
    }
  x1 = XEXP (x0, 0);
  goto L10143;

 L6802: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 40)
    goto L6803;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6803: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE))
    {
      return 666;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10129: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5771;
    }
 L10140: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L6261;
    }
  goto L6805;

 L5771: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L5772;
  x1 = XEXP (x0, 0);
  goto L10140;

 L5772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5773;
    }
  x1 = XEXP (x0, 0);
  goto L10140;

 L5773: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 538;
    }
  x1 = XEXP (x0, 0);
  goto L10140;

 L6261: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10688;
  x1 = XEXP (x0, 0);
  goto L6805;

 L10688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L6262;
    case UNSPEC:
      goto L10691;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DImode
      && GET_CODE (x2) == FIX)
    goto L6263;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6264;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L6265;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6265: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 604;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10691: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10693;
    case 2:
      goto L10694;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10693: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 45)
    goto L6294;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6294: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L10695;
 L6443: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_MMX))
    {
      return 628;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10695: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6295;
    case MINUS:
      goto L6344;
    case IOR:
      goto L6430;
    case XOR:
      goto L6437;
    case AND:
      goto L6448;
    case LSHIFTRT:
      goto L6606;
    case ASHIFT:
      goto L6625;
    default:
     break;
   }
  goto L6443;

 L6295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6296;
    }
  goto L6443;

 L6296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6297;
    }
  goto L6443;

 L6297: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 609;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6345;
    }
  goto L6443;

 L6345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6346;
    }
  goto L6443;

 L6346: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 617;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6431;
    }
  goto L6443;

 L6431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6432;
    }
  goto L6443;

 L6432: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 626;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6437: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6438;
    }
  goto L6443;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6439;
    }
  goto L6443;

 L6439: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 627;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10703;
  goto L6443;

 L10703: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L6456;
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6449;
    }
  goto L6443;

 L6456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6457;
    }
  goto L6443;

 L6457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6458;
    }
  goto L6443;

 L6458: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 630;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6450;
    }
  goto L6443;

 L6450: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 629;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6607;
    }
  goto L6443;

 L6607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6608;
    }
  goto L6443;

 L6608: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 651;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L6625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6626;
    }
  goto L6443;

 L6626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6627;
    }
  goto L6443;

 L6627: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 654;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L6443;

 L10694: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 61)
    goto L6492;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6493;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L6494;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6494: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 633;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10131: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L5825;
    }
  goto L6805;

 L5825: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L5826;
  x1 = XEXP (x0, 0);
  goto L6805;

 L5826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L5827;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L5828;
  x1 = XEXP (x0, 0);
  goto L6805;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 545;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10137: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L6136;
  goto L6805;

 L6136: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L6137;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6138;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L6139;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6140;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6140: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6141;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6142;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6143;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6144;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6144: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE))
    {
      return 591;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L10138: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L6147;
  goto L6805;

 L6147: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L6148;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6149;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L6150;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6151;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6151: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6152;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6153;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6154;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6155;
  x1 = XEXP (x0, 0);
  goto L6805;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE))
    {
      return 592;
    }
  x1 = XEXP (x0, 0);
  goto L6805;

 L6806: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 44)
    goto L6807;
  x1 = XEXP (x0, 0);
  goto L6809;

 L6807: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 667;
    }
  x1 = XEXP (x0, 0);
  goto L6809;

 L10144: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L6810;
    }
  goto L8159;

 L6810: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L10704;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10704: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10145: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L6828;
    }
  goto L8159;

 L6828: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L10735;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10735: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case GT:
      goto L6829;
    case GE:
      goto L6835;
    case EQ:
      goto L6841;
    case FIX:
      goto L6902;
    case SIGN_EXTEND:
      goto L6907;
    case VEC_SELECT:
      goto L7048;
    case UNSPEC:
      goto L10742;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6830;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6831;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6831: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 671;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6836;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6837;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6837: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 672;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6842;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L6843;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6843: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 673;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V2SFmode:
      goto L10743;
    case V2DFmode:
      goto L10744;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10743: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L6903;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6903: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 678;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10744: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7300;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7300: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 729;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L6908;
  x1 = XEXP (x0, 0);
  goto L8159;

 L6908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == FIX)
    goto L6909;
  x1 = XEXP (x0, 0);
  goto L8159;

 L6909: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L6910;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6910: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW_A))
    {
      return 679;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7049;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7050;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7050: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L7051;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7051: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_3DNOW_A))
    {
      return 692;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10742: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L7304;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7304: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7305;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7305: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 730;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10146: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L6997;
    }
  goto L8159;

 L6997: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 49)
    goto L6998;
  x1 = XEXP (x0, 0);
  goto L8159;

 L6998: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L6999;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L6999: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7000;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7000: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 685;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10147: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7031;
    }
  goto L8159;

 L7031: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L7032;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L7033;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == PLUS)
    goto L7034;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7034: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == MULT)
    goto L7035;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7035: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L7036;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7036: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L7037;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7037: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L7038;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L7039;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7039: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L7040;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7040: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L7041;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7041: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L7042;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7042: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L7043;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7043: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L7044;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_3DNOW))
    {
      return 691;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10148: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L7070;
    }
 L10154: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L7244;
    }
 L10163: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L8063;
    }
 L10167: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L8138;
    }
  goto L8159;

 L7070: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L10745;
  x1 = XEXP (x0, 0);
  goto L10154;

 L10745: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L10154;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L7245;
  x1 = XEXP (x0, 0);
  goto L10163;

 L7245: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7246;
    }
  x1 = XEXP (x0, 0);
  goto L10163;

 L7246: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 720;
    }
  x1 = XEXP (x0, 0);
  goto L10163;

 L8063: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L10771;
  x1 = XEXP (x0, 0);
  goto L10167;

 L10771: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10774;
    case VEC_MERGE:
      goto L8120;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10167;

 L10774: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10776;
  x1 = XEXP (x0, 0);
  goto L10167;

 L10776: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 38:
      goto L8064;
    case 39:
      goto L8069;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8064: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8065;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8065: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 811;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8069: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8070;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8070: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 812;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8121;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8122;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L10778;
  x1 = XEXP (x0, 0);
  goto L10167;

 L10778: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 2:
        goto L10780;
      case 1:
        goto L10781;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L10167;

 L10780: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 820;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L10781: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 821;
    }
  x1 = XEXP (x0, 0);
  goto L10167;

 L8138: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L10782;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10782: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_MERGE:
      goto L8139;
    case UNSPEC:
      goto L10784;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8140;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8141;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 823;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10784: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 41)
    goto L8151;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8151: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8152;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8152: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8153;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8153: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8154;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8154: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 825;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10149: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L7166;
    }
 L10155: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L7249;
    }
  goto L8159;

 L7166: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode)
    goto L10786;
  x1 = XEXP (x0, 0);
  goto L10155;

 L10786: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NOT:
      goto L7173;
    case VEC_MERGE:
      goto L7180;
    case PLUS:
      goto L7391;
    case MINUS:
      goto L7439;
    case MULT:
      goto L7508;
    case UNSPEC:
      goto L10795;
    case LSHIFTRT:
      goto L7730;
    case ASHIFT:
      goto L7748;
    case VEC_CONCAT:
      goto L8090;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L10785;
    default:
      x1 = XEXP (x0, 0);
      goto L10155;
   }
 L10785: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V2DImode))
    {
      operands[3] = x1;
      goto L7167;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (sse_comparison_operator (x2, V2DImode))
    {
      operands[3] = x2;
      goto L7174;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7175;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7176;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7176: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 711;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode)
    goto L10797;
  x1 = XEXP (x0, 0);
  goto L10155;

 L10797: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L7190;
    case VEC_SELECT:
      goto L8045;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L10796;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10799;
    default:
      x1 = XEXP (x0, 0);
      goto L10155;
   }
 L10796: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, V2DImode))
    {
      operands[3] = x2;
      goto L7181;
    }
 L10799: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L8055;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, V2DImode))
    {
      operands[3] = x3;
      goto L7191;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[1] = x4;
      goto L7192;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7192: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L7193;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7194;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7195;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 713;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L8046;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L8047;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8047: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8048;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8048: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8049;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L8050;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 809;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7182;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7183;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7184;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7185;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 712;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8056;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L8057;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L8058;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8058: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8059;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8059: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8060;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE2))
    {
      return 810;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7392;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7393;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7393: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 742;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7440;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7441;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7441: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 750;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7509;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7510;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7510: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4SImode))
    {
      operands[1] = x4;
      goto L7511;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7511: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7512;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7512: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L7513;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7513: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2)
    goto L7514;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7515;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7516;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7516: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SImode))
    {
      operands[2] = x4;
      goto L7517;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7517: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7518;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7518: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L7519;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7519: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2
      && (TARGET_SSE2))
    {
      return 759;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L10795: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 61)
    goto L7605;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7606;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7606: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7607;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7607: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 764;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7731;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7732;
    }
 L7783: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7784;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7732: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 784;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7783;

 L7784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7785;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7785: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 792;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7749;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7750;
    }
 L7804: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7805;
  x1 = XEXP (x0, 0);
  goto L10155;

 L7750: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 787;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7804;

 L7805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonmemory_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L7806;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7806: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 795;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L10801;
  x1 = XEXP (x0, 0);
  goto L10155;

 L10801: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L8096;
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8091;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L8097;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8098;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8098: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8099;
  x1 = XEXP (x0, 0);
  goto L10155;

 L8099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE2))
    {
      return 817;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L8091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE2 && !TARGET_64BIT))
    {
      return 816;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7168;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7169;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 710;
    }
  x1 = XEXP (x0, 0);
  goto L10155;

 L7249: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L7250;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7250: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7251;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7251: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 721;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10150: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L7198;
  goto L8159;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L7199;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7200;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L7201;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7202;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7202: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7203;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7204;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7205;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7206;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7206: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 714;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10151: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L7209;
  goto L8159;

 L7209: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L7210;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7211;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L7212;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7213;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7214;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7215;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7216;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7217;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7217: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 715;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10152: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7220;
    }
 L10156: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7254;
    }
 L10166: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8113;
    }
  goto L8159;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10802;
  x1 = XEXP (x0, 0);
  goto L10156;

 L10802: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10806;
    case FIX:
      goto L7314;
    case ZERO_EXTEND:
      goto L7620;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10156;

 L10806: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10808;
  x1 = XEXP (x0, 0);
  goto L10156;

 L10808: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 33:
      goto L7221;
    case 30:
      goto L7321;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7221: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2DFmode:
      goto L10810;
    case V16QImode:
      goto L10811;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L10810: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7222;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7222: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 716;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L10811: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7227;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7227: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 717;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7321: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7322;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7323;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7324;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7324: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 733;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7315;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7316;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7317;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7317: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 732;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7621;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7622;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7623;
  x1 = XEXP (x0, 0);
  goto L10156;

 L7623: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7624;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7624: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 766;
    }
  x1 = XEXP (x0, 0);
  goto L10156;

 L7254: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L7255;
  x1 = XEXP (x0, 0);
  goto L10166;

 L7255: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7256;
    }
  x1 = XEXP (x0, 0);
  goto L10166;

 L7256: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 722;
    }
  x1 = XEXP (x0, 0);
  goto L10166;

 L8113: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8114;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L8115;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8116;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8116: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE2))
    {
      return 819;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10153: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L7230;
  if (register_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L7372;
    }
 L10164: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L8073;
    }
  goto L8159;

 L7230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10812;
    case DImode:
      goto L10813;
    default:
      break;
    }
  goto L10164;

 L10812: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7231;
    }
  goto L10164;

 L7231: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 32)
    goto L7232;
  x1 = XEXP (x0, 0);
  goto L10164;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7233;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L7233: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7234;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L7234: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 718;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L10813: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7238;
    }
  goto L10164;

 L7238: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 32)
    goto L7239;
  x1 = XEXP (x0, 0);
  goto L10164;

 L7239: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7240;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L7240: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7241;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L7241: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 719;
    }
  x1 = XEXP (x0, 0);
  goto L10164;

 L7372: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode)
    goto L10814;
  x1 = XEXP (x0, 0);
  goto L10164;

 L10814: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L10164;

 L8073: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode)
    goto L10831;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10831: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10833;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10833: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10835;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10835: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 38:
      goto L8074;
    case 39:
      goto L8079;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8075;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8075: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 813;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8080;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8080: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 814;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10157: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L7259;
    }
  goto L8159;

 L7259: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L10837;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10837: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L7260;
    case VEC_MERGE:
      goto L7336;
    case SUBREG:
      goto L10840;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7261;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7261: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 723;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7337;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L7338;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == FLOAT_TRUNCATE)
    goto L7339;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L7340;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 14
      && (TARGET_SSE2))
    {
      return 735;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10840: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L7355;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L7356;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L7357;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7357: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2SFmode
      && GET_CODE (x4) == FLOAT_TRUNCATE)
    goto L7358;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7358: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V2DFmode))
    {
      operands[1] = x5;
      goto L7359;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 2)
    goto L7360;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7360: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7361;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7361: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE2))
    {
      return 737;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10158: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L7264;
    }
  goto L8159;

 L7264: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SImode)
    goto L10841;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10841: ATTRIBUTE_UNUSED_LABEL
  tem = recog_15 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10160: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L7378;
    }
  goto L8159;

 L7378: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8HImode)
    goto L10866;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10866: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10161: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7494;
    }
 L10165: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8083;
    }
  goto L8159;

 L7494: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == MULT)
    goto L7495;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7496;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7497;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L7498;
    }
  x1 = XEXP (x0, 0);
  goto L10165;

 L7498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7499;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7499: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L7500;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7501;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7502;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L7503;
    }
  x1 = XEXP (x0, 0);
  goto L10165;

 L7503: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7504;
  x1 = XEXP (x0, 0);
  goto L10165;

 L7504: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0
      && (TARGET_SSE2))
    {
      return 758;
    }
  x1 = XEXP (x0, 0);
  goto L10165;

 L8083: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8084;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L8085;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8086;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8086: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE2 && !TARGET_64BIT))
    {
      return 815;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10162: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7809;
    }
  goto L8159;

 L7809: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 45)
    goto L7810;
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0
      && (TARGET_SSE2))
    {
      return 761;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7810: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == TImode)
    goto L10897;
  x1 = XEXP (x0, 0);
  goto L8159;

 L10897: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L7811;
    case LSHIFTRT:
      goto L7819;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L7812;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L7813;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7814;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7814: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (TARGET_SSE2))
    {
      return 796;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L7820;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L7821;
  x1 = XEXP (x0, 0);
  goto L8159;

 L7821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7822;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L7822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (TARGET_SSE2))
    {
      return 797;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L10168: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L8144;
    }
  goto L8159;

 L8144: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8145;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8146;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8147;
  x1 = XEXP (x0, 0);
  goto L8159;

 L8147: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE2))
    {
      return 824;
    }
  x1 = XEXP (x0, 0);
  goto L8159;

 L8160: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L10899;
  x1 = XEXP (x0, 0);
  goto L8176;

 L10899: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10901;
  x1 = XEXP (x0, 0);
  goto L8176;

 L10901: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10903;
  x1 = XEXP (x0, 0);
  goto L8176;

 L10903: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 59:
      goto L8161;
    case 60:
      goto L8165;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8176;

 L8161: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_SSE2))
    {
      return 827;
    }
  x1 = XEXP (x0, 0);
  goto L8176;

 L8165: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_SSE2))
    {
      return 828;
    }
  x1 = XEXP (x0, 0);
  goto L8176;

 L10169: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L8177;
    }
  goto ret0;

 L8177: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L10905;
  goto ret0;

 L10905: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10910;
  goto ret0;

 L10910: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L10915;
    case 1:
      goto L10918;
    default:
      break;
    }
  goto ret0;

 L10915: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 71:
      goto L8178;
    case 72:
      goto L8190;
    case 73:
      goto L8202;
    default:
      break;
    }
  goto ret0;

 L8178: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8179;
    }
  goto ret0;

 L8179: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L8180;
    }
  goto ret0;

 L8180: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 831;
    }
  goto ret0;

 L8190: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8191;
    }
  goto ret0;

 L8191: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L8192;
    }
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 833;
    }
  goto ret0;

 L8202: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8203;
    }
  goto ret0;

 L8203: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L8204;
    }
  goto ret0;

 L8204: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 835;
    }
  goto ret0;

 L10918: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74:
      goto L8214;
    case 75:
      goto L8219;
    default:
      break;
    }
  goto ret0;

 L8214: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8215;
    }
  goto ret0;

 L8215: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 837;
    }
  goto ret0;

 L8219: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8220;
    }
  goto ret0;

 L8220: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 838;
    }
  goto ret0;

 L10170: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L8183;
    }
  goto ret0;

 L8183: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L10920;
  goto ret0;

 L10920: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10924;
    case VEC_DUPLICATE:
      goto L8229;
    default:
     break;
   }
  goto ret0;

 L10924: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L10927;
  goto ret0;

 L10927: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 71:
      goto L8184;
    case 72:
      goto L8196;
    case 73:
      goto L8208;
    default:
      break;
    }
  goto ret0;

 L8184: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8185;
    }
  goto ret0;

 L8185: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8186;
    }
  goto ret0;

 L8186: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 832;
    }
  goto ret0;

 L8196: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8197;
    }
  goto ret0;

 L8197: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8198;
    }
  goto ret0;

 L8198: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 834;
    }
  goto ret0;

 L8208: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8209;
    }
  goto ret0;

 L8209: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L8210;
    }
  goto ret0;

 L8210: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 836;
    }
  goto ret0;

 L8229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10931;
  goto ret0;

 L10931: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L8235;
  if (memory_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L8230;
    }
  goto ret0;

 L8235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L8236;
    }
  goto ret0;

 L8236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8237;
  goto ret0;

 L8237: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE3))
    {
      return 841;
    }
  goto ret0;

 L8230: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 840;
    }
  goto ret0;

 L10171: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L8223;
    }
  goto ret0;

 L8223: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 76)
    goto L8224;
  goto ret0;

 L8224: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8225;
    }
  goto ret0;

 L8225: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 839;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_18 PARAMS ((rtx, rtx, int *));
static int
recog_18 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L242;
    case PLUS:
      goto L930;
    case MINUS:
      goto L1349;
    case AND:
      goto L1938;
    case IOR:
      goto L2156;
    case XOR:
      goto L2406;
    case NEG:
      goto L2690;
    case ASHIFT:
      goto L3174;
    case ASHIFTRT:
      goto L3338;
    case LSHIFTRT:
      goto L3576;
    case ROTATE:
      goto L3770;
    case ROTATERT:
      goto L3886;
    default:
     break;
   }
  goto ret0;

 L242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L243;
  goto ret0;

 L243: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L244;
  goto ret0;

 L244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L245;
  goto ret0;

 L245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L246;
  goto ret0;

 L246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L247;
  goto ret0;

 L247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    {
      return 35;
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10980;
  goto ret0;

 L10980: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L931;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1004;
    }
  goto ret0;

 L931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LTU)
    goto L932;
  goto ret0;

 L932: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L933;
  goto ret0;

 L933: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L934;
  goto ret0;

 L934: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L935;
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L936;
    }
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L937;
  goto ret0;

 L937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 139;
    }
  goto ret0;

 L1004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1005;
    }
  goto ret0;

 L1005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1006;
  goto ret0;

 L1006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 146;
    }
  goto ret0;

 L1349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1350;
    }
  goto ret0;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1351;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1373;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LTU)
    goto L1352;
  goto ret0;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1353;
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1354;
  goto ret0;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1355;
    }
  goto ret0;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1356;
  goto ret0;

 L1356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 167;
    }
  goto ret0;

 L1373: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1374;
  goto ret0;

 L1374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 168;
    }
  goto ret0;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1939;
    }
  goto ret0;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1940;
    }
  goto ret0;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1941;
  goto ret0;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 203;
    }
  goto ret0;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10983;
  goto ret0;

 L10983: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L3150;
    case ASHIFTRT:
      goto L3314;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L10982;
    default:
      goto ret0;
   }
 L10982: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2157;
    }
  goto ret0;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3151;
  goto ret0;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3152;
    }
  goto ret0;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L3153;
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3154;
    }
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L3155;
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L3156;
  goto ret0;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L3157;
  goto ret0;

 L3157: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3158;
  goto ret0;

 L3158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 293;
    }
  goto ret0;

 L3314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3315;
  goto ret0;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3316;
    }
  goto ret0;

 L3316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L3317;
  goto ret0;

 L3317: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3318;
    }
  goto ret0;

 L3318: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L3319;
  goto ret0;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L3320;
  goto ret0;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L3321;
  goto ret0;

 L3321: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3322;
  goto ret0;

 L3322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 304;
    }
  goto ret0;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2158;
    }
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2159;
  goto ret0;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 215;
    }
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2407;
    }
  goto ret0;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2408;
    }
  goto ret0;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2409;
  goto ret0;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 229;
    }
  goto ret0;

 L2690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2691;
    }
  goto ret0;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2692;
  goto ret0;

 L2692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 245;
    }
  goto ret0;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3175;
    }
  goto ret0;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3176;
    }
  goto ret0;

 L3176: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3177;
  goto ret0;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 294;
    }
  goto ret0;

 L3338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3339;
    }
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10985;
 L3367: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3368;
    }
  goto ret0;

 L10985: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3340;
    }
 L10986: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3354;
    }
  goto L3367;

 L3340: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3341;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L10986;

 L3341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 305;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L10986;

 L3354: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3355;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3367;

 L3355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 306;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3367;

 L3368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3369;
  goto ret0;

 L3369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 307;
    }
  goto ret0;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3577;
    }
  goto ret0;

 L3577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3578;
    }
 L3591: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3592;
    }
  goto ret0;

 L3578: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3579;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3591;

 L3579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 322;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3591;

 L3592: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3593;
  goto ret0;

 L3593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 323;
    }
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3771;
    }
  goto ret0;

 L3771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3772;
    }
 L3785: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3786;
    }
  goto ret0;

 L3772: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3773;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3785;

 L3773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 336;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3785;

 L3786: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3787;
  goto ret0;

 L3787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 337;
    }
  goto ret0;

 L3886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3887;
    }
  goto ret0;

 L3887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3888;
    }
 L3901: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3902;
    }
  goto ret0;

 L3888: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3889;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3901;

 L3889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 344;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3901;

 L3902: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3903;
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 345;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_19 PARAMS ((rtx, rtx, int *));
static int
recog_19 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L10957;
    case ZERO_EXTRACT:
      goto L1277;
    default:
     break;
   }
 L10933: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L241;
    }
 L10934: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L275;
    }
  goto ret0;

 L10957: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L221;
    }
  goto L10933;

 L221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_no_elim_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L222;
    }
  x2 = XEXP (x1, 0);
  goto L10933;

 L222: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10933;

 L223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10933;

 L224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 33;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10933;

 L1277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1278;
    }
  goto ret0;

 L1278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1279;
  goto ret0;

 L1279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1280;
  goto ret0;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10958;
  goto ret0;

 L10958: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1281;
    case AND:
      goto L2052;
    case IOR:
      goto L2324;
    case XOR:
      goto L2529;
    default:
     break;
   }
  goto ret0;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1282;
  goto ret0;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1283;
    }
  goto ret0;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1284;
  goto ret0;

 L1284: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1311;
  goto ret0;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1312;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1286;
    }
  goto ret0;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1313;
    }
  goto ret0;

 L1313: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1314;
  goto ret0;

 L1314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1315;
  goto ret0;

 L1315: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1316;
  goto ret0;

 L1316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 165;
    }
  goto ret0;

 L1286: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1287;
  goto ret0;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 164;
    }
  goto ret0;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2053;
  goto ret0;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2054;
    }
  goto ret0;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2055;
  goto ret0;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2104;
  goto ret0;

 L2104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10962;
 L2056: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2057;
    }
  goto ret0;

 L10962: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2105;
    case ZERO_EXTRACT:
      goto L2133;
    default:
     break;
   }
  goto L2056;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2106;
    }
  goto L2056;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2107;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2056;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 213;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2056;

 L2133: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2134;
    }
  goto L2056;

 L2134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2135;
  goto L2056;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2136;
  goto L2056;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2137;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2056;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 214;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2056;

 L2057: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2058;
  goto ret0;

 L2058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 211;
    }
  goto ret0;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2325;
  goto ret0;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2326;
    }
  goto ret0;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2327;
  goto ret0;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2354;
  goto ret0;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10964;
 L2328: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2329;
    }
  goto ret0;

 L10964: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2355;
    case ZERO_EXTRACT:
      goto L2383;
    default:
     break;
   }
  goto L2328;

 L2355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2356;
    }
  goto L2328;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2357;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2328;

 L2357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2328;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2384;
    }
  goto L2328;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2385;
  goto L2328;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2386;
  goto L2328;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2328;

 L2387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 228;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2328;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2330;
  goto ret0;

 L2330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 226;
    }
  goto ret0;

 L2529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2530;
  goto ret0;

 L2530: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2531;
    }
  goto ret0;

 L2531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2532;
  goto ret0;

 L2532: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2559;
  goto ret0;

 L2559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10966;
 L2533: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2534;
    }
  goto ret0;

 L10966: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2560;
    case ZERO_EXTRACT:
      goto L2588;
    default:
     break;
   }
  goto L2533;

 L2560: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2561;
    }
  goto L2533;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2562;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2533;

 L2562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 238;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2533;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2589;
    }
  goto L2533;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2590;
  goto L2533;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2591;
  goto L2533;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2592;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2533;

 L2592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 239;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2533;

 L2534: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2535;
  goto ret0;

 L2535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 237;
    }
  goto ret0;

 L241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10968;
  x2 = XEXP (x1, 0);
  goto L10934;

 L10968: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L10934;

 L275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10988;
 L251: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L252;
    }
 L261: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L262;
    }
  goto ret0;

 L10988: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L489;
    case MULT:
      goto L1501;
    case DIV:
      goto L1706;
    case UDIV:
      goto L1807;
    case UNSPEC:
      goto L10994;
    case IF_THEN_ELSE:
      goto L5119;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L10987;
    default:
      goto L251;
   }
 L10987: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L276;
    }
  goto L251;

 L489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L10995;
    case QImode:
      goto L10996;
    default:
      break;
    }
  goto L251;

 L10995: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L490;
    }
  goto L251;

 L490: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L491;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 78;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L10996: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L536;
    }
  goto L251;

 L536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L537;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L10997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L10997: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L10999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L10999: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L11001: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 83;
    }
 L11002: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 84;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1502;
    }
  goto L251;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1503;
    }
  goto L251;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1504;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 178;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1707;
    }
  goto L251;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1708;
    }
  goto L251;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1709;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1710;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1711;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (!optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 189;
    }
 L1736: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && (optimize_size || TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 190;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1808;
    }
  goto L251;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1809;
    }
  goto L251;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1810;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1811;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1812;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1813;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 193;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L10994: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L4380;
  goto L251;

 L4380: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4381;
  goto L251;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4382;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 381;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LTU)
    goto L5120;
  goto L251;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L5121;
  goto L251;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L5122;
  goto L251;

 L5122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    goto L5123;
  goto L251;

 L5123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5124;
  goto L251;

 L5124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5125;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L5125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 461;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L276: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L277;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 39;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L251;

 L252: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L253;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L261;

 L253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 36;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L261;

 L262: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L263;
  goto ret0;

 L263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1
   && (TARGET_PENTIUM || optimize_size)))
    {
      return 37;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_20 PARAMS ((rtx, rtx, int *));
static int
recog_20 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L289;
    }
 L10945: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1079;
    }
  goto ret0;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11004;
  x2 = XEXP (x1, 0);
  goto L10945;

 L11004: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L506;
    case MULT:
      goto L1515;
    case DIV:
      goto L1783;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L11003;
    default:
      x2 = XEXP (x1, 0);
      goto L10945;
   }
 L11003: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L290;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L507;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L507: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L508;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11007;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L11007: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11009;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L11009: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L11011: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 80;
    }
 L11012: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 81;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L11014;
  x2 = XEXP (x1, 0);
  goto L10945;

 L11014: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L1544;
    case SIGN_EXTEND:
      goto L1562;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L11013;
    default:
      x2 = XEXP (x1, 0);
      goto L10945;
   }
 L11013: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1516;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1544: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1545;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1546;
  x2 = XEXP (x1, 0);
  goto L10945;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1547;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1548;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 181;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1563;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1564;
  x2 = XEXP (x1, 0);
  goto L10945;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1565;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1565: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 182;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1517;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 179;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1784;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1785;
    }
  x2 = XEXP (x1, 0);
  goto L10945;

 L1785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1787;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L1788;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1789;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_HIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 192;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_PARTIAL_REG_STALL))
    {
      return 42;
    }
 L299: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && (! TARGET_PARTIAL_REG_STALL))
    {
      return 43;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10945;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11016;
  goto ret0;

 L11016: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1080;
    case MINUS:
      goto L1409;
    case AND:
      goto L1965;
    case IOR:
      goto L2201;
    case XOR:
      goto L2451;
    case NEG:
      goto L2713;
    case ASHIFT:
      goto L3201;
    case ASHIFTRT:
      goto L3406;
    case LSHIFTRT:
      goto L3630;
    case ROTATE:
      goto L3798;
    case ROTATERT:
      goto L3914;
    default:
     break;
   }
  goto ret0;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1081;
    }
  goto ret0;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1082;
    }
  goto ret0;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1083;
  goto ret0;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11027;
  goto ret0;

 L11027: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11029;
  goto ret0;

 L11029: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11031;
  goto ret0;

 L11031: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 151;
    }
 L11032: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 152;
    }
  goto ret0;

 L1409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1410;
    }
  goto ret0;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1411;
    }
  goto ret0;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1412;
  goto ret0;

 L1412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 171;
    }
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1966;
    }
  goto ret0;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1967;
    }
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1968;
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 205;
    }
  goto ret0;

 L2201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2202;
    }
  goto ret0;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2203;
    }
  goto ret0;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2204;
  goto ret0;

 L2204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 218;
    }
  goto ret0;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2452;
    }
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2453;
    }
  goto ret0;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2454;
  goto ret0;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 232;
    }
  goto ret0;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2714;
    }
  goto ret0;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2715;
  goto ret0;

 L2715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 247;
    }
  goto ret0;

 L3201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3202;
    }
  goto ret0;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3203;
    }
  goto ret0;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3204;
  goto ret0;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11033;
  goto ret0;

 L11033: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11035;
  goto ret0;

 L11035: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11037;
  goto ret0;

 L11037: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 296;
    }
 L11038: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 297;
    }
  goto ret0;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3407;
    }
  goto ret0;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3408;
    }
 L3421: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3422;
    }
  goto ret0;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3421;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 310;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3421;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3423;
  goto ret0;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 311;
    }
  goto ret0;

 L3630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3631;
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3632;
    }
 L3645: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3646;
    }
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3633;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3645;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 326;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3645;

 L3646: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3647;
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 327;
    }
  goto ret0;

 L3798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3799;
    }
  goto ret0;

 L3799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3800;
    }
 L3813: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3814;
    }
  goto ret0;

 L3800: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3801;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3813;

 L3801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 338;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3813;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3815;
  goto ret0;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, HImode, operands)))
    {
      return 339;
    }
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3915;
    }
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3916;
    }
 L3929: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3930;
    }
  goto ret0;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3929;

 L3917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 346;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3929;

 L3930: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3931;
  goto ret0;

 L3931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, HImode, operands)))
    {
      return 347;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_21 PARAMS ((rtx, rtx, int *));
static int
recog_21 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1018;
    case NEG:
      goto L1031;
    case MINUS:
      goto L1386;
    case AND:
      goto L1953;
    case IOR:
      goto L2171;
    case XOR:
      goto L2421;
    case NOT:
      goto L3077;
    case ASHIFT:
      goto L3189;
    case ASHIFTRT:
      goto L3381;
    case LSHIFTRT:
      goto L3605;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L11130;
    default:
      goto ret0;
   }
 L11130: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1048;
    }
  goto ret0;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1019;
    }
  goto ret0;

 L1019: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1020;
    }
  goto ret0;

 L1020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1021;
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1022;
    case CLOBBER:
      goto L1067;
    default:
     break;
   }
  goto ret0;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1023;
    }
  goto ret0;

 L1023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1024;
  goto ret0;

 L1024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1025;
  goto ret0;

 L1025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 147;
    }
  goto ret0;

 L1067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1068;
    }
  goto ret0;

 L1068: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 150;
    }
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1032;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1033;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1034;
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1035;
    }
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 148;
    }
  goto ret0;

 L1386: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1387;
    }
  goto ret0;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1388;
    }
  goto ret0;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1389;
  goto ret0;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1390;
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1391;
    }
  goto ret0;

 L1391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L1392;
  goto ret0;

 L1392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1393;
  goto ret0;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 169;
    }
  goto ret0;

 L1953: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11162;
  goto ret0;

 L11162: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L2077;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1954;
    }
  goto ret0;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L2078;
    }
  goto ret0;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L2079;
  goto ret0;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L2080;
  goto ret0;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2081;
    }
  goto ret0;

 L2081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2082;
  goto ret0;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2083;
  goto ret0;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2084;
  goto ret0;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2085;
    }
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2086;
  goto ret0;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2087;
  goto ret0;

 L2087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2088;
  goto ret0;

 L2088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2089;
  goto ret0;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2090;
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2091;
  goto ret0;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2092;
  goto ret0;

 L2092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 212;
    }
  goto ret0;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1955;
    }
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1956;
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1957;
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1958;
    }
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1959;
  goto ret0;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1960;
  goto ret0;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 204;
    }
  goto ret0;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2172;
    }
  goto ret0;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2173;
    }
  goto ret0;

 L2173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2174;
  goto ret0;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2175;
    case CLOBBER:
      goto L2188;
    default:
     break;
   }
  goto ret0;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2176;
    }
  goto ret0;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L2177;
  goto ret0;

 L2177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2178;
  goto ret0;

 L2178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 216;
    }
  goto ret0;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2189;
    }
  goto ret0;

 L2189: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 217;
    }
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11164;
  goto ret0;

 L11164: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L2658;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2422;
    }
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L2659;
    }
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L2660;
  goto ret0;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L2661;
  goto ret0;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2662;
    }
  goto ret0;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2663;
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2664;
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2665;
  goto ret0;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2666;
    }
  goto ret0;

 L2666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2667;
  goto ret0;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L2668;
  goto ret0;

 L2668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2669;
  goto ret0;

 L2669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2670;
  goto ret0;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2671;
  goto ret0;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2672;
  goto ret0;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2673;
  goto ret0;

 L2673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 243;
    }
  goto ret0;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2423;
    }
  goto ret0;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2424;
  goto ret0;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2425;
    case CLOBBER:
      goto L2438;
    default:
     break;
   }
  goto ret0;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2426;
    }
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2427;
  goto ret0;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2428;
  goto ret0;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 230;
    }
  goto ret0;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2439;
    }
  goto ret0;

 L2439: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 231;
    }
  goto ret0;

 L3077: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3078;
    }
  goto ret0;

 L3078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3079;
  goto ret0;

 L3079: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3080;
  goto ret0;

 L3080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3081;
    }
  goto ret0;

 L3081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3082;
  goto ret0;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 286;
    }
  goto ret0;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3190;
    }
  goto ret0;

 L3190: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3191;
    }
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3192;
  goto ret0;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3193;
  goto ret0;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3194;
    }
  goto ret0;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L3195;
  goto ret0;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3196;
  goto ret0;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 295;
    }
  goto ret0;

 L3381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3382;
    }
  goto ret0;

 L3382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11165;
  goto ret0;

 L11165: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3383;
    }
 L11166: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3396;
    }
  goto ret0;

 L3383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3384;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3385;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3386;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 308;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11166;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3397;
  goto ret0;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3398;
  goto ret0;

 L3398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3399;
    }
  goto ret0;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3400;
  goto ret0;

 L3400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3401;
  goto ret0;

 L3401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 309;
    }
  goto ret0;

 L3605: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3606;
    }
  goto ret0;

 L3606: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11167;
  goto ret0;

 L11167: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3607;
    }
 L11168: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3620;
    }
  goto ret0;

 L3607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3608;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3609;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3610;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3611;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3612;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 324;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11168;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3621;
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3622;
  goto ret0;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3623;
    }
  goto ret0;

 L3623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3624;
  goto ret0;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3625;
  goto ret0;

 L3625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 325;
    }
  goto ret0;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1049;
    }
 L1399: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1400;
    }
  goto ret0;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1050;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1399;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1051;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1399;

 L1051: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000))
    {
      return 149;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1399;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1401;
  goto ret0;

 L1401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1402;
    }
  goto ret0;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L1403;
  goto ret0;

 L1403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1404;
  goto ret0;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 170;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_22 PARAMS ((rtx, rtx, int *));
static int
recog_22 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1109;
    case NEG:
      goto L1122;
    case MINUS:
      goto L1424;
    case AND:
      goto L1980;
    case IOR:
      goto L2216;
    case XOR:
      goto L2466;
    case NOT:
      goto L3093;
    case ASHIFT:
      goto L3230;
    case ASHIFTRT:
      goto L3435;
    case LSHIFTRT:
      goto L3659;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L11133;
    default:
      goto ret0;
   }
 L11133: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1139;
    }
  goto ret0;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1110;
    }
  goto ret0;

 L1110: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1111;
    }
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1112;
  goto ret0;

 L1112: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1113;
    case CLOBBER:
      goto L1158;
    default:
     break;
   }
  goto ret0;

 L1113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1114;
    }
  goto ret0;

 L1114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1115;
  goto ret0;

 L1115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1116;
  goto ret0;

 L1116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 153;
    }
  goto ret0;

 L1158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1159;
    }
  goto ret0;

 L1159: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 156;
    }
  goto ret0;

 L1122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1123;
    }
  goto ret0;

 L1123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1124;
    }
  goto ret0;

 L1124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1125;
  goto ret0;

 L1125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1126;
    }
  goto ret0;

 L1126: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 154;
    }
  goto ret0;

 L1424: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1425;
    }
  goto ret0;

 L1425: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1426;
    }
  goto ret0;

 L1426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1427;
  goto ret0;

 L1427: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1428;
  goto ret0;

 L1428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1429;
    }
  goto ret0;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1430;
  goto ret0;

 L1430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1431;
  goto ret0;

 L1431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 172;
    }
  goto ret0;

 L1980: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1981;
    }
  goto ret0;

 L1981: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1982;
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1983;
  goto ret0;

 L1983: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1984;
  goto ret0;

 L1984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1985;
    }
  goto ret0;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L1986;
  goto ret0;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1987;
  goto ret0;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 206;
    }
  goto ret0;

 L2216: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2217;
    }
  goto ret0;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2218;
    }
  goto ret0;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2219;
  goto ret0;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2220;
    case CLOBBER:
      goto L2233;
    default:
     break;
   }
  goto ret0;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2221;
    }
  goto ret0;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == IOR)
    goto L2222;
  goto ret0;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2223;
  goto ret0;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 219;
    }
  goto ret0;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2234;
    }
  goto ret0;

 L2234: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 220;
    }
  goto ret0;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2467;
    }
  goto ret0;

 L2467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2468;
    }
  goto ret0;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2469;
  goto ret0;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2470;
    case CLOBBER:
      goto L2483;
    default:
     break;
   }
  goto ret0;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2471;
    }
  goto ret0;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == XOR)
    goto L2472;
  goto ret0;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2473;
  goto ret0;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 233;
    }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2484;
    }
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 234;
    }
  goto ret0;

 L3093: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3094;
    }
  goto ret0;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3095;
  goto ret0;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3096;
  goto ret0;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3097;
    }
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NOT)
    goto L3098;
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 288;
    }
  goto ret0;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3231;
    }
  goto ret0;

 L3231: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3232;
    }
  goto ret0;

 L3232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3233;
  goto ret0;

 L3233: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3234;
  goto ret0;

 L3234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3235;
    }
  goto ret0;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L3236;
  goto ret0;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3237;
  goto ret0;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 298;
    }
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3436;
    }
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11169;
  goto ret0;

 L11169: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3437;
    }
 L11170: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3450;
    }
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3438;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3439;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3440;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3441;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3442;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 312;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11170;

 L3450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3451;
  goto ret0;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3452;
  goto ret0;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3453;
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3454;
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3455;
  goto ret0;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 313;
    }
  goto ret0;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3660;
    }
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11171;
  goto ret0;

 L11171: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3661;
    }
 L11172: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3674;
    }
  goto ret0;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3662;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3664;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3666;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 328;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11172;

 L3674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3675;
  goto ret0;

 L3675: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3676;
  goto ret0;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3677;
    }
  goto ret0;

 L3677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3678;
  goto ret0;

 L3678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3679;
  goto ret0;

 L3679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 329;
    }
  goto ret0;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1140;
    }
 L1437: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1438;
    }
  goto ret0;

 L1140: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1141;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1437;

 L1141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1142;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1437;

 L1142: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000))
    {
      return 155;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1437;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1439;
  goto ret0;

 L1439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1440;
    }
  goto ret0;

 L1440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1441;
  goto ret0;

 L1441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1442;
  goto ret0;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 173;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_23 PARAMS ((rtx, rtx, int *));
static int
recog_23 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1216;
    case NEG:
      goto L1229;
    case MINUS:
      goto L1478;
    case AND:
      goto L2023;
    case IOR:
      goto L2277;
    case XOR:
      goto L2612;
    case NOT:
      goto L3109;
    case ASHIFT:
      goto L3271;
    case ASHIFTRT:
      goto L3521;
    case LSHIFTRT:
      goto L3745;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L11136;
    default:
      goto ret0;
   }
 L11136: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1246;
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1217;
    }
  goto ret0;

 L1217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1218;
    }
  goto ret0;

 L1218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1219;
  goto ret0;

 L1219: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1220;
    case CLOBBER:
      goto L1265;
    default:
     break;
   }
  goto ret0;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1221;
    }
  goto ret0;

 L1221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1222;
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1223;
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 160;
    }
  goto ret0;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1266;
    }
  goto ret0;

 L1266: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 163;
    }
  goto ret0;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1230;
    }
  goto ret0;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1231;
    }
  goto ret0;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1232;
  goto ret0;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1233;
    }
  goto ret0;

 L1233: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 161;
    }
  goto ret0;

 L1478: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1479;
    }
  goto ret0;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1480;
    }
  goto ret0;

 L1480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1481;
  goto ret0;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1482;
  goto ret0;

 L1482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1483;
    }
  goto ret0;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1484;
  goto ret0;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1485;
  goto ret0;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 176;
    }
  goto ret0;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11173;
  goto ret0;

 L11173: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2024;
    }
 L11174: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2037;
    }
  goto ret0;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2025;
    }
  x4 = XEXP (x3, 0);
  goto L11174;

 L2025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2026;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2026: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2027;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2028;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L2029;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2030;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 209;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11174;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2038;
    }
  goto ret0;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2039;
  goto ret0;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2040;
  goto ret0;

 L2040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2041;
  goto ret0;

 L2041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2042;
  goto ret0;

 L2042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L2043;
  goto ret0;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2044;
  goto ret0;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 210;
    }
  goto ret0;

 L2277: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11175;
  goto ret0;

 L11175: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2278;
    }
 L11176: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2291;
    }
  goto ret0;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2279;
    }
  x4 = XEXP (x3, 0);
  goto L11176;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2280;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2281;
    case CLOBBER:
      goto L2308;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2282;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L2283;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 223;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2309;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2309: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 225;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11176;

 L2291: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2292;
    }
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2293;
  goto ret0;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2294;
  goto ret0;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2295;
  goto ret0;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2296;
  goto ret0;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L2297;
  goto ret0;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2298;
  goto ret0;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 224;
    }
  goto ret0;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11177;
  goto ret0;

 L11177: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2613;
    }
 L11178: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2626;
    }
  goto ret0;

 L2613: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2614;
    }
  x4 = XEXP (x3, 0);
  goto L11178;

 L2614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2615;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2616;
    case CLOBBER:
      goto L2643;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2617;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L2618;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2619;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 240;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2644;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2644: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 242;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11178;

 L2626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2627;
    }
  goto ret0;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2628;
  goto ret0;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2629;
  goto ret0;

 L2629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2630;
  goto ret0;

 L2630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2631;
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L2632;
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2633;
  goto ret0;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 241;
    }
  goto ret0;

 L3109: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3110;
    }
  goto ret0;

 L3110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3111;
  goto ret0;

 L3111: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3112;
  goto ret0;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3113;
    }
  goto ret0;

 L3113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NOT)
    goto L3114;
  goto ret0;

 L3114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 290;
    }
  goto ret0;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3272;
    }
  goto ret0;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3273;
    }
  goto ret0;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3274;
  goto ret0;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3275;
  goto ret0;

 L3275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3276;
    }
  goto ret0;

 L3276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFT)
    goto L3277;
  goto ret0;

 L3277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3278;
  goto ret0;

 L3278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 301;
    }
  goto ret0;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3522;
    }
  goto ret0;

 L3522: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11179;
  goto ret0;

 L11179: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3523;
    }
 L11180: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3536;
    }
  goto ret0;

 L3523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3524;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3524: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3525;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3526;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3527;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3528;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 318;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11180;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3537;
  goto ret0;

 L3537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3538;
  goto ret0;

 L3538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3539;
    }
  goto ret0;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3540;
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3541;
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 319;
    }
  goto ret0;

 L3745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3746;
    }
  goto ret0;

 L3746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11181;
  goto ret0;

 L11181: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3747;
    }
 L11182: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3760;
    }
  goto ret0;

 L3747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3748;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3749;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3750;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3751;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 334;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11182;

 L3760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3761;
  goto ret0;

 L3761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3762;
  goto ret0;

 L3762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3763;
    }
  goto ret0;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3765;
  goto ret0;

 L3765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 335;
    }
  goto ret0;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1247;
    }
 L1491: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1492;
    }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1491;

 L1248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1249;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1491;

 L1249: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80))
    {
      return 162;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1491;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1493;
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1494;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1495;
  goto ret0;

 L1495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1496;
  goto ret0;

 L1496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 177;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_24 PARAMS ((rtx, rtx, int *));
static int
recog_24 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10932;
    case HImode:
      goto L10935;
    case QImode:
      goto L10936;
    case SFmode:
      goto L10937;
    case DFmode:
      goto L10938;
    case XFmode:
      goto L10939;
    case TFmode:
      goto L10940;
    case DImode:
      goto L10941;
    case CCmode:
      goto L10944;
    case CCZmode:
      goto L10949;
    default:
      break;
    }
 L307: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case STRICT_LOW_PART:
      goto L308;
    case REG:
      goto L10956;
    case PC:
      goto L4296;
    default:
     break;
   }
 L5567: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L5568;

 L10932: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L307;

 L10935: ATTRIBUTE_UNUSED_LABEL
  tem = recog_20 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L307;

 L10936: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L327;
    }
 L10946: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1170;
    }
  goto L307;

 L327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11040;
  x2 = XEXP (x1, 0);
  goto L10946;

 L11040: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L1529;
    case DIV:
      goto L1665;
    case UDIV:
      goto L1679;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L11039;
    default:
      x2 = XEXP (x1, 0);
      goto L10946;
   }
 L11039: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L328;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1530;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1531;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 180;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1666;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1667;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1668;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH))
    {
      return 187;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1680;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1681;
    }
  x2 = XEXP (x1, 0);
  goto L10946;

 L1681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH))
    {
      return 188;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L329;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L330;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 48;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10946;

 L1170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11043;
  x2 = XEXP (x1, 0);
  goto L307;

 L11043: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1171;
    case MINUS:
      goto L1447;
    case AND:
      goto L1992;
    case IOR:
      goto L2246;
    case XOR:
      goto L2496;
    case NEG:
      goto L2736;
    case ASHIFT:
      goto L3242;
    case ASHIFTRT:
      goto L3460;
    case LSHIFTRT:
      goto L3684;
    case ROTATE:
      goto L3842;
    case ROTATERT:
      goto L3942;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L1171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1172;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1173;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11054: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11056;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11056: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11058;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11058: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 157;
    }
 L11059: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 158;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1448;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1449;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1449: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1450;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 174;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1993;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1994;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1995;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 207;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2247;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2248;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 221;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2497;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2498;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 235;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2737;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2738;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 249;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3243;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3244;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3244: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3245;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11060;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11060: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11062;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11062: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11064;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11064: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 299;
    }
 L11065: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 300;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3461;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3462;
    }
 L3491: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3492;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3462: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3463;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3491;

 L3463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 314;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3491;

 L3492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 316;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3685;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3686;
    }
 L3715: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3716;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3686: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3687;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3715;

 L3687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 330;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3715;

 L3716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3717;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3843;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3844;
    }
 L3873: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3874;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3873;

 L3845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 341;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3873;

 L3874: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3875;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, QImode, operands)))
    {
      return 343;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3943;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3944;
    }
 L3973: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3974;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3944: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3945;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3973;

 L3945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 348;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3973;

 L3974: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, QImode, operands)))
    {
      return 350;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10937: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L412;
    }
 L10942: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L631;
    }
 L10950: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2758;
    }
 L10951: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2787;
    }
  goto L307;

 L412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11067;
  x2 = XEXP (x1, 0);
  goto L10942;

 L11067: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5192;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L413;
    }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L5193;
    case GT:
      goto L5285;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5193: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode)
    goto L11068;
  x2 = XEXP (x1, 0);
  goto L10942;

 L11068: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L5194;
    }
 L11069: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L5213;
    }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5194: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L5195;
    }
  x4 = XEXP (x3, 0);
  goto L11069;

 L5195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5196;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11069;

 L5196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5197;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11069;

 L5197: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5198;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11069;

 L5198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && TARGET_IEEE_FP))
    {
      return 468;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11069;

 L5213: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L5214;
    }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5215;
  x2 = XEXP (x1, 0);
  goto L10942;

 L5215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5216;
  x2 = XEXP (x1, 0);
  goto L10942;

 L5216: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L5217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 469;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L5285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode)
    goto L11070;
  x2 = XEXP (x1, 0);
  goto L10942;

 L11070: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L5286;
    }
 L11071: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L5305;
    }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L5287;
    }
  x4 = XEXP (x3, 0);
  goto L11071;

 L5287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5288;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11071;

 L5288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5289;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11071;

 L5289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11071;

 L5290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && TARGET_IEEE_FP))
    {
      return 474;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11071;

 L5305: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L5306;
    }
  x2 = XEXP (x1, 0);
  goto L10942;

 L5306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5307;
  x2 = XEXP (x1, 0);
  goto L10942;

 L5307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5308;
  x2 = XEXP (x1, 0);
  goto L10942;

 L5308: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5309;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L5309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 475;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L414;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L415;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (reload_completed || !TARGET_SSE))
    {
      return 62;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10942;

 L631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11072;
  x2 = XEXP (x1, 0);
  goto L10950;

 L11072: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L632;
    case NEG:
      goto L2780;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10950;

 L632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11074;
    case XFmode:
      goto L11076;
    case TFmode:
      goto L11077;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10950;

 L11074: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L633;
    }
 L11075: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L641;
    }
  x2 = XEXP (x1, 0);
  goto L10950;

 L633: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L634;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11075;

 L634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L635;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11075;

 L635: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE2))
    {
      return 97;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11075;

 L641: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L642;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L643;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L643: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2))
    {
      return 98;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L11076: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L664;
    }
  x2 = XEXP (x1, 0);
  goto L10950;

 L664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L666;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L666: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 102;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L11077: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L677;
    }
  x2 = XEXP (x1, 0);
  goto L10950;

 L677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L678;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L679;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L679: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 104;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L2780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2781;
    }
  x2 = XEXP (x1, 0);
  goto L10950;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2782;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2783;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L2783: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 252;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10950;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11078;
  x2 = XEXP (x1, 0);
  goto L10951;

 L11078: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2759;
    case ABS:
      goto L2915;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10951;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2760;
    }
  x2 = XEXP (x1, 0);
  goto L10951;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2761;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10951;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, SFmode, operands)))
    {
      return 251;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10951;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2916;
    }
  x2 = XEXP (x1, 0);
  goto L10951;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10951;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (ABS, SFmode, operands)))
    {
      return 268;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10951;

 L2787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11080;
  x2 = XEXP (x1, 0);
  goto L307;

 L11080: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2788;
    case ABS:
      goto L2936;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2789;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2790;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && !TARGET_SSE
   && ix86_unary_operator_ok (NEG, SFmode, operands)))
    {
      return 253;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2937;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2937: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L2938;
    case CLOBBER:
      goto L2946;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2939;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2939: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (ABS, SFmode, operands) && !TARGET_SSE))
    {
      return 270;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10938: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L435;
    }
 L10943: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L688;
    }
 L10952: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L2799;
    }
 L10953: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L2828;
    }
  goto L307;

 L435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11083;
  x2 = XEXP (x1, 0);
  goto L10943;

 L11083: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5238;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L436;
    }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L5239;
    case GT:
      goto L5331;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5239: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DFmode)
    goto L11084;
  x2 = XEXP (x1, 0);
  goto L10943;

 L11084: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L5240;
    }
 L11085: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L5259;
    }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5240: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L5241;
    }
  x4 = XEXP (x3, 0);
  goto L11085;

 L5241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5242;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11085;

 L5242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5243;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11085;

 L5243: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5244;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11085;

 L5244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_IEEE_FP && TARGET_SSE_MATH))
    {
      return 471;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11085;

 L5259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L5260;
    }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5261;
  x2 = XEXP (x1, 0);
  goto L10943;

 L5261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5262;
  x2 = XEXP (x1, 0);
  goto L10943;

 L5262: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5263;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L5263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 472;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L5331: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DFmode)
    goto L11086;
  x2 = XEXP (x1, 0);
  goto L10943;

 L11086: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L5332;
    }
 L11087: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L5351;
    }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L5333;
    }
  x4 = XEXP (x3, 0);
  goto L11087;

 L5333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5334;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11087;

 L5334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5335;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11087;

 L5335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5336;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11087;

 L5336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_IEEE_FP))
    {
      return 477;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11087;

 L5351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L5352;
    }
  x2 = XEXP (x1, 0);
  goto L10943;

 L5352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L5353;
  x2 = XEXP (x1, 0);
  goto L10943;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L5354;
  x2 = XEXP (x1, 0);
  goto L10943;

 L5354: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5355;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L5355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 478;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L437;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (reload_completed || !TARGET_SSE2))
    {
      return 67;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10943;

 L688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11088;
  x2 = XEXP (x1, 0);
  goto L10952;

 L11088: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L689;
    case NEG:
      goto L2821;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10952;

 L689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case XFmode:
      goto L11090;
    case TFmode:
      goto L11091;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10952;

 L11090: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L690;
    }
  x2 = XEXP (x1, 0);
  goto L10952;

 L690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L691;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L692;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L692: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE && TARGET_80387))
    {
      return 106;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L11091: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L703;
    }
  x2 = XEXP (x1, 0);
  goto L10952;

 L703: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L704;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L705;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L705: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 108;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L2821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2822;
    }
  x2 = XEXP (x1, 0);
  goto L10952;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2823;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L2823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2824;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L2824: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 255;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10952;

 L2799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11092;
  x2 = XEXP (x1, 0);
  goto L10953;

 L11092: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2800;
    case ABS:
      goto L2956;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10953;

 L2800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2801;
    }
  x2 = XEXP (x1, 0);
  goto L10953;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2802;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10953;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, DFmode, operands)))
    {
      return 254;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10953;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2957;
    }
  x2 = XEXP (x1, 0);
  goto L10953;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10953;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (ABS, DFmode, operands)))
    {
      return 271;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10953;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11094;
  x2 = XEXP (x1, 0);
  goto L307;

 L11094: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2829;
    case ABS:
      goto L2977;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2830;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2831;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands)))
    {
      return 256;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2978;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L2979;
    case CLOBBER:
      goto L2987;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2980;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2980: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands)))
    {
      return 273;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10939: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L474;
    }
 L10954: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L2840;
    }
  goto L307;

 L474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L475;
    }
  x2 = XEXP (x1, 0);
  goto L10954;

 L475: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L476;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10954;

 L476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L477;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10954;

 L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 76;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10954;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L11096;
  x2 = XEXP (x1, 0);
  goto L307;

 L11096: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2841;
    case ABS:
      goto L2997;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L2842;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2843;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && ix86_unary_operator_ok (NEG, XFmode, operands)))
    {
      return 257;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L2998;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2998: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_128BIT_LONG_DOUBLE && TARGET_80387
   && ix86_unary_operator_ok (ABS, XFmode, operands)))
    {
      return 274;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10940: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L481;
    }
 L10955: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L2852;
    }
  goto L307;

 L481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L482;
    }
  x2 = XEXP (x1, 0);
  goto L10955;

 L482: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L483;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10955;

 L483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L484;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10955;

 L484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 77;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10955;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode)
    goto L11098;
  x2 = XEXP (x1, 0);
  goto L307;

 L11098: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2853;
    case ABS:
      goto L3009;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L2854;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2855;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (NEG, TFmode, operands)))
    {
      return 258;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L3010;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (ABS, TFmode, operands)))
    {
      return 275;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10941: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L563;
    }
 L10948: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1578;
    }
  goto L307;

 L563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11100;
  x2 = XEXP (x1, 0);
  goto L10948;

 L11100: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L564;
    case PLUS:
      goto L916;
    case MINUS:
      goto L1335;
    case NEG:
      goto L2678;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10948;

 L564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L565;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L565: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 86;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L917;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L918;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L918: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L919;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 138;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1336;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L1336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1337;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1338;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 166;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L2678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2679;
    }
  x2 = XEXP (x1, 0);
  goto L10948;

 L2679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2680;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 244;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10948;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11104;
  x2 = XEXP (x1, 0);
  goto L307;

 L11104: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L1579;
    case ASHIFT:
      goto L3135;
    case ASHIFTRT:
      goto L3299;
    case LSHIFTRT:
      goto L3562;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11108;
  x2 = XEXP (x1, 0);
  goto L307;

 L11108: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L1580;
    case SIGN_EXTEND:
      goto L1598;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L307;

 L1580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1581;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1582;
  x2 = XEXP (x1, 0);
  goto L307;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1583;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 183;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1599;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1600;
  x2 = XEXP (x1, 0);
  goto L307;

 L1600: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1601;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1602;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 184;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3136;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3137;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 292;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3300;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3301;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3302;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 303;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3563;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3564;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3565;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 321;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10944: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L951;
  goto L307;

 L951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 27)
    goto L952;
  x2 = XEXP (x1, 0);
  goto L307;

 L952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11110;
    case QImode:
      goto L11111;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L11110: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L953;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L954;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L954: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L955;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L956;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L957;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 140;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11111: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L964;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L964: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L965;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L965: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L966;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L967;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L968;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L969;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 141;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L10949: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L2701;
  goto L307;

 L2701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L2702;
  x2 = XEXP (x1, 0);
  goto L307;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11112;
    case HImode:
      goto L11113;
    case QImode:
      goto L11114;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L11112: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2703;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4407;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2704;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2705;
  x2 = XEXP (x1, 0);
  goto L307;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2706;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2707;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L2708;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 246;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4408;
  x2 = XEXP (x1, 0);
  goto L307;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4410;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 23)
    goto L4411;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L4411: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 384;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11113: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2726;
  x2 = XEXP (x1, 0);
  goto L307;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2727;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2728;
  x2 = XEXP (x1, 0);
  goto L307;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2729;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2730;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NEG)
    goto L2731;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 248;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L11114: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2749;
  x2 = XEXP (x1, 0);
  goto L307;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2750;
    }
  x2 = XEXP (x1, 0);
  goto L307;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2751;
  x2 = XEXP (x1, 0);
  goto L307;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2753;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NEG)
    goto L2754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 250;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L307;

 L308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L11116;
    case QImode:
      goto L11117;
    default:
      break;
    }
  goto L5567;

 L11116: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L309;
    }
  goto L5567;

 L309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L310;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L310: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)))
    {
      return 45;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L11117: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L340;
    }
 L11118: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L1199;
    }
  goto L5567;

 L340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L341;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11118;

 L341: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L342;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11118;

 L342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 50;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11118;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11119;
  x2 = XEXP (x1, 0);
  goto L5567;

 L11119: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1200;
    case MINUS:
      goto L1462;
    case AND:
      goto L2007;
    case IOR:
      goto L2261;
    case XOR:
      goto L2511;
    case ASHIFTRT:
      goto L3475;
    case LSHIFTRT:
      goto L3699;
    case ROTATE:
      goto L3827;
    case ROTATERT:
      goto L3957;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5567;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1201;
  x2 = XEXP (x1, 0);
  goto L5567;

 L1201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1202;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 159;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1463;
  x2 = XEXP (x1, 0);
  goto L5567;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1464;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L1464: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 175;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2008;
  x2 = XEXP (x1, 0);
  goto L5567;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2009;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2010;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 208;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2262;
  x2 = XEXP (x1, 0);
  goto L5567;

 L2262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2263;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L2263: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2264;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 222;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2512;
  x2 = XEXP (x1, 0);
  goto L5567;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2513;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L2513: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2514;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L2514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 236;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3476;
  x2 = XEXP (x1, 0);
  goto L5567;

 L3476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3477;
    }
 L3506: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3507;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L3477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3506;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 315;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3506;

 L3507: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3508;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 317;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3700;
  x2 = XEXP (x1, 0);
  goto L5567;

 L3700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3701;
    }
 L3730: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3731;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L3701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3730;

 L3702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 331;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3730;

 L3731: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3732;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 333;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3828;
  x2 = XEXP (x1, 0);
  goto L5567;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3829;
    }
 L3858: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3859;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3830;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3858;

 L3830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 340;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3858;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 342;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3958;
  x2 = XEXP (x1, 0);
  goto L5567;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3959;
    }
 L3988: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3989;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L3959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3988;

 L3960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 349;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3988;

 L3989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L3990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 351;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L10956: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L1016;
  goto L5567;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L1017;
  x2 = XEXP (x1, 0);
  goto L5567;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11128;
    case HImode:
      goto L11131;
    case QImode:
      goto L11134;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L11128: ATTRIBUTE_UNUSED_LABEL
  tem = recog_21 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L5567;

 L11131: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L5567;

 L11134: ATTRIBUTE_UNUSED_LABEL
  tem = recog_23 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4297;
    }
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L4323;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4297: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L4298;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4299;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 370;

 L4323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L4324;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4325;
    }
  x2 = XEXP (x1, 0);
  goto L5567;

 L4325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L4326;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4327;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  goto L4328;

 L4328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4329;
  x2 = XEXP (x1, 0);
  goto L5567;

 L4329: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4330;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4331;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4332;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4333;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L4333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1
      && (!TARGET_64BIT && TARGET_USE_LOOP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 371;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5567;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L5569;
  goto ret0;

 L5569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L5570;
  goto ret0;

 L5570: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11183;
  goto ret0;

 L11183: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5571;
    }
 L11184: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5583;
    }
  goto ret0;

 L5571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L5572;

 L5572: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5573;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11184;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5574;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11184;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11184;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11184;

 L5576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 494;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11184;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L5584;

 L5584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5585;
  goto ret0;

 L5585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5586;
  goto ret0;

 L5586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5587;
  goto ret0;

 L5587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5588;
  goto ret0;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 495;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_25 PARAMS ((rtx, rtx, int *));
static int
recog_25 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
      goto L11203;
    case MEM:
      goto L4968;
    default:
     break;
   }
 L11187: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L228;
    }
 L11190: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L784;
    }
 L11192: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1614;
    }
  goto ret0;

 L11203: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 7)
    goto L4392;
  goto L11187;

 L4392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4393;
  x2 = XEXP (x1, 0);
  goto L11187;

 L4393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L4394;
  x2 = XEXP (x1, 0);
  goto L11187;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L4395;
  x2 = XEXP (x1, 0);
  goto L11187;

 L4395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4396;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 6)
    goto L4397;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4398;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L4399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4399: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4400;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4401;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 383;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4969;
    }
  goto L11187;

 L4969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4970;
    }
  x2 = XEXP (x1, 0);
  goto L11187;

 L4970: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4971;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4972;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4973;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4974;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L4975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4975: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L4976;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L4976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 453;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11187;

 L228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L229;
  x2 = XEXP (x1, 0);
  goto L11190;

 L229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L230;
  x2 = XEXP (x1, 0);
  goto L11190;

 L230: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L231;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L232;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L233;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L234;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L235;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L235: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L236;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L237;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 34;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11190;

 L784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L785;
  x2 = XEXP (x1, 0);
  goto L11192;

 L785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L786;
    }
  x2 = XEXP (x1, 0);
  goto L11192;

 L786: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L787;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11192;

 L787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L788;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11192;

 L788: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L789;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11192;

 L789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L790;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11192;

 L790: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 115;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11192;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11204;
  goto ret0;

 L11204: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L1615;
    case DIV:
      goto L1693;
    case UDIV:
      goto L1794;
    case UNSPEC:
      goto L11209;
    case PLUS:
      goto L5376;
    default:
     break;
   }
  goto ret0;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1616;
  goto ret0;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1617;
  goto ret0;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L11210;
  goto ret0;

 L11210: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L1618;
    case SIGN_EXTEND:
      goto L1643;
    default:
     break;
   }
  goto ret0;

 L1618: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1619;
    }
  goto ret0;

 L1619: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L1620;
  goto ret0;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1621;
    }
  goto ret0;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L1622;
  goto ret0;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1623;
  goto ret0;

 L1623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1624;
    }
  goto ret0;

 L1624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1625;
  goto ret0;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 185;
    }
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1644;
    }
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1645;
  goto ret0;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1646;
    }
  goto ret0;

 L1646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L1647;
  goto ret0;

 L1647: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1648;
  goto ret0;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1649;
    }
  goto ret0;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1650;
  goto ret0;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 186;
    }
  goto ret0;

 L1693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11212;
  goto ret0;

 L11212: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1694;
    }
 L11213: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1757;
    }
  goto ret0;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1695;
    }
  x3 = XEXP (x2, 0);
  goto L11213;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1696;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1697;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L1700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11214;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L11214: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11216;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L11216: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11218;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L11218: ATTRIBUTE_UNUSED_LABEL
  if ((!optimize_size && !TARGET_USE_CLTD))
    {
      return 189;
    }
 L11219: ATTRIBUTE_UNUSED_LABEL
  if ((optimize_size || TARGET_USE_CLTD))
    {
      return 190;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11213;

 L1757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1758;
    }
  goto ret0;

 L1758: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1759;
  goto ret0;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1760;
    }
  goto ret0;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1761;
  goto ret0;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1762;
  goto ret0;

 L1762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1763;
  goto ret0;

 L1763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1764;
  goto ret0;

 L1764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1765;
    }
  goto ret0;

 L1765: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 191;
    }
  goto ret0;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1795;
    }
  goto ret0;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1796;
    }
  goto ret0;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1797;
  goto ret0;

 L1797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1798;
    }
  goto ret0;

 L1798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1799;
  goto ret0;

 L1799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1800;
  goto ret0;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1801;
  goto ret0;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L1802;
    case USE:
      goto L1841;
    default:
     break;
   }
  goto ret0;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 193;
    }
  goto ret0;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 194;
    }
  goto ret0;

 L11209: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 20)
    goto L5105;
  goto ret0;

 L5105: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L5106;
  goto ret0;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L5107;
    }
  goto ret0;

 L5107: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5108;
    }
  goto ret0;

 L5108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5109;
    }
  goto ret0;

 L5109: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5110;
    }
  goto ret0;

 L5110: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5111;
  goto ret0;

 L5111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L5112;
  goto ret0;

 L5112: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5113;
  goto ret0;

 L5113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5114;
    }
  goto ret0;

 L5114: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 460;
    }
  goto ret0;

 L5376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5377;
    }
  goto ret0;

 L5377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5378;
    }
  goto ret0;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5379;
  goto ret0;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5380;
  goto ret0;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5381;
  goto ret0;

 L5381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L5382;
  goto ret0;

 L5382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 480;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_26 PARAMS ((rtx, rtx, int *));
static int
recog_26 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11197;
    case DImode:
      goto L11188;
    case HImode:
      goto L11199;
    case SFmode:
      goto L11194;
    case DFmode:
      goto L11195;
    case QImode:
      goto L11200;
    default:
      break;
    }
 L4041: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L4042;
  goto ret0;

 L11197: ATTRIBUTE_UNUSED_LABEL
  tem = recog_25 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L4041;

 L11188: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L575;
    }
 L11189: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L757;
    }
 L11196: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3118;
    }
  goto L4041;

 L575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L576;
  x2 = XEXP (x1, 0);
  goto L11189;

 L576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L577;
    }
  x2 = XEXP (x1, 0);
  goto L11189;

 L577: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L578;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11189;

 L578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L579;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11189;

 L579: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L580;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11189;

 L580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      return 87;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11189;

 L757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L758;
  x2 = XEXP (x1, 0);
  goto L11196;

 L758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L759;
    }
  x2 = XEXP (x1, 0);
  goto L11196;

 L759: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L760;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11196;

 L760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L761;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11196;

 L761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L762;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11196;

 L762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L763;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11196;

 L763: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 112;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11196;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11220;
  x2 = XEXP (x1, 0);
  goto L4041;

 L11220: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L3119;
    case ASHIFTRT:
      goto L3283;
    case LSHIFTRT:
      goto L3546;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3120;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3121;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3122;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3123;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3124;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 291;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3284;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3285;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3285: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3286;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3287;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3287: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 302;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3547;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3548;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3549;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3550;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3550: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3551;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L3551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 320;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L11199: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L4980;
 L11191: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L821;
    }
 L11193: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1769;
    }
  goto L4041;

 L4980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4981;
    }
  goto L11191;

 L4981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L4982;
    }
  x2 = XEXP (x1, 0);
  goto L11191;

 L4982: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4983;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4984;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4985;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4986;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L4987;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4987: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L4988;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L4988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11191;

 L821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L822;
  x2 = XEXP (x1, 0);
  goto L11193;

 L822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L823;
    }
  x2 = XEXP (x1, 0);
  goto L11193;

 L823: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L824;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11193;

 L824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L825;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11193;

 L825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L826;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11193;

 L826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L827;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11193;

 L827: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 120;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11193;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11223;
  x2 = XEXP (x1, 0);
  goto L4041;

 L11223: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1770;
    case UDIV:
      goto L1861;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4041;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1771;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1772;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1773;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1774;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L1775;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1776;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1777;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1778;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_HIMODE_MATH))
    {
      return 192;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1862;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L1862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1863;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1865;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L1866;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1867;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1868;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1868: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1869;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L1870;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L1870: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 195;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L11194: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2770;
    }
 L11201: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L5386;
    }
  goto L4041;

 L2770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11225;
  x2 = XEXP (x1, 0);
  goto L11201;

 L11225: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2771;
    case ABS:
      goto L2927;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11201;

 L2771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2772;
    }
  x2 = XEXP (x1, 0);
  goto L11201;

 L2772: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2773;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2774;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2775;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 252;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2928;
    }
  x2 = XEXP (x1, 0);
  goto L11201;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2929;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2930;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2931;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L2931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11201;

 L5386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == IF_THEN_ELSE)
    goto L5387;
  x2 = XEXP (x1, 0);
  goto L4041;

 L5387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L5388;
    }
 L5409: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == EQ)
    goto L5410;
  x2 = XEXP (x1, 0);
  goto L4041;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[4] = x4;
      goto L5389;
    }
  goto L5409;

 L5389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[5] = x4;
      goto L5390;
    }
  goto L5409;

 L5390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5391;
    }
  x3 = XEXP (x2, 0);
  goto L5409;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L5392;
    }
  x3 = XEXP (x2, 0);
  goto L5409;

 L5392: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5393;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5409;

 L5393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[6] = x2;
      goto L5394;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5409;

 L5394: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5395;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5409;

 L5395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE))))
    {
      return 481;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5409;

 L5410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L5411;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[4] = x4;
      goto L5412;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5413;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5414;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5414: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5415;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[5] = x2;
      goto L5416;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5416: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 482;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L11195: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L2811;
    }
 L11202: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L5430;
    }
  goto L4041;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11227;
  x2 = XEXP (x1, 0);
  goto L11202;

 L11227: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L2812;
    case ABS:
      goto L2968;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11202;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2813;
    }
  x2 = XEXP (x1, 0);
  goto L11202;

 L2813: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2815;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2816;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 255;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2969;
    }
  x2 = XEXP (x1, 0);
  goto L11202;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2970;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2971;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2972;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L2972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11202;

 L5430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == IF_THEN_ELSE)
    goto L5431;
  x2 = XEXP (x1, 0);
  goto L4041;

 L5431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L5432;
    }
 L5453: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == EQ)
    goto L5454;
  x2 = XEXP (x1, 0);
  goto L4041;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[4] = x4;
      goto L5433;
    }
  goto L5453;

 L5433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[5] = x4;
      goto L5434;
    }
  goto L5453;

 L5434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5435;
    }
  x3 = XEXP (x2, 0);
  goto L5453;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L5436;
    }
  x3 = XEXP (x2, 0);
  goto L5453;

 L5436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5437;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5453;

 L5437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[6] = x2;
      goto L5438;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5453;

 L5438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5439;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5453;

 L5439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE))))
    {
      return 483;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5453;

 L5454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L5455;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[4] = x4;
      goto L5456;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5457;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5458;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L5458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5459;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[5] = x2;
      goto L5460;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5461;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 484;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L11200: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L4992;
  goto L4041;

 L4992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4993;
    }
  goto L4041;

 L4993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4994;
    }
  x2 = XEXP (x1, 0);
  goto L4041;

 L4994: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4995;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4996;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4998;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L4999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4999: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5000;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L5000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 455;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4041;

 L4042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L4043;
  goto ret0;

 L4043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4044;
    }
  goto ret0;

 L4044: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4045;
    }
  goto ret0;

 L4045: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4046;
    }
 L4068: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4069;
    }
  goto ret0;

 L4046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4047;
    case PC:
      goto L4116;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4048;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4049;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4050;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4051;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4051: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4052;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 358;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4117;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4118;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4119;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4120: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 361;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4068;

 L4069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4070;
    case PC:
      goto L4140;
    default:
     break;
   }
  goto ret0;

 L4070: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4071;

 L4071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4072;
  goto ret0;

 L4072: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4073;
  goto ret0;

 L4073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4074;
  goto ret0;

 L4074: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4075;
  goto ret0;

 L4075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L11229;
  goto ret0;

 L11229: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11231;
  goto ret0;

 L11231: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11233;
  goto ret0;

 L11233: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 359;
    }
 L11234: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 360;
    }
  goto ret0;

 L4140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4141;
  goto ret0;

 L4141: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4142;

 L4142: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4143;
  goto ret0;

 L4143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4144;
  goto ret0;

 L4144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4145;
  goto ret0;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L11235;
  goto ret0;

 L11235: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11237;
  goto ret0;

 L11237: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11239;
  goto ret0;

 L11239: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 362;
    }
 L11240: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 363;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_27 PARAMS ((rtx, rtx, int *));
static int
recog_27 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM)
    goto L4864;
 L11243: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L772;
    }
 L11245: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1740;
    }
  goto ret0;

 L4864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4865;
    }
  goto L11243;

 L4865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4866;
  x2 = XEXP (x1, 0);
  goto L11243;

 L4866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4867;
    }
  x2 = XEXP (x1, 0);
  goto L11243;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4868;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4869;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4870;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L4871;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L4872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4872: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4873;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4874;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4875;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L4876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L4877;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4877: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L4878;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 448;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11243;

 L772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L773;
  x2 = XEXP (x1, 0);
  goto L11245;

 L773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L774;
    }
  x2 = XEXP (x1, 0);
  goto L11245;

 L774: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L775;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L776;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L776: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L777;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L778;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L778: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L779;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L780;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L780: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 114;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11245;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11250;
  goto ret0;

 L11250: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1741;
    case UDIV:
      goto L1818;
    case UNSPEC:
      goto L11256;
    case PLUS:
      goto L4492;
    default:
     break;
   }
  goto ret0;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1742;
    }
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1743;
    }
  goto ret0;

 L1743: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1744;
  goto ret0;

 L1744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1745;
    }
  goto ret0;

 L1745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1746;
  goto ret0;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1747;
  goto ret0;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1748;
  goto ret0;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1749;
  goto ret0;

 L1749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1750;
    }
  goto ret0;

 L1750: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1751;
  goto ret0;

 L1751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 191;
    }
  goto ret0;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1819;
    }
  goto ret0;

 L1819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1820;
    }
  goto ret0;

 L1820: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1821;
  goto ret0;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1822;
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1823;
  goto ret0;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1824;
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1825;
  goto ret0;

 L1825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1826;
  goto ret0;

 L1826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3]))
    goto L1827;
  goto ret0;

 L1827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1828;
  goto ret0;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 194;
    }
  goto ret0;

 L11256: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 3:
      goto L11259;
    case 2:
      goto L11260;
    case 4:
      goto L11261;
    default:
      break;
    }
  goto ret0;

 L11259: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 16)
    goto L4416;
  goto ret0;

 L4416: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4417;
    }
  goto ret0;

 L4417: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tls_symbolic_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4418;
    }
  goto ret0;

 L4418: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (call_insn_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4419;
    }
  goto ret0;

 L4419: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4420;
  goto ret0;

 L4420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4421;
    }
  goto ret0;

 L4421: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4422;
  goto ret0;

 L4422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4423;
    }
  goto ret0;

 L4423: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4424;
  goto ret0;

 L4424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11262;
  goto ret0;

 L11262: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11264;
  goto ret0;

 L11264: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11266;
  goto ret0;

 L11266: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_GNU_TLS))
    {
      return 385;
    }
 L11267: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SUN_TLS))
    {
      return 386;
    }
  goto ret0;

 L11260: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 17)
    goto L4456;
  goto ret0;

 L4456: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4457;
    }
  goto ret0;

 L4457: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_insn_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4458;
    }
  goto ret0;

 L4458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4459;
  goto ret0;

 L4459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4460;
    }
  goto ret0;

 L4460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4461;
  goto ret0;

 L4461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4462;
    }
  goto ret0;

 L4462: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4463;
  goto ret0;

 L4463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11268;
  goto ret0;

 L11268: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11270;
  goto ret0;

 L11270: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11272;
  goto ret0;

 L11272: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_GNU_TLS))
    {
      return 387;
    }
 L11273: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SUN_TLS))
    {
      return 388;
    }
  goto ret0;

 L11261: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 20)
    goto L5090;
  goto ret0;

 L5090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L5091;
  goto ret0;

 L5091: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L5092;
    }
  goto ret0;

 L5092: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5093;
    }
  goto ret0;

 L5093: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5094;
    }
  goto ret0;

 L5094: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5095;
    }
  goto ret0;

 L5095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5096;
  goto ret0;

 L5096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L5097;
  goto ret0;

 L5097: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5098;
  goto ret0;

 L5098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5099;
    }
  goto ret0;

 L5099: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5100;
  goto ret0;

 L5100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 460;
    }
  goto ret0;

 L4492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 17)
    goto L4493;
  goto ret0;

 L4493: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4494;
    }
  goto ret0;

 L4494: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (call_insn_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4495;
    }
  goto ret0;

 L4495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == CONST)
    goto L4496;
  goto ret0;

 L4496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 1
      && XINT (x4, 1) == 6)
    goto L4497;
  goto ret0;

 L4497: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (tls_symbolic_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L4498;
    }
  goto ret0;

 L4498: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4499;
  goto ret0;

 L4499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4500;
    }
  goto ret0;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4501;
  goto ret0;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4502;
    }
  goto ret0;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4503;
  goto ret0;

 L4503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 389;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_28 PARAMS ((rtx, rtx, int *));
static int
recog_28 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L11241;
    case SImode:
      goto L11247;
    case HImode:
      goto L11248;
    case QImode:
      goto L11249;
    default:
      break;
    }
 L4182: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L4183;
  goto ret0;

 L11241: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L733;
    }
 L11242: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L745;
    }
  goto L4182;

 L733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L734;
  x2 = XEXP (x1, 0);
  goto L11242;

 L734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L735;
    }
  x2 = XEXP (x1, 0);
  goto L11242;

 L735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L736;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L737;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L738;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L739;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L739: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L740;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L741;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L741: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 111;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11242;

 L745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L746;
  x2 = XEXP (x1, 0);
  goto L4182;

 L746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L747;
    }
  x2 = XEXP (x1, 0);
  goto L4182;

 L747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L749;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L751;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L751: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[4] = x2;
      goto L753;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L753: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 112;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L11247: ATTRIBUTE_UNUSED_LABEL
  tem = recog_27 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L4182;

 L11248: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L4882;
 L11244: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L809;
    }
 L11246: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1845;
    }
  goto L4182;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4883;
    }
  goto L11244;

 L4883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L4884;
  x2 = XEXP (x1, 0);
  goto L11244;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4885;
    }
  x2 = XEXP (x1, 0);
  goto L11244;

 L4885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4886;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4887;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4888;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L4889;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L4890;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4891;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4892;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4893;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L4894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L4895;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L4896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L4896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 449;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11244;

 L809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L810;
  x2 = XEXP (x1, 0);
  goto L11246;

 L810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L811;
    }
  x2 = XEXP (x1, 0);
  goto L11246;

 L811: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L812;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L813;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L813: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L815;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L816;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L817;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L817: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 119;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11246;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UDIV)
    goto L1846;
  x2 = XEXP (x1, 0);
  goto L4182;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1847;
    }
  x2 = XEXP (x1, 0);
  goto L4182;

 L1847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1848;
    }
  x2 = XEXP (x1, 0);
  goto L4182;

 L1848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1850;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L1851;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1852;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1853;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1854;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L1855;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 195;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L11249: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L4900;
  goto L4182;

 L4900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4901;
    }
  goto L4182;

 L4901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L4902;
  x2 = XEXP (x1, 0);
  goto L4182;

 L4902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4903;
    }
  x2 = XEXP (x1, 0);
  goto L4182;

 L4903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4904;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4905;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4906;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L4907;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L4908;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4908: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4909;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4910;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4911;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4911: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L4912;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L4913;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4913: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L4914;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 450;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4182;

 L4183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L4304;
  goto ret0;

 L4304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L4305;
 L4184: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4185;
    }
  goto ret0;

 L4305: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4306;
    }
  goto L4184;

 L4306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L4307;
  goto L4184;

 L4307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4308;
  x3 = XEXP (x2, 0);
  goto L4184;

 L4308: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  goto L4309;

 L4309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4310;
  x3 = XEXP (x2, 0);
  goto L4184;

 L4310: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4312;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4313;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4314;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    goto L4315;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4315: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4316;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4317;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4317: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4318;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_USE_LOOP))
    {
      return 371;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4184;

 L4185: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4186;
    }
  goto ret0;

 L4186: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4187;
    }
 L4239: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4240;
    }
  goto ret0;

 L4187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4188;
    case PC:
      goto L4214;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4189;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4190;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4191;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4192;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4192: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4193;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4194;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L4196;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4196: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 364;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4215;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4215: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4216;

 L4216: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4218;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4218: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4219;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4220;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4220: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4221;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L4222;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4222: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 365;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4239;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4241;
    case PC:
      goto L4267;
    default:
     break;
   }
  goto ret0;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4242;

 L4242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4243;
  goto ret0;

 L4243: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4244;
  goto ret0;

 L4244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4245;
  goto ret0;

 L4245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4246;
  goto ret0;

 L4246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4247;
  goto ret0;

 L4247: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4248;
  goto ret0;

 L4248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L4249;
    }
  goto ret0;

 L4249: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 366;
    }
  goto ret0;

 L4267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4268;
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4269;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4270;
  goto ret0;

 L4270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4271;
  goto ret0;

 L4271: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4272;
  goto ret0;

 L4272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4273;
  goto ret0;

 L4273: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4274;
  goto ret0;

 L4274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L4275;
    }
  goto ret0;

 L4275: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 367;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_29 PARAMS ((rtx, rtx, int *));
static int
recog_29 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L219;
    case 3:
      goto L5556;
    case 5:
      goto L717;
    case 4:
      goto L5544;
    case 6:
      goto L4916;
    case 7:
      goto L5042;
    case 17:
      goto L6761;
    default:
      break;
    }
  goto ret0;

 L219: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L220;
    case CALL:
      goto L4336;
    case RETURN:
      goto L4367;
    default:
     break;
   }
  goto ret0;

 L220: ATTRIBUTE_UNUSED_LABEL
  return recog_24 (x0, insn, pnum_clobbers);

 L4336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L4337;
  goto ret0;

 L4337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11185;
  goto ret0;

 L11185: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4338;
    }
 L11186: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4348;
    }
  goto ret0;

 L4338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4339;

 L4339: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4340;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11186;

 L4340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L4341;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11186;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4342;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11186;

 L4342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L4343;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11186;

 L4343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      return 372;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11186;

 L4348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4349;

 L4349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4350;
  goto ret0;

 L4350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L4351;
  goto ret0;

 L4351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4352;
  goto ret0;

 L4352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L4353;
  goto ret0;

 L4353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      return 373;
    }
  goto ret0;

 L4367: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L4373;
  goto ret0;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4374;
    }
  if (const_int_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4369;
    }
  goto ret0;

 L4374: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 379;
    }
  goto ret0;

 L4369: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 378;
    }
  goto ret0;

 L5556: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 10)
    goto L5557;
  if (GET_CODE (x1) == SET)
    goto L227;
  goto ret0;

 L5557: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5558;
    }
  goto ret0;

 L5558: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5559;
  goto ret0;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5560;
  goto ret0;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L5561;
  goto ret0;

 L5561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5562;
  goto ret0;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L5563;
  goto ret0;

 L5563: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5564;
  goto ret0;

 L5564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0])
      && (!TARGET_64BIT && TARGET_STACK_PROBE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 493;
    }
  goto ret0;

 L227: ATTRIBUTE_UNUSED_LABEL
  return recog_26 (x0, insn, pnum_clobbers);

 L717: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L718;
  goto ret0;

 L718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L719;
    }
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L720;
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L721;
    }
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L722;
  goto ret0;

 L722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L723;
    }
  goto ret0;

 L723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L724;
  goto ret0;

 L724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L725;
    }
  goto ret0;

 L725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L726;
  goto ret0;

 L726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L727;
    }
  goto ret0;

 L727: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L728;
  goto ret0;

 L728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[5] = x2;
      goto L729;
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 111;
    }
  goto ret0;

 L5544: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 10)
    goto L5545;
  if (GET_CODE (x1) == SET)
    goto L732;
  goto ret0;

 L5545: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5546;
    }
  goto ret0;

 L5546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5547;
  goto ret0;

 L5547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5548;
  goto ret0;

 L5548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L5549;
  goto ret0;

 L5549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5550;
  goto ret0;

 L5550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L5551;
  goto ret0;

 L5551: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5552;
  goto ret0;

 L5552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5553;
  goto ret0;

 L5553: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5554;
  goto ret0;

 L5554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_STACK_PROBE))
    {
      return 493;
    }
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  return recog_28 (x0, insn, pnum_clobbers);

 L4916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4917;
  goto ret0;

 L4917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L11274;
  goto ret0;

 L11274: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4918;
    }
 L11275: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5004;
    }
  goto ret0;

 L4918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L4919;
  x2 = XEXP (x1, 0);
  goto L11275;

 L4919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4922;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11276;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L11276: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L4923;
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4950;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4923: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L4924;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4924: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L4925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4926;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4927;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4928;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4929;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L4930;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[5]))
    goto L4931;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L4932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4933;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4933: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L4934;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4935;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L4936;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L4938;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4938: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L4939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L4940;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4940: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L4941;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    {
      return 451;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L4951;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L4952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4953;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4953: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4954;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4955;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[5]))
    goto L4956;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4956: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L4957;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L4959;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L4961;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L4962;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L4963;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L4964;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L4964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    {
      return 452;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11275;

 L5004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L5005;
  goto ret0;

 L5005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5006;
  goto ret0;

 L5006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5007;
    }
  goto ret0;

 L5007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5008;
  goto ret0;

 L5008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11278;
  goto ret0;

 L11278: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L5009;
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5030;
    }
  goto ret0;

 L5009: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5010;
    }
  goto ret0;

 L5010: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L5011;
  goto ret0;

 L5011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5012;
    }
  goto ret0;

 L5012: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5013;
  goto ret0;

 L5013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L5014;
  goto ret0;

 L5014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L5015;
  goto ret0;

 L5015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L5016;
  goto ret0;

 L5016: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5017;
  goto ret0;

 L5017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5018;
    }
  goto ret0;

 L5018: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L5019;
  goto ret0;

 L5019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L5020;
  goto ret0;

 L5020: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L5021;
  goto ret0;

 L5021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    {
      return 456;
    }
  goto ret0;

 L5030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5031;
    }
  goto ret0;

 L5031: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5032;
  goto ret0;

 L5032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L5033;
  goto ret0;

 L5033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L5034;
  goto ret0;

 L5034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L5035;
  goto ret0;

 L5035: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5036;
  goto ret0;

 L5036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5037;
    }
  goto ret0;

 L5037: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L5038;
  goto ret0;

 L5038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L5039;
  goto ret0;

 L5039: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L5040;
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    {
      return 457;
    }
  goto ret0;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5043;
  goto ret0;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5044;
  goto ret0;

 L5044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode)
    goto L11280;
  goto ret0;

 L11280: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L5045;
    case IF_THEN_ELSE:
      goto L5065;
    default:
     break;
   }
  goto ret0;

 L5045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L5046;
  goto ret0;

 L5046: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5047;
    }
  goto ret0;

 L5047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L5048;
  goto ret0;

 L5048: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L5049;
    }
  goto ret0;

 L5049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5050;
  goto ret0;

 L5050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5051;
    }
  goto ret0;

 L5051: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5052;
  goto ret0;

 L5052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5053;
    }
  goto ret0;

 L5053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5054;
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L5055;
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L5056;
  goto ret0;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5057;
    }
  goto ret0;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L5058;
  goto ret0;

 L5058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5059;
    }
  goto ret0;

 L5059: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L5060;
  goto ret0;

 L5060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 458;
    }
  goto ret0;

 L5065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L5066;
  goto ret0;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[6] = x4;
      goto L5067;
    }
  goto ret0;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L5068;
  goto ret0;

 L5068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == COMPARE)
    goto L5069;
  goto ret0;

 L5069: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L5070;
  goto ret0;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L5071;
    }
  goto ret0;

 L5071: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L5072;
  goto ret0;

 L5072: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5073;
    }
  goto ret0;

 L5073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5074;
  goto ret0;

 L5074: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5075;
  goto ret0;

 L5075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5076;
    }
  goto ret0;

 L5076: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5077;
  goto ret0;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5078;
  goto ret0;

 L5078: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5079;
  goto ret0;

 L5079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L5080;
  goto ret0;

 L5080: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L5081;
  goto ret0;

 L5081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5082;
    }
  goto ret0;

 L5082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L5083;
  goto ret0;

 L5083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5084;
    }
  goto ret0;

 L5084: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L5085;
  goto ret0;

 L5085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 459;
    }
  goto ret0;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == UNSPEC_VOLATILE)
    goto L11282;
  goto ret0;

 L11282: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11284;
  goto ret0;

 L11284: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 31:
      goto L6762;
    case 46:
      goto L6864;
    default:
      break;
    }
  goto ret0;

 L6762: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6763;
  goto ret0;

 L6763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6764;
  goto ret0;

 L6764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 8)
    goto L6765;
  goto ret0;

 L6765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6766;
  goto ret0;

 L6766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 9)
    goto L6767;
  goto ret0;

 L6767: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L6768;
  goto ret0;

 L6768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 10)
    goto L6769;
  goto ret0;

 L6769: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6770;
  goto ret0;

 L6770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 11)
    goto L6771;
  goto ret0;

 L6771: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6772;
  goto ret0;

 L6772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 12)
    goto L6773;
  goto ret0;

 L6773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6774;
  goto ret0;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 13)
    goto L6775;
  goto ret0;

 L6775: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER)
    goto L6776;
  goto ret0;

 L6776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L6777;
  goto ret0;

 L6777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 8);
  if (GET_CODE (x1) == CLOBBER)
    goto L6778;
  goto ret0;

 L6778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    goto L6779;
  goto ret0;

 L6779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 9);
  if (GET_CODE (x1) == CLOBBER)
    goto L6780;
  goto ret0;

 L6780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L6781;
  goto ret0;

 L6781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 10);
  if (GET_CODE (x1) == CLOBBER)
    goto L6782;
  goto ret0;

 L6782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L6783;
  goto ret0;

 L6783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 11);
  if (GET_CODE (x1) == CLOBBER)
    goto L6784;
  goto ret0;

 L6784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L6785;
  goto ret0;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 12);
  if (GET_CODE (x1) == CLOBBER)
    goto L6786;
  goto ret0;

 L6786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 32)
    goto L6787;
  goto ret0;

 L6787: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 13);
  if (GET_CODE (x1) == CLOBBER)
    goto L6788;
  goto ret0;

 L6788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 33)
    goto L6789;
  goto ret0;

 L6789: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 14);
  if (GET_CODE (x1) == CLOBBER)
    goto L6790;
  goto ret0;

 L6790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 34)
    goto L6791;
  goto ret0;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 15);
  if (GET_CODE (x1) == CLOBBER)
    goto L6792;
  goto ret0;

 L6792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 35)
    goto L6793;
  goto ret0;

 L6793: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 16);
  if (GET_CODE (x1) == CLOBBER)
    goto L6794;
  goto ret0;

 L6794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 36
      && (TARGET_MMX))
    {
      return 664;
    }
  goto ret0;

 L6864: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6865;
  goto ret0;

 L6865: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6866;
  goto ret0;

 L6866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 8)
    goto L6867;
  goto ret0;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6868;
  goto ret0;

 L6868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 9)
    goto L6869;
  goto ret0;

 L6869: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L6870;
  goto ret0;

 L6870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 10)
    goto L6871;
  goto ret0;

 L6871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6872;
  goto ret0;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 11)
    goto L6873;
  goto ret0;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6874;
  goto ret0;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 12)
    goto L6875;
  goto ret0;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6876;
  goto ret0;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 13)
    goto L6877;
  goto ret0;

 L6877: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER)
    goto L6878;
  goto ret0;

 L6878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L6879;
  goto ret0;

 L6879: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 8);
  if (GET_CODE (x1) == CLOBBER)
    goto L6880;
  goto ret0;

 L6880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    goto L6881;
  goto ret0;

 L6881: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 9);
  if (GET_CODE (x1) == CLOBBER)
    goto L6882;
  goto ret0;

 L6882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L6883;
  goto ret0;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 10);
  if (GET_CODE (x1) == CLOBBER)
    goto L6884;
  goto ret0;

 L6884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L6885;
  goto ret0;

 L6885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 11);
  if (GET_CODE (x1) == CLOBBER)
    goto L6886;
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L6887;
  goto ret0;

 L6887: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 12);
  if (GET_CODE (x1) == CLOBBER)
    goto L6888;
  goto ret0;

 L6888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 32)
    goto L6889;
  goto ret0;

 L6889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 13);
  if (GET_CODE (x1) == CLOBBER)
    goto L6890;
  goto ret0;

 L6890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 33)
    goto L6891;
  goto ret0;

 L6891: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 14);
  if (GET_CODE (x1) == CLOBBER)
    goto L6892;
  goto ret0;

 L6892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 34)
    goto L6893;
  goto ret0;

 L6893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 15);
  if (GET_CODE (x1) == CLOBBER)
    goto L6894;
  goto ret0;

 L6894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 35)
    goto L6895;
  goto ret0;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 16);
  if (GET_CODE (x1) == CLOBBER)
    goto L6896;
  goto ret0;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 36
      && (TARGET_3DNOW))
    {
      return 677;
    }
  goto ret0;
 ret0:
  return -1;
}

int recog PARAMS ((rtx, rtx, int *));
int
recog (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L100;
    case PARALLEL:
      goto L10046;
    case CALL:
      goto L4355;
    case UNSPEC_VOLATILE:
      goto L10050;
    case RETURN:
      goto L10051;
    case CONST_INT:
      goto L10052;
    case TRAP_IF:
      goto L5602;
    case PREFETCH:
      goto L7060;
    default:
     break;
   }
  goto ret0;

 L100: ATTRIBUTE_UNUSED_LABEL
  return recog_17 (x0, insn, pnum_clobbers);

 L10046: ATTRIBUTE_UNUSED_LABEL
  return recog_29 (x0, insn, pnum_clobbers);

 L4355: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L4356;
  goto ret0;

 L4356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (constant_call_address_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4357;
    }
 L4360: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4361;
    }
  goto ret0;

 L4357: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  return 374;

 L4361: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  return 375;

 L10050: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L11286;
    case 2:
      goto L11292;
    case 3:
      goto L11293;
    default:
      break;
    }
  goto ret0;

 L11286: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 0:
      goto L4363;
    case 13:
      goto L4388;
    case 31:
      goto L6796;
    case 37:
      goto L6798;
    case 46:
      goto L6898;
    case 57:
      goto L8156;
    default:
      break;
    }
  goto ret0;

 L4363: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 376;

 L4388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 382;
    }
  goto ret0;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0
      && (TARGET_MMX)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 16;
      return 664;
    }
  goto ret0;

 L6798: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L6799;
    }
  goto ret0;

 L6799: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 665;
    }
  goto ret0;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0
      && (TARGET_3DNOW)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 16;
      return 677;
    }
  goto ret0;

 L8156: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (address_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8157;
    }
  goto ret0;

 L8157: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 826;
    }
  goto ret0;

 L11292: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 70)
    goto L8167;
  goto ret0;

 L8167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8168;
    }
  goto ret0;

 L8168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8169;
    }
  goto ret0;

 L8169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 829;
    }
  goto ret0;

 L11293: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 69)
    goto L8171;
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8172;
    }
  goto ret0;

 L8172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8173;
    }
  goto ret0;

 L8173: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L8174;
    }
  goto ret0;

 L8174: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE3))
    {
      return 830;
    }
  goto ret0;

 L10051: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 377;
    }
  goto ret0;

 L10052: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0)
    {
      return 380;
    }
  goto ret0;

 L5602: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 1)
    goto L5603;
  if (comparison_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L5606;
    }
  goto ret0;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 5)
    {
      return 498;
    }
  goto ret0;

 L5606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5607;
  goto ret0;

 L5607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L5608;
  goto ret0;

 L5608: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      return 499;
    }
  goto ret0;

 L7060: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7061;
    }
  goto ret0;

 L7061: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L11294;
  goto ret0;

 L11294: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0)
    goto L7062;
 L11295: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7067;
    }
  goto ret0;

 L7062: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7063;
    }
  x1 = XEXP (x0, 1);
  goto L11295;

 L7063: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PREFETCH_SSE && !TARGET_64BIT))
    {
      return 694;
    }
  x1 = XEXP (x0, 1);
  goto L11295;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 3
      && (TARGET_3DNOW && !TARGET_64BIT))
    {
      return 695;
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx split_1 PARAMS ((rtx, rtx));
static rtx
split_1 (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L11301;
    case SFmode:
      goto L11303;
    case DFmode:
      goto L11304;
    case SImode:
      goto L11306;
    case HImode:
      goto L11307;
    case QImode:
      goto L11308;
    default:
      break;
    }
 L8266: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8267;
    }
 L8270: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case XFmode:
      goto L11310;
    case TFmode:
      goto L11311;
    default:
      break;
    }
 L8578: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L11313;
    case STRICT_LOW_PART:
      goto L9135;
    case PC:
      goto L9158;
    default:
     break;
   }
 L8277: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8278;
    }
 L10006: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L10007;
    }
 L10010: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case TImode:
      goto L11314;
    case V2DFmode:
      goto L11315;
    case V2DImode:
      goto L11316;
    case V8HImode:
      goto L11317;
    case V16QImode:
      goto L11318;
    case V4SFmode:
      goto L11319;
    case V4SImode:
      goto L11320;
    case V2SImode:
      goto L11321;
    case V4HImode:
      goto L11322;
    case V8QImode:
      goto L11323;
    case V2SFmode:
      goto L11324;
    default:
      break;
    }
 L8281: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8592;
    }
 L10043: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L10044;
    }
  goto ret0;

 L11301: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8240;
    }
 L11302: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8489;
    }
  goto L8266;

 L8240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8241;
    }
  x1 = XEXP (x0, 0);
  goto L11302;

 L8241: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))))
    {
      return gen_split_859 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L11302;

 L8489: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == FIX)
    goto L8490;
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8245;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8491;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8491: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)&& 1))
    {
      return gen_split_922 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8245: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))))
    {
      return gen_split_860 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11303: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L8248;
    }
  goto L8266;

 L8248: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L11326;
  x1 = XEXP (x0, 0);
  goto L8266;

 L11326: ATTRIBUTE_UNUSED_LABEL
  if (any_fp_register_operand (x1, SFmode))
    {
      operands[1] = x1;
      return gen_split_863 (operands);
    }
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L8249;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8249: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && GET_CODE (operands[1]) == MEM
   && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
   && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0))))
    {
      return gen_split_862 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11304: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L11327;
    case REG:
      goto L11328;
    default:
     break;
   }
 L11305: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L8263;
    }
  goto L8266;

 L11327: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L8255;
    }
  goto L11305;

 L8255: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L11329;
 L8259: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L8260;
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L11329: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L11331;
    case FLOAT_EXTEND:
      goto L8380;
    default:
     break;
   }
  goto L8259;

 L11331: ATTRIBUTE_UNUSED_LABEL
  if (any_fp_register_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L8256;
    }
  goto L8259;

 L8256: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed))
    {
      return gen_split_865 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L8259;

 L8380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      return gen_split_892 (operands);
    }
  goto L8259;

 L8260: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_866 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L11328: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_any_fp_reg_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L9387;
    }
  goto L11305;

 L9387: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L9388;
  x1 = XEXP (x0, 0);
  goto L11305;

 L9388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9389;
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L9389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L9390;

 L9390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9391;
  x1 = XEXP (x0, 0);
  goto L11305;

 L9391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9392;
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L9392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L9393;
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L9393: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed))
    {
      return gen_split_1187 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L11305;

 L8263: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L8264;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8264: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))))
    {
      return gen_split_867 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11306: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8522;
    }
  goto L8266;

 L8522: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L8523;
  x1 = XEXP (x0, 0);
  goto L8266;

 L8523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8524;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8524: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))&& 1))
    {
      return gen_split_929 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11307: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L8551;
    }
  goto L8266;

 L8551: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == FIX)
    goto L8552;
  x1 = XEXP (x0, 0);
  goto L8266;

 L8552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      return gen_split_936 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11308: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L9128;
    }
  goto L8266;

 L9128: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11332;
  x1 = XEXP (x0, 0);
  goto L8266;

 L11332: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L9129;
    case EQ:
      goto L9144;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8266;

 L9129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9130;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L9130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9131;
  x1 = XEXP (x0, 0);
  goto L8266;

 L9131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9132;
  x1 = XEXP (x0, 0);
  goto L8266;

 L9132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1114 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L9144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9145;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L9145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9146;
  x1 = XEXP (x0, 0);
  goto L8266;

 L9146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9147;
  x1 = XEXP (x0, 0);
  goto L8266;

 L9147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1116 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L8268;
    }
  x1 = XEXP (x0, 0);
  goto L8270;

 L8268: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1])))
    {
      return gen_split_870 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8270;

 L11310: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L8271;
    }
  goto L8578;

 L8271: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L11334;
  x1 = XEXP (x0, 0);
  goto L8578;

 L11334: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L11336;
    case FLOAT_EXTEND:
      goto L8384;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11336: ATTRIBUTE_UNUSED_LABEL
  if (any_fp_register_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L8272;
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L8272: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE))
    {
      return gen_split_871 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L8384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11337;
    case DFmode:
      goto L11338;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11337: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L8385;
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L8385: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE))
    {
      return gen_split_893 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11338: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L8394;
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L8394: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_128BIT_LONG_DOUBLE))
    {
      return gen_split_895 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11311: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L8275;
    }
  goto L8578;

 L8275: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L11339;
  x1 = XEXP (x0, 0);
  goto L8578;

 L11339: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L11341;
    case FLOAT_EXTEND:
      goto L8389;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11341: ATTRIBUTE_UNUSED_LABEL
  if (any_fp_register_operand (x1, TFmode))
    {
      operands[1] = x1;
      return gen_split_872 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L8389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11342;
    case DFmode:
      goto L11343;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11342: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      return gen_split_894 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11343: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      return gen_split_896 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8578;

 L11313: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 17)
    goto L8669;
 L11312: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8579;
    }
  goto L8277;

 L8669: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L8670;
  x1 = XEXP (x0, 0);
  goto L11312;

 L8670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L8671;
    case AND:
      goto L8679;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L8672;
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8673;
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8674;
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_991 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L8680;
    }
 L8686: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L8687;
    }
 L9542: ATTRIBUTE_UNUSED_LABEL
  if (aligned_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L9543;
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8681;
    }
  x3 = XEXP (x2, 0);
  goto L8686;

 L8681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (reload_completed
    && QI_REG_P (operands[0])
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[1]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[1]) & ~(127 << 8))))
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_992 (operands);
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8686;

 L8687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8688;
    }
  x3 = XEXP (x2, 0);
  goto L9542;

 L8688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (reload_completed
    && (!REG_P (operands[0]) || ANY_QI_REG_P (operands[0]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[1]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[1]) & ~127)))
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_993 (operands);
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9542;

 L9543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9544;
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L9544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size))
    {
      return gen_split_1211 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L11312;

 L8579: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == FLOAT)
    goto L8580;
  x1 = XEXP (x0, 0);
  goto L8277;

 L8580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8581;
    }
  x1 = XEXP (x0, 0);
  goto L8277;

 L8581: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_943 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8277;

 L9135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9136;
    }
  goto L10010;

 L9136: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11344;
  x1 = XEXP (x0, 0);
  goto L10010;

 L11344: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L9137;
    case EQ:
      goto L9152;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9138;
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9139;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9140;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1115 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9153;
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9154;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9155;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1117 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9158: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L9159;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L9160;
    case EQ:
      goto L9171;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L9161;
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9161: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L9162;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L9163;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9164;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L9165;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L9166;

 L9166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_1136 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L9172;
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L9172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L9173;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9173: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L9174;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9175;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L9176;
  x1 = XEXP (x0, 0);
  goto L10010;

 L9176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L9177;

 L9177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_1137 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L8278: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L8279;
    }
  x1 = XEXP (x0, 0);
  goto L10006;

 L8279: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (GET_MODE (operands[0]) == XFmode || GET_MODE (operands[0]) == TFmode)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))))
    {
      return gen_split_873 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10006;

 L10007: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L10008;
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L10008: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed
   && (SSE_REG_P (operands[1]) || MMX_REG_P (operands[1]))))
    {
      return gen_split_1283 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10010;

 L11314: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L10011;
    }
  goto L8281;

 L10011: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, TImode))
    {
      operands[1] = x1;
      return gen_split_1284 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11315: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L10014;
    }
  goto L8281;

 L10014: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      return gen_split_1285 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11316: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L10017;
    }
  goto L8281;

 L10017: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2DImode))
    {
      operands[1] = x1;
      return gen_split_1286 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11317: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L10020;
    }
  goto L8281;

 L10020: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V8HImode))
    {
      operands[1] = x1;
      return gen_split_1287 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11318: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L10023;
    }
  goto L8281;

 L10023: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V16QImode))
    {
      operands[1] = x1;
      return gen_split_1288 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11319: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L10026;
    }
  goto L8281;

 L10026: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      return gen_split_1289 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11320: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L10029;
    }
  goto L8281;

 L10029: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SImode))
    {
      operands[1] = x1;
      return gen_split_1290 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11321: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L10032;
    }
  goto L8281;

 L10032: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SImode))
    {
      operands[1] = x1;
      return gen_split_1291 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11322: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L10035;
    }
  goto L8281;

 L10035: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4HImode))
    {
      operands[1] = x1;
      return gen_split_1292 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11323: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L10038;
    }
  goto L8281;

 L10038: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V8QImode))
    {
      operands[1] = x1;
      return gen_split_1293 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L11324: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L10041;
    }
  goto L8281;

 L10041: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      return gen_split_1294 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L8281;

 L8592: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8593;
    case IF_THEN_ELSE:
      goto L9511;
    case NOT:
      goto L9555;
    case SUBREG:
    case MEM:
      goto L8282;
    default:
      goto L9296;
   }
 L8282: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L8283;
    }
 L9296: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L9297;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L8593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L8610;
    case MULT:
      goto L8602;
    default:
     break;
   }
  goto L9296;

 L8610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L8611;
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8595;
    }
  goto L9296;

 L8611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (index_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L8612;
    }
  goto L9296;

 L8612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L8613;
    }
  goto L9296;

 L8613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L8614;
    }
  goto L9296;

 L8614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L8615;
    }
  goto L9296;

 L8615: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])&& reload_completed))
    {
      return gen_split_949 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L9296;

 L8595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8596;
    }
  goto L9296;

 L8596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L8597;
    }
  goto L9296;

 L8597: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)&& reload_completed))
    {
      return gen_split_947 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L9296;

 L8602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8603;
    }
  goto L9296;

 L8603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8604;
    }
  goto L9296;

 L8604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L8605;
    }
  goto L9296;

 L8605: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)&& reload_completed))
    {
      return gen_split_948 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L9296;

 L9511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9561;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9562;
 L9512: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L9513;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9563;
  x3 = XEXP (x2, 0);
  goto L9512;

 L9563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L9564;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9512;

 L9564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L9565;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9512;

 L9565: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1214 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9512;

 L9513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L9514;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L9515;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L9516;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9516: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_REG_P (operands[0]) && reload_completed
   && (const0_operand (operands[2], GET_MODE (operands[0]))
       || const0_operand (operands[3], GET_MODE (operands[0])))))
    {
      return gen_split_1205 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9556;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9556: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1213 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L8283: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode || GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
   && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0))
   && (!(SSE_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && SSE_REG_P (SUBREG_REG (operands[0]))))
       || standard_sse_constant_p (get_pool_constant (XEXP (operands[1], 0))))
   && (!(FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[0]))))
       || standard_80387_constant_p (get_pool_constant (XEXP (operands[1], 0))))))
    {
      return gen_split_874 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == FLOAT)
    goto L9298;
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9305;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9299;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L9300;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9300: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1165 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == FLOAT)
    goto L9306;
  x1 = XEXP (x0, 0);
  goto L10043;

 L9306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9307;
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L9307: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1166 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10043;

 L10044: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L10045;
    }
  goto ret0;

 L10045: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1])))
    {
      return gen_split_1295 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx split_2 PARAMS ((rtx, rtx));
static rtx
split_2 (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11346;
    case HImode:
      goto L11347;
    case DImode:
      goto L11348;
    case SFmode:
      goto L11350;
    case DFmode:
      goto L11353;
    case XFmode:
      goto L11359;
    case TFmode:
      goto L11361;
    default:
      break;
    }
 L9004: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L9005;
 L8618: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8619;
    }
 L8699: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8700;
    }
 L8715: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8716;
    }
 L8811: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8812;
    }
 L9547: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9548;
    }
  goto ret0;

 L11346: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8287;
    }
  goto L9004;

 L8287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L8288;
  x2 = XEXP (x1, 0);
  goto L9004;

 L8288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L11364;
    case QImode:
      goto L11365;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L11364: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L8289;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return gen_split_876 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11365: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L8317;
    }
 L11366: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L8331;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8317: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8318;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11366;

 L8318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11367;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11366;

 L11367: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11369;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11366;

 L11369: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11371;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11366;

 L11371: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))))
    {
      return gen_split_882 (operands);
    }
 L11372: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      return gen_split_883 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11366;

 L8331: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8332;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_884 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11347: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L8294;
    }
  goto L9004;

 L8294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L8295;
  x2 = XEXP (x1, 0);
  goto L9004;

 L8295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L11373;
  x2 = XEXP (x1, 0);
  goto L9004;

 L11373: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L8296;
    }
 L11374: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L8310;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8296: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8297;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11374;

 L8297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11375;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11374;

 L11375: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11377;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11374;

 L11377: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11379;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11374;

 L11379: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))))
    {
      return gen_split_878 (operands);
    }
 L11380: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      return gen_split_879 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11374;

 L8310: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_880 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11348: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8336;
    }
 L11349: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8343;
    }
  goto L9004;

 L8336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11381;
  x2 = XEXP (x1, 0);
  goto L11349;

 L11381: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8337;
    case ASHIFT:
      goto L9061;
    case ASHIFTRT:
      goto L9104;
    case LSHIFTRT:
      goto L9122;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11349;

 L8337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11386;
 L9085: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L9086;
  x2 = XEXP (x1, 0);
  goto L11349;

 L11386: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L8629;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8338;
    }
  goto L9085;

 L8629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L8630;
    }
  goto L9085;

 L8630: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8631;
    }
  goto L9085;

 L8631: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8632;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9085;

 L8632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])))
    {
      return gen_split_951 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9085;

 L8338: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8339;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9085;

 L8339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_886 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9085;

 L9086: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L9087;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9087: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L9088;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9088: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])))
    {
      return gen_split_1071 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9062;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9063;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9063: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9064;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_1065 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9105;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9106;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9106: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9107;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_1076 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9123;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9124;
    }
  x2 = XEXP (x1, 0);
  goto L11349;

 L9124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9125;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L9125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_1083 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11349;

 L8343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11387;
  x2 = XEXP (x1, 0);
  goto L9004;

 L11387: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8344;
    case PLUS:
      goto L8586;
    case MINUS:
      goto L8637;
    case NEG:
      goto L8765;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8345;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8346;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_887 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8587;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8588;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8588: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8589;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_945 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8638;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8639;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8639: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8640;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_959 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8766;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8766: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8767;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_1014 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11350: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8402;
    }
 L11351: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8410;
    }
 L11352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8418;
    }
 L11355: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11391;
  goto L9004;

 L8402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == FLOAT_TRUNCATE)
    goto L8403;
  x2 = XEXP (x1, 0);
  goto L11351;

 L8403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11393;
    case XFmode:
      goto L11394;
    case TFmode:
      goto L11395;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11351;

 L11393: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8404;
    }
  x2 = XEXP (x1, 0);
  goto L11351;

 L8404: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8405;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8406;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8406: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return gen_split_903 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L11394: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8428;
    }
  x2 = XEXP (x1, 0);
  goto L11351;

 L8428: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8429;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8430;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8430: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return gen_split_907 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L11395: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8444;
    }
  x2 = XEXP (x1, 0);
  goto L11351;

 L8444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8445;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8446;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8446: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return gen_split_910 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11351;

 L8410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == FLOAT_TRUNCATE)
    goto L8411;
  x2 = XEXP (x1, 0);
  goto L11352;

 L8411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8412;
    }
  x2 = XEXP (x1, 0);
  goto L11352;

 L8412: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8413;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11352;

 L8413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L8414;

 L8414: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed
   && !FP_REG_P (operands[0]) && !FP_REG_P (operands[1])))
    {
      return gen_split_904 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11352;

 L8418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11396;
  x2 = XEXP (x1, 0);
  goto L11355;

 L11396: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L8419;
    case IF_THEN_ELSE:
      goto L9398;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11355;

 L8419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11398;
    case XFmode:
      goto L11399;
    case TFmode:
      goto L11400;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L11398: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8420;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L8420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8422;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8422: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return gen_split_905 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L11399: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8436;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L8436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8437;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8438;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8438: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return gen_split_908 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L11400: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8452;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L8452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8453;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L8454: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return gen_split_911 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L9398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L9399;
    case GT:
      goto L9443;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L9400;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9400: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L9401;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L9402;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L9403;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9403: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9404;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L9404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (SSE_REG_P (operands[0]) && reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1191 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L9443: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L9444;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9444: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L9445;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L9446;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L9447;
    }
  x2 = XEXP (x1, 0);
  goto L11355;

 L9447: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9448;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L9448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (SSE_REG_P (operands[0]) && reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1197 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11355;

 L11391: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8798;
    }
 L11392: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_fp_reg_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8805;
    }
  goto L9004;

 L8798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11401;
  x2 = XEXP (x1, 0);
  goto L11392;

 L11401: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8799;
    case ABS:
      goto L8916;
    case IF_THEN_ELSE:
      goto L9409;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11392;

 L8799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L8800;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L8800: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8801;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L8801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1022 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L8916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L8917;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L8917: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L8918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387))
    {
      return gen_split_1041 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L9409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L9410;
    case GT:
      goto L9454;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L9411;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L9412;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L9413;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (register_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L9414;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9414: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9415;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L9415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1192 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L9454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L9455;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L9456;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L9457;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (register_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L9458;
    }
  x2 = XEXP (x1, 0);
  goto L11392;

 L9458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9459;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L9459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1198 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11392;

 L8805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11404;
  x2 = XEXP (x1, 0);
  goto L9004;

 L11404: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8806;
    case ABS:
      goto L8923;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L8807;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8807: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8808;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1023 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L8924;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8924: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1042 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11353: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L8458;
    }
 L11354: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L8466;
    }
 L11357: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11406;
  goto L9004;

 L8458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT_TRUNCATE)
    goto L8459;
  x2 = XEXP (x1, 0);
  goto L11354;

 L8459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case XFmode:
      goto L11408;
    case TFmode:
      goto L11409;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11354;

 L11408: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8460;
    }
  x2 = XEXP (x1, 0);
  goto L11354;

 L8460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8461;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L8461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L8462;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L8462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return gen_split_913 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L11409: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8476;
    }
  x2 = XEXP (x1, 0);
  goto L11354;

 L8476: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8477;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L8477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L8478;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L8478: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return gen_split_916 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11354;

 L8466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11410;
  x2 = XEXP (x1, 0);
  goto L11357;

 L11410: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L8467;
    case IF_THEN_ELSE:
      goto L9420;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11357;

 L8467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case XFmode:
      goto L11412;
    case TFmode:
      goto L11413;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L11412: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8468;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L8468: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8469;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L8469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L8470;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L8470: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return gen_split_914 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L11413: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8484;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L8484: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8485;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L8485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L8486;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L8486: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return gen_split_917 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L9420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L9421;
    case GT:
      goto L9465;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L9422;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L9423;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L9424;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L9425;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L9426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (SSE_REG_P (operands[0]) && reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1194 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L9465: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L9466;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L9467;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L9468;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L9469;
    }
  x2 = XEXP (x1, 0);
  goto L11357;

 L9469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9470;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L9470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (SSE_REG_P (operands[0]) && reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1200 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11357;

 L11406: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L8846;
    }
 L11407: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_fp_reg_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L8853;
    }
  goto L9004;

 L8846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11414;
  x2 = XEXP (x1, 0);
  goto L11407;

 L11414: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8847;
    case ABS:
      goto L8964;
    case IF_THEN_ELSE:
      goto L9431;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11407;

 L8847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8848;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L8848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L8849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1029 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L8964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8965;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L8965: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8966;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L8966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1048 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L9431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L9432;
    case GT:
      goto L9476;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L9433;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L9434;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L9435;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (register_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L9436;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9437;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L9437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1195 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L9476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L9477;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9477: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L9478;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L9479;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (register_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L9480;
    }
  x2 = XEXP (x1, 0);
  goto L11407;

 L9480: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9481;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L9481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((operands_match_p (operands[1], operands[3])
	&& operands_match_p (operands[2], operands[4]))
       || (operands_match_p (operands[1], operands[4])
	   && operands_match_p (operands[2], operands[3])))))
    {
      return gen_split_1201 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11407;

 L8853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11417;
  x2 = XEXP (x1, 0);
  goto L9004;

 L11417: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8854;
    case ABS:
      goto L8971;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8855;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8855: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387 && reload_completed))
    {
      return gen_split_1030 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L8972;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8972: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8973;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387 && reload_completed))
    {
      return gen_split_1049 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11359: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11419;
  goto L9004;

 L11419: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L8860;
    }
 L11420: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_fp_reg_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L8867;
    }
  goto L9004;

 L8860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L11421;
  x2 = XEXP (x1, 0);
  goto L11420;

 L11421: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8861;
    case ABS:
      goto L8978;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11420;

 L8861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8862;
    }
  x2 = XEXP (x1, 0);
  goto L11420;

 L8862: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8863;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11420;

 L8863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1033 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11420;

 L8978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8979;
    }
  x2 = XEXP (x1, 0);
  goto L11420;

 L8979: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8980;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11420;

 L8980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1052 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11420;

 L8867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L11423;
  x2 = XEXP (x1, 0);
  goto L9004;

 L11423: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8868;
    case ABS:
      goto L8985;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8869;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8869: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8870;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1034 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8986;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L8986: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8987;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L8987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1053 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L11361: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11425;
  goto L9004;

 L11425: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L8874;
    }
 L11426: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_fp_reg_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L8881;
    }
 L11427: ATTRIBUTE_UNUSED_LABEL
  if (register_and_not_any_fp_reg_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L8998;
    }
  goto L9004;

 L8874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode)
    goto L11428;
  x2 = XEXP (x1, 0);
  goto L11426;

 L11428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8875;
    case ABS:
      goto L8992;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11426;

 L8875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8876;
    }
  x2 = XEXP (x1, 0);
  goto L11426;

 L8876: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8877;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11426;

 L8877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1035 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11426;

 L8992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8993;
    }
  x2 = XEXP (x1, 0);
  goto L11426;

 L8993: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8994;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11426;

 L8994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1054 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11426;

 L8881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode
      && GET_CODE (x2) == NEG)
    goto L8882;
  x2 = XEXP (x1, 0);
  goto L11427;

 L8882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L8883;
    }
  x2 = XEXP (x1, 0);
  goto L11427;

 L8883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11427;

 L8884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1036 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11427;

 L8998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode
      && GET_CODE (x2) == ABS)
    goto L8999;
  x2 = XEXP (x1, 0);
  goto L9004;

 L8999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L9000;
    }
  x2 = XEXP (x1, 0);
  goto L9004;

 L9000: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L9001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed))
    {
      return gen_split_1055 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9004;

 L9005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L9006;
  x2 = XEXP (x1, 0);
  goto L8618;

 L9006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11430;
    case HImode:
      goto L11431;
    case QImode:
      goto L11432;
    default:
      break;
    }
 L9529: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == AND)
    goto L9530;
  x2 = XEXP (x1, 0);
  goto L8618;

 L11430: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L9007;
  goto L9529;

 L9007: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11433;
  goto L9529;

 L11433: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9008;
    }
 L11434: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9019;
    }
  goto L9529;

 L9008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9009;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11434;

 L9009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9010;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11434;

 L9010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9011;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11434;

 L9011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L9012;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11434;

 L9012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_1057 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11434;

 L9019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9020;
  x3 = XEXP (x2, 0);
  goto L9529;

 L9020: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9021;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9022;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L9023;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L9024;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_1058 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L11431: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L9030;
  goto L9529;

 L9030: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9031;
    }
  goto L9529;

 L9031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9032;
  x3 = XEXP (x2, 0);
  goto L9529;

 L9032: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9033;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L9034;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NOT)
    goto L9035;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_1060 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L11432: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L9041;
  goto L9529;

 L9041: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9042;
    }
  goto L9529;

 L9042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9043;
  x3 = XEXP (x2, 0);
  goto L9529;

 L9043: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9044;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9045;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NOT)
    goto L9046;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_1062 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9529;

 L9530: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (aligned_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L9531;
    }
  x2 = XEXP (x1, 0);
  goto L8618;

 L9531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L9532;
    }
  x2 = XEXP (x1, 0);
  goto L8618;

 L9532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9533;
  x2 = XEXP (x1, 0);
  goto L8618;

 L9533: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9534;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8618;

 L9534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9535;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8618;

 L9535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == AND)
    goto L9536;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8618;

 L9536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9537;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8618;

 L9537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[0]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
    {
      return gen_split_1210 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8618;

 L8619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L8620;
    case AND:
      goto L8693;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L8699;

 L8620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8621;
    }
  x2 = XEXP (x1, 0);
  goto L8699;

 L8621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8622;
    }
  x2 = XEXP (x1, 0);
  goto L8699;

 L8622: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8623;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8699;

 L8623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])))
    {
      return gen_split_950 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8699;

 L8693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8694;
  x2 = XEXP (x1, 0);
  goto L8699;

 L8694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -65536)
    goto L8695;
  x2 = XEXP (x1, 0);
  goto L8699;

 L8695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8696;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8699;

 L8696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)))
    {
      return gen_split_995 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8699;

 L8700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == AND)
    goto L8701;
  x2 = XEXP (x1, 0);
  goto L8715;

 L8701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8702;
  x2 = XEXP (x1, 0);
  goto L8715;

 L8702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L11435;
  x2 = XEXP (x1, 0);
  goto L8715;

 L11435: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -256:
        goto L8703;
      case -65281:
        goto L8711;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  goto L8715;

 L8703: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8704;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8715;

 L8704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed))
    {
      return gen_split_996 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8715;

 L8711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8715;

 L8712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed))
    {
      return gen_split_997 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8715;

 L8716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case AND:
      goto L8717;
    case IOR:
      goto L8733;
    case XOR:
      goto L8749;
    case ASHIFT:
      goto L9069;
    default:
     break;
   }
 L9520: ATTRIBUTE_UNUSED_LABEL
  if (promotable_binary_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L9521;
    }
  x2 = XEXP (x1, 0);
  goto L8811;

 L8717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8718;
    }
 L8725: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8726;
    }
  goto L9520;

 L8718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8719;
    }
  x3 = XEXP (x2, 0);
  goto L8725;

 L8719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8720;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8725;

 L8720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1000 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8725;

 L8726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8727;
    }
  goto L9520;

 L8727: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8728;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L8728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1001 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L8733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8734;
    }
 L8741: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8742;
    }
  goto L9520;

 L8734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8735;
    }
  x3 = XEXP (x2, 0);
  goto L8741;

 L8735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8736;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8741;

 L8736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1005 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8741;

 L8742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8743;
    }
  goto L9520;

 L8743: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8744;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L8744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1006 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L8749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8750;
    }
 L8757: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8758;
    }
  goto L9520;

 L8750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8751;
    }
  x3 = XEXP (x2, 0);
  goto L8757;

 L8751: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8757;

 L8752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1011 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L8757;

 L8758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8759;
    }
  goto L9520;

 L8759: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8760;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L8760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode))
    {
      return gen_split_1012 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L9069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9070;
    }
 L9077: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9078;
    }
  goto L9520;

 L9070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9071;
    }
  x3 = XEXP (x2, 0);
  goto L9077;

 L9071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9072;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9077;

 L9072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])))
    {
      return gen_split_1069 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9077;

 L9078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9079;
    }
  goto L9520;

 L9079: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9080;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L9080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])))
    {
      return gen_split_1070 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9520;

 L9521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9522;
    }
  x2 = XEXP (x1, 0);
  goto L8811;

 L9522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (aligned_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L9523;
    }
  x2 = XEXP (x1, 0);
  goto L8811;

 L9523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9524;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8811;

 L9524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
	    || GET_CODE (operands[2]) != CONST_INT
	    || CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1209 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8811;

 L8812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L8813;
    case ABS:
      goto L8930;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9547;

 L8813: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8814;
    }
  x2 = XEXP (x1, 0);
  goto L9547;

 L8814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9547;

 L8815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1024 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9547;

 L8930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8931;
    }
  x2 = XEXP (x1, 0);
  goto L9547;

 L8931: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9547;

 L8932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && reload_completed && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1043 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9547;

 L9548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == NEG)
    goto L9549;
  goto ret0;

 L9549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9550;
    }
  goto ret0;

 L9550: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9551;
  goto ret0;

 L9551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1212 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx split_3 PARAMS ((rtx, rtx));
static rtx
split_3 (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L11437;
    case SImode:
      goto L11439;
    case SFmode:
      goto L11440;
    case DFmode:
      goto L11442;
    default:
      break;
    }
 L9180: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L9181;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9485;
    }
  goto ret0;

 L11437: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8350;
    }
 L11438: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8370;
    }
  goto L9180;

 L8350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L8351;
  x2 = XEXP (x1, 0);
  goto L11438;

 L8351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8352;
    }
  x2 = XEXP (x1, 0);
  goto L11438;

 L8352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8353;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11438;

 L8353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L8354;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11438;

 L8354: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8355;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11438;

 L8355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8356;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11438;

 L8356: ATTRIBUTE_UNUSED_LABEL
  if (((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_889 (operands);
    }
 L8366: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_890 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11438;

 L8370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11444;
  x2 = XEXP (x1, 0);
  goto L9180;

 L11444: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L8371;
    case ASHIFT:
      goto L9051;
    case ASHIFTRT:
      goto L9094;
    case LSHIFTRT:
      goto L9112;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8372;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8372: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8373;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L8374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8374: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8375;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8376;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8376: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_891 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9052;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9053;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L9055;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9055: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9056;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE && reload_completed))
    {
      return gen_split_1064 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9095;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9096;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9096: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L9098;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9098: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9099;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE && reload_completed))
    {
      return gen_split_1075 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9113;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9114;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L9114: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9115;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L9116;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9116: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9117;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L9117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE && reload_completed))
    {
      return gen_split_1082 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L11439: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8644;
    }
  goto L9180;

 L8644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11448;
  x2 = XEXP (x1, 0);
  goto L9180;

 L11448: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L8645;
    case UDIV:
      goto L8658;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8646;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8647;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8647: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L8648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8649;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L8650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8651;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L8652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8653;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed))
    {
      return gen_split_985 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8659;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8660;
    }
  x2 = XEXP (x1, 0);
  goto L9180;

 L8660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L8661;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8662;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L8663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L8665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8665: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8666;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L8666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed))
    {
      return gen_split_986 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9180;

 L11440: ATTRIBUTE_UNUSED_LABEL
    {
    }


