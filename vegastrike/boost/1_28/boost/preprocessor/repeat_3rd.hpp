#ifndef BOOST_PREPROCESSOR_REPEAT_3RD_HPP
#define BOOST_PREPROCESSOR_REPEAT_3RD_HPP

/* Copyright (C) 2001
 * Housemarque Oy
 * http://www.housemarque.com
 *
 * Permission to copy, use, modify, sell and distribute this software is
 * granted provided this copyright notice appears in all copies. This
 * software is provided "as is" without express or implied warranty, and
 * with no claim as to its suitability for any purpose.
 *
 * See http://www.boost.org for most recent version.
 */

/** <p>Same as BOOST_PP_REPEAT(), but implemented independently.</p> */
#define BOOST_PP_REPEAT_3RD(COUNT,MACRO,DATA) BOOST_PP_REPEAT_3RD_DELAY(COUNT)(MACRO,DATA)

#define BOOST_PP_REPEAT_3RD_DELAY(C) BOOST_PP_REPEAT_3RD##C
#define BOOST_PP_REPEAT_3RD0(M,D)
#define BOOST_PP_REPEAT_3RD1(M,D) M(0,D)
#define BOOST_PP_REPEAT_3RD2(M,D) M(0,D) M(1,D)
#define BOOST_PP_REPEAT_3RD3(M,D) M(0,D) M(1,D) M(2,D)
#define BOOST_PP_REPEAT_3RD4(M,D) M(0,D) M(1,D) M(2,D) M(3,D)
#define BOOST_PP_REPEAT_3RD5(M,D) BOOST_PP_REPEAT_3RD4(M,D) M(4,D)
#define BOOST_PP_REPEAT_3RD6(M,D) BOOST_PP_REPEAT_3RD5(M,D) M(5,D)
#define BOOST_PP_REPEAT_3RD7(M,D) BOOST_PP_REPEAT_3RD6(M,D) M(6,D)
#define BOOST_PP_REPEAT_3RD8(M,D) BOOST_PP_REPEAT_3RD7(M,D) M(7,D)
#define BOOST_PP_REPEAT_3RD9(M,D) BOOST_PP_REPEAT_3RD8(M,D) M(8,D)
#define BOOST_PP_REPEAT_3RD10(M,D) BOOST_PP_REPEAT_3RD9(M,D) M(9,D)
#define BOOST_PP_REPEAT_3RD11(M,D) BOOST_PP_REPEAT_3RD10(M,D) M(10,D)
#define BOOST_PP_REPEAT_3RD12(M,D) BOOST_PP_REPEAT_3RD11(M,D) M(11,D)
#define BOOST_PP_REPEAT_3RD13(M,D) BOOST_PP_REPEAT_3RD12(M,D) M(12,D)
#define BOOST_PP_REPEAT_3RD14(M,D) BOOST_PP_REPEAT_3RD13(M,D) M(13,D)
#define BOOST_PP_REPEAT_3RD15(M,D) BOOST_PP_REPEAT_3RD14(M,D) M(14,D)
#define BOOST_PP_REPEAT_3RD16(M,D) BOOST_PP_REPEAT_3RD15(M,D) M(15,D)
#define BOOST_PP_REPEAT_3RD17(M,D) BOOST_PP_REPEAT_3RD16(M,D) M(16,D)
#define BOOST_PP_REPEAT_3RD18(M,D) BOOST_PP_REPEAT_3RD17(M,D) M(17,D)
#define BOOST_PP_REPEAT_3RD19(M,D) BOOST_PP_REPEAT_3RD18(M,D) M(18,D)
#define BOOST_PP_REPEAT_3RD20(M,D) BOOST_PP_REPEAT_3RD19(M,D) M(19,D)
#define BOOST_PP_REPEAT_3RD21(M,D) BOOST_PP_REPEAT_3RD20(M,D) M(20,D)
#define BOOST_PP_REPEAT_3RD22(M,D) BOOST_PP_REPEAT_3RD21(M,D) M(21,D)
#define BOOST_PP_REPEAT_3RD23(M,D) BOOST_PP_REPEAT_3RD22(M,D) M(22,D)
#define BOOST_PP_REPEAT_3RD24(M,D) BOOST_PP_REPEAT_3RD23(M,D) M(23,D)
#define BOOST_PP_REPEAT_3RD25(M,D) BOOST_PP_REPEAT_3RD24(M,D) M(24,D)
#define BOOST_PP_REPEAT_3RD26(M,D) BOOST_PP_REPEAT_3RD25(M,D) M(25,D)
#define BOOST_PP_REPEAT_3RD27(M,D) BOOST_PP_REPEAT_3RD26(M,D) M(26,D)
#define BOOST_PP_REPEAT_3RD28(M,D) BOOST_PP_REPEAT_3RD27(M,D) M(27,D)
#define BOOST_PP_REPEAT_3RD29(M,D) BOOST_PP_REPEAT_3RD28(M,D) M(28,D)
#define BOOST_PP_REPEAT_3RD30(M,D) BOOST_PP_REPEAT_3RD29(M,D) M(29,D)
#define BOOST_PP_REPEAT_3RD31(M,D) BOOST_PP_REPEAT_3RD30(M,D) M(30,D)
#define BOOST_PP_REPEAT_3RD32(M,D) BOOST_PP_REPEAT_3RD31(M,D) M(31,D)
#define BOOST_PP_REPEAT_3RD33(M,D) BOOST_PP_REPEAT_3RD32(M,D) M(32,D)
#define BOOST_PP_REPEAT_3RD34(M,D) BOOST_PP_REPEAT_3RD33(M,D) M(33,D)
#define BOOST_PP_REPEAT_3RD35(M,D) BOOST_PP_REPEAT_3RD34(M,D) M(34,D)
#define BOOST_PP_REPEAT_3RD36(M,D) BOOST_PP_REPEAT_3RD35(M,D) M(35,D)
#define BOOST_PP_REPEAT_3RD37(M,D) BOOST_PP_REPEAT_3RD36(M,D) M(36,D)
#define BOOST_PP_REPEAT_3RD38(M,D) BOOST_PP_REPEAT_3RD37(M,D) M(37,D)
#define BOOST_PP_REPEAT_3RD39(M,D) BOOST_PP_REPEAT_3RD38(M,D) M(38,D)
#define BOOST_PP_REPEAT_3RD40(M,D) BOOST_PP_REPEAT_3RD39(M,D) M(39,D)
#define BOOST_PP_REPEAT_3RD41(M,D) BOOST_PP_REPEAT_3RD40(M,D) M(40,D)
#define BOOST_PP_REPEAT_3RD42(M,D) BOOST_PP_REPEAT_3RD41(M,D) M(41,D)
#define BOOST_PP_REPEAT_3RD43(M,D) BOOST_PP_REPEAT_3RD42(M,D) M(42,D)
#define BOOST_PP_REPEAT_3RD44(M,D) BOOST_PP_REPEAT_3RD43(M,D) M(43,D)
#define BOOST_PP_REPEAT_3RD45(M,D) BOOST_PP_REPEAT_3RD44(M,D) M(44,D)
#define BOOST_PP_REPEAT_3RD46(M,D) BOOST_PP_REPEAT_3RD45(M,D) M(45,D)
#define BOOST_PP_REPEAT_3RD47(M,D) BOOST_PP_REPEAT_3RD46(M,D) M(46,D)
#define BOOST_PP_REPEAT_3RD48(M,D) BOOST_PP_REPEAT_3RD47(M,D) M(47,D)
#define BOOST_PP_REPEAT_3RD49(M,D) BOOST_PP_REPEAT_3RD48(M,D) M(48,D)
#define BOOST_PP_REPEAT_3RD50(M,D) BOOST_PP_REPEAT_3RD49(M,D) M(49,D)
#define BOOST_PP_REPEAT_3RD51(M,D) BOOST_PP_REPEAT_3RD50(M,D) M(50,D)
#define BOOST_PP_REPEAT_3RD52(M,D) BOOST_PP_REPEAT_3RD51(M,D) M(51,D)
#define BOOST_PP_REPEAT_3RD53(M,D) BOOST_PP_REPEAT_3RD52(M,D) M(52,D)
#define BOOST_PP_REPEAT_3RD54(M,D) BOOST_PP_REPEAT_3RD53(M,D) M(53,D)
#define BOOST_PP_REPEAT_3RD55(M,D) BOOST_PP_REPEAT_3RD54(M,D) M(54,D)
#define BOOST_PP_REPEAT_3RD56(M,D) BOOST_PP_REPEAT_3RD55(M,D) M(55,D)
#define BOOST_PP_REPEAT_3RD57(M,D) BOOST_PP_REPEAT_3RD56(M,D) M(56,D)
#define BOOST_PP_REPEAT_3RD58(M,D) BOOST_PP_REPEAT_3RD57(M,D) M(57,D)
#define BOOST_PP_REPEAT_3RD59(M,D) BOOST_PP_REPEAT_3RD58(M,D) M(58,D)
#define BOOST_PP_REPEAT_3RD60(M,D) BOOST_PP_REPEAT_3RD59(M,D) M(59,D)
#define BOOST_PP_REPEAT_3RD61(M,D) BOOST_PP_REPEAT_3RD60(M,D) M(60,D)
#define BOOST_PP_REPEAT_3RD62(M,D) BOOST_PP_REPEAT_3RD61(M,D) M(61,D)
#define BOOST_PP_REPEAT_3RD63(M,D) BOOST_PP_REPEAT_3RD62(M,D) M(62,D)
#define BOOST_PP_REPEAT_3RD64(M,D) BOOST_PP_REPEAT_3RD63(M,D) M(63,D)
#define BOOST_PP_REPEAT_3RD65(M,D) BOOST_PP_REPEAT_3RD64(M,D) M(64,D)
#define BOOST_PP_REPEAT_3RD66(M,D) BOOST_PP_REPEAT_3RD65(M,D) M(65,D)
#define BOOST_PP_REPEAT_3RD67(M,D) BOOST_PP_REPEAT_3RD66(M,D) M(66,D)
#define BOOST_PP_REPEAT_3RD68(M,D) BOOST_PP_REPEAT_3RD67(M,D) M(67,D)
#define BOOST_PP_REPEAT_3RD69(M,D) BOOST_PP_REPEAT_3RD68(M,D) M(68,D)
#define BOOST_PP_REPEAT_3RD70(M,D) BOOST_PP_REPEAT_3RD69(M,D) M(69,D)
#define BOOST_PP_REPEAT_3RD71(M,D) BOOST_PP_REPEAT_3RD70(M,D) M(70,D)
#define BOOST_PP_REPEAT_3RD72(M,D) BOOST_PP_REPEAT_3RD71(M,D) M(71,D)
#define BOOST_PP_REPEAT_3RD73(M,D) BOOST_PP_REPEAT_3RD72(M,D) M(72,D)
#define BOOST_PP_REPEAT_3RD74(M,D) BOOST_PP_REPEAT_3RD73(M,D) M(73,D)
#define BOOST_PP_REPEAT_3RD75(M,D) BOOST_PP_REPEAT_3RD74(M,D) M(74,D)
#define BOOST_PP_REPEAT_3RD76(M,D) BOOST_PP_REPEAT_3RD75(M,D) M(75,D)
#define BOOST_PP_REPEAT_3RD77(M,D) BOOST_PP_REPEAT_3RD76(M,D) M(76,D)
#define BOOST_PP_REPEAT_3RD78(M,D) BOOST_PP_REPEAT_3RD77(M,D) M(77,D)
#define BOOST_PP_REPEAT_3RD79(M,D) BOOST_PP_REPEAT_3RD78(M,D) M(78,D)
#define BOOST_PP_REPEAT_3RD80(M,D) BOOST_PP_REPEAT_3RD79(M,D) M(79,D)
#define BOOST_PP_REPEAT_3RD81(M,D) BOOST_PP_REPEAT_3RD80(M,D) M(80,D)
#define BOOST_PP_REPEAT_3RD82(M,D) BOOST_PP_REPEAT_3RD81(M,D) M(81,D)
#define BOOST_PP_REPEAT_3RD83(M,D) BOOST_PP_REPEAT_3RD82(M,D) M(82,D)
#define BOOST_PP_REPEAT_3RD84(M,D) BOOST_PP_REPEAT_3RD83(M,D) M(83,D)
#define BOOST_PP_REPEAT_3RD85(M,D) BOOST_PP_REPEAT_3RD84(M,D) M(84,D)
#define BOOST_PP_REPEAT_3RD86(M,D) BOOST_PP_REPEAT_3RD85(M,D) M(85,D)
#define BOOST_PP_REPEAT_3RD87(M,D) BOOST_PP_REPEAT_3RD86(M,D) M(86,D)
#define BOOST_PP_REPEAT_3RD88(M,D) BOOST_PP_REPEAT_3RD87(M,D) M(87,D)
#define BOOST_PP_REPEAT_3RD89(M,D) BOOST_PP_REPEAT_3RD88(M,D) M(88,D)
#define BOOST_PP_REPEAT_3RD90(M,D) BOOST_PP_REPEAT_3RD89(M,D) M(89,D)
#define BOOST_PP_REPEAT_3RD91(M,D) BOOST_PP_REPEAT_3RD90(M,D) M(90,D)
#define BOOST_PP_REPEAT_3RD92(M,D) BOOST_PP_REPEAT_3RD91(M,D) M(91,D)
#define BOOST_PP_REPEAT_3RD93(M,D) BOOST_PP_REPEAT_3RD92(M,D) M(92,D)
#define BOOST_PP_REPEAT_3RD94(M,D) BOOST_PP_REPEAT_3RD93(M,D) M(93,D)
#define BOOST_PP_REPEAT_3RD95(M,D) BOOST_PP_REPEAT_3RD94(M,D) M(94,D)
#define BOOST_PP_REPEAT_3RD96(M,D) BOOST_PP_REPEAT_3RD95(M,D) M(95,D)
#define BOOST_PP_REPEAT_3RD97(M,D) BOOST_PP_REPEAT_3RD96(M,D) M(96,D)
#define BOOST_PP_REPEAT_3RD98(M,D) BOOST_PP_REPEAT_3RD97(M,D) M(97,D)
#define BOOST_PP_REPEAT_3RD99(M,D) BOOST_PP_REPEAT_3RD98(M,D) M(98,D)
#define BOOST_PP_REPEAT_3RD100(M,D) BOOST_PP_REPEAT_3RD99(M,D) M(99,D)
#define BOOST_PP_REPEAT_3RD101(M,D) BOOST_PP_REPEAT_3RD100(M,D) M(100,D)
#define BOOST_PP_REPEAT_3RD102(M,D) BOOST_PP_REPEAT_3RD101(M,D) M(101,D)
#define BOOST_PP_REPEAT_3RD103(M,D) BOOST_PP_REPEAT_3RD102(M,D) M(102,D)
#define BOOST_PP_REPEAT_3RD104(M,D) BOOST_PP_REPEAT_3RD103(M,D) M(103,D)
#define BOOST_PP_REPEAT_3RD105(M,D) BOOST_PP_REPEAT_3RD104(M,D) M(104,D)
#define BOOST_PP_REPEAT_3RD106(M,D) BOOST_PP_REPEAT_3RD105(M,D) M(105,D)
#define BOOST_PP_REPEAT_3RD107(M,D) BOOST_PP_REPEAT_3RD106(M,D) M(106,D)
#define BOOST_PP_REPEAT_3RD108(M,D) BOOST_PP_REPEAT_3RD107(M,D) M(107,D)
#define BOOST_PP_REPEAT_3RD109(M,D) BOOST_PP_REPEAT_3RD108(M,D) M(108,D)
#define BOOST_PP_REPEAT_3RD110(M,D) BOOST_PP_REPEAT_3RD109(M,D) M(109,D)
#define BOOST_PP_REPEAT_3RD111(M,D) BOOST_PP_REPEAT_3RD110(M,D) M(110,D)
#define BOOST_PP_REPEAT_3RD112(M,D) BOOST_PP_REPEAT_3RD111(M,D) M(111,D)
#define BOOST_PP_REPEAT_3RD113(M,D) BOOST_PP_REPEAT_3RD112(M,D) M(112,D)
#define BOOST_PP_REPEAT_3RD114(M,D) BOOST_PP_REPEAT_3RD113(M,D) M(113,D)
#define BOOST_PP_REPEAT_3RD115(M,D) BOOST_PP_REPEAT_3RD114(M,D) M(114,D)
#define BOOST_PP_REPEAT_3RD116(M,D) BOOST_PP_REPEAT_3RD115(M,D) M(115,D)
#define BOOST_PP_REPEAT_3RD117(M,D) BOOST_PP_REPEAT_3RD116(M,D) M(116,D)
#define BOOST_PP_REPEAT_3RD118(M,D) BOOST_PP_REPEAT_3RD117(M,D) M(117,D)
#define BOOST_PP_REPEAT_3RD119(M,D) BOOST_PP_REPEAT_3RD118(M,D) M(118,D)
#define BOOST_PP_REPEAT_3RD120(M,D) BOOST_PP_REPEAT_3RD119(M,D) M(119,D)
#define BOOST_PP_REPEAT_3RD121(M,D) BOOST_PP_REPEAT_3RD120(M,D) M(120,D)
#define BOOST_PP_REPEAT_3RD122(M,D) BOOST_PP_REPEAT_3RD121(M,D) M(121,D)
#define BOOST_PP_REPEAT_3RD123(M,D) BOOST_PP_REPEAT_3RD122(M,D) M(122,D)
#define BOOST_PP_REPEAT_3RD124(M,D) BOOST_PP_REPEAT_3RD123(M,D) M(123,D)
#define BOOST_PP_REPEAT_3RD125(M,D) BOOST_PP_REPEAT_3RD124(M,D) M(124,D)
#define BOOST_PP_REPEAT_3RD126(M,D) BOOST_PP_REPEAT_3RD125(M,D) M(125,D)
#define BOOST_PP_REPEAT_3RD127(M,D) BOOST_PP_REPEAT_3RD126(M,D) M(126,D)
#define BOOST_PP_REPEAT_3RD128(M,D) BOOST_PP_REPEAT_3RD127(M,D) M(127,D)

/* <p>Obsolete. Use BOOST_PP_REPEAT_3RD().</p> */
#define BOOST_PREPROCESSOR_REPEAT_3RD(C,M,D) BOOST_PP_REPEAT_3RD(C,M,D)
#endif
