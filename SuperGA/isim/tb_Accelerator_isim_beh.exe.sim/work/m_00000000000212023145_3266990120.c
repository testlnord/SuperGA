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
static const char *ng0 = "C:/Users/hooloo/Desktop/SuperGA/SuperGA/DrawRec.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_56_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5584);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB2;

}

static void Always_63_2(char *t0)
{
    char t8[8];
    char t24[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t93[8];
    char t110[8];
    char t126[8];
    char t134[8];
    char t162[8];
    char t179[8];
    char t195[8];
    char t203[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    char *t42;
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
    char *t111;
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
    char *t180;
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

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5600);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
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
LAB66:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB86;

LAB87:
LAB88:    goto LAB2;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t37 = (t0 + 1688U);
    t38 = *((char **)t37);
    t37 = (t0 + 3528);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t42 = (t38 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t38);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB18;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB20:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
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

LAB18:    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB19:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
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

LAB32:    t106 = (t0 + 1528U);
    t107 = *((char **)t106);
    t106 = (t0 + 3688);
    t108 = (t106 + 56U);
    t109 = *((char **)t108);
    memset(t110, 0, 8);
    t111 = (t107 + 4);
    t112 = (t109 + 4);
    t113 = *((unsigned int *)t107);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB36;

LAB35:    if (t122 != 0)
        goto LAB37;

LAB38:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
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

LAB36:    *((unsigned int *)t110) = 1;
    goto LAB38;

LAB37:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
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

LAB50:    t175 = (t0 + 1848U);
    t176 = *((char **)t175);
    t175 = (t0 + 3848);
    t177 = (t175 + 56U);
    t178 = *((char **)t177);
    memset(t179, 0, 8);
    t180 = (t176 + 4);
    t181 = (t178 + 4);
    t182 = *((unsigned int *)t176);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = *((unsigned int *)t180);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = (t184 | t187);
    t189 = *((unsigned int *)t180);
    t190 = *((unsigned int *)t181);
    t191 = (t189 | t190);
    t192 = (~(t191));
    t193 = (t188 & t192);
    if (t193 != 0)
        goto LAB54;

LAB53:    if (t191 != 0)
        goto LAB55;

LAB56:    memset(t195, 0, 8);
    t196 = (t179 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t179);
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

LAB54:    *((unsigned int *)t179) = 1;
    goto LAB56;

LAB55:    t194 = (t179 + 4);
    *((unsigned int *)t179) = 1;
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

LAB64:    xsi_set_current_line(65, ng0);

LAB67:    xsi_set_current_line(66, ng0);
    t237 = (t0 + 1368U);
    t238 = *((char **)t237);
    t237 = (t0 + 3368);
    xsi_vlogvar_assign_value(t237, t238, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB69;

LAB68:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB70;

LAB71:    memset(t24, 0, 8);
    t7 = (t41 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t41);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t7) != 0)
        goto LAB75;

LAB76:    t10 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = *((unsigned int *)t10);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB77;

LAB78:    t19 = *((unsigned int *)t24);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t10) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t24) > 0)
        goto LAB83;

LAB84:    memcpy(t8, t57, 8);

LAB85:    t31 = (t0 + 2728);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB66;

LAB69:    t6 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB71;

LAB70:    *((unsigned int *)t41) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t24) = 1;
    goto LAB76;

LAB75:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB76;

LAB77:    t23 = ((char*)((ng2)));
    goto LAB78;

LAB79:    t25 = ((char*)((ng2)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_unary_minus(t57, 8, t25, 8);
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t8, 8, t23, 8, t57, 8);
    goto LAB85;

LAB83:    memcpy(t8, t23, 8);
    goto LAB85;

LAB86:    xsi_set_current_line(77, ng0);

LAB89:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t6 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t7) == 0)
        goto LAB90;

LAB92:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB93:    t10 = (t8 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (~(t21));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t22);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB94;

LAB95:
LAB96:    goto LAB88;

LAB90:    *((unsigned int *)t8) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(84, ng0);

LAB97:    xsi_set_current_line(85, ng0);
    t23 = (t0 + 3048);
    t25 = (t23 + 56U);
    t31 = *((char **)t25);
    t32 = (t0 + 2728);
    t37 = (t32 + 56U);
    t38 = *((char **)t37);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 8, t31, 8, t38, 8);
    t39 = (t0 + 3048);
    xsi_vlogvar_assign_value(t39, t24, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t7, 8);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
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
        goto LAB101;

LAB98:    if (t20 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t8) = 1;

LAB101:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t10) != 0)
        goto LAB104;

LAB105:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB106;

LAB107:    memcpy(t65, t24, 8);

LAB108:    t79 = (t65 + 4);
    t98 = *((unsigned int *)t79);
    t99 = (~(t98));
    t102 = *((unsigned int *)t65);
    t103 = (t102 & t99);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB120;

LAB121:
LAB122:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
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
        goto LAB145;

LAB142:    if (t20 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t8) = 1;

LAB145:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t10) != 0)
        goto LAB148;

LAB149:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB150;

LAB151:    memcpy(t65, t24, 8);

LAB152:    t79 = (t65 + 4);
    t98 = *((unsigned int *)t79);
    t99 = (~(t98));
    t102 = *((unsigned int *)t65);
    t103 = (t102 & t99);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB164;

LAB165:
LAB166:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
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
        goto LAB189;

LAB186:    if (t20 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t8) = 1;

LAB189:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t10) != 0)
        goto LAB192;

LAB193:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB194;

LAB195:    memcpy(t65, t24, 8);

LAB196:    t79 = (t65 + 4);
    t98 = *((unsigned int *)t79);
    t99 = (~(t98));
    t102 = *((unsigned int *)t65);
    t103 = (t102 & t99);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB208;

LAB209:
LAB210:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
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
        goto LAB233;

LAB230:    if (t20 != 0)
        goto LAB232;

LAB231:    *((unsigned int *)t8) = 1;

LAB233:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t10) != 0)
        goto LAB236;

LAB237:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB238;

LAB239:    memcpy(t65, t24, 8);

LAB240:    t79 = (t65 + 4);
    t98 = *((unsigned int *)t79);
    t99 = (~(t98));
    t102 = *((unsigned int *)t65);
    t103 = (t102 & t99);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB252;

LAB253:
LAB254:    goto LAB96;

LAB100:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t24) = 1;
    goto LAB105;

LAB104:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB105;

LAB106:    t31 = (t0 + 3208);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 1528U);
    t39 = *((char **)t38);
    memset(t41, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t36 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t39);
    t45 = (t36 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t40);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t40);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB112;

LAB109:    if (t52 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t41) = 1;

LAB112:    memset(t57, 0, 8);
    t43 = (t41 + 4);
    t55 = *((unsigned int *)t43);
    t59 = (~(t55));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t43) != 0)
        goto LAB115;

LAB116:    t63 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t57);
    t67 = (t63 & t66);
    *((unsigned int *)t65) = t67;
    t58 = (t24 + 4);
    t64 = (t57 + 4);
    t69 = (t65 + 4);
    t68 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t64);
    t73 = (t68 | t72);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t69);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB108;

LAB111:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t57) = 1;
    goto LAB116;

LAB115:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB116;

LAB117:    t76 = *((unsigned int *)t65);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t65) = (t76 | t77);
    t70 = (t24 + 4);
    t71 = (t57 + 4);
    t78 = *((unsigned int *)t24);
    t81 = (~(t78));
    t82 = *((unsigned int *)t70);
    t83 = (~(t82));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t71);
    t89 = (~(t87));
    t84 = (t81 & t83);
    t88 = (t86 & t89);
    t90 = (~(t84));
    t91 = (~(t88));
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t90);
    t97 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t97 & t91);
    goto LAB119;

LAB120:    xsi_set_current_line(88, ng0);

LAB123:    xsi_set_current_line(89, ng0);
    t80 = ((char*)((ng1)));
    t94 = (t0 + 2728);
    xsi_vlogvar_assign_value(t94, t80, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB125;

LAB124:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB125;

LAB128:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB126;

LAB127:    memset(t24, 0, 8);
    t7 = (t41 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t41);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t7) != 0)
        goto LAB131;

LAB132:    t10 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = *((unsigned int *)t10);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB133;

LAB134:    t19 = *((unsigned int *)t24);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t10) > 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t24) > 0)
        goto LAB139;

LAB140:    memcpy(t8, t57, 8);

LAB141:    t31 = (t0 + 2888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);
    goto LAB122;

LAB125:    t6 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB127;

LAB126:    *((unsigned int *)t41) = 1;
    goto LAB127;

LAB129:    *((unsigned int *)t24) = 1;
    goto LAB132;

LAB131:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB132;

LAB133:    t23 = ((char*)((ng2)));
    goto LAB134;

LAB135:    t25 = ((char*)((ng2)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_unary_minus(t57, 8, t25, 8);
    goto LAB136;

LAB137:    xsi_vlog_unsigned_bit_combine(t8, 8, t23, 8, t57, 8);
    goto LAB141;

LAB139:    memcpy(t8, t23, 8);
    goto LAB141;

LAB144:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t24) = 1;
    goto LAB149;

LAB148:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB149;

LAB150:    t31 = (t0 + 3208);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 1848U);
    t39 = *((char **)t38);
    memset(t41, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t36 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t39);
    t45 = (t36 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t40);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t40);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB156;

LAB153:    if (t52 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t41) = 1;

LAB156:    memset(t57, 0, 8);
    t43 = (t41 + 4);
    t55 = *((unsigned int *)t43);
    t59 = (~(t55));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t43) != 0)
        goto LAB159;

LAB160:    t63 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t57);
    t67 = (t63 & t66);
    *((unsigned int *)t65) = t67;
    t58 = (t24 + 4);
    t64 = (t57 + 4);
    t69 = (t65 + 4);
    t68 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t64);
    t73 = (t68 | t72);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t69);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB152;

LAB155:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t57) = 1;
    goto LAB160;

LAB159:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB160;

LAB161:    t76 = *((unsigned int *)t65);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t65) = (t76 | t77);
    t70 = (t24 + 4);
    t71 = (t57 + 4);
    t78 = *((unsigned int *)t24);
    t81 = (~(t78));
    t82 = *((unsigned int *)t70);
    t83 = (~(t82));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t71);
    t89 = (~(t87));
    t84 = (t81 & t83);
    t88 = (t86 & t89);
    t90 = (~(t84));
    t91 = (~(t88));
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t90);
    t97 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t97 & t91);
    goto LAB163;

LAB164:    xsi_set_current_line(93, ng0);

LAB167:    xsi_set_current_line(94, ng0);
    t80 = (t0 + 1368U);
    t94 = *((char **)t80);
    t80 = (t0 + 1688U);
    t100 = *((char **)t80);
    memset(t126, 0, 8);
    t80 = (t94 + 4);
    if (*((unsigned int *)t80) != 0)
        goto LAB169;

LAB168:    t101 = (t100 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB169;

LAB172:    if (*((unsigned int *)t94) < *((unsigned int *)t100))
        goto LAB170;

LAB171:    memset(t110, 0, 8);
    t107 = (t126 + 4);
    t105 = *((unsigned int *)t107);
    t113 = (~(t105));
    t114 = *((unsigned int *)t126);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t107) != 0)
        goto LAB175;

LAB176:    t109 = (t110 + 4);
    t117 = *((unsigned int *)t110);
    t118 = *((unsigned int *)t109);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB177;

LAB178:    t120 = *((unsigned int *)t110);
    t121 = (~(t120));
    t122 = *((unsigned int *)t109);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t109) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t110) > 0)
        goto LAB183;

LAB184:    memcpy(t93, t112, 8);

LAB185:    t125 = (t0 + 2728);
    xsi_vlogvar_assign_value(t125, t93, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB166;

LAB169:    t106 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB171;

LAB170:    *((unsigned int *)t126) = 1;
    goto LAB171;

LAB173:    *((unsigned int *)t110) = 1;
    goto LAB176;

LAB175:    t108 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB176;

LAB177:    t111 = ((char*)((ng2)));
    memset(t134, 0, 8);
    xsi_vlog_unsigned_unary_minus(t134, 8, t111, 8);
    goto LAB178;

LAB179:    t112 = ((char*)((ng2)));
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t93, 8, t134, 8, t112, 8);
    goto LAB185;

LAB183:    memcpy(t93, t134, 8);
    goto LAB185;

LAB188:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB189;

LAB190:    *((unsigned int *)t24) = 1;
    goto LAB193;

LAB192:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB193;

LAB194:    t31 = (t0 + 3208);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 1848U);
    t39 = *((char **)t38);
    memset(t41, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t36 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t39);
    t45 = (t36 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t40);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t40);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB200;

LAB197:    if (t52 != 0)
        goto LAB199;

LAB198:    *((unsigned int *)t41) = 1;

LAB200:    memset(t57, 0, 8);
    t43 = (t41 + 4);
    t55 = *((unsigned int *)t43);
    t59 = (~(t55));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t43) != 0)
        goto LAB203;

LAB204:    t63 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t57);
    t67 = (t63 & t66);
    *((unsigned int *)t65) = t67;
    t58 = (t24 + 4);
    t64 = (t57 + 4);
    t69 = (t65 + 4);
    t68 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t64);
    t73 = (t68 | t72);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t69);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB205;

LAB206:
LAB207:    goto LAB196;

LAB199:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB200;

LAB201:    *((unsigned int *)t57) = 1;
    goto LAB204;

LAB203:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB204;

LAB205:    t76 = *((unsigned int *)t65);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t65) = (t76 | t77);
    t70 = (t24 + 4);
    t71 = (t57 + 4);
    t78 = *((unsigned int *)t24);
    t81 = (~(t78));
    t82 = *((unsigned int *)t70);
    t83 = (~(t82));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t71);
    t89 = (~(t87));
    t84 = (t81 & t83);
    t88 = (t86 & t89);
    t90 = (~(t84));
    t91 = (~(t88));
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t90);
    t97 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t97 & t91);
    goto LAB207;

LAB208:    xsi_set_current_line(98, ng0);

LAB211:    xsi_set_current_line(99, ng0);
    t80 = ((char*)((ng1)));
    t94 = (t0 + 2728);
    xsi_vlogvar_assign_value(t94, t80, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB213;

LAB212:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB213;

LAB216:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB214;

LAB215:    memset(t24, 0, 8);
    t7 = (t41 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t41);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t7) != 0)
        goto LAB219;

LAB220:    t10 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t17 = *((unsigned int *)t10);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB221;

LAB222:    t19 = *((unsigned int *)t24);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB223;

LAB224:    if (*((unsigned int *)t10) > 0)
        goto LAB225;

LAB226:    if (*((unsigned int *)t24) > 0)
        goto LAB227;

LAB228:    memcpy(t8, t25, 8);

LAB229:    t31 = (t0 + 2888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);
    goto LAB210;

LAB213:    t6 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB215;

LAB214:    *((unsigned int *)t41) = 1;
    goto LAB215;

LAB217:    *((unsigned int *)t24) = 1;
    goto LAB220;

LAB219:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB220;

LAB221:    t23 = ((char*)((ng2)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_unary_minus(t57, 8, t23, 8);
    goto LAB222;

LAB223:    t25 = ((char*)((ng2)));
    goto LAB224;

LAB225:    xsi_vlog_unsigned_bit_combine(t8, 8, t57, 8, t25, 8);
    goto LAB229;

LAB227:    memcpy(t8, t57, 8);
    goto LAB229;

LAB232:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB233;

LAB234:    *((unsigned int *)t24) = 1;
    goto LAB237;

LAB236:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB237;

LAB238:    t31 = (t0 + 3208);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    t38 = (t0 + 1528U);
    t39 = *((char **)t38);
    memset(t41, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t36 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t39);
    t45 = (t36 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t40);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t40);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB244;

LAB241:    if (t52 != 0)
        goto LAB243;

LAB242:    *((unsigned int *)t41) = 1;

LAB244:    memset(t57, 0, 8);
    t43 = (t41 + 4);
    t55 = *((unsigned int *)t43);
    t59 = (~(t55));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB245;

LAB246:    if (*((unsigned int *)t43) != 0)
        goto LAB247;

LAB248:    t63 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t57);
    t67 = (t63 & t66);
    *((unsigned int *)t65) = t67;
    t58 = (t24 + 4);
    t64 = (t57 + 4);
    t69 = (t65 + 4);
    t68 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t64);
    t73 = (t68 | t72);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t69);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB249;

LAB250:
LAB251:    goto LAB240;

LAB243:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB244;

LAB245:    *((unsigned int *)t57) = 1;
    goto LAB248;

LAB247:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB248;

LAB249:    t76 = *((unsigned int *)t65);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t65) = (t76 | t77);
    t70 = (t24 + 4);
    t71 = (t57 + 4);
    t78 = *((unsigned int *)t24);
    t81 = (~(t78));
    t82 = *((unsigned int *)t70);
    t83 = (~(t82));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t71);
    t89 = (~(t87));
    t84 = (t81 & t83);
    t88 = (t86 & t89);
    t90 = (~(t84));
    t91 = (~(t88));
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t90);
    t97 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t97 & t91);
    goto LAB251;

LAB252:    xsi_set_current_line(103, ng0);

LAB255:    xsi_set_current_line(104, ng0);
    t80 = ((char*)((ng1)));
    t94 = (t0 + 2728);
    xsi_vlogvar_assign_value(t94, t80, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB254;

}


extern void work_m_00000000000212023145_3266990120_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_56_1,(void *)Always_63_2};
	xsi_register_didat("work_m_00000000000212023145_3266990120", "isim/tb_Accelerator_isim_beh.exe.sim/work/m_00000000000212023145_3266990120.didat");
	xsi_register_executes(pe);
}
