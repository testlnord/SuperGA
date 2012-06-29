/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/hooloo/Desktop/SuperGA/SuperGA/toScreen.v";
static int ng1[] = {0, 0};
static int ng2[] = {23, 0};
static int ng3[] = {8, 0};
static unsigned int ng4[] = {127U, 0U};
static int ng5[] = {7, 0};
static int ng6[] = {1, 0};



static void Always_47_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);

LAB14:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 0LL);

LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    goto LAB12;

}

static void Always_60_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t31[8];
    char t54[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2840);
    t9 = (t0 + 2840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng2)));
    t11 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t3, 8, t2, 8);
    t4 = (t0 + 2840);
    t5 = (t0 + 2840);
    t9 = (t5 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    t12 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t7, t8, t31, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t7 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t14 = (t8 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t17 = (t31 + 4);
    t22 = *((unsigned int *)t17);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t2, 8, t4, 8);
    t3 = (t0 + 3000);
    t5 = (t0 + 3000);
    t9 = (t5 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    t12 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t7, t8, t31, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t7 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t14 = (t8 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t17 = (t31 + 4);
    t22 = *((unsigned int *)t17);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t9 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t4, 24, t9, 32);
    t5 = (t0 + 2840);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 24);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t9 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t4, 24, t9, 32);
    t5 = (t0 + 3000);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 24);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 65535U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 65535U);
    t10 = (t0 + 472);
    t11 = *((char **)t10);
    memset(t7, 0, 8);
    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB16;

LAB15:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t6) < *((unsigned int *)t11))
        goto LAB18;

LAB17:    *((unsigned int *)t7) = 1;

LAB18:    memset(t8, 0, 8);
    t14 = (t7 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB23:    t21 = (t8 + 4);
    t37 = *((unsigned int *)t8);
    t38 = (!(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB24;

LAB25:    memcpy(t65, t8, 8);

LAB26:    t91 = (t65 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t65);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(85, ng0);

LAB43:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 16383U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 16383U);
    t10 = (t0 + 3480);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 16383U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 16383U);
    t10 = (t0 + 3640);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB8:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB9;

LAB10:    t25 = *((unsigned int *)t31);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t8);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t6, t26, *((unsigned int *)t8), t30);
    goto LAB11;

LAB12:    t25 = *((unsigned int *)t31);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t8);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t6, t26, *((unsigned int *)t8), t30);
    goto LAB13;

LAB16:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB22:    t17 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB24:    t41 = (t0 + 3000);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t31, 0, 8);
    t44 = (t31 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 8);
    *((unsigned int *)t31) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 8);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & 65535U);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 & 65535U);
    t52 = (t0 + 608);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t31 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB28;

LAB27:    t55 = (t53 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t31) < *((unsigned int *)t53))
        goto LAB30;

LAB29:    *((unsigned int *)t54) = 1;

LAB30:    memset(t57, 0, 8);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t58) != 0)
        goto LAB34;

LAB35:    t66 = *((unsigned int *)t8);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = (t8 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB26;

LAB28:    t56 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t57) = 1;
    goto LAB35;

LAB34:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB35;

LAB36:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t8 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (~(t81));
    t83 = *((unsigned int *)t8);
    t16 = (t83 & t82);
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t19 = (t86 & t85);
    t87 = (~(t16));
    t88 = (~(t19));
    t89 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t89 & t87);
    t90 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t90 & t88);
    goto LAB38;

LAB39:    xsi_set_current_line(79, ng0);

LAB42:    xsi_set_current_line(80, ng0);
    t97 = ((char*)((ng1)));
    t98 = (t0 + 3480);
    xsi_vlogvar_assign_value(t98, t97, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB41;

}


extern void work_m_00000000003456671520_0733015907_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_60_1};
	xsi_register_didat("work_m_00000000003456671520_0733015907", "isim/tb_Accelerator_isim_beh.exe.sim/work/m_00000000003456671520_0733015907.didat");
	xsi_register_executes(pe);
}
