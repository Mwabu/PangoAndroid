/*
 * fontconfig/fc-lang/fclang.tmpl.h
 *
 * Copyright © 2002 Keith Packard
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the author(s) not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  The authors make no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * THE AUTHOR(S) DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* total size: 903 unique leaves: 610 */

#define LEAF0       (238 * sizeof (FcLangCharSet))
#define OFF0        (LEAF0 + 610 * sizeof (FcCharLeaf))
#define NUM0        (OFF0 + 659 * sizeof (uintptr_t))
#define SET(n)      (n * sizeof (FcLangCharSet) + offsetof (FcLangCharSet, charset))
#define OFF(s,o)    (OFF0 + o * sizeof (uintptr_t) - SET(s))
#define NUM(s,n)    (NUM0 + n * sizeof (FcChar16) - SET(s))
#define LEAF(o,l)   (LEAF0 + l * sizeof (FcCharLeaf) - (OFF0 + o * sizeof (intptr_t)))
#define fcLangCharSets (fcLangData.langCharSets)
#define fcLangCharSetIndices (fcLangData.langIndices)
#define fcLangCharSetIndicesInv (fcLangData.langIndicesInv)

static const struct {
    FcLangCharSet  langCharSets[238];
    FcCharLeaf     leaves[610];
    uintptr_t      leaf_offsets[659];
    FcChar16       numbers[659];
    FcChar8        langIndices[238];
    FcChar8        langIndicesInv[238];
} fcLangData = {
{
    { "aa",  { FC_REF_CONSTANT, 1, OFF(0,0), NUM(0,0) } }, /* 0 */
    { "ab",  { FC_REF_CONSTANT, 1, OFF(1,1), NUM(1,1) } }, /* 1 */
    { "af",  { FC_REF_CONSTANT, 2, OFF(2,2), NUM(2,2) } }, /* 2 */
    { "ak",  { FC_REF_CONSTANT, 5, OFF(3,4), NUM(3,4) } }, /* 3 */
    { "am",  { FC_REF_CONSTANT, 2, OFF(4,9), NUM(4,9) } }, /* 4 */
    { "an",  { FC_REF_CONSTANT, 1, OFF(5,11), NUM(5,11) } }, /* 5 */
    { "ar",  { FC_REF_CONSTANT, 1, OFF(6,12), NUM(6,12) } }, /* 6 */
    { "as",  { FC_REF_CONSTANT, 1, OFF(7,13), NUM(7,13) } }, /* 7 */
    { "ast",  { FC_REF_CONSTANT, 1, OFF(8,11), NUM(8,11) } }, /* 8 */
    { "av",  { FC_REF_CONSTANT, 1, OFF(9,14), NUM(9,14) } }, /* 9 */
    { "ay",  { FC_REF_CONSTANT, 1, OFF(10,15), NUM(10,15) } }, /* 10 */
    { "az-az",  { FC_REF_CONSTANT, 3, OFF(11,16), NUM(11,16) } }, /* 11 */
    { "az-ir",  { FC_REF_CONSTANT, 1, OFF(12,19), NUM(12,19) } }, /* 12 */
    { "ba",  { FC_REF_CONSTANT, 1, OFF(13,20), NUM(13,20) } }, /* 13 */
    { "be",  { FC_REF_CONSTANT, 1, OFF(14,21), NUM(14,21) } }, /* 14 */
    { "ber-dz",  { FC_REF_CONSTANT, 4, OFF(15,22), NUM(15,22) } }, /* 15 */
    { "ber-ma",  { FC_REF_CONSTANT, 1, OFF(16,26), NUM(16,26) } }, /* 16 */
    { "bg",  { FC_REF_CONSTANT, 1, OFF(17,27), NUM(17,27) } }, /* 17 */
    { "bh",  { FC_REF_CONSTANT, 1, OFF(18,28), NUM(18,28) } }, /* 18 */
    { "bho",  { FC_REF_CONSTANT, 1, OFF(19,28), NUM(19,28) } }, /* 19 */
    { "bi",  { FC_REF_CONSTANT, 1, OFF(20,29), NUM(20,29) } }, /* 20 */
    { "bin",  { FC_REF_CONSTANT, 3, OFF(21,30), NUM(21,30) } }, /* 21 */
    { "bm",  { FC_REF_CONSTANT, 3, OFF(22,33), NUM(22,33) } }, /* 22 */
    { "bn",  { FC_REF_CONSTANT, 1, OFF(23,36), NUM(23,36) } }, /* 23 */
    { "bo",  { FC_REF_CONSTANT, 1, OFF(24,37), NUM(24,37) } }, /* 24 */
    { "br",  { FC_REF_CONSTANT, 1, OFF(25,38), NUM(25,38) } }, /* 25 */
    { "bs",  { FC_REF_CONSTANT, 2, OFF(26,39), NUM(26,39) } }, /* 26 */
    { "bua",  { FC_REF_CONSTANT, 1, OFF(27,41), NUM(27,41) } }, /* 27 */
    { "byn",  { FC_REF_CONSTANT, 2, OFF(28,42), NUM(28,42) } }, /* 28 */
    { "ca",  { FC_REF_CONSTANT, 2, OFF(29,44), NUM(29,44) } }, /* 29 */
    { "ce",  { FC_REF_CONSTANT, 1, OFF(30,14), NUM(30,14) } }, /* 30 */
    { "ch",  { FC_REF_CONSTANT, 1, OFF(31,46), NUM(31,46) } }, /* 31 */
    { "chm",  { FC_REF_CONSTANT, 1, OFF(32,47), NUM(32,47) } }, /* 32 */
    { "chr",  { FC_REF_CONSTANT, 1, OFF(33,48), NUM(33,48) } }, /* 33 */
    { "co",  { FC_REF_CONSTANT, 2, OFF(34,49), NUM(34,49) } }, /* 34 */
    { "crh",  { FC_REF_CONSTANT, 2, OFF(35,51), NUM(35,51) } }, /* 35 */
    { "cs",  { FC_REF_CONSTANT, 2, OFF(36,53), NUM(36,53) } }, /* 36 */
    { "csb",  { FC_REF_CONSTANT, 2, OFF(37,55), NUM(37,55) } }, /* 37 */
    { "cu",  { FC_REF_CONSTANT, 1, OFF(38,57), NUM(38,57) } }, /* 38 */
    { "cv",  { FC_REF_CONSTANT, 2, OFF(39,58), NUM(39,58) } }, /* 39 */
    { "cy",  { FC_REF_CONSTANT, 3, OFF(40,60), NUM(40,60) } }, /* 40 */
    { "da",  { FC_REF_CONSTANT, 1, OFF(41,63), NUM(41,63) } }, /* 41 */
    { "de",  { FC_REF_CONSTANT, 1, OFF(42,64), NUM(42,64) } }, /* 42 */
    { "dv",  { FC_REF_CONSTANT, 1, OFF(43,65), NUM(43,65) } }, /* 43 */
    { "dz",  { FC_REF_CONSTANT, 1, OFF(44,37), NUM(44,37) } }, /* 44 */
    { "ee",  { FC_REF_CONSTANT, 4, OFF(45,66), NUM(45,66) } }, /* 45 */
    { "el",  { FC_REF_CONSTANT, 1, OFF(46,70), NUM(46,70) } }, /* 46 */
    { "en",  { FC_REF_CONSTANT, 1, OFF(47,71), NUM(47,71) } }, /* 47 */
    { "eo",  { FC_REF_CONSTANT, 2, OFF(48,72), NUM(48,72) } }, /* 48 */
    { "es",  { FC_REF_CONSTANT, 1, OFF(49,11), NUM(49,11) } }, /* 49 */
    { "et",  { FC_REF_CONSTANT, 2, OFF(50,74), NUM(50,74) } }, /* 50 */
    { "eu",  { FC_REF_CONSTANT, 1, OFF(51,76), NUM(51,76) } }, /* 51 */
    { "fa",  { FC_REF_CONSTANT, 1, OFF(52,19), NUM(52,19) } }, /* 52 */
    { "fat",  { FC_REF_CONSTANT, 5, OFF(53,4), NUM(53,4) } }, /* 53 */
    { "ff",  { FC_REF_CONSTANT, 3, OFF(54,77), NUM(54,77) } }, /* 54 */
    { "fi",  { FC_REF_CONSTANT, 2, OFF(55,80), NUM(55,80) } }, /* 55 */
    { "fil",  { FC_REF_CONSTANT, 1, OFF(56,82), NUM(56,82) } }, /* 56 */
    { "fj",  { FC_REF_CONSTANT, 1, OFF(57,83), NUM(57,83) } }, /* 57 */
    { "fo",  { FC_REF_CONSTANT, 1, OFF(58,84), NUM(58,84) } }, /* 58 */
    { "fr",  { FC_REF_CONSTANT, 2, OFF(59,49), NUM(59,49) } }, /* 59 */
    { "fur",  { FC_REF_CONSTANT, 1, OFF(60,85), NUM(60,85) } }, /* 60 */
    { "fy",  { FC_REF_CONSTANT, 1, OFF(61,86), NUM(61,86) } }, /* 61 */
    { "ga",  { FC_REF_CONSTANT, 3, OFF(62,87), NUM(62,87) } }, /* 62 */
    { "gd",  { FC_REF_CONSTANT, 1, OFF(63,90), NUM(63,90) } }, /* 63 */
    { "gez",  { FC_REF_CONSTANT, 2, OFF(64,91), NUM(64,91) } }, /* 64 */
    { "gl",  { FC_REF_CONSTANT, 1, OFF(65,11), NUM(65,11) } }, /* 65 */
    { "gn",  { FC_REF_CONSTANT, 3, OFF(66,93), NUM(66,93) } }, /* 66 */
    { "gu",  { FC_REF_CONSTANT, 1, OFF(67,96), NUM(67,96) } }, /* 67 */
    { "gv",  { FC_REF_CONSTANT, 1, OFF(68,97), NUM(68,97) } }, /* 68 */
    { "ha",  { FC_REF_CONSTANT, 3, OFF(69,98), NUM(69,98) } }, /* 69 */
    { "haw",  { FC_REF_CONSTANT, 3, OFF(70,101), NUM(70,101) } }, /* 70 */
    { "he",  { FC_REF_CONSTANT, 1, OFF(71,104), NUM(71,104) } }, /* 71 */
    { "hi",  { FC_REF_CONSTANT, 1, OFF(72,28), NUM(72,28) } }, /* 72 */
    { "hne",  { FC_REF_CONSTANT, 1, OFF(73,28), NUM(73,28) } }, /* 73 */
    { "ho",  { FC_REF_CONSTANT, 1, OFF(74,83), NUM(74,83) } }, /* 74 */
    { "hr",  { FC_REF_CONSTANT, 2, OFF(75,39), NUM(75,39) } }, /* 75 */
    { "hsb",  { FC_REF_CONSTANT, 2, OFF(76,105), NUM(76,105) } }, /* 76 */
    { "ht",  { FC_REF_CONSTANT, 1, OFF(77,107), NUM(77,107) } }, /* 77 */
    { "hu",  { FC_REF_CONSTANT, 2, OFF(78,108), NUM(78,108) } }, /* 78 */
    { "hy",  { FC_REF_CONSTANT, 1, OFF(79,110), NUM(79,110) } }, /* 79 */
    { "hz",  { FC_REF_CONSTANT, 3, OFF(80,111), NUM(80,111) } }, /* 80 */
    { "ia",  { FC_REF_CONSTANT, 1, OFF(81,83), NUM(81,83) } }, /* 81 */
    { "id",  { FC_REF_CONSTANT, 1, OFF(82,114), NUM(82,114) } }, /* 82 */
    { "ie",  { FC_REF_CONSTANT, 1, OFF(83,83), NUM(83,83) } }, /* 83 */
    { "ig",  { FC_REF_CONSTANT, 2, OFF(84,115), NUM(84,115) } }, /* 84 */
    { "ii",  { FC_REF_CONSTANT, 5, OFF(85,117), NUM(85,117) } }, /* 85 */
    { "ik",  { FC_REF_CONSTANT, 1, OFF(86,122), NUM(86,122) } }, /* 86 */
    { "io",  { FC_REF_CONSTANT, 1, OFF(87,83), NUM(87,83) } }, /* 87 */
    { "is",  { FC_REF_CONSTANT, 1, OFF(88,123), NUM(88,123) } }, /* 88 */
    { "it",  { FC_REF_CONSTANT, 1, OFF(89,124), NUM(89,124) } }, /* 89 */
    { "iu",  { FC_REF_CONSTANT, 3, OFF(90,125), NUM(90,125) } }, /* 90 */
    { "ja",  { FC_REF_CONSTANT, 83, OFF(91,128), NUM(91,128) } }, /* 91 */
    { "jv",  { FC_REF_CONSTANT, 1, OFF(92,211), NUM(92,211) } }, /* 92 */
    { "ka",  { FC_REF_CONSTANT, 1, OFF(93,212), NUM(93,212) } }, /* 93 */
    { "kaa",  { FC_REF_CONSTANT, 1, OFF(94,213), NUM(94,213) } }, /* 94 */
    { "kab",  { FC_REF_CONSTANT, 4, OFF(95,22), NUM(95,22) } }, /* 95 */
    { "ki",  { FC_REF_CONSTANT, 2, OFF(96,214), NUM(96,214) } }, /* 96 */
    { "kj",  { FC_REF_CONSTANT, 1, OFF(97,83), NUM(97,83) } }, /* 97 */
    { "kk",  { FC_REF_CONSTANT, 1, OFF(98,216), NUM(98,216) } }, /* 98 */
    { "kl",  { FC_REF_CONSTANT, 2, OFF(99,217), NUM(99,217) } }, /* 99 */
    { "km",  { FC_REF_CONSTANT, 1, OFF(100,219), NUM(100,219) } }, /* 100 */
    { "kn",  { FC_REF_CONSTANT, 1, OFF(101,220), NUM(101,220) } }, /* 101 */
    { "ko",  { FC_REF_CONSTANT, 45, OFF(102,221), NUM(102,221) } }, /* 102 */
    { "kok",  { FC_REF_CONSTANT, 1, OFF(103,28), NUM(103,28) } }, /* 103 */
    { "kr",  { FC_REF_CONSTANT, 3, OFF(104,266), NUM(104,266) } }, /* 104 */
    { "ks",  { FC_REF_CONSTANT, 1, OFF(105,269), NUM(105,269) } }, /* 105 */
    { "ku-am",  { FC_REF_CONSTANT, 2, OFF(106,270), NUM(106,270) } }, /* 106 */
    { "ku-iq",  { FC_REF_CONSTANT, 1, OFF(107,272), NUM(107,272) } }, /* 107 */
    { "ku-ir",  { FC_REF_CONSTANT, 1, OFF(108,272), NUM(108,272) } }, /* 108 */
    { "ku-tr",  { FC_REF_CONSTANT, 2, OFF(109,273), NUM(109,273) } }, /* 109 */
    { "kum",  { FC_REF_CONSTANT, 1, OFF(110,275), NUM(110,275) } }, /* 110 */
    { "kv",  { FC_REF_CONSTANT, 1, OFF(111,276), NUM(111,276) } }, /* 111 */
    { "kw",  { FC_REF_CONSTANT, 3, OFF(112,277), NUM(112,277) } }, /* 112 */
    { "kwm",  { FC_REF_CONSTANT, 1, OFF(113,83), NUM(113,83) } }, /* 113 */
    { "ky",  { FC_REF_CONSTANT, 1, OFF(114,280), NUM(114,280) } }, /* 114 */
    { "la",  { FC_REF_CONSTANT, 2, OFF(115,281), NUM(115,281) } }, /* 115 */
    { "lah",  { FC_REF_CONSTANT, 1, OFF(116,269), NUM(116,269) } }, /* 116 */
    { "lb",  { FC_REF_CONSTANT, 1, OFF(117,283), NUM(117,283) } }, /* 117 */
    { "lez",  { FC_REF_CONSTANT, 1, OFF(118,14), NUM(118,14) } }, /* 118 */
    { "lg",  { FC_REF_CONSTANT, 2, OFF(119,284), NUM(119,284) } }, /* 119 */
    { "li",  { FC_REF_CONSTANT, 1, OFF(120,286), NUM(120,286) } }, /* 120 */
    { "ln",  { FC_REF_CONSTANT, 4, OFF(121,287), NUM(121,287) } }, /* 121 */
    { "lo",  { FC_REF_CONSTANT, 1, OFF(122,291), NUM(122,291) } }, /* 122 */
    { "lt",  { FC_REF_CONSTANT, 2, OFF(123,292), NUM(123,292) } }, /* 123 */
    { "lv",  { FC_REF_CONSTANT, 2, OFF(124,294), NUM(124,294) } }, /* 124 */
    { "mai",  { FC_REF_CONSTANT, 1, OFF(125,28), NUM(125,28) } }, /* 125 */
    { "mg",  { FC_REF_CONSTANT, 1, OFF(126,296), NUM(126,296) } }, /* 126 */
    { "mh",  { FC_REF_CONSTANT, 2, OFF(127,297), NUM(127,297) } }, /* 127 */
    { "mi",  { FC_REF_CONSTANT, 3, OFF(128,299), NUM(128,299) } }, /* 128 */
    { "mk",  { FC_REF_CONSTANT, 1, OFF(129,302), NUM(129,302) } }, /* 129 */
    { "ml",  { FC_REF_CONSTANT, 1, OFF(130,303), NUM(130,303) } }, /* 130 */
    { "mn-cn",  { FC_REF_CONSTANT, 1, OFF(131,304), NUM(131,304) } }, /* 131 */
    { "mn-mn",  { FC_REF_CONSTANT, 1, OFF(132,305), NUM(132,305) } }, /* 132 */
    { "mo",  { FC_REF_CONSTANT, 4, OFF(133,306), NUM(133,306) } }, /* 133 */
    { "mr",  { FC_REF_CONSTANT, 1, OFF(134,28), NUM(134,28) } }, /* 134 */
    { "ms",  { FC_REF_CONSTANT, 1, OFF(135,83), NUM(135,83) } }, /* 135 */
    { "mt",  { FC_REF_CONSTANT, 2, OFF(136,310), NUM(136,310) } }, /* 136 */
    { "my",  { FC_REF_CONSTANT, 1, OFF(137,312), NUM(137,312) } }, /* 137 */
    { "na",  { FC_REF_CONSTANT, 2, OFF(138,313), NUM(138,313) } }, /* 138 */
    { "nb",  { FC_REF_CONSTANT, 1, OFF(139,315), NUM(139,315) } }, /* 139 */
    { "nds",  { FC_REF_CONSTANT, 1, OFF(140,64), NUM(140,64) } }, /* 140 */
    { "ne",  { FC_REF_CONSTANT, 1, OFF(141,316), NUM(141,316) } }, /* 141 */
    { "ng",  { FC_REF_CONSTANT, 1, OFF(142,83), NUM(142,83) } }, /* 142 */
    { "nl",  { FC_REF_CONSTANT, 1, OFF(143,317), NUM(143,317) } }, /* 143 */
    { "nn",  { FC_REF_CONSTANT, 1, OFF(144,318), NUM(144,318) } }, /* 144 */
    { "no",  { FC_REF_CONSTANT, 1, OFF(145,315), NUM(145,315) } }, /* 145 */
    { "nr",  { FC_REF_CONSTANT, 1, OFF(146,83), NUM(146,83) } }, /* 146 */
    { "nso",  { FC_REF_CONSTANT, 2, OFF(147,319), NUM(147,319) } }, /* 147 */
    { "nv",  { FC_REF_CONSTANT, 4, OFF(148,321), NUM(148,321) } }, /* 148 */
    { "ny",  { FC_REF_CONSTANT, 2, OFF(149,325), NUM(149,325) } }, /* 149 */
    { "oc",  { FC_REF_CONSTANT, 1, OFF(150,327), NUM(150,327) } }, /* 150 */
    { "om",  { FC_REF_CONSTANT, 1, OFF(151,83), NUM(151,83) } }, /* 151 */
    { "or",  { FC_REF_CONSTANT, 1, OFF(152,328), NUM(152,328) } }, /* 152 */
    { "os",  { FC_REF_CONSTANT, 1, OFF(153,275), NUM(153,275) } }, /* 153 */
    { "ota",  { FC_REF_CONSTANT, 1, OFF(154,329), NUM(154,329) } }, /* 154 */
    { "pa",  { FC_REF_CONSTANT, 1, OFF(155,330), NUM(155,330) } }, /* 155 */
    { "pa-pk",  { FC_REF_CONSTANT, 1, OFF(156,269), NUM(156,269) } }, /* 156 */
    { "pap-an",  { FC_REF_CONSTANT, 1, OFF(157,331), NUM(157,331) } }, /* 157 */
    { "pap-aw",  { FC_REF_CONSTANT, 1, OFF(158,332), NUM(158,332) } }, /* 158 */
    { "pl",  { FC_REF_CONSTANT, 2, OFF(159,333), NUM(159,333) } }, /* 159 */
    { "ps-af",  { FC_REF_CONSTANT, 1, OFF(160,335), NUM(160,335) } }, /* 160 */
    { "ps-pk",  { FC_REF_CONSTANT, 1, OFF(161,336), NUM(161,336) } }, /* 161 */
    { "pt",  { FC_REF_CONSTANT, 1, OFF(162,337), NUM(162,337) } }, /* 162 */
    { "qu",  { FC_REF_CONSTANT, 2, OFF(163,338), NUM(163,338) } }, /* 163 */
    { "rm",  { FC_REF_CONSTANT, 1, OFF(164,340), NUM(164,340) } }, /* 164 */
    { "rn",  { FC_REF_CONSTANT, 1, OFF(165,83), NUM(165,83) } }, /* 165 */
    { "ro",  { FC_REF_CONSTANT, 3, OFF(166,341), NUM(166,341) } }, /* 166 */
    { "ru",  { FC_REF_CONSTANT, 1, OFF(167,275), NUM(167,275) } }, /* 167 */
    { "rw",  { FC_REF_CONSTANT, 1, OFF(168,83), NUM(168,83) } }, /* 168 */
    { "sa",  { FC_REF_CONSTANT, 1, OFF(169,28), NUM(169,28) } }, /* 169 */
    { "sah",  { FC_REF_CONSTANT, 1, OFF(170,344), NUM(170,344) } }, /* 170 */
    { "sc",  { FC_REF_CONSTANT, 1, OFF(171,345), NUM(171,345) } }, /* 171 */
    { "sco",  { FC_REF_CONSTANT, 3, OFF(172,346), NUM(172,346) } }, /* 172 */
    { "sd",  { FC_REF_CONSTANT, 1, OFF(173,349), NUM(173,349) } }, /* 173 */
    { "se",  { FC_REF_CONSTANT, 2, OFF(174,350), NUM(174,350) } }, /* 174 */
    { "sel",  { FC_REF_CONSTANT, 1, OFF(175,275), NUM(175,275) } }, /* 175 */
    { "sg",  { FC_REF_CONSTANT, 1, OFF(176,352), NUM(176,352) } }, /* 176 */
    { "sh",  { FC_REF_CONSTANT, 3, OFF(177,353), NUM(177,353) } }, /* 177 */
    { "shs",  { FC_REF_CONSTANT, 2, OFF(178,356), NUM(178,356) } }, /* 178 */
    { "si",  { FC_REF_CONSTANT, 1, OFF(179,358), NUM(179,358) } }, /* 179 */
    { "sid",  { FC_REF_CONSTANT, 2, OFF(180,359), NUM(180,359) } }, /* 180 */
    { "sk",  { FC_REF_CONSTANT, 2, OFF(181,361), NUM(181,361) } }, /* 181 */
    { "sl",  { FC_REF_CONSTANT, 2, OFF(182,39), NUM(182,39) } }, /* 182 */
    { "sm",  { FC_REF_CONSTANT, 2, OFF(183,363), NUM(183,363) } }, /* 183 */
    { "sma",  { FC_REF_CONSTANT, 1, OFF(184,365), NUM(184,365) } }, /* 184 */
    { "smj",  { FC_REF_CONSTANT, 1, OFF(185,366), NUM(185,366) } }, /* 185 */
    { "smn",  { FC_REF_CONSTANT, 2, OFF(186,367), NUM(186,367) } }, /* 186 */
    { "sms",  { FC_REF_CONSTANT, 3, OFF(187,369), NUM(187,369) } }, /* 187 */
    { "sn",  { FC_REF_CONSTANT, 1, OFF(188,83), NUM(188,83) } }, /* 188 */
    { "so",  { FC_REF_CONSTANT, 1, OFF(189,83), NUM(189,83) } }, /* 189 */
    { "sq",  { FC_REF_CONSTANT, 1, OFF(190,372), NUM(190,372) } }, /* 190 */
    { "sr",  { FC_REF_CONSTANT, 1, OFF(191,373), NUM(191,373) } }, /* 191 */
    { "ss",  { FC_REF_CONSTANT, 1, OFF(192,83), NUM(192,83) } }, /* 192 */
    { "st",  { FC_REF_CONSTANT, 1, OFF(193,83), NUM(193,83) } }, /* 193 */
    { "su",  { FC_REF_CONSTANT, 1, OFF(194,114), NUM(194,114) } }, /* 194 */
    { "sv",  { FC_REF_CONSTANT, 1, OFF(195,374), NUM(195,374) } }, /* 195 */
    { "sw",  { FC_REF_CONSTANT, 1, OFF(196,83), NUM(196,83) } }, /* 196 */
    { "syr",  { FC_REF_CONSTANT, 1, OFF(197,375), NUM(197,375) } }, /* 197 */
    { "ta",  { FC_REF_CONSTANT, 1, OFF(198,376), NUM(198,376) } }, /* 198 */
    { "te",  { FC_REF_CONSTANT, 1, OFF(199,377), NUM(199,377) } }, /* 199 */
    { "tg",  { FC_REF_CONSTANT, 1, OFF(200,378), NUM(200,378) } }, /* 200 */
    { "th",  { FC_REF_CONSTANT, 1, OFF(201,379), NUM(201,379) } }, /* 201 */
    { "ti-er",  { FC_REF_CONSTANT, 2, OFF(202,42), NUM(202,42) } }, /* 202 */
    { "ti-et",  { FC_REF_CONSTANT, 2, OFF(203,359), NUM(203,359) } }, /* 203 */
    { "tig",  { FC_REF_CONSTANT, 2, OFF(204,380), NUM(204,380) } }, /* 204 */
    { "tk",  { FC_REF_CONSTANT, 2, OFF(205,382), NUM(205,382) } }, /* 205 */
    { "tl",  { FC_REF_CONSTANT, 1, OFF(206,82), NUM(206,82) } }, /* 206 */
    { "tn",  { FC_REF_CONSTANT, 2, OFF(207,319), NUM(207,319) } }, /* 207 */
    { "to",  { FC_REF_CONSTANT, 2, OFF(208,363), NUM(208,363) } }, /* 208 */
    { "tr",  { FC_REF_CONSTANT, 2, OFF(209,384), NUM(209,384) } }, /* 209 */
    { "ts",  { FC_REF_CONSTANT, 1, OFF(210,83), NUM(210,83) } }, /* 210 */
    { "tt",  { FC_REF_CONSTANT, 1, OFF(211,386), NUM(211,386) } }, /* 211 */
    { "tw",  { FC_REF_CONSTANT, 5, OFF(212,4), NUM(212,4) } }, /* 212 */
    { "ty",  { FC_REF_CONSTANT, 3, OFF(213,387), NUM(213,387) } }, /* 213 */
    { "tyv",  { FC_REF_CONSTANT, 1, OFF(214,280), NUM(214,280) } }, /* 214 */
    { "ug",  { FC_REF_CONSTANT, 1, OFF(215,390), NUM(215,390) } }, /* 215 */
    { "uk",  { FC_REF_CONSTANT, 1, OFF(216,391), NUM(216,391) } }, /* 216 */
    { "ur",  { FC_REF_CONSTANT, 1, OFF(217,269), NUM(217,269) } }, /* 217 */
    { "uz",  { FC_REF_CONSTANT, 1, OFF(218,83), NUM(218,83) } }, /* 218 */
    { "ve",  { FC_REF_CONSTANT, 2, OFF(219,392), NUM(219,392) } }, /* 219 */
    { "vi",  { FC_REF_CONSTANT, 4, OFF(220,394), NUM(220,394) } }, /* 220 */
    { "vo",  { FC_REF_CONSTANT, 1, OFF(221,398), NUM(221,398) } }, /* 221 */
    { "vot",  { FC_REF_CONSTANT, 2, OFF(222,399), NUM(222,399) } }, /* 222 */
    { "wa",  { FC_REF_CONSTANT, 1, OFF(223,401), NUM(223,401) } }, /* 223 */
    { "wal",  { FC_REF_CONSTANT, 2, OFF(224,359), NUM(224,359) } }, /* 224 */
    { "wen",  { FC_REF_CONSTANT, 2, OFF(225,402), NUM(225,402) } }, /* 225 */
    { "wo",  { FC_REF_CONSTANT, 2, OFF(226,404), NUM(226,404) } }, /* 226 */
    { "xh",  { FC_REF_CONSTANT, 1, OFF(227,83), NUM(227,83) } }, /* 227 */
    { "yap",  { FC_REF_CONSTANT, 1, OFF(228,406), NUM(228,406) } }, /* 228 */
    { "yi",  { FC_REF_CONSTANT, 1, OFF(229,104), NUM(229,104) } }, /* 229 */
    { "yo",  { FC_REF_CONSTANT, 4, OFF(230,407), NUM(230,407) } }, /* 230 */
    { "za",  { FC_REF_CONSTANT, 1, OFF(231,83), NUM(231,83) } }, /* 231 */
    { "zh-cn",  { FC_REF_CONSTANT, 82, OFF(232,411), NUM(232,411) } }, /* 232 */
    { "zh-hk",  { FC_REF_CONSTANT, 83, OFF(233,493), NUM(233,493) } }, /* 233 */
    { "zh-mo",  { FC_REF_CONSTANT, 83, OFF(234,493), NUM(234,493) } }, /* 234 */
    { "zh-sg",  { FC_REF_CONSTANT, 82, OFF(235,411), NUM(235,411) } }, /* 235 */
    { "zh-tw",  { FC_REF_CONSTANT, 83, OFF(236,576), NUM(236,576) } }, /* 236 */
    { "zu",  { FC_REF_CONSTANT, 1, OFF(237,83), NUM(237,83) } }, /* 237 */
},
{
    { { /* 0 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x08104404, 0x08104404,
    } },
    { { /* 1 */
    0xffff8002, 0xffffffff, 0x8002ffff, 0x00000000,
    0xc0000000, 0xf0fc33c0, 0x03000000, 0x00000003,
    } },
    { { /* 2 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0810cf00, 0x0810cf00,
    } },
    { { /* 3 */
    0x00000000, 0x00000000, 0x00000200, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 4 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00220008, 0x00220008,
    } },
    { { /* 5 */
    0x00000000, 0x00000300, 0x00000000, 0x00000300,
    0x00010040, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 6 */
    0x00000000, 0x00000000, 0x08100000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 7 */
    0x00000048, 0x00000200, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 8 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x30000000, 0x00000000, 0x03000000,
    } },
    { { /* 9 */
    0xff7fff7f, 0xff01ff7f, 0x00003d7f, 0xffff7fff,
    0xffff3d7f, 0x003d7fff, 0xff7f7f00, 0x00ff7fff,
    } },
    { { /* 10 */
    0x003d7fff, 0xffffffff, 0x007fff7f, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 11 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x140a2202, 0x140a2202,
    } },
    { { /* 12 */
    0x00000000, 0x07fffffe, 0x000007fe, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 13 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfff99fee, 0xd3c4fdff, 0xb000399f, 0x00030000,
    } },
    { { /* 14 */
    0xffff0042, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 15 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10028010, 0x10028010,
    } },
    { { /* 16 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10400080, 0x10400080,
    } },
    { { /* 17 */
    0xc0000000, 0x00030000, 0xc0000000, 0x00000000,
    0x00008000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 18 */
    0x00000000, 0x00000000, 0x02000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 19 */
    0x00000000, 0x07ffffde, 0x001009f6, 0x40000000,
    0x01000040, 0x00008200, 0x00001000, 0x00000000,
    } },
    { { /* 20 */
    0xffff0000, 0xffffffff, 0x0000ffff, 0x00000000,
    0x030c0000, 0x0c00cc0f, 0x03000000, 0x00000300,
    } },
    { { /* 21 */
    0xffff4040, 0xffffffff, 0x4040ffff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 22 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 23 */
    0x00003000, 0x00000000, 0x00000000, 0x00000000,
    0x00110000, 0x00000000, 0x00000000, 0x000000c0,
    } },
    { { /* 24 */
    0x00000000, 0x00000000, 0x08000000, 0x00000008,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 25 */
    0x00003000, 0x00000030, 0x00000000, 0x0000300c,
    0x000c0000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 26 */
    0x00000000, 0x3a8b0000, 0x9e78e6b9, 0x0000802e,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 27 */
    0xffff0000, 0xffffd7ff, 0x0000d7ff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 28 */
    0xffffffe0, 0x83ffffff, 0x00003fff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 29 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10008200, 0x10008200,
    } },
    { { /* 30 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x060c3303, 0x060c3303,
    } },
    { { /* 31 */
    0x00000003, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 32 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x03000000, 0x00003000, 0x00000000,
    } },
    { { /* 33 */
    0x00000000, 0x00000000, 0x00000c00, 0x00000000,
    0x20010040, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 34 */
    0x00000000, 0x00000000, 0x08100000, 0x00040000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 35 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfff99fee, 0xd3c5fdff, 0xb000399f, 0x00000000,
    } },
    { { /* 36 */
    0x00000000, 0x00000000, 0xfffffeff, 0x3d7e03ff,
    0xfeff0003, 0x03ffffff, 0x00000000, 0x00000000,
    } },
    { { /* 37 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x12120404, 0x12120404,
    } },
    { { /* 38 */
    0x000330c0, 0x00000000, 0x00000000, 0x60000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 39 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x0c00c000, 0x00000000, 0x00000000,
    } },
    { { /* 40 */
    0xff7fff7f, 0xff01ff00, 0x3d7f3d7f, 0xffff7fff,
    0xffff0000, 0x003d7fff, 0xff7f7f3d, 0x00ff7fff,
    } },
    { { /* 41 */
    0x003d7fff, 0xffffffff, 0x007fff00, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 42 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x140ca381, 0x140ca381,
    } },
    { { /* 43 */
    0x00000000, 0x80000000, 0x00000001, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 44 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10020004, 0x10020004,
    } },
    { { /* 45 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x00000030, 0x000c0000, 0x030300c0,
    } },
    { { /* 46 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xffffffff, 0xffffffff, 0x001fffff,
    } },
    { { /* 47 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x1a10cfc5, 0x9a10cfc5,
    } },
    { { /* 48 */
    0x00000000, 0x00000000, 0x000c0000, 0x01000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 49 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10420084, 0x10420084,
    } },
    { { /* 50 */
    0xc0000000, 0x00030000, 0xc0000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 51 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x24082202, 0x24082202,
    } },
    { { /* 52 */
    0x0c00f000, 0x00000000, 0x03000180, 0x6000c033,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 53 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x021c0a08, 0x021c0a08,
    } },
    { { /* 54 */
    0x00000030, 0x00000000, 0x0000001e, 0x18000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 55 */
    0xfdffa966, 0xffffdfff, 0xa965dfff, 0x03ffffff,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 56 */
    0x0000000c, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 57 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x00000c00, 0x00c00000, 0x000c0000,
    } },
    { { /* 58 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0010c604, 0x8010c604,
    } },
    { { /* 59 */
    0x00000000, 0x00000000, 0x00000000, 0x01f00000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 60 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x0000003f, 0x00000000, 0x00000000, 0x000c0000,
    } },
    { { /* 61 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x25082262, 0x25082262,
    } },
    { { /* 62 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x90400010, 0x10400010,
    } },
    { { /* 63 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xffffffff, 0x0001ffff, 0x00000000, 0x00000000,
    } },
    { { /* 64 */
    0x0c000000, 0x00000000, 0x00000c00, 0x00000000,
    0x00170240, 0x00040000, 0x001fe000, 0x00000000,
    } },
    { { /* 65 */
    0x00000000, 0x00000000, 0x08500000, 0x00000008,
    0x00000800, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 66 */
    0x00001003, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 67 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xffffd740, 0xfffffffb, 0x00007fff, 0x00000000,
    } },
    { { /* 68 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00528f81, 0x00528f81,
    } },
    { { /* 69 */
    0x30000300, 0x00300030, 0x30000000, 0x00003000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 70 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10600010, 0x10600010,
    } },
    { { /* 71 */
    0x00000000, 0x00000000, 0x00000000, 0x60000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 72 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10020000, 0x10020000,
    } },
    { { /* 73 */
    0x00000000, 0x00000000, 0x00000c00, 0x00000000,
    0x20000402, 0x00180000, 0x00000000, 0x00000000,
    } },
    { { /* 74 */
    0x00000000, 0x00000000, 0x00880000, 0x00040000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 75 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00400030, 0x00400030,
    } },
    { { /* 76 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0e1e7707, 0x0e1e7707,
    } },
    { { /* 77 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x25092042, 0x25092042,
    } },
    { { /* 78 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x02041107, 0x02041107,
    } },
    { { /* 79 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x9c508e14, 0x1c508e14,
    } },
    { { /* 80 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x04082202, 0x04082202,
    } },
    { { /* 81 */
    0x00000c00, 0x00000003, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 82 */
    0xc0000c0c, 0x00000000, 0x00c00003, 0x00000c03,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 83 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x020c1383, 0x020c1383,
    } },
    { { /* 84 */
    0xff7fff7f, 0xff01ff7f, 0x00003d7f, 0x00ff00ff,
    0x00ff3d7f, 0x003d7fff, 0xff7f7f00, 0x00ff7f00,
    } },
    { { /* 85 */
    0x003d7f00, 0xffff01ff, 0x007fff7f, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 86 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x040a2202, 0x042a220a,
    } },
    { { /* 87 */
    0x00000000, 0x00000200, 0x00000000, 0x00000200,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 88 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x20000000, 0x00000000, 0x02000000,
    } },
    { { /* 89 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfffbafee, 0xf3edfdff, 0x00013bbf, 0x00000001,
    } },
    { { /* 90 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000080, 0x00000080,
    } },
    { { /* 91 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x03000402, 0x00180000, 0x00000000, 0x00000000,
    } },
    { { /* 92 */
    0x00000000, 0x00000000, 0x00880000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 93 */
    0x000c0003, 0x00000c00, 0x00003000, 0x00000c00,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 94 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x08000000, 0x00000000, 0x00000000,
    } },
    { { /* 95 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xffff0000, 0x000007ff,
    } },
    { { /* 96 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00080000, 0x00080000,
    } },
    { { /* 97 */
    0x0c0030c0, 0x00000000, 0x0300001e, 0x66000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 98 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00040100, 0x00040100,
    } },
    { { /* 99 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x14482202, 0x14482202,
    } },
    { { /* 100 */
    0x00000000, 0x00000000, 0x00030000, 0x00030000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 101 */
    0x00000000, 0xfffe0000, 0x007fffff, 0xfffffffe,
    0x000000ff, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 102 */
    0x00000000, 0x00008000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 103 */
    0x000c0000, 0x00000000, 0x00000c00, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 104 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000200, 0x00000200,
    } },
    { { /* 105 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00003c00, 0x00000030,
    } },
    { { /* 106 */
    0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
    } },
    { { /* 107 */
    0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
    0x00001fff, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 108 */
    0xffff4002, 0xffffffff, 0x4002ffff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 109 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x64092242, 0x64092242,
    } },
    { { /* 110 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x060cb301, 0x060cb301,
    } },
    { { /* 111 */
    0x00000c7e, 0x031f8000, 0x0063f200, 0x000df840,
    0x00037e08, 0x08000dfa, 0x0df901bf, 0x5437e400,
    } },
    { { /* 112 */
    0x00000025, 0x40006fc0, 0x27f91be4, 0xdee00000,
    0x007ff83f, 0x00007f7f, 0x00000000, 0x00000000,
    } },
    { { /* 113 */
    0x00000000, 0x00000000, 0x00000000, 0x007f8000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 114 */
    0x000000e7, 0x00000000, 0xfffffffe, 0xffffffff,
    0x780fffff, 0xfffffffe, 0xffffffff, 0x787fffff,
    } },
    { { /* 115 */
    0x43f36f8b, 0x9b462442, 0xe3e0e82c, 0x400a0004,
    0xdb365f65, 0x04497977, 0xe3f0ecd7, 0x08c56038,
    } },
    { { /* 116 */
    0x3403e602, 0x35518000, 0x7eabe0c8, 0x98698200,
    0x2942a948, 0x8060e803, 0xad93441c, 0x4568c03a,
    } },
    { { /* 117 */
    0x8656aa60, 0x02403f7a, 0x14618388, 0x21741020,
    0x07022021, 0x40bc3000, 0x4462a624, 0x0a2060a8,
    } },
    { { /* 118 */
    0x85740217, 0x9c840402, 0x14157bfb, 0x11e27f24,
    0x02efb665, 0x20ff1f75, 0x28403a70, 0x676326c3,
    } },
    { { /* 119 */
    0x20924dd9, 0x0fc946b0, 0x4850bc98, 0xa03f8638,
    0x88162388, 0x52323e09, 0xe3a422aa, 0xc72c00dd,
    } },
    { { /* 120 */
    0x26e1a166, 0x8f0a840b, 0x559e27eb, 0x89bbc241,
    0x85400014, 0x08496361, 0x8ad07f0c, 0x05cfff3e,
    } },
    { { /* 121 */
    0xa803ff1a, 0x7b407a41, 0x80024745, 0x38eb0500,
    0x0005d851, 0x710c9934, 0x01000397, 0x24046366,
    } },
    { { /* 122 */
    0x005180d0, 0x430ac000, 0x30c89071, 0x58000008,
    0xf7000e99, 0x00415f80, 0x941000b0, 0x62800018,
    } },
    { { /* 123 */
    0x09d00240, 0x01568200, 0x08015004, 0x05101d10,
    0x001084c1, 0x10504025, 0x4d8a410f, 0xa60d4009,
    } },
    { { /* 124 */
    0x914cab19, 0x098121c0, 0x0003c485, 0x80000652,
    0x00080b04, 0x0009041d, 0x905c4849, 0x16900009,
    } },
    { { /* 125 */
    0x22200c65, 0x24338412, 0x47960c03, 0x42250a04,
    0x90880028, 0x4f084900, 0xd3aa14a2, 0x3e87d830,
    } },
    { { /* 126 */
    0x1f618604, 0x41867ea4, 0x05b3c390, 0x211857a5,
    0x2a48241e, 0x4a041128, 0x161b0a40, 0x88400d60,
    } },
    { { /* 127 */
    0x9502020a, 0x10608221, 0x04000243, 0x80001444,
    0x0c040000, 0x70000000, 0x00c11a06, 0x0c00024a,
    } },
    { { /* 128 */
    0x00401a00, 0x40451404, 0xbdb30029, 0x052b0a78,
    0xbfa0bba9, 0x8379407c, 0xe81d12fc, 0xc5694bf6,
    } },
    { { /* 129 */
    0x044aeff6, 0xff022115, 0x402bed63, 0x0242d033,
    0x00131000, 0x59ca1b02, 0x020000a0, 0x2c41a703,
    } },
    { { /* 130 */
    0x8ff24880, 0x00000204, 0x10055800, 0x00489200,
    0x20011894, 0x34805004, 0x684c3200, 0x68be49ea,
    } },
    { { /* 131 */
    0x2e42184c, 0x21c9a820, 0x80b050b9, 0xff7c001e,
    0x14e0849a, 0x01e028c1, 0xac49870e, 0xdddb130f,
    } },
    { { /* 132 */
    0x89fbbe1a, 0x51a2a2e0, 0x32ca5502, 0x928b3e46,
    0x438f1dbf, 0x32186703, 0x33c03028, 0xa9230811,
    } },
    { { /* 133 */
    0x3a65c000, 0x04028fe3, 0x86252c4e, 0x00a1bf3d,
    0x8cd43a1a, 0x317c06c9, 0x950a00e0, 0x0edb018b,
    } },
    { { /* 134 */
    0x8c20e34b, 0xf0101182, 0xa7287d94, 0x40fbc9ac,
    0x06534484, 0x44445a90, 0x00013fc8, 0xf5d40048,
    } },
    { { /* 135 */
    0xec577701, 0x891dc442, 0x49286b83, 0xd2424109,
    0x59fe061d, 0x3a221800, 0x3b9fb7e4, 0xc0eaf003,
    } },
    { { /* 136 */
    0x82021386, 0xe4008980, 0x10a1b200, 0x0cc44b80,
    0x8944d309, 0x48341faf, 0x0c458259, 0x0450420a,
    } },
    { { /* 137 */
    0x10c8a040, 0x44503140, 0x01004004, 0x05408280,
    0x442c0108, 0x1a056a30, 0x051420a6, 0x645690cf,
    } },
    { { /* 138 */
    0x31000021, 0xcbf09c18, 0x63e2a120, 0x01b5104c,
    0x9a83538c, 0x3281b8b2, 0x0a84987a, 0x0c0233e7,
    } },
    { { /* 139 */
    0x9018d4cc, 0x9070a1a1, 0xe0048a1e, 0x0451c3d4,
    0x21c2439a, 0x53104844, 0x36400292, 0xf3bd0241,
    } },
    { { /* 140 */
    0xe8f0ab09, 0xa5d27dc0, 0xd24bc242, 0xd0afa43f,
    0x34a11aa0, 0x03d88247, 0x651bc452, 0xc83ad294,
    } },
    { { /* 141 */
    0x40c8001c, 0x33140e06, 0xb21b614f, 0xc0d00088,
    0xa898a02a, 0x166ba1c5, 0x85b42e50, 0x0604c08b,
    } },
    { { /* 142 */
    0x1e04f933, 0xa251056e, 0x76380400, 0x73b8ec07,
    0x18324406, 0xc8164081, 0x63097c8a, 0xaa042980,
    } },
    { { /* 143 */
    0xca9c1c24, 0x27604e0e, 0x83000990, 0x81040046,
    0x10816011, 0x0908540d, 0xcc0a000e, 0x0c000500,
    } },
    { { /* 144 */
    0xa0440430, 0x6784008b, 0x8a195288, 0x8b18865e,
    0x41602e59, 0x9cbe8c10, 0x891c6861, 0x00089800,
    } },
    { { /* 145 */
    0x089a8100, 0x41900018, 0xe4a14007, 0x640d0505,
    0x0e4d310e, 0xff0a4806, 0x2aa81632, 0x000b852e,
    } },
    { { /* 146 */
    0xca841800, 0x696c0e20, 0x16000032, 0x03905658,
    0x1a285120, 0x11248000, 0x432618e1, 0x0eaa5d52,
    } },
    { { /* 147 */
    0xae280fa0, 0x4500fa7b, 0x89406408, 0xc044c880,
    0xb1419005, 0x24c48424, 0x603a1a34, 0xc1949000,
    } },
    { { /* 148 */
    0x003a8246, 0xc106180d, 0x99100022, 0x1511e050,
    0x00824057, 0x020a041a, 0x8930004f, 0x444ad813,
    } },
    { { /* 149 */
    0xed228a02, 0x400510c0, 0x01021000, 0x31018808,
    0x02044600, 0x0708f000, 0xa2008900, 0x22020000,
    } },
    { { /* 150 */
    0x16100200, 0x10400042, 0x02605200, 0x200052f4,
    0x80308510, 0x42021100, 0x80b54308, 0x9a2070e1,
    } },
    { { /* 151 */
    0x08012040, 0xfc653500, 0xab0419c1, 0x62140286,
    0x00440087, 0x02449085, 0x0a85405c, 0x33803207,
    } },
    { { /* 152 */
    0xb8c00400, 0xc0d0ce20, 0x0080c030, 0x0d250508,
    0x00400a90, 0x080c0200, 0x40006505, 0x41026421,
    } },
    { { /* 153 */
    0x00000268, 0x847c0024, 0xde200002, 0x40498619,
    0x40000808, 0x20010084, 0x10108400, 0x01c742cd,
    } },
    { { /* 154 */
    0xd52a7038, 0x1d8f1968, 0x3e12be50, 0x81d92ef5,
    0x2412cec4, 0x732e0828, 0x4b3424ac, 0xd41d020c,
    } },
    { { /* 155 */
    0x80002a02, 0x08110097, 0x114411c4, 0x7d451786,
    0x064949d9, 0x87914000, 0xd8c4254c, 0x491444ba,
    } },
    { { /* 156 */
    0xc8001b92, 0x15800271, 0x0c000081, 0xc200096a,
    0x40024800, 0xba493021, 0x1c802080, 0x1008e2ac,
    } },
    { { /* 157 */
    0x00341004, 0x841400e1, 0x20000020, 0x10149800,
    0x04aa70c2, 0x54208688, 0x04130c62, 0x20109180,
    } },
    { { /* 158 */
    0x02064082, 0x54001c40, 0xe4e90383, 0x84802125,
    0x2000e433, 0xe60944c0, 0x81260a03, 0x080112da,
    } },
    { { /* 159 */
    0x97906901, 0xf8864001, 0x0081e24d, 0xa6510a0e,
    0x81ec011a, 0x8441c600, 0xb62cadb8, 0x8741a46f,
    } },
    { { /* 160 */
    0x4b028d54, 0x02681161, 0x2057bb60, 0x043350a0,
    0xb7b4a8c0, 0x01122402, 0x20009ad3, 0x00c82271,
    } },
    { { /* 161 */
    0x809e2081, 0xe1800c8a, 0x8151b009, 0x40281031,
    0x89a52a0e, 0x620e69b6, 0xd1444425, 0x4d548085,
    } },
    { { /* 162 */
    0x1fb12c75, 0x862dd807, 0x4841d87c, 0x226e414e,
    0x9e088200, 0xed37f80c, 0x75268c80, 0x08149313,
    } },
    { { /* 163 */
    0xc8040e32, 0x6ea6484e, 0x66702c4a, 0xba0126c0,
    0x185dd30c, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 164 */
    0x00000000, 0x05400000, 0x81337020, 0x03a54f81,
    0x641055ec, 0x2344c318, 0x00341462, 0x1a090a43,
    } },
    { { /* 165 */
    0x13a5187b, 0xa8480102, 0xc5440440, 0xe2dd8106,
    0x2d481af0, 0x0416b626, 0x6e405058, 0x31128032,
    } },
    { { /* 166 */
    0x0c0007e4, 0x420a8208, 0x803b4840, 0x87134860,
    0x3428850d, 0xe5290319, 0x870a2345, 0x5c1825a9,
    } },
    { { /* 167 */
    0xd9c577a6, 0x03e85e00, 0xa7000081, 0x41c6cd54,
    0xa2042800, 0x2b0ab860, 0xda9e0020, 0x0e1a08ea,
    } },
    { { /* 168 */
    0x11c0427c, 0x03768908, 0x01058621, 0x18a80000,
    0xc44846a0, 0x20220d05, 0x91485422, 0x28978a01,
    } },
    { { /* 169 */
    0x00087898, 0x31221605, 0x08804240, 0x06a2fa4e,
    0x92110814, 0x9b042002, 0x06432e52, 0x90105000,
    } },
    { { /* 170 */
    0x85ba0041, 0x20203042, 0x05a04f0b, 0x40802708,
    0x1a930591, 0x0600df50, 0x3021a202, 0x4e800630,
    } },
    { { /* 171 */
    0x04c80cc4, 0x8001a004, 0xd4316000, 0x0a020880,
    0x00281c00, 0x00418e18, 0xca106ad0, 0x4b00f210,
    } },
    { { /* 172 */
    0x1506274d, 0x88900220, 0x82a85a00, 0x81504549,
    0x80002004, 0x2c088804, 0x000508d1, 0x4ac48001,
    } },
    { { /* 173 */
    0x0062e020, 0x0a42008e, 0x6a8c3055, 0xe0a5090e,
    0x42c42906, 0x80b34814, 0xb330803e, 0x731c0102,
    } },
    { { /* 174 */
    0x600d1494, 0x09400c20, 0xc040301a, 0xc094a451,
    0x05c88dca, 0xa40c96c2, 0x34040001, 0x011000c8,
    } },
    { { /* 175 */
    0xa9c9550d, 0x1c5a2428, 0x48370142, 0x100f7a4d,
    0x452a32b4, 0x9205317b, 0x5c44b894, 0x458a68d7,
    } },
    { { /* 176 */
    0x2ed15097, 0x42081943, 0x9d40d202, 0x20979840,
    0x064d5409, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 177 */
    0x00000000, 0x84800000, 0x04215542, 0x17001c06,
    0x61107624, 0xb9ddff87, 0x5c0a659f, 0x3c00245d,
    } },
    { { /* 178 */
    0x0059adb0, 0x00000000, 0x00000000, 0x009b28d0,
    0x02000422, 0x44080108, 0xac409804, 0x90288d0a,
    } },
    { { /* 179 */
    0xe0018700, 0x00310400, 0x82211794, 0x10540019,
    0x021a2cb2, 0x40039c02, 0x88043d60, 0x7900080c,
    } },
    { { /* 180 */
    0xba3c1628, 0xcb088640, 0x90807274, 0x0000001e,
    0xd8000000, 0x9c87e188, 0x04124034, 0x2791ae64,
    } },
    { { /* 181 */
    0xe6fbe86b, 0x5366408f, 0x537feea6, 0xb5e4e32b,
    0x0002869f, 0x01228548, 0x08004402, 0x20a02116,
    } },
    { { /* 182 */
    0x02040004, 0x00052000, 0x01547e00, 0x01ac162c,
    0x10852a84, 0x05308c14, 0xb943fbc3, 0x906000ca,
    } },
    { { /* 183 */
    0x40326000, 0x80901200, 0x4c810b30, 0x40020054,
    0x1d6a0029, 0x02802000, 0x00048000, 0x150c2610,
    } },
    { { /* 184 */
    0x07018040, 0x0c24d94d, 0x18502810, 0x50205001,
    0x04d01000, 0x02017080, 0x21c30108, 0x00000132,
    } },
    { { /* 185 */
    0x07190088, 0x05600802, 0x4c0e0012, 0xf0a10405,
    0x00000002, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 186 */
    0x00000000, 0x00000000, 0x00000000, 0x00800000,
    0x035a8e8d, 0x5a0421bd, 0x11703488, 0x00000026,
    } },
    { { /* 187 */
    0x10000000, 0x8804c502, 0xf801b815, 0x25ed147c,
    0x1bb0ed60, 0x1bd70589, 0x1a627af3, 0x0ac50d0c,
    } },
    { { /* 188 */
    0x524ae5d1, 0x63050490, 0x52440354, 0x16122b57,
    0x1101a872, 0x00182949, 0x10080948, 0x886c6000,
    } },
    { { /* 189 */
    0x058f916e, 0x39903012, 0x4930f840, 0x001b8880,
    0x00000000, 0x00428500, 0x98000058, 0x7014ea04,
    } },
    { { /* 190 */
    0x611d1628, 0x60005113, 0x00a71a24, 0x00000000,
    0x03c00000, 0x10187120, 0xa9270172, 0x89066004,
    } },
    { { /* 191 */
    0x020cc022, 0x40810900, 0x8ca0202d, 0x00000e34,
    0x00000000, 0x11012100, 0xc11a8011, 0x0892ec4c,
    } },
    { { /* 192 */
    0x85000040, 0x1806c7ac, 0x0512e03e, 0x00108000,
    0x80ce4008, 0x02106d01, 0x08568641, 0x0027011e,
    } },
    { { /* 193 */
    0x083d3750, 0x4e05e032, 0x048401c0, 0x01400081,
    0x00000000, 0x00000000, 0x00000000, 0x00591aa0,
    } },
    { { /* 194 */
    0x882443c8, 0xc8001d48, 0x72030152, 0x04049013,
    0x04008280, 0x0d148a10, 0x02088056, 0x2704a040,
    } },
    { { /* 195 */
    0x4c000000, 0x00000000, 0x00000000, 0xa3200000,
    0xa0ae1902, 0xdf002660, 0x7b15f010, 0x3ad08121,
    } },
    { { /* 196 */
    0x00284180, 0x48001003, 0x8014cc00, 0x00c414cf,
    0x30202000, 0x00000001, 0x00000000, 0x00000000,
    } },
    { { /* 197 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000300, 0x00000300,
    } },
    { { /* 198 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xffff0000, 0x0001ffff,
    } },
    { { /* 199 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x0c0c0000, 0x000cc00c, 0x03000000, 0x00000000,
    } },
    { { /* 200 */
    0x00000000, 0x00000300, 0x00000000, 0x00000300,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 201 */
    0xffff0000, 0xffffffff, 0x0040ffff, 0x00000000,
    0x0c0c0000, 0x0c00000c, 0x03000000, 0x00000300,
    } },
    { { /* 202 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0d10646e, 0x0d10646e,
    } },
    { { /* 203 */
    0x00000000, 0x01000300, 0x00000000, 0x00000300,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 204 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x9fffffff, 0xffcffee7, 0x0000003f, 0x00000000,
    } },
    { { /* 205 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfffddfec, 0xc3effdff, 0x40603ddf, 0x00000003,
    } },
    { { /* 206 */
    0x00000000, 0xfffe0000, 0xffffffff, 0xffffffff,
    0x00007fff, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 207 */
    0x3eff0793, 0x1303b011, 0x11102801, 0x05930000,
    0xb0111e7b, 0x3b019703, 0x00a01112, 0x306b9593,
    } },
    { { /* 208 */
    0x1102b051, 0x11303201, 0x011102b0, 0xb879300a,
    0x30011306, 0x00800010, 0x100b0113, 0x93000011,
    } },
    { { /* 209 */
    0x00102b03, 0x05930000, 0xb051746b, 0x3b011323,
    0x00001030, 0x70000000, 0x1303b011, 0x11102900,
    } },
    { { /* 210 */
    0x00012180, 0xb0153000, 0x3001030e, 0x02000030,
    0x10230111, 0x13000000, 0x10106b81, 0x01130300,
    } },
    { { /* 211 */
    0x30111013, 0x00000100, 0x22b85530, 0x30000000,
    0x9702b011, 0x113afb07, 0x011303b0, 0x00000021,
    } },
    { { /* 212 */
    0x3b0d1b00, 0x03b01138, 0x11330113, 0x13000001,
    0x111c2b05, 0x00000100, 0xb0111000, 0x2a011300,
    } },
    { { /* 213 */
    0x02b01930, 0x10100001, 0x11000000, 0x10300301,
    0x07130230, 0x0011146b, 0x2b051300, 0x8fb8f974,
    } },
    { { /* 214 */
    0x103b0113, 0x00000000, 0xd9700000, 0x01134ab0,
    0x0011103b, 0x00001103, 0x2ab15930, 0x10000111,
    } },
    { { /* 215 */
    0x11010000, 0x00100b01, 0x01130000, 0x0000102b,
    0x20000101, 0x02a01110, 0x30210111, 0x0102b059,
    } },
    { { /* 216 */
    0x19300000, 0x011307b0, 0xb011383b, 0x00000003,
    0x00000000, 0x383b0d13, 0x0103b011, 0x00001000,
    } },
    { { /* 217 */
    0x01130000, 0x00101020, 0x00000100, 0x00000110,
    0x30000000, 0x00021811, 0x00100000, 0x01110000,
    } },
    { { /* 218 */
    0x00000023, 0x0b019300, 0x00301110, 0x302b0111,
    0x13c7b011, 0x01303b01, 0x00000280, 0xb0113000,
    } },
    { { /* 219 */
    0x2b011383, 0x03b01130, 0x300a0011, 0x1102b011,
    0x00002000, 0x01110100, 0xa011102b, 0x2b011302,
    } },
    { { /* 220 */
    0x01000010, 0x30000001, 0x13029011, 0x11302b01,
    0x000066b0, 0xb0113000, 0x6b07d302, 0x07b0113a,
    } },
    { { /* 221 */
    0x00200103, 0x13000000, 0x11386b05, 0x011303b0,
    0x000010b8, 0x2b051b00, 0x03000110, 0x10000000,
    } },
    { { /* 222 */
    0x1102a011, 0x79700a01, 0x0111a2b0, 0x0000100a,
    0x00011100, 0x00901110, 0x00090111, 0x93000000,
    } },
    { { /* 223 */
    0xf9f2bb05, 0x011322b0, 0x2001323b, 0x00000000,
    0x06b05930, 0x303b0193, 0x1123a011, 0x11700000,
    } },
    { { /* 224 */
    0x001102b0, 0x00001010, 0x03011301, 0x00000110,
    0x162b0793, 0x01010010, 0x11300000, 0x01110200,
    } },
    { { /* 225 */
    0xb0113029, 0x00000000, 0x0eb05130, 0x383b0513,
    0x0303b011, 0x00000100, 0x01930000, 0x00001039,
    } },
    { { /* 226 */
    0x3b000302, 0x00000000, 0x00230113, 0x00000000,
    0x00100000, 0x00010000, 0x90113020, 0x00000002,
    } },
    { { /* 227 */
    0x00000000, 0x10000000, 0x11020000, 0x00000301,
    0x01130000, 0xb079b02b, 0x3b011323, 0x02b01130,
    } },
    { { /* 228 */
    0xf0210111, 0x1343b0d9, 0x11303b01, 0x011103b0,
    0xb0517020, 0x20011322, 0x01901110, 0x300b0111,
    } },
    { { /* 229 */
    0x9302b011, 0x0016ab01, 0x01130100, 0xb0113021,
    0x29010302, 0x02b03130, 0x30000000, 0x1b42b819,
    } },
    { { /* 230 */
    0x11383301, 0x00000330, 0x00000020, 0x33051300,
    0x00001110, 0x00000000, 0x93000000, 0x01302305,
    } },
    { { /* 231 */
    0x00010100, 0x30111010, 0x00000100, 0x02301130,
    0x10100001, 0x11000000, 0x00000000, 0x85130200,
    } },
    { { /* 232 */
    0x10111003, 0x2b011300, 0x63b87730, 0x303b0113,
    0x11a2b091, 0x7b300201, 0x011357f0, 0xf0d1702b,
    } },
    { { /* 233 */
    0x1b0111e3, 0x0ab97130, 0x303b0113, 0x13029001,
    0x11302b01, 0x071302b0, 0x3011302b, 0x23011303,
    } },
    { { /* 234 */
    0x02b01130, 0x30ab0113, 0x11feb411, 0x71300901,
    0x05d347b8, 0xb011307b, 0x21015303, 0x00001110,
    } },
    { { /* 235 */
    0x306b0513, 0x1102b011, 0x00103301, 0x05130000,
    0xa01038eb, 0x30000102, 0x02b01110, 0x30200013,
    } },
    { { /* 236 */
    0x0102b071, 0x00101000, 0x01130000, 0x1011100b,
    0x2b011300, 0x00000000, 0x366b0593, 0x1303b095,
    } },
    { { /* 237 */
    0x01103b01, 0x00000200, 0xb0113000, 0x20000103,
    0x01000010, 0x30000000, 0x030ab011, 0x00101001,
    } },
    { { /* 238 */
    0x01110100, 0x00000003, 0x23011302, 0x03000010,
    0x10000000, 0x01000000, 0x00100000, 0x00000290,
    } },
    { { /* 239 */
    0x30113000, 0x7b015386, 0x03b01130, 0x00210151,
    0x13000000, 0x11303b01, 0x001102b0, 0x00011010,
    } },
    { { /* 240 */
    0x2b011302, 0x02001110, 0x10000000, 0x0102b011,
    0x11300100, 0x000102b0, 0x00011010, 0x2b011100,
    } },
    { { /* 241 */
    0x02101110, 0x002b0113, 0x93000000, 0x11302b03,
    0x011302b0, 0x0000303b, 0x00000002, 0x03b01930,
    } },
    { { /* 242 */
    0x102b0113, 0x0103b011, 0x11300000, 0x011302b0,
    0x00001021, 0x00010102, 0x00000010, 0x102b0113,
    } },
    { { /* 243 */
    0x01020011, 0x11302000, 0x011102b0, 0x30113001,
    0x00000002, 0x02b01130, 0x303b0313, 0x0103b011,
    } },
    { { /* 244 */
    0x00002000, 0x05130000, 0xb011303b, 0x10001102,
    0x00000110, 0x142b0113, 0x01000001, 0x01100000,
    } },
    { { /* 245 */
    0x00010280, 0xb0113000, 0x10000102, 0x00000010,
    0x10230113, 0x93021011, 0x11100b05, 0x01130030,
    } },
    { { /* 246 */
    0xb051702b, 0x3b011323, 0x00000030, 0x30000000,
    0x1303b011, 0x11102b01, 0x01010330, 0xb011300a,
    } },
    { { /* 247 */
    0x20000102, 0x00000000, 0x10000011, 0x9300a011,
    0x00102b05, 0x00000200, 0x90111000, 0x29011100,
    } },
    { { /* 248 */
    0x00b01110, 0x30000000, 0x1302b011, 0x11302b21,
    0x000103b0, 0x00000020, 0x2b051300, 0x02b01130,
    } },
    { { /* 249 */
    0x103b0113, 0x13002011, 0x11322b21, 0x00130280,
    0xa0113028, 0x0a011102, 0x02921130, 0x30210111,
    } },
    { { /* 250 */
    0x13020011, 0x11302b01, 0x03d30290, 0x3011122b,
    0x2b011302, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 251 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00004000, 0x00000000, 0x20000000, 0x00000000,
    } },
    { { /* 252 */
    0x00000000, 0x00000000, 0x00003000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 253 */
    0x00000000, 0x07ffffde, 0x000001f6, 0x42000000,
    0x01020140, 0x44008200, 0x00041000, 0x00000000,
    } },
    { { /* 254 */
    0xffff0000, 0xffff27bf, 0x000027bf, 0x00000000,
    0x00000000, 0x0c000000, 0x03000000, 0x000000c0,
    } },
    { { /* 255 */
    0x3c000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 256 */
    0x00000000, 0x061ef5c0, 0x000001f6, 0x40000000,
    0x01040040, 0x00208210, 0x00005040, 0x00000000,
    } },
    { { /* 257 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x08004480, 0x08004480,
    } },
    { { /* 258 */
    0x00000000, 0x00000000, 0xc0000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 259 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 260 */
    0xffff0042, 0xffffffff, 0x0042ffff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x000000c0,
    } },
    { { /* 261 */
    0x00000000, 0x000c0000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 262 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x0000c00c, 0x00000000, 0x00000000,
    } },
    { { /* 263 */
    0x000c0003, 0x00003c00, 0x0000f000, 0x00003c00,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 264 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x98504f14, 0x18504f14,
    } },
    { { /* 265 */
    0x00000000, 0x00000000, 0x00000c00, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 266 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00480910, 0x00480910,
    } },
    { { /* 267 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0c186606, 0x0c186606,
    } },
    { { /* 268 */
    0x0c000000, 0x00000000, 0x00000000, 0x00000000,
    0x00010040, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 269 */
    0x00001006, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 270 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfef02596, 0x3bffecae, 0x30003f5f, 0x00000000,
    } },
    { { /* 271 */
    0x03c03030, 0x0000c000, 0x00000000, 0x600c0c03,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 272 */
    0x000c3003, 0x18c00c0c, 0x00c03060, 0x60000c03,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 273 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00100002, 0x00100002,
    } },
    { { /* 274 */
    0x00000003, 0x18000000, 0x00003060, 0x00000c00,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 275 */
    0x00000000, 0x00300000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 276 */
    0xfdffb729, 0x000001ff, 0xb7290000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 277 */
    0xfffddfec, 0xc3fffdff, 0x00803dcf, 0x00000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 278 */
    0x00000000, 0xffffffff, 0xffffffff, 0x00ffffff,
    0xffffffff, 0x000003ff, 0x00000000, 0x00000000,
    } },
    { { /* 279 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00000000, 0x0000c000, 0x00000000, 0x00000300,
    } },
    { { /* 280 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00004004, 0x00004004,
    } },
    { { /* 281 */
    0x0f000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 282 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x02045101, 0x02045101,
    } },
    { { /* 283 */
    0x00000c00, 0x000000c3, 0x00000000, 0x18000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 284 */
    0xffffffff, 0x0007f6fb, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 285 */
    0x00000000, 0x00000000, 0x00000000, 0x00000300,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 286 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x011c0661, 0x011c0661,
    } },
    { { /* 287 */
    0xffff8fe0, 0x83ffffff, 0x00003fff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 288 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x1c58af16, 0x1c58af16,
    } },
    { { /* 289 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x115c0671, 0x115c0671,
    } },
    { { /* 290 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00100400, 0x00100400,
    } },
    { { /* 291 */
    0x00000000, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 292 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00082202, 0x00082202,
    } },
    { { /* 293 */
    0x03000030, 0x0000c000, 0x00000006, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000c00,
    } },
    { { /* 294 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x10000000, 0x00000000, 0x00000000,
    } },
    { { /* 295 */
    0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 296 */
    0x00000000, 0x00000000, 0x00000000, 0x00300000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 297 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x040c2383, 0x040c2383,
    } },
    { { /* 298 */
    0xfff99fee, 0xf3cdfdff, 0xb0c0398f, 0x00000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 299 */
    0x00000000, 0x07ffffc6, 0x000001fe, 0x40000000,
    0x01000040, 0x0000a000, 0x00001000, 0x00000000,
    } },
    { { /* 300 */
    0xfff987e0, 0xd36dfdff, 0x1e003987, 0x001f0000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 301 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x160e2302, 0x160e2302,
    } },
    { { /* 302 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00020000, 0x00020000,
    } },
    { { /* 303 */
    0x030000f0, 0x00000000, 0x0c00001e, 0x1e000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 304 */
    0x00000000, 0x07ffffde, 0x000005f6, 0x50000000,
    0x05480262, 0x10000a00, 0x00013000, 0x00000000,
    } },
    { { /* 305 */
    0x00000000, 0x07ffffde, 0x000005f6, 0x50000000,
    0x05480262, 0x10000a00, 0x00052000, 0x00000000,
    } },
    { { /* 306 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x143c278f, 0x143c278f,
    } },
    { { /* 307 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000100, 0x00000000,
    } },
    { { /* 308 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x02045301, 0x02045301,
    } },
    { { /* 309 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00300000, 0x0c00c030, 0x03000000, 0x00000000,
    } },
    { { /* 310 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x02041101, 0x02041101,
    } },
    { { /* 311 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00800000, 0x00000000, 0x00000000,
    } },
    { { /* 312 */
    0x30000000, 0x00000000, 0x00000000, 0x00000000,
    0x00040000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 313 */
    0x00000000, 0x07fffdd6, 0x000005f6, 0xec000000,
    0x0200b4d9, 0x480a8640, 0x00000000, 0x00000000,
    } },
    { { /* 314 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000002, 0x00000002,
    } },
    { { /* 315 */
    0x00033000, 0x00000000, 0x00000c00, 0x600000c3,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 316 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x1850cc14, 0x1850cc14,
    } },
    { { /* 317 */
    0xffff8f04, 0xffffffff, 0x8f04ffff, 0x00000000,
    0x030c0000, 0x0c00cc0f, 0x03000000, 0x00000300,
    } },
    { { /* 318 */
    0x00000000, 0x00800000, 0x03bffbaa, 0x03bffbaa,
    0x00000000, 0x00000000, 0x00002202, 0x00002202,
    } },
    { { /* 319 */
    0x00080000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 320 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xfc7e3fec, 0x2ffbffbf, 0x7f5f847f, 0x00040000,
    } },
    { { /* 321 */
    0xff7fff7f, 0xff01ff7f, 0x3d7f3d7f, 0xffff7fff,
    0xffff3d7f, 0x003d7fff, 0xff7f7f3d, 0x00ff7fff,
    } },
    { { /* 322 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x24182212, 0x24182212,
    } },
    { { /* 323 */
    0x0000f000, 0x66000000, 0x00300180, 0x60000033,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 324 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00408030, 0x00408030,
    } },
    { { /* 325 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00020032, 0x00020032,
    } },
    { { /* 326 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000016, 0x00000016,
    } },
    { { /* 327 */
    0x00033000, 0x00000000, 0x00000c00, 0x60000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 328 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00200034, 0x00200034,
    } },
    { { /* 329 */
    0x00033000, 0x00000000, 0x00000c00, 0x60000003,
    0x00000000, 0x00800000, 0x00000000, 0x0000c3f0,
    } },
    { { /* 330 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00040000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 331 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00000880, 0x00000880,
    } },
    { { /* 332 */
    0xfdff8f04, 0xfdff01ff, 0x8f0401ff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 333 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10400a33, 0x10400a33,
    } },
    { { /* 334 */
    0xffff0000, 0xffff1fff, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 335 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xd63dc7e8, 0xc3bfc718, 0x00803dc7, 0x00000000,
    } },
    { { /* 336 */
    0xfffddfee, 0xc3effdff, 0x00603ddf, 0x00000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 337 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x0c0c0000, 0x00cc0000, 0x00000000, 0x0000c00c,
    } },
    { { /* 338 */
    0xfffffffe, 0x87ffffff, 0x00007fff, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 339 */
    0xff7fff7f, 0xff01ff00, 0x00003d7f, 0xffff7fff,
    0x00ff0000, 0x003d7f7f, 0xff7f7f00, 0x00ff7f00,
    } },
    { { /* 340 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x30400090, 0x30400090,
    } },
    { { /* 341 */
    0x00000000, 0x00000000, 0xc0000180, 0x60000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 342 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x18404084, 0x18404084,
    } },
    { { /* 343 */
    0xffff0002, 0xffffffff, 0x0002ffff, 0x00000000,
    0x00c00000, 0x0c00c00c, 0x03000000, 0x00000000,
    } },
    { { /* 344 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00008000, 0x00008000,
    } },
    { { /* 345 */
    0x00000000, 0x041ed5c0, 0x0000077e, 0x40000000,
    0x01000040, 0x4000a000, 0x002109c0, 0x00000000,
    } },
    { { /* 346 */
    0xffff00d0, 0xffffffff, 0x00d0ffff, 0x00000000,
    0x00030000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 347 */
    0x000c0000, 0x30000000, 0x00000c30, 0x00030000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 348 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x263c370f, 0x263c370f,
    } },
    { { /* 349 */
    0x0003000c, 0x00000300, 0x00000000, 0x00000300,
    0x00000000, 0x00018003, 0x00000000, 0x00000000,
    } },
    { { /* 350 */
    0x0800024f, 0x00000008, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 351 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xffffffff, 0xffffffff, 0x03ffffff,
    } },
    { { /* 352 */
    0x00000000, 0x00000000, 0x077dfffe, 0x077dfffe,
    0x00000000, 0x00000000, 0x10400010, 0x10400010,
    } },
    { { /* 353 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x10400010, 0x10400010,
    } },
    { { /* 354 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x081047a4, 0x081047a4,
    } },
    { { /* 355 */
    0x0c0030c0, 0x00000000, 0x0f30001e, 0x66000003,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 356 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x000a0a09, 0x000a0a09,
    } },
    { { /* 357 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x00400810, 0x00400810,
    } },
    { { /* 358 */
    0x00000000, 0x00000000, 0x07fffffe, 0x07fffffe,
    0x00000000, 0x00000000, 0x0e3c770f, 0x0e3c770f,
    } },
    { { /* 359 */
    0x0c000000, 0x00000300, 0x00000018, 0x00000300,
    0x00000000, 0x00000000, 0x001fe000, 0x03000000,
    } },
    { { /* 360 */
    0x0000100f, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 361 */
    0x00000000, 0xc0000000, 0x00000000, 0x0000000c,
    0x00000000, 0x33000000, 0x00003000, 0x00000000,
    } },
    { { /* 362 */
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000280, 0x00000000,
    } },
    { { /* 363 */
    0x7f7b7f8b, 0xef553db4, 0xf35dfba8, 0x400b0243,
    0x8d3efb40, 0x8c2c7bf7, 0xe3fa6eff, 0xa8ed1d3a,
    } },
    { { /* 364 */
    0xcf83e602, 0x35558cf5, 0xffabe048, 0xd85992b9,
    0x2892ab18, 0x8020d7e9, 0xf583c438, 0x450ae74a,
    } },
    { { /* 365 */
    0x9714b000, 0x54007762, 0x1420d188, 0xc8c01020,
    0x00002121, 0x0c0413a8, 0x04408000, 0x082870c0,
    } },
    { { /* 366 */
    0x000408c0, 0x80000002, 0x14722b7b, 0x3bfb7924,
    0x1ae43327, 0x38ef9835, 0x28029ad1, 0xbf69a813,
    } },
    { { /* 367 */
    0x2fc665cf, 0xafc96b11, 0x5053340f, 0xa00486a2,
    0xe8090106, 0xc00e3f0f, 0x81450a88, 0xc6010010,
    } },
    { { /* 368 */
    0x26e1a161, 0xce00444b, 0xd4eec7aa, 0x85bbcadf,
    0xa5203a74, 0x8840436c, 0x8bd23f06, 0x3befff79,
    } },
    { { /* 369 */
    0xe8eff75a, 0x5b36fbcb, 0x1bfd0d49, 0x39ee0154,
    0x2e75d855, 0xa91abfd8, 0xf6bff3d7, 0xb40c67e0,
    } },
    { { /* 370 */
    0x081382c2, 0xd08bd49d, 0x1061065a, 0x59e074f2,
    0xb3128f9f, 0x6aaa0080, 0xb05e3230, 0x60ac9d7a,
    } },
    { { /* 371 */
    0xc900d303, 0x8a563098, 0x13907000, 0x18421f14,
    0x0008c060, 0x10808008, 0xec900400, 0xe6332817,
    } },
    { { /* 372 */
    0x90000758, 0x4e09f708, 0xfc83f485, 0x18c8af53,
    0x080c187c, 0x01146adf, 0xa734c80c, 0x2710a011,
    } },
    { { /* 373 */
    0x422228c5, 0x00210413, 0x41123010, 0x40001820,
    0xc60c022b, 0x10000300, 0x00220022, 0x02495810,
    } },
    { { /* 374 */
    0x9670a094, 0x1792eeb0, 0x05f2cb96, 0x23580025,
    0x42cc25de, 0x4a04cf38, 0x359f0c40, 0x8a001128,
    } },
    { { /* 375 */
    0x910a13fa, 0x10560229, 0x04200641, 0x84f00484,
    0x0c040000, 0x412c0400, 0x11541206, 0x00020a4b,
    } },
    { { /* 376 */
    0x00c00200, 0x00940000, 0xbfbb0001, 0x242b167c,
    0x7fa89bbb, 0xe3790c7f, 0xe00d10f4, 0x9f014132,
    } },
    { { /* 377 */
    0x35728652, 0xff1210b4, 0x4223cf27, 0x8602c06b,
    0x1fd33106, 0xa1aa3a0c, 0x02040812, 0x08012572,
    } },
    { { /* 378 */
    0x485040cc, 0x601062d0, 0x29001c80, 0x00109a00,
    0x22000004, 0x00800000, 0x68002020, 0x609ecbe6,
    } },
    { { /* 379 */
    0x3f73916e, 0x398260c0, 0x48301034, 0xbd5c0006,
    0xd6fb8cd1, 0x43e820e1, 0x084e0600, 0xc4d00500,
    } },
    { { /* 380 */
    0x89aa8d1f, 0x1602a6e1, 0x21ed0001, 0x1a8b3656,
    0x13a51fb7, 0x30a06502, 0x23c7b278, 0xe9226c93,
    } },
    { { /* 381 */
    0x3a74e47f, 0x98208fe3, 0x2625280e, 0xbf49bf9c,
    0xac543218, 0x1916b949, 0xb5220c60, 0x0659fbc1,
    } },
    { { /* 382 */
    0x8420e343, 0x800008d9, 0x20225500, 0x00a10184,
    0x20104800, 0x40801380, 0x00160d04, 0x80200040,
    } },
    { { /* 383 */
    0x8de7fd40, 0xe0985436, 0x091e7b8b, 0xd249fec8,
    0x8dee0611, 0xba221937, 0x9fdd77f4, 0xf0daf3ec,
    } },
    { { /* 384 */
    0xec424386, 0x26048d3f, 0xc021fa6c, 0x0cc2628e,
    0x0145d785, 0x559977ad, 0x4045e250, 0xa154260b,
    } },
    { { /* 385 */
    0x58199827, 0xa4103443, 0x411405f2, 0x07002280,
    0x426600b4, 0x15a17210, 0x41856025, 0x00000054,
    } },
    { { /* 386 */
    0x01040201, 0xcb70c820, 0x6a629320, 0x0095184c,
    0x9a8b1880, 0x3201aab2, 0x00c4d87a, 0x04c3f3e5,
    } },
    { { /* 387 */
    0xa238d44d, 0x5072a1a1, 0x84fc980a, 0x44d1c152,
    0x20c21094, 0x42104180, 0x3a000000, 0xd29d0240,
    } },
    { { /* 388 */
    0xa8b12f01, 0x2432bd40, 0xd04bd34d, 0xd0ada723,
    0x75a10a92, 0x01e9adac, 0x771f801a, 0xa01b9225,
    } },
    { { /* 389 */
    0x20cadfa1, 0x738c0602, 0x003b577f, 0x00d00bff,
    0x0088806a, 0x0029a1c4, 0x05242a05, 0x16234009,
    } },
    { { /* 390 */
    0x80056822, 0xa2112011, 0x64900004, 0x13824849,
    0x193023d5, 0x08922980, 0x88115402, 0xa0042001,
    } },
    { { /* 391 */
    0x81800400, 0x60228502, 0x0b010090, 0x12020022,
    0x00834011, 0x00001a01, 0x00000000, 0x00000000,
    } },
    { { /* 392 */
    0x00000000, 0x4684009f, 0x020012c8, 0x1a0004fc,
    0x0c4c2ede, 0x80b80402, 0x0afca826, 0x22288c02,
    } },
    { { /* 393 */
    0x8f7ba0e0, 0x2135c7d6, 0xf8b106c7, 0x62550713,
    0x8a19936e, 0xfb0e6efa, 0x48f91630, 0x7debcd2f,
    } },
    { { /* 394 */
    0x4e845892, 0x7a2e4ca0, 0x561eedea, 0x1190c649,
    0xe83a5324, 0x8124cfdb, 0x634218f1, 0x1a8a5853,
    } },
    { { /* 395 */
    0x24d37420, 0x0514aa3b, 0x89586018, 0xc0004800,
    0x91018268, 0x2cd684a4, 0xc4ba8886, 0x02100377,
    } },
    { { /* 396 */
    0x00388244, 0x404aae11, 0x510028c0, 0x15146044,
    0x10007310, 0x02480082, 0x40060205, 0x0000c003,
    } },
    { { /* 397 */
    0x0c020000, 0x02200008, 0x40009000, 0xd161b800,
    0x32744621, 0x3b8af800, 0x8b00050f, 0x2280bbd0,
    } },
    { { /* 398 */
    0x07690600, 0x00438040, 0x50005420, 0x250c41d0,
    0x83108410, 0x02281101, 0x00304008, 0x020040a1,
    } },
    { { /* 399 */
    0x20000040, 0xabe31500, 0xaa443180, 0xc624c2c6,
    0x8004ac13, 0x03d1b000, 0x4285611e, 0x1d9ff303,
    } },
    { { /* 400 */
    0x78e8440a, 0xc3925e26, 0x00852000, 0x4000b001,
    0x88424a90, 0x0c8dca04, 0x4203a705, 0x000422a1,
    } },
    { { /* 401 */
    0x0c018668, 0x10795564, 0xdea00002, 0x40c12000,
    0x5001488b, 0x04000380, 0x50040000, 0x80d0c05d,
    } },
    { { /* 402 */
    0x970aa010, 0x4dafbb20, 0x1e10d921, 0x83140460,
    0xa6d68848, 0x733fd83b, 0x497427bc, 0x92130ddc,
    } },
    { { /* 403 */
    0x8ba1142b, 0xd1392e75, 0x50503009, 0x69008808,
    0x024a49d4, 0x80164010, 0x89d7e564, 0x5316c020,
    } },
    { { /* 404 */
    0x86002b92, 0x15e0a345, 0x0c03008b, 0xe200196e,
    0x80067031, 0xa82916a5, 0x18802000, 0xe1487aac,
    } },
    { { /* 405 */
    0xb5d63207, 0x5f9132e8, 0x20e550a1, 0x10807c00,
    0x9d8a7280, 0x421f00aa, 0x02310e22, 0x04941100,
    } },
    { { /* 406 */
    0x40080022, 0x5c100010, 0xfcc80343, 0x0580a1a5,
    0x04008433, 0x6e080080, 0x81262a4b, 0x2901aad8,
    } },
    { { /* 407 */
    0x4490684d, 0xba880009, 0x00820040, 0x87d10000,
    0xb1e6215b, 0x80083161, 0xc2400800, 0xa600a069,
    } },
    { { /* 408 */
    0x4a328d58, 0x550a5d71, 0x2d579aa0, 0x4aa64005,
    0x30b12021, 0x01123fc6, 0x260a10c2, 0x50824462,
    } },
    { { /* 409 */
    0x80409880, 0x810004c0, 0x00002003, 0x38180000,
    0xf1a60200, 0x720e4434, 0x92e035a2, 0x09008101,
    } },
    { { /* 410 */
    0x00000400, 0x00008885, 0x00000000, 0x00804000,
    0x00000000, 0x00004040, 0x00000000, 0x00000000,
    } },
    { { /* 411 */
    0x00000000, 0x08000000, 0x00000082, 0x00000000,
    0x88000004, 0xe7efbfff, 0xffbfffff, 0xfdffefef,
    } },
    { { /* 412 */
    0xbffefbff, 0x057fffff, 0x85b30034, 0x42164706,
    0xe4105402, 0xb3058092, 0x81305422, 0x180b4263,
    } },
    { { /* 413 */
    0x13f5387b, 0xa9ea07e5, 0x05143c4c, 0x80020600,
    0xbd481ad9, 0xf496ee37, 0x7ec0705f, 0x355fbfb2,
    } },
    { { /* 414 */
    0x455fe644, 0x41469000, 0x063b1d40, 0xfe1362a1,
    0x39028505, 0x0c080548, 0x0000144f, 0x58183488,
    } },
    { { /* 415 */
    0xd8153077, 0x4bfbbd0e, 0x85008a90, 0xe61dc100,
    0xb386ed14, 0x639bff72, 0xd9befd92, 0x0a92887b,
    } },
    { { /* 416 */
    0x1cb2d3fe, 0x177ab980, 0xdc1782c9, 0x3980fffb,
    0x590c4260, 0x37df0f01, 0xb15094a3, 0x23070623,
    } },
    { { /* 417 */
    0x3102f85a, 0x310201f0, 0x1e820040, 0x056a3a0a,
    0x12805b84, 0xa7148002, 0xa04b2612, 0x90011069,
    } },
    { { /* 418 */
    0x848a1000, 0x3f801802, 0x42400708, 0x4e140110,
    0x180080b0, 0x0281c510, 0x10298202, 0x88000210,
    } },
    { { /* 419 */
    0x00420020, 0x11000280, 0x4413e000, 0xfe025804,
    0x30283c07, 0x04739798, 0xcb13ced1, 0x431f6210,
    } },
    { { /* 420 */
    0x55ac278d, 0xc892422e, 0x02885380, 0x78514039,
    0x8088292c, 0x2428b900, 0x080e0c41, 0x42004421,
    } },
    { { /* 421 */
    0x08680408, 0x12040006, 0x02903031, 0xe0855b3e,
    0x10442936, 0x10822814, 0x83344266, 0x531b013c,
    } },
    { { /* 422 */
    0x0e0d0404, 0x00510c22, 0xc0000012, 0x88000040,
    0x0000004a, 0x00000000, 0x5447dff6, 0x00088868,
    } },
    { { /* 423 */
    0x00000081, 0x40000000, 0x00000100, 0x02000000,
    0x00080600, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 424 */
    0x00000080, 0x00000040, 0x00000000, 0x00001040,
    0x00000000, 0xf7fdefff, 0xfffeff7f, 0xfffffbff,
    } },
    { { /* 425 */
    0xbffffdff, 0x00ffffff, 0x042012c2, 0x07080c06,
    0x01101624, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 426 */
    0xe0000000, 0xfffffffe, 0x7f79ffff, 0x00f928df,
    0x80120c32, 0xd53a0008, 0xecc2d858, 0x2fa89d18,
    } },
    { { /* 427 */
    0xe0109620, 0x2622d60c, 0x02060f97, 0x9055b240,
    0x501180a2, 0x04049800, 0x00004000, 0x00000000,
    } },
    { { /* 428 */
    0x00000000, 0x00000000, 0x00000000, 0xfffffbc0,
    0xdffbeffe, 0x62430b08, 0xfb3b41b6, 0x23896f74,
    } },
    { { /* 429 */
    0xecd7ae7f, 0x5960e047, 0x098fa096, 0xa030612c,
    0x2aaa090d, 0x4f7bd44e, 0x388bc4b2, 0x6110a9c6,
    } },
    { { /* 430 */
    0x42000014, 0x0202800c, 0x6485fe48, 0xe3f7d63e,
    0x0c073aa0, 0x0430e40c, 0x1002f680, 0x00000000,
    } },
    { { /* 431 */
    0x00000000, 0x00000000, 0x00000000, 0x00100000,
    0x00004000, 0x00004000, 0x00000100, 0x00000000,
    } },
    { { /* 432 */
    0x00000000, 0x40000000, 0x00000000, 0x00000400,
    0x00008000, 0x00000000, 0x00400400, 0x00000000,
    } },
    { { /* 433 */
    0x00000000, 0x40000000, 0x00000000, 0x00000800,
    0xfebdffe0, 0xffffffff, 0xfbe77f7f, 0xf7ffffbf,
    } },
    { { /* 434 */
    0xefffffff, 0xdff7ff7e, 0xfbdff6f7, 0x804fbffe,
    0x00000000, 0x00000000, 0x00000000, 0x7fffef00,
    } },
    { { /* 435 */
    0xb6f7ff7f, 0xb87e4406, 0x88313bf5, 0x00f41796,
    0x1391a960, 0x72490080, 0x0024f2f3, 0x42c88701,
    } },
    { { /* 436 */
    0x5048e3d3, 0x43052400, 0x4a4c0000, 0x10580227,
    0x01162820, 0x0014a809, 0x00000000, 0x00683ec0,
    } },
    { { /* 437 */
    0x00000000, 0x00000000, 0x00000000, 0xffe00000,
    0xfddbb7ff, 0x000000f7, 0xc72e4000, 0x00000180,
    } },
    { { /* 438 */
    0x00012000, 0x00004000, 0x00300000, 0xb4f7ffa8,
    0x03ffadf3, 0x00000120, 0x00000000, 0x00000000,
    } },
    { { /* 439 */
    0x00000000, 0x00000000, 0x00000000, 0xfffbf000,
    0xfdcf9df7, 0x15c301bf, 0x810a1827, 0x0a00a842,
    } },
    { { /* 440 */
    0x80088108, 0x18048008, 0x0012a3be, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 441 */
    0x00000000, 0x00000000, 0x00000000, 0x90000000,
    0xdc3769e6, 0x3dff6bff, 0xf3f9fcf8, 0x00000004,
    } },
    { { /* 442 */
    0x80000000, 0xe7eebf6f, 0x5da2dffe, 0xc00b3fd8,
    0xa00c0984, 0x69100040, 0xb912e210, 0x5a0086a5,
    } },
    { { /* 443 */
    0x02896800, 0x6a809005, 0x00030010, 0x80000000,
    0x8e001ff9, 0x00000001, 0x00000000, 0x00000000,
    } },
    { { /* 444 */
    0x14000010, 0xa0c09512, 0x0c000200, 0x01000400,
    0x050002a3, 0x98800009, 0x00004000, 0x01004c00,
    } },
    { { /* 445 */
    0x04800008, 0x02840300, 0x00000824, 0x00040000,
    0x00000400, 0x20010904, 0x00001100, 0x22050030,
    } },
    { { /* 446 */
    0x00000108, 0x08104000, 0x01400000, 0x00001040,
    0x00010102, 0x10000040, 0x82012000, 0x10100002,
    } },
    { { /* 447 */
    0x00006002, 0x00000800, 0x00400000, 0x02100401,
    0x14400144, 0x013c4980, 0x880e8288, 0x50102014,
    } },
    { { /* 448 */
    0x80000824, 0x101000c1, 0x02800000, 0x02080101,
    0x04118000, 0x02200112, 0x00031020, 0x02000003,
    } },
    { { /* 449 */
    0x00000002, 0x090c1090, 0xa0004004, 0x60102290,
    0x00080000, 0x00414f45, 0x07071026, 0x40c00001,
    } },
    { { /* 450 */
    0x04580000, 0x0014800a, 0x00002800, 0x00002600,
    0x50988020, 0x02140018, 0x04013800, 0x00008008,
    } },
    { { /* 451 */
    0x41082004, 0x80000928, 0x20080280, 0x020e0a00,
    0x00010040, 0x16110200, 0x41800002, 0x08231400,
    } },
    { { /* 452 */
    0x40020020, 0x0080202f, 0x2015a008, 0x1c000002,
    0xc0040e00, 0x82028012, 0x00400000, 0x2002a004,
    } },
    { { /* 453 */
    0x20200001, 0xa0040000, 0x8890004c, 0xc4000080,
    0x10012500, 0x48100482, 0x60800110, 0x40008040,
    } },
    { { /* 454 */
    0x00040008, 0x04000044, 0x90000091, 0x000c1200,
    0x06040000, 0x08610480, 0x10010800, 0x080d0001,
    } },
    { { /* 455 */
    0x800204b4, 0x00140000, 0x00000000, 0x00200020,
    0x84100200, 0x01811000, 0x02000210, 0x03018800,
    } },
    { { /* 456 */
    0x04042804, 0x20001c92, 0x02100020, 0x4202490a,
    0x02420146, 0x00000803, 0x0008c008, 0x44050010,
    } },
    { { /* 457 */
    0x80222000, 0x00000800, 0x00008452, 0x10502140,
    0xe0410005, 0x00000400, 0x00a00008, 0x80080000,
    } },
    { { /* 458 */
    0x50180020, 0x00000009, 0x40080600, 0x00000000,
    0x56000020, 0x04000000, 0x00020006, 0x00208220,
    } },
    { { /* 459 */
    0x01210000, 0x40009000, 0x08c00140, 0x08110000,
    0x00004820, 0x02400810, 0x08800002, 0x00200000,
    } },
    { { /* 460 */
    0x00040a00, 0x00004000, 0x40000104, 0x84000000,
    0x02040048, 0x20000000, 0x00012000, 0x1b100000,
    } },
    { { /* 461 */
    0x00007000, 0x04000020, 0x10032000, 0x0804000a,
    0x00000008, 0x04020090, 0x88000014, 0x00000000,
    } },
    { { /* 462 */
    0x00000000, 0x08020008, 0x00040400, 0x40a00000,
    0x40000000, 0x00080090, 0x40800000, 0x20000388,
    } },
    { { /* 463 */
    0x02001080, 0x20010004, 0x12010004, 0x20008011,
    0x13200082, 0x02800000, 0x04098001, 0x00000004,
    } },
    { { /* 464 */
    0x00000000, 0x02801000, 0x00001000, 0x00000100,
    0x20010024, 0x00000050, 0x80200028, 0x00000020,
    } },
    { { /* 465 */
    0x01000000, 0x00a24000, 0x00000000, 0x82001010,
    0x00000800, 0x02000000, 0x40020002, 0x59000044,
    } },
    { { /* 466 */
    0x00000080, 0x0d040000, 0x04000000, 0x10020000,
    0x00022000, 0x00508000, 0x20080001, 0x000004a2,
    } },
    { { /* 467 */
    0xc0020400, 0x00310000, 0x80002000, 0x00002800,
    0x00000b60, 0x40200000, 0x00120000, 0x80000009,
    } },
    { { /* 468 */
    0x41000000, 0x00010008, 0x00880910, 0x20080888,
    0x04044020, 0x80482010, 0x00006000, 0x00020000,
    } },
    { { /* 469 */
    0x42405004, 0x00400020, 0x00000010, 0x00000886,
    0x00008000, 0x80021011, 0x00c00000, 0x42000000,
    } },
    { { /* 470 */
    0x4801201f, 0x40c00004, 0x20600480, 0x00000020,
    0x01000110, 0x22400040, 0x00000428, 0x00000000,
    } },
    { { /* 471 */
    0x0f00020f, 0x40401000, 0x00200048, 0x000c0092,
    0x81000421, 0x00040004, 0x00620001, 0x06000202,
    } },
    { { /* 472 */
    0x14001808, 0x00083800, 0x008c1028, 0x04120028,
    0x22008404, 0x40260880, 0x01100700, 0x00400000,
    } },
    { { /* 473 */
    0x20000020, 0x00200000, 0x00840000, 0x04108000,
    0x00000002, 0x00000000, 0x10000002, 0x04000402,
    } },
    { { /* 474 */
    0x10000000, 0x26a20000, 0x05000200, 0x82204000,
    0x80000000, 0x00048404, 0x80004800, 0x80000400,
    } },
    { { /* 475 */
    0x00000064, 0x00000050, 0x18804000, 0x00060000,
    0x00408002, 0x02020030, 0x00000000, 0x40000000,
    } },
    { { /* 476 */
    0x01208414, 0x00000600, 0x02018000, 0x10400000,
    0x04000840, 0x09200000, 0x2e000000, 0x04000304,
    } },
    { { /* 477 */
    0x00c01810, 0x20100010, 0x10400010, 0x02100000,
    0xa0000402, 0x48200000, 0x06080000, 0x01400000,
    } },
    { { /* 478 */
    0x40000008, 0x00001000, 0x10112800, 0xc2a09080,
    0x00008a02, 0x3a0000e9, 0x80611011, 0x40220000,
    } },
    { { /* 479 */
    0x20000020, 0x48381a00, 0x00028421, 0x54ea0800,
    0x01425100, 0x0490200c, 0x20020000, 0x00600800,
    } },
    { { /* 480 */
    0x00e0c201, 0x00004810, 0x10a10001, 0x00000040,
    0x80108084, 0x00042000, 0x00002000, 0x00000004,
    } },
    { { /* 481 */
    0x00010014, 0x03005d00, 0x00008102, 0x00120000,
    0x51009000, 0x04000480, 0x0021c200, 0x0a888056,
    } },
    { { /* 482 */
    0xd2b60004, 0x13800000, 0x204803a8, 0x04501921,
    0x0a003004, 0x02100010, 0x00091100, 0x01070080,
    } },
    { { /* 483 */
    0x42004020, 0x08300000, 0x002a2444, 0x04046081,
    0x40046008, 0x00120000, 0x10000108, 0x00000000,
    } },
    { { /* 484 */
    0x00000084, 0x08001000, 0x0012e001, 0x045880c0,
    0x00010000, 0x00800022, 0x02401000, 0x00000000,
    } },
    { { /* 485 */
    0x4000d000, 0x00000850, 0x01000009, 0x0d840000,
    0x01080000, 0x42008000, 0x20000828, 0x40100040,
    } },
    { { /* 486 */
    0x51000100, 0x32000000, 0x001a0894, 0x04000040,
    0x00002102, 0x03428000, 0x018c0080, 0x00234010,
    } },
    { { /* 487 */
    0x00000040, 0x185c4000, 0x03000000, 0x40020004,
    0xa20200c9, 0x00000220, 0x00101050, 0x00120004,
    } },
    { { /* 488 */
    0x00000040, 0x44002400, 0x00000228, 0x20000020,
    0x000a0008, 0x18010000, 0x3c08830c, 0x40000684,
    } },
    { { /* 489 */
    0x80101800, 0x02000280, 0x0020000c, 0x08009004,
    0x00040000, 0x0004000c, 0x00018000, 0x14001000,
    } },
    { { /* 490 */
    0x08240000, 0x00200000, 0x20420014, 0x58112000,
    0x10004048, 0x010050c0, 0x0408228c, 0x12282040,
    } },
    { { /* 491 */
    0x00000000, 0x00000020, 0x24002000, 0x00000000,
    0x00800a00, 0x00080910, 0x1019a000, 0x60200030,
    } },
    { { /* 492 */
    0x00000080, 0x00000080, 0x08000000, 0x800050a0,
    0x80044000, 0x04001010, 0x80008080, 0x00000000,
    } },
    { { /* 493 */
    0x00000040, 0x00800000, 0x000c4283, 0x01020000,
    0x00888000, 0x00104008, 0x20000000, 0x04000080,
    } },
    { { /* 494 */
    0x20000104, 0x1802c021, 0x08100000, 0x0000004e,
    0x80000001, 0x30c00080, 0x00000040, 0x00401200,
    } },
    { { /* 495 */
    0x04945288, 0x00940400, 0x06400104, 0x10002000,
    0x00080010, 0x00400420, 0x00000102, 0x00408010,
    } },
    { { /* 496 */
    0x05000000, 0x40002240, 0x00100000, 0x0e400024,
    0x00000080, 0x80000440, 0x01018410, 0xb1804004,
    } },
    { { /* 497 */
    0x25000800, 0x20000000, 0x00800000, 0x0000804c,
    0x10020020, 0x42001000, 0x00082000, 0x00002000,
    } },
    { { /* 498 */
    0x11500020, 0x40004053, 0x11280500, 0x80060014,
    0x004c0101, 0x60002008, 0x44000000, 0x01000036,
    } },
    { { /* 499 */
    0x00010028, 0x01180000, 0x84041804, 0x00098000,
    0x00800000, 0x00000000, 0x00400002, 0x10004001,
    } },
    { { /* 500 */
    0x0051a004, 0x00008100, 0x00000024, 0x40041000,
    0x00040000, 0x00042001, 0x00000000, 0x00008000,
    } },
    { { /* 501 */
    0x00000000, 0x00000000, 0x00000000, 0x20030000,
    0x00001840, 0x00020220, 0x04404002, 0x00204000,
    } },
    { { /* 502 */
    0x01008010, 0x00002080, 0x40008064, 0x00004031,
    0x10018090, 0x80304001, 0x000080a0, 0x80200040,
    } },
    { { /* 503 */
    0x00000001, 0x00000010, 0x00102088, 0x00800020,
    0x00120681, 0x100002a0, 0x00000042, 0x00000080,
    } },
    { { /* 504 */
    0x10000000, 0x21000a00, 0x00000200, 0x40000080,
    0x10110000, 0x00108200, 0x04000000, 0x00000400,
    } },
    { { /* 505 */
    0x80001000, 0x80002000, 0x40003008, 0x00000204,
    0x0801000a, 0x40000001, 0x00000000, 0x00000004,
    } },
    { { /* 506 */
    0x00000000, 0x00000000, 0x00020000, 0x00000000,
    0x88000000, 0x00002000, 0x08502000, 0x00840a00,
    } },
    { { /* 507 */
    0x31061808, 0x00000000, 0x00000000, 0x04000000,
    0x00000004, 0x00000240, 0x00100009, 0x00000000,
    } },
    { { /* 508 */
    0x00004002, 0x04002500, 0x00008040, 0x40a20100,
    0x00000001, 0x12412080, 0x04004008, 0x00042014,
    } },
    { { /* 509 */
    0x02000000, 0x00012000, 0x10000402, 0x000040c0,
    0x00080000, 0x5fe800a1, 0x04019402, 0x02000000,
    } },
    { { /* 510 */
    0x00040100, 0x00880000, 0x00401000, 0x00001012,
    0x00000000, 0x08004100, 0x00000010, 0x00000000,
    } },
    { { /* 511 */
    0x00000000, 0x00000000, 0x52020000, 0x10410080,
    0x00005000, 0x08400200, 0x80400010, 0x44400020,
    } },
    { { /* 512 */
    0x00084100, 0x10200d02, 0xa1200012, 0x00804804,
    0x00008212, 0xc6024000, 0x08100000, 0x205c1828,
    } },
    { { /* 513 */
    0x00000088, 0x00031000, 0x8000013f, 0x21184b44,
    0x100100f2, 0xa9002001, 0x08080840, 0x001b0001,
    } },
    { { /* 514 */
    0x28800112, 0x400020f0, 0x0910200c, 0x0a0010a0,
    0x80000020, 0x00000004, 0x1000000a, 0x00400000,
    } },
    { { /* 515 */
    0x00000000, 0x00002000, 0x00000080, 0x81000000,
    0x02c00020, 0x000004c5, 0x00000000, 0x00100100,
    } },
    { { /* 516 */
    0x20000000, 0x01080000, 0x00400022, 0x08000200,
    0x00408002, 0x20400028, 0x00000000, 0x00100000,
    } },
    { { /* 517 */
    0x08000008, 0x00420002, 0xa0a20003, 0x00022000,
    0x88000280, 0x65160000, 0x00040105, 0x00244041,
    } },
    { { /* 518 */
    0x80300000, 0x00184008, 0x00000880, 0x00201140,
    0x00000000, 0x02900000, 0x50004588, 0x00221043,
    } },
    { { /* 519 */
    0x12004000, 0x0b800000, 0x20002405, 0x0000000c,
    0x08000000, 0x11000410, 0x04000030, 0x00200043,
    } },
    { { /* 520 */
    0x80011000, 0x18008042, 0x11000000, 0x00001008,
    0x00008000, 0x24440000, 0x00800000, 0x80100005,
    } },
    { { /* 521 */
    0x00108204, 0x02102400, 0x00010001, 0x80000200,
    0xa080e80a, 0x00010000, 0x20008000, 0x80122200,
    } },
    { { /* 522 */
    0x88211404, 0x04208041, 0x20088020, 0x18040000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 523 */
    0x00401004, 0x02100002, 0x40014210, 0x50006000,
    0x00080008, 0x20000820, 0x00100211, 0x10000000,
    } },
    { { /* 524 */
    0x91005400, 0x00000000, 0x00000000, 0x08000000,
    0x41610032, 0xa0029d44, 0x000000d2, 0x41020004,
    } },
    { { /* 525 */
    0x00800104, 0x020000c0, 0x04090030, 0x80000204,
    0x82004000, 0x00000020, 0x00000000, 0x00000000,
    } },
    { { /* 526 */
    0x00000000, 0x00000000, 0x00000080, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 527 */
    0xc373ff8b, 0x1b0f6840, 0xf34ce9ac, 0xc0080200,
    0xca3e795c, 0x06487976, 0xf7f02fdf, 0xa8ff033a,
    } },
    { { /* 528 */
    0x233fef37, 0xfd59b004, 0xfffff3ca, 0xfff9de9f,
    0x7df7abff, 0x8eecc000, 0xffdbeebf, 0x45fad003,
    } },
    { { /* 529 */
    0xdffefae1, 0x10abbfef, 0xfcaaffeb, 0x24fdef3f,
    0x7f7678ad, 0xedfff00c, 0x2cfacff6, 0xeb6bf7f9,
    } },
    { { /* 530 */
    0x95bf1ffd, 0xbfbf6677, 0xfeb43bfb, 0x11e27bae,
    0x41bea681, 0x72c31435, 0x71917d70, 0x276b0003,
    } },
    { { /* 531 */
    0x70cf57cb, 0x0def4732, 0xfc747eda, 0xbdb4fe06,
    0x8bca3f9f, 0x58007e49, 0xebec228f, 0xddbb8a5c,
    } },
    { { /* 532 */
    0xb6e7ef60, 0xf293a40f, 0x549e37bb, 0x9bafd04b,
    0xf7d4c414, 0x0a1430b0, 0x88d02f08, 0x192fff7e,
    } },
    { { /* 533 */
    0xfb07ffda, 0x7beb7ff1, 0x0010c5ef, 0xfdff99ff,
    0x056779d7, 0xfdcbffe7, 0x4040c3ff, 0xbd8e6ff7,
    } },
    { { /* 534 */
    0x0497dffa, 0x5bfff4c0, 0xd0e7ed7b, 0xf8e0047e,
    0xb73eff9f, 0x882e7dfe, 0xbe7ffffd, 0xf6c483fe,
    } },
    { { /* 535 */
    0xb8fdf357, 0xef7dd680, 0x47885767, 0xc3dfff7d,
    0x37a9f0ff, 0x70fc7de0, 0xec9a3f6f, 0x86814cb3,
    } },
    { { /* 536 */
    0xdd5c3f9e, 0x4819f70d, 0x0007fea3, 0x38ffaf56,
    0xefb8980d, 0xb760403d, 0x9035d8ce, 0x3fff72bf,
    } },
    { { /* 537 */
    0x7a117ff7, 0xabfff7bb, 0x6fbeff00, 0xfe72a93c,
    0xf11bcfef, 0xf40adb6b, 0xef7ec3e6, 0xf6109b9c,
    } },
    { { /* 538 */
    0x16f4f048, 0x5182feb5, 0x15bbc7b1, 0xfbdf6e87,
    0x63cde43f, 0x7e7ec1ff, 0x7d5ffdeb, 0xfcfe777b,
    } },
    { { /* 539 */
    0xdbea960b, 0x53e86229, 0xfdef37df, 0xbd8136f5,
    0xfcbddc18, 0xffffd2e4, 0xffe03fd7, 0xabf87f6f,
    } },
    { { /* 540 */
    0x6ed99bae, 0xf115f5fb, 0xbdfb79a9, 0xadaf5a3c,
    0x1facdbba, 0x837971fc, 0xc35f7cf7, 0x0567dfff,
    } },
    { { /* 541 */
    0x8467ff9a, 0xdf8b1534, 0x3373f9f3, 0x5e1af7bd,
    0xa03fbf40, 0x01ebffff, 0xcfdddfc0, 0xabd37500,
    } },
    { { /* 542 */
    0xeed6f8c3, 0xb7ff43fd, 0x42275eaf, 0xf6869bac,
    0xf6bc27d7, 0x35b7f787, 0xe176aacd, 0xe29f49e7,
    } },
    { { /* 543 */
    0xaff2545c, 0x61d82b3f, 0xbbb8fc3b, 0x7b7dffcf,
    0x1ce0bf95, 0x43ff7dfd, 0xfffe5ff6, 0xc4ced3ef,
    } },
    { { /* 544 */
    0xadbc8db6, 0x11eb63dc, 0x23d0df59, 0xf3dbbeb4,
    0xdbc71fe7, 0xfae4ff63, 0x63f7b22b, 0xadbaed3b,
    } },
    { { /* 545 */
    0x7efffe01, 0x02bcfff7, 0xef3932ff, 0x8005fffc,
    0xbcf577fb, 0xfff7010d, 0xbf3afffb, 0xdfff0057,
    } },
    { { /* 546 */
    0xbd7def7b, 0xc8d4db88, 0xed7cfff3, 0x56ff5dee,
    0xac5f7e0d, 0xd57fff96, 0xc1403fee, 0xffe76ff9,
    } },
    { { /* 547 */
    0x8e77779b, 0xe45d6ebf, 0x5f1f6fcf, 0xfedfe07f,
    0x01fed7db, 0xfb7bff00, 0x1fdfffd4, 0xfffff800,
    } },
    { { /* 548 */
    0x007bfb8f, 0x7f5cbf00, 0x07f3ffff, 0x3de7eba0,
    0xfbd7f7bf, 0x6003ffbf, 0xbfedfffd, 0x027fefbb,
    } },
    { { /* 549 */
    0xddfdfe40, 0xe2f9fdff, 0xfb1f680b, 0xaffdfbe3,
    0xf7ed9fa4, 0xf80f7a7d, 0x0fd5eebe, 0xfd9fbb5d,
    } },
    { { /* 550 */
    0x3bf9f2db, 0xebccfe7f, 0x73fa876a, 0x9ffc95fc,
    0xfaf7109f, 0xbbcdddb7, 0xeccdf87e, 0x3c3ff366,
    } },
    { { /* 551 */
    0xb03ffffd, 0x067ee9f7, 0xfe0696ae, 0x5fd7d576,
    0xa3f33fd1, 0x6fb7cf07, 0x7f449fd1, 0xd3dd7b59,
    } },
    { { /* 552 */
    0xa9bdaf3b, 0xff3a7dcf, 0xf6ebfbe0, 0xffffb401,
    0xb7bf7afa, 0x0ffdc000, 0xff1fff7f, 0x95fffefc,
    } },
    { { /* 553 */
    0xb5dc0000, 0x3f3eef63, 0x001bfb7f, 0xfbf6e800,
    0xb8df9eef, 0x003fff9f, 0xf5ff7bd0, 0x3fffdfdb,
    } },
    { { /* 554 */
    0x00bffdf0, 0xbbbd8420, 0xffdedf37, 0x0ff3ff6d,
    0x5efb604c, 0xfafbfffb, 0x0219fe5e, 0xf9de79f4,
    } },
    { { /* 555 */
    0xebfaa7f7, 0xff3401eb, 0xef73ebd3, 0xc040afd7,
    0xdcff72bb, 0x2fd8f17f, 0xfe0bb8ec, 0x1f0bdda3,
    } },
    { { /* 556 */
    0x47cf8f1d, 0xffdeb12b, 0xda737fee, 0xcbc424ff,
    0xcbf2f75d, 0xb4edecfd, 0x4dddbff9, 0xfb8d99dd,
    } },
    { { /* 557 */
    0xaf7bbb7f, 0xc959ddfb, 0xfab5fc4f, 0x6d5fafe3,
    0x3f7dffff, 0xffdb7800, 0x7effb6ff, 0x022ffbaf,
    } },
    { { /* 558 */
    0xefc7ff9b, 0xffffffa5, 0xc7000007, 0xfff1f7ff,
    0x01bf7ffd, 0xfdbcdc00, 0xffffbff5, 0x3effff7f,
    } },
    { { /* 559 */
    0xbe000029, 0xff7ff9ff, 0xfd7e6efb, 0x039ecbff,
    0xfbdde300, 0xf6dfccff, 0x117fffff, 0xfbf6f800,
    } },
    { { /* 560 */
    0xd73ce7ef, 0xdfeffeef, 0xedbfc00b, 0xfdcdfedf,
    0x40fd7bf5, 0xb75fffff, 0xf930ffdf, 0xdc97fbdf,
    } },
    { { /* 561 */
    0xbff2fef3, 0xdfbf8fdf, 0xede6177f, 0x35530f7f,
    0x877e447c, 0x45bbfa12, 0x779eede0, 0xbfd98017,
    } },
    { { /* 562 */
    0xde897e55, 0x0447c16f, 0xf75d7ade, 0x290557ff,
    0xfe9586f7, 0xf32f97b3, 0x9f75cfff, 0xfb1771f7,
    } },
    { { /* 563 */
    0xee1934ee, 0xef6137cc, 0xef4c9fd6, 0xfbddd68f,
    0x6def7b73, 0xa431d7fe, 0x97d75e7f, 0xffd80f5b,
    } },
    { { /* 564 */
    0x7bce9d83, 0xdcff22ec, 0xef87763d, 0xfdeddfe7,
    0xa0fc4fff, 0xdbfc3b77, 0x7fdc3ded, 0xf5706fa9,
    } },
    { { /* 565 */
    0x2c403ffb, 0x847fff7f, 0xdeb7ec57, 0xf22fe69c,
    0xd5b50feb, 0xede7afeb, 0xfff08c2f, 0xe8f0537f,
    } },
    { { /* 566 */
    0xb5ffb99d, 0xe78fff66, 0xbe10d981, 0xe3c19c7c,
    0x27339cd1, 0xff6d0cbc, 0xefb7fcb7, 0xffffa0df,
    } },
    { { /* 567 */
    0xfe7bbf0b, 0x353fa3ff, 0x97cd13cc, 0xfb277637,
    0x7e6ccfd6, 0xed31ec50, 0xfc1c677c, 0x5fbff6fa,
    } },
    { { /* 568 */
    0xae2f0fba, 0x7ffea3ad, 0xde74fcf0, 0xf200ffef,
    0xfea2fbbf, 0xbcff3daf, 0x5fb9f694, 0x3f8ff3ad,
    } },
    { { /* 569 */
    0xa01ff26c, 0x01bfffef, 0x70057728, 0xda03ff35,
    0xc7fad2f9, 0x5c1d3fbf, 0xec33ff3a, 0xfe9cb7af,
    } },
    { { /* 570 */
    0x7a9f5236, 0xe722bffa, 0xfcff9ff7, 0xb61d2fbb,
    0x1dfded06, 0xefdf7dd7, 0xf166eb23, 0x0dc07ed9,
    } },
    { { /* 571 */
    0xdfbf3d3d, 0xba83c945, 0x9dd07dd1, 0xcf737b87,
    0xc3f59ff3, 0xc5fedf0d, 0x83020cb3, 0xaec0e879,
    } },
    { { /* 572 */
    0x6f0fc773, 0x093ffd7d, 0x0157fff1, 0x01ff62fb,
    0x3bf3fdb4, 0x43b2b013, 0xff305ed3, 0xeb9f0fff,
    } },
    { { /* 573 */
    0xf203feef, 0xfb893fef, 0x9e9937a9, 0xa72cdef9,
    0xc1f63733, 0xfe3e812e, 0xf2f75d20, 0x69d7d585,
    } },
    { { /* 574 */
    0xffffffff, 0xff6fdb07, 0xd97fc4ff, 0xbe0fefce,
    0xf05ef17b, 0xffb7f6cf, 0xef845ef7, 0x0edfd7cb,
    } },
    { { /* 575 */
    0xfcffff08, 0xffffee3f, 0xd7ff13ff, 0x7ffdaf0f,
    0x1ffabdc7, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 576 */
    0x00000000, 0xe7400000, 0xf933bd38, 0xfeed7feb,
    0x7c767fe8, 0xffefb3f7, 0xd8b7feaf, 0xfbbfff6f,
    } },
    { { /* 577 */
    0xdbf7f8fb, 0xe2f91752, 0x754785c8, 0xe3ef9090,
    0x3f6d9ef4, 0x0536ee2e, 0x7ff3f7bc, 0x7f3fa07b,
    } },
    { { /* 578 */
    0xeb600567, 0x6601babe, 0x583ffcd8, 0x87dfcaf7,
    0xffa0bfcd, 0xfebf5bcd, 0xefa7b6fd, 0xdf9c77ef,
    } },
    { { /* 579 */
    0xf8773fb7, 0xb7fc9d27, 0xdfefcab5, 0xf1b6fb5a,
    0xef1fec39, 0x7ffbfbbf, 0xdafe000d, 0x4e7fbdfb,
    } },
    { { /* 580 */
    0x5ac033ff, 0x9ffebff5, 0x005fffbf, 0xfdf80000,
    0x6ffdffca, 0xa001cffd, 0xfbf2dfff, 0xff7fdfbf,
    } },
    { { /* 581 */
    0x080ffeda, 0xbfffba08, 0xeed77afd, 0x67f9fbeb,
    0xff93e044, 0x9f57df97, 0x08dffef7, 0xfedfdf80,
    } },
    { { /* 582 */
    0xf7feffc5, 0x6803fffb, 0x6bfa67fb, 0x5fe27fff,
    0xff73ffff, 0xe7fb87df, 0xf7a7ebfd, 0xefc7bf7e,
    } },
    { { /* 583 */
    0xdf821ef3, 0xdf7e76ff, 0xda7d79c9, 0x1e9befbe,
    0x77fb7ce0, 0xfffb87be, 0xffdb1bff, 0x4fe03f5c,
    } },
    { { /* 584 */
    0x5f0e7fff, 0xddbf77ff, 0xfffff04f, 0x0ff8ffff,
    0xfddfa3be, 0xfffdfc1c, 0xfb9e1f7d, 0xdedcbdff,
    } },
    { { /* 585 */
    0xbafb3f6f, 0xfbefdf7f, 0x2eec7d1b, 0xf2f7af8e,
    0xcfee7b0f, 0x77c61d96, 0xfff57e07, 0x7fdfd982,
    } },
    { { /* 586 */
    0xc7ff5ee6, 0x79effeee, 0xffcf9a56, 0xde5efe5f,
    0xf9e8896e, 0xe6c4f45e, 0xbe7c0001, 0xdddf3b7f,
    } },
    { { /* 587 */
    0xe9efd59d, 0xde5334ac, 0x4bf7f573, 0x9eff7b4f,
    0x476eb8fe, 0xff450dfb, 0xfbfeabfd, 0xddffe9d7,
    } },
    { { /* 588 */
    0x7fffedf7, 0x7eebddfd, 0xb7ffcfe7, 0xef91bde9,
    0xd77c5d75, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 589 */
    0x00000000, 0xfa800000, 0xb4f1ffee, 0x2fefbf76,
    0x77bfb677, 0xfffd9fbf, 0xf6ae95bf, 0x7f3b75ff,
    } },
    { { /* 590 */
    0x0af9a7f5, 0x00000000, 0x00000000, 0x2bddfbd0,
    0x9a7ff633, 0xd6fcfdab, 0xbfebf9e6, 0xf41fdfdf,
    } },
    { { /* 591 */
    0xffffa6fd, 0xf37b4aff, 0xfef97fb7, 0x1d5cb6ff,
    0xe5ff7ff6, 0x24041f7b, 0xf99ebe05, 0xdff2dbe3,
    } },
    { { /* 592 */
    0xfdff6fef, 0xcbfcd679, 0xefffebfd, 0x0000001f,
    0x98000000, 0x8017e148, 0x00fe6a74, 0xfdf16d7f,
    } },
    { { /* 593 */
    0xfef3b87f, 0xf176e01f, 0x7b3fee96, 0xfffdeb8d,
    0xcbb3adff, 0xe17f84ef, 0xbff04daa, 0xfe3fbf3f,
    } },
    { { /* 594 */
    0xffd7ebff, 0xcf7fffdf, 0x85edfffb, 0x07bcd73f,
    0xfe0faeff, 0x76bffdaf, 0x37bbfaef, 0xa3ba7fdc,
    } },
    { { /* 595 */
    0x56f7b6ff, 0xe7df60f8, 0x4cdfff61, 0xff45b0fb,
    0x3ffa7ded, 0x18fc1fff, 0xe3afffff, 0xdf83c7d3,
    } },
    { { /* 596 */
    0xef7dfb57, 0x1378efff, 0x5ff7fec0, 0x5ee334bb,
    0xeff6f70d, 0x00bfd7fe, 0xf7f7f59d, 0xffe051de,
    } },
    { { /* 597 */
    0x037ffec9, 0xbfef5f01, 0x60a79ff1, 0xf1ffef1d,
    0x0000000f, 0x00000000, 0x00000000, 0x00000000,
    } },
    { { /* 598 */
    0x00000000, 0x00000000, 0x00000000, 0x3c800000,
    0xd91ffb4d, 0xfee37b3a, 0xdc7f3fe9, 0x0000003f,
    } },
    { { /* 599 */
    0x50000000, 0xbe07f51f, 0xf91bfc1d, 0x71ffbc1e,
    0x5bbe6ff9, 0x9b1b5796, 0xfffc7fff, 0xafe7872e,
    } },
    { { /* 600 */
    0xf34febf5, 0xe725dffd, 0x5d440bdc, 0xfddd5747,
    0x7790ed3f, 0x8ac87d7f, 0xf3f9fafa, 0xef4b202a,
    } },
    { { /* 601 */
    0x79cff5ff, 0x0ba5abd3, 0xfb8ff77a, 0x001f8ebd,
    0x00000000, 0xfd4ef300, 0x88001a57, 0x7654aeac,
    } },
    { { /* 602 */
    0xcdff17ad, 0xf42fffb2, 0xdbff5baa, 0x00000002,
    0x73c00000, 0x2e3ff9ea, 0xbbfffa8e, 0xffd376bc,
    } },
    { { /* 603 */
    0x7e72eefe, 0xe7f77ebd, 0xcefdf77f, 0x00000ff5,
    0x00000000, 0xdb9ba900, 0x917fa4c7, 0x7ecef8ca,
    } },
    { { /* 604 */
    0xc7e77d7a, 0xdcaecbbd, 0x8f76fd7e, 0x7cf391d3,
    0x4c2f01e5, 0xa360ed77, 0x5ef807db, 0x21811df7,
    } },
    { { /* 605 */
    0x309c6be0, 0xfade3b3a, 0xc3f57f53, 0x07ba61cd,
    0x00000000, 0x00000000, 0x00000000, 0xbefe26e0,
    } },
    { { /* 606 */
    0xebb503f9, 0xe9cbe36d, 0xbfde9c2f, 0xabbf9f83,
    0xffd51ff7, 0xdffeb7df, 0xffeffdae, 0xeffdfb7e,
    } },
    { { /* 607 */
    0x6ebfaaff, 0x00000000, 0x00000000, 0xb6200000,
    0xbe9e7fcd, 0x58f162b3, 0xfd7bf10d, 0xbefde9f1,
    } },
    { { /* 608 */
    0x5f6dc6c3, 0x69ffff3d, 0xfbf4ffcf, 0x4ff7dcfb,
    0x11372000, 0x00000015, 0x00000000, 0x00000000,
    } },
    { { /* 609 */
    0x00003000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    } },
},
{
    /* aa */
    LEAF(  0,  0),
    /* ab */
    LEAF(  1,  1),
    /* af */
    LEAF(  2,  2), LEAF(  2,  3),
    /* ak */
    LEAF(  4,  4), LEAF(  4,  5), LEAF(  4,  6), LEAF(  4,  7),
    LEAF(  4,  8),
    /* am */
    LEAF(  9,  9), LEAF(  9, 10),
    /* an */
    LEAF( 11, 11),
    /* ar */
    LEAF( 12, 12),
    /* as */
    LEAF( 13, 13),
    /* av */
    LEAF( 14, 14),
    /* ay */
    LEAF( 15, 15),
    /* az_az */
    LEAF( 16, 16), LEAF( 16, 17), LEAF( 16, 18),
    /* az_ir */
    LEAF( 19, 19),
    /* ba */
    LEAF( 20, 20),
    /* be */
    LEAF( 21, 21),
    /* ber_dz */
    LEAF( 22, 22), LEAF( 22, 23), LEAF( 22, 24), LEAF( 22, 25),
    /* ber_ma */
    LEAF( 26, 26),
    /* bg */
    LEAF( 27, 27),
    /* bh */
    LEAF( 28, 28),
    /* bi */
    LEAF( 29, 29),
    /* bin */
    LEAF( 30, 30), LEAF( 30, 31), LEAF( 30, 32),
    /* bm */
    LEAF( 33, 22), LEAF( 33, 33), LEAF( 33, 34),
    /* bn */
    LEAF( 36, 35),
    /* bo */
    LEAF( 37, 36),
    /* br */
    LEAF( 38, 37),
    /* bs */
    LEAF( 39, 22), LEAF( 39, 38),
    /* bua */
    LEAF( 41, 39),
    /* byn */
    LEAF( 42, 40), LEAF( 42, 41),
    /* ca */
    LEAF( 44, 42), LEAF( 44, 43),
    /* ch */
    LEAF( 46, 44),
    /* chm */
    LEAF( 47, 45),
    /* chr */
    LEAF( 48, 46),
    /* co */
    LEAF( 49, 47), LEAF( 49, 48),
    /* crh */
    LEAF( 51, 49), LEAF( 51, 50),
    /* cs */
    LEAF( 53, 51), LEAF( 53, 52),
    /* csb */
    LEAF( 55, 53), LEAF( 55, 54),
    /* cu */
    LEAF( 57, 55),
    /* cv */
    LEAF( 58, 56), LEAF( 58, 57),
    /* cy */
    LEAF( 60, 58), LEAF( 60, 59), LEAF( 60, 60),
    /* da */
    LEAF( 63, 61),
    /* de */
    LEAF( 64, 62),
    /* dv */
    LEAF( 65, 63),
    /* ee */
    LEAF( 66, 30), LEAF( 66, 64), LEAF( 66, 65), LEAF( 66, 66),
    /* el */
    LEAF( 70, 67),
    /* en */
    LEAF( 71, 68),
    /* eo */
    LEAF( 72, 22), LEAF( 72, 69),
    /* et */
    LEAF( 74, 70), LEAF( 74, 71),
    /* eu */
    LEAF( 76, 72),
    /* ff */
    LEAF( 77, 22), LEAF( 77, 73), LEAF( 77, 74),
    /* fi */
    LEAF( 80, 75), LEAF( 80, 71),
    /* fil */
    LEAF( 82, 76),
    /* fj */
    LEAF( 83, 22),
    /* fo */
    LEAF( 84, 77),
    /* fur */
    LEAF( 85, 78),
    /* fy */
    LEAF( 86, 79),
    /* ga */
    LEAF( 87, 80), LEAF( 87, 81), LEAF( 87, 82),
    /* gd */
    LEAF( 90, 83),
    /* gez */
    LEAF( 91, 84), LEAF( 91, 85),
    /* gn */
    LEAF( 93, 86), LEAF( 93, 87), LEAF( 93, 88),
    /* gu */
    LEAF( 96, 89),
    /* gv */
    LEAF( 97, 90),
    /* ha */
    LEAF( 98, 22), LEAF( 98, 91), LEAF( 98, 92),
    /* haw */
    LEAF(101, 22), LEAF(101, 93), LEAF(101, 94),
    /* he */
    LEAF(104, 95),
    /* hsb */
    LEAF(105, 96), LEAF(105, 97),
    /* ht */
    LEAF(107, 98),
    /* hu */
    LEAF(108, 99), LEAF(108,100),
    /* hy */
    LEAF(110,101),
    /* hz */
    LEAF(111, 22), LEAF(111,102), LEAF(111,103),
    /* id */
    LEAF(114,104),
    /* ig */
    LEAF(115, 22), LEAF(115,105),
    /* ii */
    LEAF(117,106), LEAF(117,106), LEAF(117,106), LEAF(117,106),
    LEAF(117,107),
    /* ik */
    LEAF(122,108),
    /* is */
    LEAF(123,109),
    /* it */
    LEAF(124,110),
    /* iu */
    LEAF(125,111), LEAF(125,112), LEAF(125,113),
    /* ja */
    LEAF(128,114), LEAF(128,115), LEAF(128,116), LEAF(128,117),
    LEAF(128,118), LEAF(128,119), LEAF(128,120), LEAF(128,121),
    LEAF(128,122), LEAF(128,123), LEAF(128,124), LEAF(128,125),
    LEAF(128,126), LEAF(128,127), LEAF(128,128), LEAF(128,129),
    LEAF(128,130), LEAF(128,131), LEAF(128,132), LEAF(128,133),
    LEAF(128,134), LEAF(128,135), LEAF(128,136), LEAF(128,137),
    LEAF(128,138), LEAF(128,139), LEAF(128,140), LEAF(128,141),
    LEAF(128,142), LEAF(128,143), LEAF(128,144), LEAF(128,145),
    LEAF(128,146), LEAF(128,147), LEAF(128,148), LEAF(128,149),
    LEAF(128,150), LEAF(128,151), LEAF(128,152), LEAF(128,153),
    LEAF(128,154), LEAF(128,155), LEAF(128,156), LEAF(128,157),
    LEAF(128,158), LEAF(128,159), LEAF(128,160), LEAF(128,161),
    LEAF(128,162), LEAF(128,163), LEAF(128,164), LEAF(128,165),
    LEAF(128,166), LEAF(128,167), LEAF(128,168), LEAF(128,169),
    LEAF(128,170), LEAF(128,171), LEAF(128,172), LEAF(128,173),
    LEAF(128,174), LEAF(128,175), LEAF(128,176), LEAF(128,177),
    LEAF(128,178), LEAF(128,179), LEAF(128,180), LEAF(128,181),
    LEAF(128,182), LEAF(128,183), LEAF(128,184), LEAF(128,185),
    LEAF(128,186), LEAF(128,187), LEAF(128,188), LEAF(128,189),
    LEAF(128,190), LEAF(128,191), LEAF(128,192), LEAF(128,193),
    LEAF(128,194), LEAF(128,195), LEAF(128,196),
    /* jv */
    LEAF(211,197),
    /* ka */
    LEAF(212,198),
    /* kaa */
    LEAF(213,199),
    /* ki */
    LEAF(214, 22), LEAF(214,200),
    /* kk */
    LEAF(216,201),
    /* kl */
    LEAF(217,202), LEAF(217,203),
    /* km */
    LEAF(219,204),
    /* kn */
    LEAF(220,205),
    /* ko */
    LEAF(221,206), LEAF(221,207), LEAF(221,208), LEAF(221,209),
    LEAF(221,210), LEAF(221,211), LEAF(221,212), LEAF(221,213),
    LEAF(221,214), LEAF(221,215), LEAF(221,216), LEAF(221,217),
    LEAF(221,218), LEAF(221,219), LEAF(221,220), LEAF(221,221),
    LEAF(221,222), LEAF(221,223), LEAF(221,224), LEAF(221,225),
    LEAF(221,226), LEAF(221,227), LEAF(221,228), LEAF(221,229),
    LEAF(221,230), LEAF(221,231), LEAF(221,232), LEAF(221,233),
    LEAF(221,234), LEAF(221,235), LEAF(221,236), LEAF(221,237),
    LEAF(221,238), LEAF(221,239), LEAF(221,240), LEAF(221,241),
    LEAF(221,242), LEAF(221,243), LEAF(221,244), LEAF(221,245),
    LEAF(221,246), LEAF(221,247), LEAF(221,248), LEAF(221,249),
    LEAF(221,250),
    /* kr */
    LEAF(266, 22), LEAF(266,251), LEAF(266,252),
    /* ks */
    LEAF(269,253),
    /* ku_am */
    LEAF(270,254), LEAF(270,255),
    /* ku_iq */
    LEAF(272,256),
    /* ku_tr */
    LEAF(273,257), LEAF(273,258),
    /* kum */
    LEAF(275,259),
    /* kv */
    LEAF(276,260),
    /* kw */
    LEAF(277, 22), LEAF(277, 93), LEAF(277,261),
    /* ky */
    LEAF(280,262),
    /* la */
    LEAF(281, 22), LEAF(281,263),
    /* lb */
    LEAF(283,264),
    /* lg */
    LEAF(284, 22), LEAF(284,265),
    /* li */
    LEAF(286,266),
    /* ln */
    LEAF(287,267), LEAF(287,268), LEAF(287,  6), LEAF(287,269),
    /* lo */
    LEAF(291,270),
    /* lt */
    LEAF(292, 22), LEAF(292,271),
    /* lv */
    LEAF(294, 22), LEAF(294,272),
    /* mg */
    LEAF(296,273),
    /* mh */
    LEAF(297, 22), LEAF(297,274),
    /* mi */
    LEAF(299, 22), LEAF(299, 93), LEAF(299,275),
    /* mk */
    LEAF(302,276),
    /* ml */
    LEAF(303,277),
    /* mn_cn */
    LEAF(304,278),
    /* mn_mn */
    LEAF(305,279),
    /* mo */
    LEAF(306,280), LEAF(306, 56), LEAF(306,281), LEAF(306,259),
    /* mt */
    LEAF(310,282), LEAF(310,283),
    /* my */
    LEAF(312,284),
    /* na */
    LEAF(313,  4), LEAF(313,285),
    /* nb */
    LEAF(315,286),
    /* ne */
    LEAF(316,287),
    /* nl */
    LEAF(317,288),
    /* nn */
    LEAF(318,289),
    /* nso */
    LEAF(319,290), LEAF(319,291),
    /* nv */
    LEAF(321,292), LEAF(321,293), LEAF(321,294), LEAF(321,295),
    /* ny */
    LEAF(325, 22), LEAF(325,296),
    /* oc */
    LEAF(327,297),
    /* or */
    LEAF(328,298),
    /* ota */
    LEAF(329,299),
    /* pa */
    LEAF(330,300),
    /* pap_an */
    LEAF(331,301),
    /* pap_aw */
    LEAF(332,302),
    /* pl */
    LEAF(333, 96), LEAF(333,303),
    /* ps_af */
    LEAF(335,304),
    /* ps_pk */
    LEAF(336,305),
    /* pt */
    LEAF(337,306),
    /* qu */
    LEAF(338,302), LEAF(338,307),
    /* rm */
    LEAF(340,308),
    /* ro */
    LEAF(341,280), LEAF(341, 56), LEAF(341,281),
    /* sah */
    LEAF(344,309),
    /* sc */
    LEAF(345,310),
    /* sco */
    LEAF(346, 22), LEAF(346,311), LEAF(346,312),
    /* sd */
    LEAF(349,313),
    /* se */
    LEAF(350,314), LEAF(350,315),
    /* sg */
    LEAF(352,316),
    /* sh */
    LEAF(353, 22), LEAF(353, 38), LEAF(353,317),
    /* shs */
    LEAF(356,318), LEAF(356,319),
    /* si */
    LEAF(358,320),
    /* sid */
    LEAF(359,321), LEAF(359, 10),
    /* sk */
    LEAF(361,322), LEAF(361,323),
    /* sm */
    LEAF(363, 22), LEAF(363, 94),
    /* sma */
    LEAF(365,324),
    /* smj */
    LEAF(366,325),
    /* smn */
    LEAF(367,326), LEAF(367,327),
    /* sms */
    LEAF(369,328), LEAF(369,329), LEAF(369,330),
    /* sq */
    LEAF(372,331),
    /* sr */
    LEAF(373,332),
    /* sv */
    LEAF(374,333),
    /* syr */
    LEAF(375,334),
    /* ta */
    LEAF(376,335),
    /* te */
    LEAF(377,336),
    /* tg */
    LEAF(378,337),
    /* th */
    LEAF(379,338),
    /* tig */
    LEAF(380,339), LEAF(380, 41),
    /* tk */
    LEAF(382,340), LEAF(382,341),
    /* tr */
    LEAF(384,342), LEAF(384, 50),
    /* tt */
    LEAF(386,343),
    /* ty */
    LEAF(387,344), LEAF(387, 93), LEAF(387,294),
    /* ug */
    LEAF(390,345),
    /* uk */
    LEAF(391,346),
    /* ve */
    LEAF(392, 22), LEAF(392,347),
    /* vi */
    LEAF(394,348), LEAF(394,349), LEAF(394,350), LEAF(394,351),
    /* vo */
    LEAF(398,352),
    /* vot */
    LEAF(399,353), LEAF(399, 71),
    /* wa */
    LEAF(401,354),
    /* wen */
    LEAF(402, 96), LEAF(402,355),
    /* wo */
    LEAF(404,356), LEAF(404,265),
    /* yap */
    LEAF(406,357),
    /* yo */
    LEAF(407,358), LEAF(407,359), LEAF(407,360), LEAF(407,361),
    /* zh_cn */
    LEAF(411,362), LEAF(411,363), LEAF(411,364), LEAF(411,365),
    LEAF(411,366), LEAF(411,367), LEAF(411,368), LEAF(411,369),
    LEAF(411,370), LEAF(411,371), LEAF(411,372), LEAF(411,373),
    LEAF(411,374), LEAF(411,375), LEAF(411,376), LEAF(411,377),
    LEAF(411,378), LEAF(411,379), LEAF(411,380), LEAF(411,381),
    LEAF(411,382), LEAF(411,383), LEAF(411,384), LEAF(411,385),
    LEAF(411,386), LEAF(411,387), LEAF(411,388), LEAF(411,389),
    LEAF(411,390), LEAF(411,391), LEAF(411,392), LEAF(411,393),
    LEAF(411,394), LEAF(411,395), LEAF(411,396), LEAF(411,397),
    LEAF(411,398), LEAF(411,399), LEAF(411,400), LEAF(411,401),
    LEAF(411,402), LEAF(411,403), LEAF(411,404), LEAF(411,405),
    LEAF(411,406), LEAF(411,407), LEAF(411,408), LEAF(411,409),
    LEAF(411,410), LEAF(411,411), LEAF(411,412), LEAF(411,413),
    LEAF(411,414), LEAF(411,415), LEAF(411,416), LEAF(411,417),
    LEAF(411,418), LEAF(411,419), LEAF(411,420), LEAF(411,421),
    LEAF(411,422), LEAF(411,423), LEAF(411,424), LEAF(411,425),
    LEAF(411,426), LEAF(411,427), LEAF(411,428), LEAF(411,429),
    LEAF(411,430), LEAF(411,431), LEAF(411,432), LEAF(411,433),
    LEAF(411,434), LEAF(411,435), LEAF(411,436), LEAF(411,437),
    LEAF(411,438), LEAF(411,439), LEAF(411,440), LEAF(411,441),
    LEAF(411,442), LEAF(411,443),
    /* zh_hk */
    LEAF(493,444), LEAF(493,445), LEAF(493,446), LEAF(493,447),
    LEAF(493,448), LEAF(493,449), LEAF(493,450), LEAF(493,451),
    LEAF(493,452), LEAF(493,453), LEAF(493,454), LEAF(493,455),
    LEAF(493,456), LEAF(493,457), LEAF(493,458), LEAF(493,459),
    LEAF(493,460), LEAF(493,461), LEAF(493,462), LEAF(493,463),
    LEAF(493,464), LEAF(493,465), LEAF(493,466), LEAF(493,467),
    LEAF(493,468), LEAF(493,469), LEAF(493,470), LEAF(493,471),
    LEAF(493,472), LEAF(493,473), LEAF(493,474), LEAF(493,475),
    LEAF(493,476), LEAF(493,477), LEAF(493,478), LEAF(493,479),
    LEAF(493,480), LEAF(493,481), LEAF(493,482), LEAF(493,483),
    LEAF(493,484), LEAF(493,485), LEAF(493,486), LEAF(493,487),
    LEAF(493,488), LEAF(493,489), LEAF(493,490), LEAF(493,491),
    LEAF(493,492), LEAF(493,493), LEAF(493,494), LEAF(493,495),
    LEAF(493,496), LEAF(493,497), LEAF(493,498), LEAF(493,499),
    LEAF(493,500), LEAF(493,501), LEAF(493,502), LEAF(493,503),
    LEAF(493,504), LEAF(493,505), LEAF(493,506), LEAF(493,507),
    LEAF(493,508), LEAF(493,509), LEAF(493,510), LEAF(493,511),
    LEAF(493,512), LEAF(493,513), LEAF(493,514), LEAF(493,515),
    LEAF(493,516), LEAF(493,517), LEAF(493,518), LEAF(493,519),
    LEAF(493,520), LEAF(493,521), LEAF(493,522), LEAF(493,523),
    LEAF(493,524), LEAF(493,525), LEAF(493,526),
    /* zh_tw */
    LEAF(576,527), LEAF(576,528), LEAF(576,529), LEAF(576,530),
    LEAF(576,531), LEAF(576,532), LEAF(576,533), LEAF(576,534),
    LEAF(576,535), LEAF(576,536), LEAF(576,537), LEAF(576,538),
    LEAF(576,539), LEAF(576,540), LEAF(576,541), LEAF(576,542),
    LEAF(576,543), LEAF(576,544), LEAF(576,545), LEAF(576,546),
    LEAF(576,547), LEAF(576,548), LEAF(576,549), LEAF(576,550),
    LEAF(576,551), LEAF(576,552), LEAF(576,553), LEAF(576,554),
    LEAF(576,555), LEAF(576,556), LEAF(576,557), LEAF(576,558),
    LEAF(576,559), LEAF(576,560), LEAF(576,561), LEAF(576,562),
    LEAF(576,563), LEAF(576,564), LEAF(576,565), LEAF(576,566),
    LEAF(576,567), LEAF(576,568), LEAF(576,569), LEAF(576,570),
    LEAF(576,571), LEAF(576,572), LEAF(576,573), LEAF(576,574),
    LEAF(576,575), LEAF(576,576), LEAF(576,577), LEAF(576,578),
    LEAF(576,579), LEAF(576,580), LEAF(576,581), LEAF(576,582),
    LEAF(576,583), LEAF(576,584), LEAF(576,585), LEAF(576,586),
    LEAF(576,587), LEAF(576,588), LEAF(576,589), LEAF(576,590),
    LEAF(576,591), LEAF(576,592), LEAF(576,593), LEAF(576,594),
    LEAF(576,595), LEAF(576,596), LEAF(576,597), LEAF(576,598),
    LEAF(576,599), LEAF(576,600), LEAF(576,601), LEAF(576,602),
    LEAF(576,603), LEAF(576,604), LEAF(576,605), LEAF(576,606),
    LEAF(576,607), LEAF(576,608), LEAF(576,609),
},
{
    /* aa */
    0x0000,
    /* ab */
    0x0004,
    /* af */
    0x0000, 0x0001,
    /* ak */
    0x0000, 0x0001, 0x0002, 0x0003, 0x001e,
    /* am */
    0x0012, 0x0013,
    /* an */
    0x0000,
    /* ar */
    0x0006,
    /* as */
    0x0009,
    /* av */
    0x0004,
    /* ay */
    0x0000,
    /* az_az */
    0x0000, 0x0001, 0x0002,
    /* az_ir */
    0x0006,
    /* ba */
    0x0004,
    /* be */
    0x0004,
    /* ber_dz */
    0x0000, 0x0001, 0x0002, 0x001e,
    /* ber_ma */
    0x002d,
    /* bg */
    0x0004,
    /* bh */
    0x0009,
    /* bi */
    0x0000,
    /* bin */
    0x0000, 0x0003, 0x001e,
    /* bm */
    0x0000, 0x0001, 0x0002,
    /* bn */
    0x0009,
    /* bo */
    0x000f,
    /* br */
    0x0000,
    /* bs */
    0x0000, 0x0001,
    /* bua */
    0x0004,
    /* byn */
    0x0012, 0x0013,
    /* ca */
    0x0000, 0x0001,
    /* ch */
    0x0000,
    /* chm */
    0x0004,
    /* chr */
    0x0013,
    /* co */
    0x0000, 0x0001,
    /* crh */
    0x0000, 0x0001,
    /* cs */
    0x0000, 0x0001,
    /* csb */
    0x0000, 0x0001,
    /* cu */
    0x0004,
    /* cv */
    0x0001, 0x0004,
    /* cy */
    0x0000, 0x0001, 0x001e,
    /* da */
    0x0000,
    /* de */
    0x0000,
    /* dv */
    0x0007,
    /* ee */
    0x0000, 0x0001, 0x0002, 0x0003,
    /* el */
    0x0003,
    /* en */
    0x0000,
    /* eo */
    0x0000, 0x0001,
    /* et */
    0x0000, 0x0001,
    /* eu */
    0x0000,
    /* ff */
    0x0000, 0x0001, 0x0002,
    /* fi */
    0x0000, 0x0001,
    /* fil */
    0x0000,
    /* fj */
    0x0000,
    /* fo */
    0x0000,
    /* fur */
    0x0000,
    /* fy */
    0x0000,
    /* ga */
    0x0000, 0x0001, 0x001e,
    /* gd */
    0x0000,
    /* gez */
    0x0012, 0x0013,
    /* gn */
    0x0000, 0x0001, 0x001e,
    /* gu */
    0x000a,
    /* gv */
    0x0000,
    /* ha */
    0x0000, 0x0001, 0x0002,
    /* haw */
    0x0000, 0x0001, 0x0002,
    /* he */
    0x0005,
    /* hsb */
    0x0000, 0x0001,
    /* ht */
    0x0000,
    /* hu */
    0x0000, 0x0001,
    /* hy */
    0x0005,
    /* hz */
    0x0000, 0x0003, 0x001e,
    /* id */
    0x0000,
    /* ig */
    0x0000, 0x001e,
    /* ii */
    0x00a0, 0x00a1, 0x00a2, 0x00a3, 0x00a4,
    /* ik */
    0x0004,
    /* is */
    0x0000,
    /* it */
    0x0000,
    /* iu */
    0x0014, 0x0015, 0x0016,
    /* ja */
    0x0030, 0x004e, 0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054,
    0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c,
    0x005d, 0x005e, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064,
    0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c,
    0x006d, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074,
    0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c,
    0x007d, 0x007e, 0x007f, 0x0080, 0x0081, 0x0082, 0x0083, 0x0084,
    0x0085, 0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c,
    0x008d, 0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094,
    0x0095, 0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c,
    0x009d, 0x009e, 0x009f,
    /* jv */
    0x0000,
    /* ka */
    0x0010,
    /* kaa */
    0x0004,
    /* ki */
    0x0000, 0x0001,
    /* kk */
    0x0004,
    /* kl */
    0x0000, 0x0001,
    /* km */
    0x0017,
    /* kn */
    0x000c,
    /* ko */
    0x0031, 0x00ac, 0x00ad, 0x00ae, 0x00af, 0x00b0, 0x00b1, 0x00b2,
    0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00b9, 0x00ba,
    0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00bf, 0x00c0, 0x00c1, 0x00c2,
    0x00c3, 0x00c4, 0x00c5, 0x00c6, 0x00c7, 0x00c8, 0x00c9, 0x00ca,
    0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 0x00d0, 0x00d1, 0x00d2,
    0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7,
    /* kr */
    0x0000, 0x0001, 0x0002,
    /* ks */
    0x0006,
    /* ku_am */
    0x0004, 0x0005,
    /* ku_iq */
    0x0006,
    /* ku_tr */
    0x0000, 0x0001,
    /* kum */
    0x0004,
    /* kv */
    0x0004,
    /* kw */
    0x0000, 0x0001, 0x0002,
    /* ky */
    0x0004,
    /* la */
    0x0000, 0x0001,
    /* lb */
    0x0000,
    /* lg */
    0x0000, 0x0001,
    /* li */
    0x0000,
    /* ln */
    0x0000, 0x0001, 0x0002, 0x0003,
    /* lo */
    0x000e,
    /* lt */
    0x0000, 0x0001,
    /* lv */
    0x0000, 0x0001,
    /* mg */
    0x0000,
    /* mh */
    0x0000, 0x0001,
    /* mi */
    0x0000, 0x0001, 0x001e,
    /* mk */
    0x0004,
    /* ml */
    0x000d,
    /* mn_cn */
    0x0018,
    /* mn_mn */
    0x0004,
    /* mo */
    0x0000, 0x0001, 0x0002, 0x0004,
    /* mt */
    0x0000, 0x0001,
    /* my */
    0x0010,
    /* na */
    0x0000, 0x0001,
    /* nb */
    0x0000,
    /* ne */
    0x0009,
    /* nl */
    0x0000,
    /* nn */
    0x0000,
    /* nso */
    0x0000, 0x0001,
    /* nv */
    0x0000, 0x0001, 0x0002, 0x0003,
    /* ny */
    0x0000, 0x0001,
    /* oc */
    0x0000,
    /* or */
    0x000b,
    /* ota */
    0x0006,
    /* pa */
    0x000a,
    /* pap_an */
    0x0000,
    /* pap_aw */
    0x0000,
    /* pl */
    0x0000, 0x0001,
    /* ps_af */
    0x0006,
    /* ps_pk */
    0x0006,
    /* pt */
    0x0000,
    /* qu */
    0x0000, 0x0002,
    /* rm */
    0x0000,
    /* ro */
    0x0000, 0x0001, 0x0002,
    /* sah */
    0x0004,
    /* sc */
    0x0000,
    /* sco */
    0x0000, 0x0001, 0x0002,
    /* sd */
    0x0006,
    /* se */
    0x0000, 0x0001,
    /* sg */
    0x0000,
    /* sh */
    0x0000, 0x0001, 0x0004,
    /* shs */
    0x0000, 0x0003,
    /* si */
    0x000d,
    /* sid */
    0x0012, 0x0013,
    /* sk */
    0x0000, 0x0001,
    /* sm */
    0x0000, 0x0002,
    /* sma */
    0x0000,
    /* smj */
    0x0000,
    /* smn */
    0x0000, 0x0001,
    /* sms */
    0x0000, 0x0001, 0x0002,
    /* sq */
    0x0000,
    /* sr */
    0x0004,
    /* sv */
    0x0000,
    /* syr */
    0x0007,
    /* ta */
    0x000b,
    /* te */
    0x000c,
    /* tg */
    0x0004,
    /* th */
    0x000e,
    /* tig */
    0x0012, 0x0013,
    /* tk */
    0x0000, 0x0001,
    /* tr */
    0x0000, 0x0001,
    /* tt */
    0x0004,
    /* ty */
    0x0000, 0x0001, 0x0002,
    /* ug */
    0x0006,
    /* uk */
    0x0004,
    /* ve */
    0x0000, 0x001e,
    /* vi */
    0x0000, 0x0001, 0x0003, 0x001e,
    /* vo */
    0x0000,
    /* vot */
    0x0000, 0x0001,
    /* wa */
    0x0000,
    /* wen */
    0x0000, 0x0001,
    /* wo */
    0x0000, 0x0001,
    /* yap */
    0x0000,
    /* yo */
    0x0000, 0x0001, 0x0003, 0x001e,
    /* zh_cn */
    0x0002, 0x004e, 0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054,
    0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c,
    0x005d, 0x005e, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064,
    0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c,
    0x006d, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074,
    0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c,
    0x007d, 0x007e, 0x007f, 0x0080, 0x0081, 0x0082, 0x0083, 0x0084,
    0x0085, 0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c,
    0x008d, 0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094,
    0x0095, 0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c,
    0x009e, 0x009f,
    /* zh_hk */
    0x004e, 0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055,
    0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d,
    0x005e, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065,
    0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d,
    0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075,
    0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d,
    0x007e, 0x007f, 0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085,
    0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c, 0x008d,
    0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095,
    0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009d,
    0x009e, 0x009f, 0x0205,
    /* zh_tw */
    0x004e, 0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055,
    0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d,
    0x005e, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065,
    0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d,
    0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075,
    0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d,
    0x007e, 0x007f, 0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085,
    0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c, 0x008d,
    0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095,
    0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009d,
    0x009e, 0x009f, 0x00fa,
},
{
    0, /* aa */
    1, /* ab */
    2, /* af */
    190, /* ak */
    3, /* am */
    191, /* an */
    4, /* ar */
    5, /* as */
    6, /* ast */
    7, /* av */
    8, /* ay */
    9, /* az_az */
    10, /* az_ir */
    11, /* ba */
    13, /* be */
    192, /* ber_dz */
    193, /* ber_ma */
    14, /* bg */
    15, /* bh */
    16, /* bho */
    17, /* bi */
    18, /* bin */
    12, /* bm */
    19, /* bn */
    20, /* bo */
    21, /* br */
    22, /* bs */
    23, /* bua */
    194, /* byn */
    24, /* ca */
    25, /* ce */
    26, /* ch */
    27, /* chm */
    28, /* chr */
    29, /* co */
    195, /* crh */
    30, /* cs */
    196, /* csb */
    31, /* cu */
    32, /* cv */
    33, /* cy */
    34, /* da */
    35, /* de */
    197, /* dv */
    36, /* dz */
    198, /* ee */
    37, /* el */
    38, /* en */
    39, /* eo */
    40, /* es */
    41, /* et */
    42, /* eu */
    43, /* fa */
    199, /* fat */
    48, /* ff */
    44, /* fi */
    200, /* fil */
    45, /* fj */
    46, /* fo */
    47, /* fr */
    49, /* fur */
    50, /* fy */
    51, /* ga */
    52, /* gd */
    53, /* gez */
    54, /* gl */
    55, /* gn */
    56, /* gu */
    57, /* gv */
    58, /* ha */
    59, /* haw */
    60, /* he */
    61, /* hi */
    201, /* hne */
    62, /* ho */
    63, /* hr */
    202, /* hsb */
    203, /* ht */
    64, /* hu */
    65, /* hy */
    204, /* hz */
    66, /* ia */
    68, /* id */
    69, /* ie */
    67, /* ig */
    205, /* ii */
    70, /* ik */
    71, /* io */
    72, /* is */
    73, /* it */
    74, /* iu */
    75, /* ja */
    206, /* jv */
    76, /* ka */
    77, /* kaa */
    207, /* kab */
    78, /* ki */
    208, /* kj */
    79, /* kk */
    80, /* kl */
    81, /* km */
    82, /* kn */
    83, /* ko */
    84, /* kok */
    209, /* kr */
    85, /* ks */
    86, /* ku_am */
    210, /* ku_iq */
    87, /* ku_ir */
    211, /* ku_tr */
    88, /* kum */
    89, /* kv */
    90, /* kw */
    212, /* kwm */
    91, /* ky */
    92, /* la */
    237, /* lah */
    93, /* lb */
    94, /* lez */
    213, /* lg */
    214, /* li */
    95, /* ln */
    96, /* lo */
    97, /* lt */
    98, /* lv */
    215, /* mai */
    99, /* mg */
    100, /* mh */
    101, /* mi */
    102, /* mk */
    103, /* ml */
    104, /* mn_cn */
    216, /* mn_mn */
    105, /* mo */
    106, /* mr */
    217, /* ms */
    107, /* mt */
    108, /* my */
    218, /* na */
    109, /* nb */
    110, /* nds */
    111, /* ne */
    219, /* ng */
    112, /* nl */
    113, /* nn */
    114, /* no */
    115, /* nr */
    116, /* nso */
    220, /* nv */
    117, /* ny */
    118, /* oc */
    119, /* om */
    120, /* or */
    121, /* os */
    221, /* ota */
    122, /* pa */
    222, /* pa_pk */
    223, /* pap_an */
    224, /* pap_aw */
    123, /* pl */
    124, /* ps_af */
    125, /* ps_pk */
    126, /* pt */
    225, /* qu */
    127, /* rm */
    226, /* rn */
    128, /* ro */
    129, /* ru */
    227, /* rw */
    130, /* sa */
    131, /* sah */
    228, /* sc */
    132, /* sco */
    229, /* sd */
    133, /* se */
    134, /* sel */
    230, /* sg */
    135, /* sh */
    136, /* shs */
    137, /* si */
    231, /* sid */
    138, /* sk */
    139, /* sl */
    140, /* sm */
    141, /* sma */
    142, /* smj */
    143, /* smn */
    144, /* sms */
    232, /* sn */
    145, /* so */
    146, /* sq */
    147, /* sr */
    148, /* ss */
    149, /* st */
    233, /* su */
    150, /* sv */
    151, /* sw */
    152, /* syr */
    153, /* ta */
    154, /* te */
    155, /* tg */
    156, /* th */
    157, /* ti_er */
    158, /* ti_et */
    159, /* tig */
    160, /* tk */
    161, /* tl */
    162, /* tn */
    163, /* to */
    164, /* tr */
    165, /* ts */
    166, /* tt */
    167, /* tw */
    234, /* ty */
    168, /* tyv */
    169, /* ug */
    170, /* uk */
    171, /* ur */
    172, /* uz */
    173, /* ve */
    174, /* vi */
    175, /* vo */
    176, /* vot */
    177, /* wa */
    235, /* wal */
    178, /* wen */
    179, /* wo */
    180, /* xh */
    181, /* yap */
    182, /* yi */
    183, /* yo */
    236, /* za */
    184, /* zh_cn */
    185, /* zh_hk */
    186, /* zh_mo */
    187, /* zh_sg */
    188, /* zh_tw */
    189, /* zu */
},
{
    0, /* aa */
    1, /* ab */
    2, /* af */
    4, /* am */
    6, /* ar */
    7, /* as */
    8, /* ast */
    9, /* av */
    10, /* ay */
    11, /* az_az */
    12, /* az_ir */
    13, /* ba */
    22, /* bm */
    14, /* be */
    17, /* bg */
    18, /* bh */
    19, /* bho */
    20, /* bi */
    21, /* bin */
    23, /* bn */
    24, /* bo */
    25, /* br */
    26, /* bs */
    27, /* bua */
    29, /* ca */
    30, /* ce */
    31, /* ch */
    32, /* chm */
    33, /* chr */
    34, /* co */
    36, /* cs */
    38, /* cu */
    39, /* cv */
    40, /* cy */
    41, /* da */
    42, /* de */
    44, /* dz */
    46, /* el */
    47, /* en */
    48, /* eo */
    49, /* es */
    50, /* et */
    51, /* eu */
    52, /* fa */
    55, /* fi */
    57, /* fj */
    58, /* fo */
    59, /* fr */
    54, /* ff */
    60, /* fur */
    61, /* fy */
    62, /* ga */
    63, /* gd */
    64, /* gez */
    65, /* gl */
    66, /* gn */
    67, /* gu */
    68, /* gv */
    69, /* ha */
    70, /* haw */
    71, /* he */
    72, /* hi */
    74, /* ho */
    75, /* hr */
    78, /* hu */
    79, /* hy */
    81, /* ia */
    84, /* ig */
    82, /* id */
    83, /* ie */
    86, /* ik */
    87, /* io */
    88, /* is */
    89, /* it */
    90, /* iu */
    91, /* ja */
    93, /* ka */
    94, /* kaa */
    96, /* ki */
    98, /* kk */
    99, /* kl */
    100, /* km */
    101, /* kn */
    102, /* ko */
    103, /* kok */
    105, /* ks */
    106, /* ku_am */
    108, /* ku_ir */
    110, /* kum */
    111, /* kv */
    112, /* kw */
    114, /* ky */
    115, /* la */
    117, /* lb */
    118, /* lez */
    121, /* ln */
    122, /* lo */
    123, /* lt */
    124, /* lv */
    126, /* mg */
    127, /* mh */
    128, /* mi */
    129, /* mk */
    130, /* ml */
    131, /* mn_cn */
    133, /* mo */
    134, /* mr */
    136, /* mt */
    137, /* my */
    139, /* nb */
    140, /* nds */
    141, /* ne */
    143, /* nl */
    144, /* nn */
    145, /* no */
    146, /* nr */
    147, /* nso */
    149, /* ny */
    150, /* oc */
    151, /* om */
    152, /* or */
    153, /* os */
    155, /* pa */
    159, /* pl */
    160, /* ps_af */
    161, /* ps_pk */
    162, /* pt */
    164, /* rm */
    166, /* ro */
    167, /* ru */
    169, /* sa */
    170, /* sah */
    172, /* sco */
    174, /* se */
    175, /* sel */
    177, /* sh */
    178, /* shs */
    179, /* si */
    181, /* sk */
    182, /* sl */
    183, /* sm */
    184, /* sma */
    185, /* smj */
    186, /* smn */
    187, /* sms */
    189, /* so */
    190, /* sq */
    191, /* sr */
    192, /* ss */
    193, /* st */
    195, /* sv */
    196, /* sw */
    197, /* syr */
    198, /* ta */
    199, /* te */
    200, /* tg */
    201, /* th */
    202, /* ti_er */
    203, /* ti_et */
    204, /* tig */
    205, /* tk */
    206, /* tl */
    207, /* tn */
    208, /* to */
    209, /* tr */
    210, /* ts */
    211, /* tt */
    212, /* tw */
    214, /* tyv */
    215, /* ug */
    216, /* uk */
    217, /* ur */
    218, /* uz */
    219, /* ve */
    220, /* vi */
    221, /* vo */
    222, /* vot */
    223, /* wa */
    225, /* wen */
    226, /* wo */
    227, /* xh */
    228, /* yap */
    229, /* yi */
    230, /* yo */
    232, /* zh_cn */
    233, /* zh_hk */
    234, /* zh_mo */
    235, /* zh_sg */
    236, /* zh_tw */
    237, /* zu */
    3, /* ak */
    5, /* an */
    15, /* ber_dz */
    16, /* ber_ma */
    28, /* byn */
    35, /* crh */
    37, /* csb */
    43, /* dv */
    45, /* ee */
    53, /* fat */
    56, /* fil */
    73, /* hne */
    76, /* hsb */
    77, /* ht */
    80, /* hz */
    85, /* ii */
    92, /* jv */
    95, /* kab */
    97, /* kj */
    104, /* kr */
    107, /* ku_iq */
    109, /* ku_tr */
    113, /* kwm */
    119, /* lg */
    120, /* li */
    125, /* mai */
    132, /* mn_mn */
    135, /* ms */
    138, /* na */
    142, /* ng */
    148, /* nv */
    154, /* ota */
    156, /* pa_pk */
    157, /* pap_an */
    158, /* pap_aw */
    163, /* qu */
    165, /* rn */
    168, /* rw */
    171, /* sc */
    173, /* sd */
    176, /* sg */
    180, /* sid */
    188, /* sn */
    194, /* su */
    213, /* ty */
    224, /* wal */
    231, /* za */
    116, /* lah */
}
};

#define NUM_LANG_CHAR_SET	238
#define NUM_LANG_SET_MAP	8

static const FcChar32 fcLangCountrySets[][NUM_LANG_SET_MAP] = {
    { 0x00000600, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, }, /* az */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000000, }, /* ber */
    { 0x00000000, 0x00000000, 0x00c00000, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x00000000, }, /* ku */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000100, 0x00000000, 0x00000000, 0x01000000, 0x00000000, }, /* mn */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000000, }, /* pa */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x00000001, }, /* pap */
    { 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, }, /* ps */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x60000000, 0x00000000, 0x00000000, 0x00000000, }, /* ti */
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x1f000000, 0x00000000, 0x00000000, }, /* zh */
};

#define NUM_COUNTRY_SET 9

static const FcLangCharSetRange  fcLangCharSetRanges[] = {

    { 0, 12 }, /* a */
    { 13, 28 }, /* b */
    { 29, 40 }, /* c */
    { 41, 44 }, /* d */
    { 45, 51 }, /* e */
    { 52, 61 }, /* f */
    { 62, 68 }, /* g */
    { 69, 80 }, /* h */
    { 81, 90 }, /* i */
    { 91, 92 }, /* j */
    { 93, 114 }, /* k */
    { 115, 124 }, /* l */
    { 125, 137 }, /* m */
    { 138, 149 }, /* n */
    { 150, 154 }, /* o */
    { 155, 162 }, /* p */
    { 163, 163 }, /* q */
    { 164, 168 }, /* r */
    { 169, 197 }, /* s */
    { 198, 214 }, /* t */
    { 215, 218 }, /* u */
    { 219, 222 }, /* v */
    { 223, 226 }, /* w */
    { 227, 227 }, /* x */
    { 228, 230 }, /* y */
    { 231, 237 }, /* z */
};

