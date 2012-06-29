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
static const char *ng0 = "C:/Users/hooloo/Desktop/SuperGA/SuperGA/DrawLine.v";
static unsigned int ng1[] = {255U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static int ng5[] = {1, 0};



static int sp_abs(char *t1, char *t2)
{
    char t6[8];
    char t25[8];
    char t40[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;

LAB0:    t0 = 1;
    xsi_set_current_line(68, ng0);
    t3 = (t1 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB2;

LAB3:    xsi_set_current_line(73, ng0);

LAB9:    xsi_set_current_line(74, ng0);
    t3 = (t1 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 5400);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t21 = (t1 + 5560);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng1)));
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t24);
    t28 = (t26 ^ t27);
    *((unsigned int *)t25) = t28;
    t29 = (t23 + 4);
    t30 = (t24 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB6;

LAB7:
LAB8:    t39 = ((char*)((ng2)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 8, t25, 8, t39, 8);
    t41 = (t1 + 5400);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 8);
    goto LAB4;

LAB6:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB8;

}

static void Initial_48_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);

LAB2:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3640);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4280);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4440);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4600);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5080);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5240);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_79_1(char *t0)
{
    char t9[8];
    char t24[8];
    char t42[8];
    char t57[8];
    char t65[8];
    char t93[8];
    char t111[8];
    char t126[8];
    char t134[8];
    char t162[8];
    char t180[8];
    char t195[8];
    char t203[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;

LAB0:    t1 = (t0 + 6728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 7048);
    *((int *)t2) = 1;
    t3 = (t0 + 6760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2120U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    memset(t24, 0, 8);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    memcpy(t65, t24, 8);

LAB16:    memset(t93, 0, 8);
    t94 = (t65 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t65);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t94) != 0)
        goto LAB30;

LAB31:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = (!(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB32;

LAB33:    memcpy(t134, t93, 8);

LAB34:    memset(t162, 0, 8);
    t163 = (t134 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t134);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t163) != 0)
        goto LAB48;

LAB49:    t170 = (t162 + 4);
    t171 = *((unsigned int *)t162);
    t172 = (!(t171));
    t173 = *((unsigned int *)t170);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB50;

LAB51:    memcpy(t203, t162, 8);

LAB52:    t231 = (t203 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t203);
    t235 = (t234 & t233);
    t236 = (t235 != 0);
    if (t236 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB152;

LAB153:
LAB154:    goto LAB2;

LAB7:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t37 = (t0 + 3320);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 1800U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB18;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB20:    memset(t57, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t58) != 0)
        goto LAB23;

LAB24:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = (t24 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB19:    t56 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB23:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t24 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (~(t81));
    t83 = *((unsigned int *)t24);
    t84 = (t83 & t82);
    t85 = *((unsigned int *)t80);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (t87 & t86);
    t89 = (~(t84));
    t90 = (~(t88));
    t91 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t91 & t89);
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    goto LAB27;

LAB28:    *((unsigned int *)t93) = 1;
    goto LAB31;

LAB30:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB31;

LAB32:    t106 = (t0 + 3800);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = (t0 + 2280U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t108 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t110);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t109);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t109);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB36;

LAB35:    if (t122 != 0)
        goto LAB37;

LAB38:    memset(t126, 0, 8);
    t127 = (t111 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t111);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t127) != 0)
        goto LAB41;

LAB42:    t135 = *((unsigned int *)t93);
    t136 = *((unsigned int *)t126);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = (t93 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB36:    *((unsigned int *)t111) = 1;
    goto LAB38;

LAB37:    t125 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t126) = 1;
    goto LAB42;

LAB41:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB42;

LAB43:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t93 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t148);
    t151 = (~(t150));
    t152 = *((unsigned int *)t93);
    t153 = (t152 & t151);
    t154 = *((unsigned int *)t149);
    t155 = (~(t154));
    t156 = *((unsigned int *)t126);
    t157 = (t156 & t155);
    t158 = (~(t153));
    t159 = (~(t157));
    t160 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t160 & t158);
    t161 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t161 & t159);
    goto LAB45;

LAB46:    *((unsigned int *)t162) = 1;
    goto LAB49;

LAB48:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB49;

LAB50:    t175 = (t0 + 3480);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t178 = (t0 + 1960U);
    t179 = *((char **)t178);
    memset(t180, 0, 8);
    t178 = (t177 + 4);
    t181 = (t179 + 4);
    t182 = *((unsigned int *)t177);
    t183 = *((unsigned int *)t179);
    t184 = (t182 ^ t183);
    t185 = *((unsigned int *)t178);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = (t184 | t187);
    t189 = *((unsigned int *)t178);
    t190 = *((unsigned int *)t181);
    t191 = (t189 | t190);
    t192 = (~(t191));
    t193 = (t188 & t192);
    if (t193 != 0)
        goto LAB54;

LAB53:    if (t191 != 0)
        goto LAB55;

LAB56:    memset(t195, 0, 8);
    t196 = (t180 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t180);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t196) != 0)
        goto LAB59;

LAB60:    t204 = *((unsigned int *)t162);
    t205 = *((unsigned int *)t195);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = (t162 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB54:    *((unsigned int *)t180) = 1;
    goto LAB56;

LAB55:    t194 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t195) = 1;
    goto LAB60;

LAB59:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB60;

LAB61:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t162 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t162);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t195);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB63;

LAB64:    xsi_set_current_line(82, ng0);

LAB67:    xsi_set_current_line(83, ng0);
    t237 = (t0 + 2120U);
    t238 = *((char **)t237);
    t237 = (t0 + 3640);
    xsi_vlogvar_assign_value(t237, t238, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 3800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 4760);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4920);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 1800U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 8, t3, 8, t4, 8);
    t2 = (t0 + 3960);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 8);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 8, t3, 8, t4, 8);
    t2 = (t0 + 4120);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3960);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t42, 32, t4, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t23 = (t42 + 4);
    t25 = (t10 + 4);
    t11 = *((unsigned int *)t42);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t25);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t25);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB71;

LAB68:    if (t20 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t57) = 1;

LAB71:    memset(t24, 0, 8);
    t32 = (t57 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t57);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t32) != 0)
        goto LAB74;

LAB75:    t38 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t38);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB76;

LAB77:    t36 = *((unsigned int *)t24);
    t44 = (~(t36));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t38) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t24) > 0)
        goto LAB82;

LAB83:    memcpy(t9, t93, 8);

LAB84:    t100 = (t0 + 4280);
    xsi_vlogvar_assign_value(t100, t9, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4120);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t42, 32, t4, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t23 = (t42 + 4);
    t25 = (t10 + 4);
    t11 = *((unsigned int *)t42);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t25);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t25);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB105;

LAB102:    if (t20 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t57) = 1;

LAB105:    memset(t24, 0, 8);
    t32 = (t57 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t57);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t32) != 0)
        goto LAB108;

LAB109:    t38 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t38);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB110;

LAB111:    t36 = *((unsigned int *)t24);
    t44 = (~(t36));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t38) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t24) > 0)
        goto LAB116;

LAB117:    memcpy(t9, t93, 8);

LAB118:    t100 = (t0 + 4440);
    xsi_vlogvar_assign_value(t100, t9, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6536);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    t8 = (t0 + 5560);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 8);

LAB136:    t10 = (t0 + 6632);
    t23 = *((char **)t10);
    t25 = (t23 + 80U);
    t31 = *((char **)t25);
    t32 = (t31 + 272U);
    t37 = *((char **)t32);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t84 = ((int  (*)(char *, char *))t39)(t0, t23);
    if (t84 != 0)
        goto LAB138;

LAB137:    t23 = (t0 + 6632);
    t40 = *((char **)t23);
    t23 = (t0 + 5400);
    t41 = (t23 + 56U);
    t43 = *((char **)t41);
    memcpy(t9, t43, 8);
    t56 = (t0 + 848);
    t58 = (t0 + 6536);
    t64 = 0;
    xsi_delete_subprogram_invocation(t56, t40, t0, t58, t64);
    t69 = (t0 + 3960);
    xsi_vlogvar_assign_value(t69, t9, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6536);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    t8 = (t0 + 5560);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 8);

LAB139:    t10 = (t0 + 6632);
    t23 = *((char **)t10);
    t25 = (t23 + 80U);
    t31 = *((char **)t25);
    t32 = (t31 + 272U);
    t37 = *((char **)t32);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t84 = ((int  (*)(char *, char *))t39)(t0, t23);
    if (t84 != 0)
        goto LAB141;

LAB140:    t23 = (t0 + 6632);
    t40 = *((char **)t23);
    t23 = (t0 + 5400);
    t41 = (t23 + 56U);
    t43 = *((char **)t41);
    memcpy(t9, t43, 8);
    t56 = (t0 + 848);
    t58 = (t0 + 6536);
    t64 = 0;
    xsi_delete_subprogram_invocation(t56, t40, t0, t58, t64);
    t69 = (t0 + 4120);
    xsi_vlogvar_assign_value(t69, t9, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB143;

LAB142:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB143;

LAB146:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB144;

LAB145:    t25 = (t9 + 4);
    t11 = *((unsigned int *)t25);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(105, ng0);

LAB151:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB149:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t9, 8, t4, 8, t5, 32);
    t6 = (t0 + 4600);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 8);
    goto LAB66;

LAB70:    t31 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t24) = 1;
    goto LAB75;

LAB74:    t37 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB75;

LAB76:    t39 = ((char*)((ng2)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_unary_minus(t65, 32, t39, 32);
    goto LAB77;

LAB78:    t40 = (t0 + 3960);
    t41 = (t40 + 56U);
    t43 = *((char **)t41);
    t56 = ((char*)((ng3)));
    memset(t126, 0, 8);
    t58 = (t43 + 4);
    t64 = (t56 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t56);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t58);
    t51 = *((unsigned int *)t64);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t58);
    t55 = *((unsigned int *)t64);
    t59 = (t54 | t55);
    t60 = (~(t59));
    t61 = (t53 & t60);
    if (t61 != 0)
        goto LAB88;

LAB85:    if (t59 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t126) = 1;

LAB88:    memset(t111, 0, 8);
    t70 = (t126 + 4);
    t62 = *((unsigned int *)t70);
    t63 = (~(t62));
    t66 = *((unsigned int *)t126);
    t67 = (t66 & t63);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t70) != 0)
        goto LAB91;

LAB92:    t79 = (t111 + 4);
    t72 = *((unsigned int *)t111);
    t73 = *((unsigned int *)t79);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB93;

LAB94:    t75 = *((unsigned int *)t111);
    t76 = (~(t75));
    t77 = *((unsigned int *)t79);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t79) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t111) > 0)
        goto LAB99;

LAB100:    memcpy(t93, t94, 8);

LAB101:    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t9, 32, t65, 32, t93, 32);
    goto LAB84;

LAB82:    memcpy(t9, t65, 8);
    goto LAB84;

LAB87:    t69 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t111) = 1;
    goto LAB92;

LAB91:    t71 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB92;

LAB93:    t80 = ((char*)((ng3)));
    goto LAB94;

LAB95:    t94 = ((char*)((ng2)));
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t93, 32, t80, 32, t94, 32);
    goto LAB101;

LAB99:    memcpy(t93, t80, 8);
    goto LAB101;

LAB104:    t31 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB105;

LAB106:    *((unsigned int *)t24) = 1;
    goto LAB109;

LAB108:    t37 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB109;

LAB110:    t39 = ((char*)((ng2)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_unary_minus(t65, 32, t39, 32);
    goto LAB111;

LAB112:    t40 = (t0 + 4120);
    t41 = (t40 + 56U);
    t43 = *((char **)t41);
    t56 = ((char*)((ng3)));
    memset(t126, 0, 8);
    t58 = (t43 + 4);
    t64 = (t56 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t56);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t58);
    t51 = *((unsigned int *)t64);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t58);
    t55 = *((unsigned int *)t64);
    t59 = (t54 | t55);
    t60 = (~(t59));
    t61 = (t53 & t60);
    if (t61 != 0)
        goto LAB122;

LAB119:    if (t59 != 0)
        goto LAB121;

LAB120:    *((unsigned int *)t126) = 1;

LAB122:    memset(t111, 0, 8);
    t70 = (t126 + 4);
    t62 = *((unsigned int *)t70);
    t63 = (~(t62));
    t66 = *((unsigned int *)t126);
    t67 = (t66 & t63);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t70) != 0)
        goto LAB125;

LAB126:    t79 = (t111 + 4);
    t72 = *((unsigned int *)t111);
    t73 = *((unsigned int *)t79);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB127;

LAB128:    t75 = *((unsigned int *)t111);
    t76 = (~(t75));
    t77 = *((unsigned int *)t79);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t79) > 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t111) > 0)
        goto LAB133;

LAB134:    memcpy(t93, t94, 8);

LAB135:    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t9, 32, t65, 32, t93, 32);
    goto LAB118;

LAB116:    memcpy(t9, t65, 8);
    goto LAB118;

LAB121:    t69 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB122;

LAB123:    *((unsigned int *)t111) = 1;
    goto LAB126;

LAB125:    t71 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB126;

LAB127:    t80 = ((char*)((ng3)));
    goto LAB128;

LAB129:    t94 = ((char*)((ng2)));
    goto LAB130;

LAB131:    xsi_vlog_unsigned_bit_combine(t93, 32, t80, 32, t94, 32);
    goto LAB135;

LAB133:    memcpy(t93, t80, 8);
    goto LAB135;

LAB138:    t10 = (t0 + 6728U);
    *((char **)t10) = &&LAB136;
    goto LAB1;

LAB141:    t10 = (t0 + 6728U);
    *((char **)t10) = &&LAB139;
    goto LAB1;

LAB143:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB145;

LAB144:    *((unsigned int *)t9) = 1;
    goto LAB145;

LAB147:    xsi_set_current_line(97, ng0);

LAB150:    xsi_set_current_line(98, ng0);
    t31 = (t0 + 4280);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 5080);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3960);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 8);
    t5 = (t0 + 4120);
    xsi_vlogvar_assign_value(t5, t9, 0, 0, 8);
    goto LAB149;

LAB152:    xsi_set_current_line(112, ng0);

LAB155:    xsi_set_current_line(113, ng0);

LAB156:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2120U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB158;

LAB157:    if (t20 != 0)
        goto LAB159;

LAB160:    memset(t24, 0, 8);
    t10 = (t9 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t10) != 0)
        goto LAB163;

LAB164:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t25);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB165;

LAB166:    memcpy(t65, t24, 8);

LAB167:    t79 = (t65 + 4);
    t95 = *((unsigned int *)t79);
    t96 = (~(t95));
    t97 = *((unsigned int *)t65);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(134, ng0);

LAB192:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB181:    goto LAB154;

LAB158:    *((unsigned int *)t9) = 1;
    goto LAB160;

LAB159:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t24) = 1;
    goto LAB164;

LAB163:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB164;

LAB165:    t31 = (t0 + 4920);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 2280U);
    t39 = *((char **)t38);
    memset(t42, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t38);
    t52 = *((unsigned int *)t40);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB169;

LAB168:    if (t53 != 0)
        goto LAB170;

LAB171:    memset(t57, 0, 8);
    t43 = (t42 + 4);
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t43) != 0)
        goto LAB174;

LAB175:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t58 = (t24 + 4);
    t64 = (t57 + 4);
    t69 = (t65 + 4);
    t72 = *((unsigned int *)t58);
    t73 = *((unsigned int *)t64);
    t74 = (t72 | t73);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t69);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB176;

LAB177:
LAB178:    goto LAB167;

LAB169:    *((unsigned int *)t42) = 1;
    goto LAB171;

LAB170:    t41 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB171;

LAB172:    *((unsigned int *)t57) = 1;
    goto LAB175;

LAB174:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB175;

LAB176:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t69);
    *((unsigned int *)t65) = (t77 | t78);
    t70 = (t24 + 4);
    t71 = (t57 + 4);
    t81 = *((unsigned int *)t70);
    t82 = (~(t81));
    t83 = *((unsigned int *)t24);
    t84 = (t83 & t82);
    t85 = *((unsigned int *)t71);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (t87 & t86);
    t89 = (~(t84));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    goto LAB178;

LAB179:    xsi_set_current_line(118, ng0);

LAB182:    xsi_set_current_line(119, ng0);
    t80 = (t0 + 4600);
    t94 = (t80 + 56U);
    t100 = *((char **)t94);
    t101 = (t0 + 3960);
    t106 = (t101 + 56U);
    t107 = *((char **)t106);
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 8, t100, 8, t107, 8);
    t108 = (t0 + 4600);
    xsi_vlogvar_assign_value(t108, t93, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4600);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng5)));
    memset(t24, 0, 8);
    t23 = (t9 + 4);
    t25 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t25);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t25);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB186;

LAB183:    if (t20 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t24) = 1;

LAB186:    t32 = (t24 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB187;

LAB188:    xsi_set_current_line(127, ng0);

LAB191:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t4, 8, t7, 8);
    t8 = (t0 + 4760);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5240);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t4, 8, t7, 8);
    t8 = (t0 + 4920);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);

LAB189:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB181;

LAB185:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB186;

LAB187:    xsi_set_current_line(121, ng0);

LAB190:    xsi_set_current_line(122, ng0);
    t37 = (t0 + 4600);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 4120);
    t41 = (t40 + 56U);
    t43 = *((char **)t41);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 8, t39, 8, t43, 8);
    t56 = (t0 + 4600);
    xsi_vlogvar_assign_value(t56, t42, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t4, 8, t7, 8);
    t8 = (t0 + 4760);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t4, 8, t7, 8);
    t8 = (t0 + 4920);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB189;

}


extern void work_m_00000000000359020929_3724358228_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Always_79_1};
	static char *se[] = {(void *)sp_abs};
	xsi_register_didat("work_m_00000000000359020929_3724358228", "isim/tb_Accelerator_isim_beh.exe.sim/work/m_00000000000359020929_3724358228.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
