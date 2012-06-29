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
static const char *ng0 = "C:/Users/hooloo/Desktop/SuperGA/SuperGA/zoomer.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {8, 0};
static int ng4[] = {7, 0};
static int ng5[] = {1, 0};



static void Always_39_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t11 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 255U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 255U);
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t13 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_48_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t36[8];
    char t37[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
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

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    t9 = (t0 + 2568);
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

LAB7:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
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

LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 7);
    t22 = (t18 & 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    t5 = (t6 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng4)));
    t11 = ((char*)((ng1)));
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
        goto LAB15;

LAB16:
LAB12:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 7);
    t22 = (t18 & 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    t5 = (t6 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng4)));
    t11 = ((char*)((ng1)));
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
        goto LAB22;

LAB23:
LAB19:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t9 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 11, t4, 11, t9, 8);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 11);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t9 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 11, t4, 11, t9, 8);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 11);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 7);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 7);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB25;

LAB24:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t6) > *((unsigned int *)t10))
        goto LAB26;

LAB27:    memset(t8, 0, 8);
    t14 = (t7 + 4);
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB32:    t21 = (t8 + 4);
    t39 = *((unsigned int *)t8);
    t41 = (!(t39));
    t43 = *((unsigned int *)t21);
    t44 = (t41 || t43);
    if (t44 > 0)
        goto LAB33;

LAB34:    memcpy(t65, t8, 8);

LAB35:    t91 = (t65 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t65);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(65, ng0);

LAB52:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 7);
    t22 = (t18 & 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    t5 = (t6 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 7);
    t22 = (t18 & 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    t5 = (t6 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    goto LAB2;

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

LAB10:    xsi_set_current_line(52, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t9, 32, t11, 8);
    t10 = (t0 + 2568);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t17 = ((char*)((ng4)));
    t21 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t8, t36, t37, ((int*)(t14)), 2, t17, 32, 1, t21, 32, 1);
    t38 = (t8 + 4);
    t39 = *((unsigned int *)t38);
    t16 = (!(t39));
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t40);
    t19 = (!(t41));
    t20 = (t16 && t19);
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t23 = (!(t43));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t44 = *((unsigned int *)t37);
    t26 = (t44 + 0);
    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t36);
    t29 = (t45 - t46);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t10, t7, t26, *((unsigned int *)t36), t30);
    goto LAB14;

LAB15:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t7), t30);
    goto LAB16;

LAB17:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1528U);
    t11 = *((char **)t10);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t9, 32, t11, 8);
    t10 = (t0 + 2728);
    t12 = (t0 + 2728);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t17 = ((char*)((ng4)));
    t21 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t8, t36, t37, ((int*)(t14)), 2, t17, 32, 1, t21, 32, 1);
    t38 = (t8 + 4);
    t39 = *((unsigned int *)t38);
    t16 = (!(t39));
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t40);
    t19 = (!(t41));
    t20 = (t16 && t19);
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t23 = (!(t43));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    t44 = *((unsigned int *)t37);
    t26 = (t44 + 0);
    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t36);
    t29 = (t45 - t46);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t10, t7, t26, *((unsigned int *)t36), t30);
    goto LAB21;

LAB22:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t7), t30);
    goto LAB23;

LAB25:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t8) = 1;
    goto LAB32;

LAB31:    t17 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB32;

LAB33:    t38 = (t0 + 2728);
    t40 = (t38 + 56U);
    t42 = *((char **)t40);
    memset(t36, 0, 8);
    t47 = (t36 + 4);
    t48 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 7);
    *((unsigned int *)t36) = t46;
    t49 = *((unsigned int *)t48);
    t50 = (t49 >> 7);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t51 & 15U);
    t52 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t52 & 15U);
    t53 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t54 = (t36 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB37;

LAB36:    t55 = (t53 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t36) > *((unsigned int *)t53))
        goto LAB38;

LAB39:    memset(t57, 0, 8);
    t58 = (t37 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t37);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t58) != 0)
        goto LAB43;

LAB44:    t66 = *((unsigned int *)t8);
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
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t56 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t37) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t57) = 1;
    goto LAB44;

LAB43:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB44;

LAB45:    t77 = *((unsigned int *)t65);
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
    goto LAB47;

LAB48:    xsi_set_current_line(62, ng0);

LAB51:    xsi_set_current_line(63, ng0);
    t97 = ((char*)((ng1)));
    t98 = (t0 + 2888);
    xsi_vlogvar_assign_value(t98, t97, 0, 0, 1);
    goto LAB50;

LAB53:    xsi_set_current_line(67, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2568);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t39 = *((unsigned int *)t12);
    t41 = (t39 >> 0);
    *((unsigned int *)t7) = t41;
    t43 = *((unsigned int *)t14);
    t44 = (t43 >> 0);
    *((unsigned int *)t13) = t44;
    t45 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t45 & 255U);
    t46 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t46 & 255U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t9, 32, t7, 32);
    t17 = (t0 + 2568);
    t21 = (t0 + 2568);
    t38 = (t21 + 72U);
    t40 = *((char **)t38);
    t42 = ((char*)((ng4)));
    t47 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t36, t37, t57, ((int*)(t40)), 2, t42, 32, 1, t47, 32, 1);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t48);
    t16 = (!(t49));
    t53 = (t37 + 4);
    t50 = *((unsigned int *)t53);
    t19 = (!(t50));
    t20 = (t16 && t19);
    t54 = (t57 + 4);
    t51 = *((unsigned int *)t54);
    t23 = (!(t51));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB56;

LAB57:    goto LAB55;

LAB56:    t52 = *((unsigned int *)t57);
    t26 = (t52 + 0);
    t59 = *((unsigned int *)t36);
    t60 = *((unsigned int *)t37);
    t29 = (t59 - t60);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t17, t8, t26, *((unsigned int *)t37), t30);
    goto LAB57;

LAB58:    xsi_set_current_line(69, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t39 = *((unsigned int *)t12);
    t41 = (t39 >> 0);
    *((unsigned int *)t7) = t41;
    t43 = *((unsigned int *)t14);
    t44 = (t43 >> 0);
    *((unsigned int *)t13) = t44;
    t45 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t45 & 255U);
    t46 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t46 & 255U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t9, 32, t7, 32);
    t17 = (t0 + 2728);
    t21 = (t0 + 2728);
    t38 = (t21 + 72U);
    t40 = *((char **)t38);
    t42 = ((char*)((ng4)));
    t47 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t36, t37, t57, ((int*)(t40)), 2, t42, 32, 1, t47, 32, 1);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t48);
    t16 = (!(t49));
    t53 = (t37 + 4);
    t50 = *((unsigned int *)t53);
    t19 = (!(t50));
    t20 = (t16 && t19);
    t54 = (t57 + 4);
    t51 = *((unsigned int *)t54);
    t23 = (!(t51));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB61;

LAB62:    goto LAB60;

LAB61:    t52 = *((unsigned int *)t57);
    t26 = (t52 + 0);
    t59 = *((unsigned int *)t36);
    t60 = *((unsigned int *)t37);
    t29 = (t59 - t60);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t17, t8, t26, *((unsigned int *)t37), t30);
    goto LAB62;

}


extern void work_m_00000000002104732110_3796442610_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000002104732110_3796442610", "isim/tb_Accelerator_isim_beh.exe.sim/work/m_00000000002104732110_3796442610.didat");
	xsi_register_executes(pe);
}
