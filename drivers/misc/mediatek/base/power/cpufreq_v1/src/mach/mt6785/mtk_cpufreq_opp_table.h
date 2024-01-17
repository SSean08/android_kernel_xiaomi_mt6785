/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "mtk_cpufreq_struct.h"
#include "mtk_cpufreq_config.h"

/* 6785 */
/* for DVFS OPP table L */

#define CPU_DVFS_FREQ0_LL_6785    2351000    /* KHz */
#define CPU_DVFS_FREQ1_LL_6785    2269000    /* KHz */
#define CPU_DVFS_FREQ2_LL_6785    2186000    /* KHz */
#define CPU_DVFS_FREQ3_LL_6785    2103000    /* KHz */
#define CPU_DVFS_FREQ4_LL_6785    2033000    /* KHz */
#define CPU_DVFS_FREQ5_LL_6785    1962000    /* KHz */
#define CPU_DVFS_FREQ6_LL_6785    1891000    /* KHz */
#define CPU_DVFS_FREQ7_LL_6785    1820000    /* KHz */
#define CPU_DVFS_FREQ8_LL_6785    1750000    /* KHz */
#define CPU_DVFS_FREQ9_LL_6785    1617000    /* KHz */
#define CPU_DVFS_FREQ10_LL_6785   1484000    /* KHz */
#define CPU_DVFS_FREQ11_LL_6785   1351000    /* KHz */
#define CPU_DVFS_FREQ12_LL_6785   1218000    /* KHz */
#define CPU_DVFS_FREQ13_LL_6785   1085000    /* KHz */
#define CPU_DVFS_FREQ14_LL_6785    979000    /* KHz */
#define CPU_DVFS_FREQ15_LL_6785    900000    /* KHz */

/* for DVFS OPP table B */

#define CPU_DVFS_FREQ0_L_6785    2351000    /* KHz */
#define CPU_DVFS_FREQ1_L_6785    2269000    /* KHz */
#define CPU_DVFS_FREQ2_L_6785    2186000    /* KHz */
#define CPU_DVFS_FREQ3_L_6785    2103000    /* KHz */
#define CPU_DVFS_FREQ4_L_6785    2033000    /* KHz */
#define CPU_DVFS_FREQ5_L_6785    1962000    /* KHz */
#define CPU_DVFS_FREQ6_L_6785    1891000    /* KHz */
#define CPU_DVFS_FREQ7_L_6785    1820000    /* KHz */
#define CPU_DVFS_FREQ8_L_6785    1750000    /* KHz */
#define CPU_DVFS_FREQ9_L_6785    1617000    /* KHz */
#define CPU_DVFS_FREQ10_L_6785   1484000    /* KHz */
#define CPU_DVFS_FREQ11_L_6785   1351000    /* KHz */
#define CPU_DVFS_FREQ12_L_6785   1218000    /* KHz */
#define CPU_DVFS_FREQ13_L_6785   1085000    /* KHz */
#define CPU_DVFS_FREQ14_L_6785    979000    /* KHz */
#define CPU_DVFS_FREQ15_L_6785    900000    /* KHz */

/* for DVFS OPP table CCI */

#define CPU_DVFS_FREQ0_CCI_6785    1701000    /* KHz */
#define CPU_DVFS_FREQ1_CCI_6785    1612000    /* KHz */
#define CPU_DVFS_FREQ2_CCI_6785    1522000    /* KHz */
#define CPU_DVFS_FREQ3_CCI_6785    1433000    /* KHz */
#define CPU_DVFS_FREQ4_CCI_6785    1356000    /* KHz */
#define CPU_DVFS_FREQ5_CCI_6785    1279000    /* KHz */
#define CPU_DVFS_FREQ6_CCI_6785    1203000    /* KHz */
#define CPU_DVFS_FREQ7_CCI_6785    1126000    /* KHz */
#define CPU_DVFS_FREQ8_CCI_6785    1050000    /* KHz */
#define CPU_DVFS_FREQ9_CCI_6785     948000    /* KHz */
#define CPU_DVFS_FREQ10_CCI_6785    846000    /* KHz */
#define CPU_DVFS_FREQ11_CCI_6785    745000    /* KHz */
#define CPU_DVFS_FREQ12_CCI_6785    643000    /* KHz */
#define CPU_DVFS_FREQ13_CCI_6785    542000    /* KHz */
#define CPU_DVFS_FREQ14_CCI_6785    460000    /* KHz */
#define CPU_DVFS_FREQ15_CCI_6785    400000    /* KHz */

/* for DVFS OPP table L */

#define CPU_DVFS_VOLT0_VPROC1_6785    111875        /* 10uV */
#define CPU_DVFS_VOLT1_VPROC1_6785    107500        /* 10uV */
#define CPU_DVFS_VOLT2_VPROC1_6785    103125        /* 10uV */
#define CPU_DVFS_VOLT3_VPROC1_6785     98750        /* 10uV */
#define CPU_DVFS_VOLT4_VPROC1_6785     95000        /* 10uV */
#define CPU_DVFS_VOLT5_VPROC1_6785     91250        /* 10uV */
#define CPU_DVFS_VOLT6_VPROC1_6785     87500        /* 10uV */
#define CPU_DVFS_VOLT7_VPROC1_6785     83750        /* 10uV */
#define CPU_DVFS_VOLT8_VPROC1_6785     80000        /* 10uV */
#define CPU_DVFS_VOLT9_VPROC1_6785     76875        /* 10uV */
#define CPU_DVFS_VOLT10_VPROC1_6785    73750        /* 10uV */
#define CPU_DVFS_VOLT11_VPROC1_6785    70625        /* 10uV */
#define CPU_DVFS_VOLT12_VPROC1_6785    67500        /* 10uV */
#define CPU_DVFS_VOLT13_VPROC1_6785    64375        /* 10uV */
#define CPU_DVFS_VOLT14_VPROC1_6785    61875        /* 10uV */
#define CPU_DVFS_VOLT15_VPROC1_6785    60000        /* 10uV */

/* for DVFS OPP table B */

#define CPU_DVFS_VOLT0_VPROC2_6785    111875        /* 10uV */
#define CPU_DVFS_VOLT1_VPROC2_6785    107500        /* 10uV */
#define CPU_DVFS_VOLT2_VPROC2_6785    103125        /* 10uV */
#define CPU_DVFS_VOLT3_VPROC2_6785     98750        /* 10uV */
#define CPU_DVFS_VOLT4_VPROC2_6785     95000        /* 10uV */
#define CPU_DVFS_VOLT5_VPROC2_6785     91250        /* 10uV */
#define CPU_DVFS_VOLT6_VPROC2_6785     87500        /* 10uV */
#define CPU_DVFS_VOLT7_VPROC2_6785     83750        /* 10uV */
#define CPU_DVFS_VOLT8_VPROC2_6785     80000        /* 10uV */
#define CPU_DVFS_VOLT9_VPROC2_6785     76875        /* 10uV */
#define CPU_DVFS_VOLT10_VPROC2_6785    73750        /* 10uV */
#define CPU_DVFS_VOLT11_VPROC2_6785    70625        /* 10uV */
#define CPU_DVFS_VOLT12_VPROC2_6785    67500        /* 10uV */
#define CPU_DVFS_VOLT13_VPROC2_6785    64375        /* 10uV */
#define CPU_DVFS_VOLT14_VPROC2_6785    61875        /* 10uV */
#define CPU_DVFS_VOLT15_VPROC2_6785    60000        /* 10uV */

/* for DVFS OPP table CCI */
#define CPU_DVFS_VOLT0_VPROC3_6785	103125		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC3_6785	 99375		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC3_6785	 95000		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC3_6785	 90625		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC3_6785	 88750		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC3_6785	 86250		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC3_6785	 84375		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC3_6785	 81875		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC3_6785	 80000		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC3_6785	 78125		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC3_6785	 76875		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC3_6785	 74375		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC3_6785	 71875		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC3_6785	 69375		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC3_6785	 67500		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC3_6785	 60000		/* 10uV */

/* 6785T */
/* for DVFS OPP table L */
#define CPU_DVFS_FREQ0_LL_6785T    2351000    /* KHz */
#define CPU_DVFS_FREQ1_LL_6785T    2269000    /* KHz */
#define CPU_DVFS_FREQ2_LL_6785T    2186000    /* KHz */
#define CPU_DVFS_FREQ3_LL_6785T    2103000    /* KHz */
#define CPU_DVFS_FREQ4_LL_6785T    2033000    /* KHz */
#define CPU_DVFS_FREQ5_LL_6785T    1962000    /* KHz */
#define CPU_DVFS_FREQ6_LL_6785T		1618000		/* KHz */
#define CPU_DVFS_FREQ7_LL_6785T		1500000		/* KHz */
#define CPU_DVFS_FREQ8_LL_6785T		1375000		/* KHz */
#define CPU_DVFS_FREQ9_LL_6785T		1275000		/* KHz */
#define CPU_DVFS_FREQ10_LL_6785T	1175000		/* KHz */
#define CPU_DVFS_FREQ11_LL_6785T	1075000		/* KHz */
#define CPU_DVFS_FREQ12_LL_6785T	975000		/* KHz */
#define CPU_DVFS_FREQ13_LL_6785T	875000		/* KHz */
#define CPU_DVFS_FREQ14_LL_6785T	774000		/* KHz */
#define CPU_DVFS_FREQ15_LL_6785T	500000		/* KHz */

/* for DVFS OPP table B */
#define CPU_DVFS_FREQ0_L_6785T    2351000    /* KHz */
#define CPU_DVFS_FREQ1_L_6785T    2269000    /* KHz */
#define CPU_DVFS_FREQ2_L_6785T    2186000    /* KHz */
#define CPU_DVFS_FREQ3_L_6785T    2103000    /* KHz */
#define CPU_DVFS_FREQ4_L_6785T    2033000    /* KHz */
#define CPU_DVFS_FREQ5_L_6785T    1962000    /* KHz */
#define CPU_DVFS_FREQ6_L_6785T		1670000		/* KHz */
#define CPU_DVFS_FREQ7_L_6785T		1530000		/* KHz */
#define CPU_DVFS_FREQ8_L_6785T		1419000		/* KHz */
#define CPU_DVFS_FREQ9_L_6785T		1308000		/* KHz */
#define CPU_DVFS_FREQ10_L_6785T		1169000		/* KHz */
#define CPU_DVFS_FREQ11_L_6785T		1085000		/* KHz */
#define CPU_DVFS_FREQ12_L_6785T		1002000		/* KHz */
#define CPU_DVFS_FREQ13_L_6785T		919000		/* KHz */
#define CPU_DVFS_FREQ14_L_6785T		835000		/* KHz */
#define CPU_DVFS_FREQ15_L_6785T		774000		/* KHz */

/* for DVFS OPP table CCI */
#define CPU_DVFS_FREQ0_CCI_6785T    1701000    /* KHz */
#define CPU_DVFS_FREQ1_CCI_6785T    1612000    /* KHz */
#define CPU_DVFS_FREQ2_CCI_6785T    1522000    /* KHz */
#define CPU_DVFS_FREQ3_CCI_6785T    1433000    /* KHz */
#define CPU_DVFS_FREQ4_CCI_6785T    1356000    /* KHz */
#define CPU_DVFS_FREQ5_CCI_6785T    1279000    /* KHz */
#define CPU_DVFS_FREQ6_CCI_6785T	1050000		/* KHz */
#define CPU_DVFS_FREQ7_CCI_6785T	980000		/* KHz */
#define CPU_DVFS_FREQ8_CCI_6785T	927000		/* KHz */
#define CPU_DVFS_FREQ9_CCI_6785T	875000		/* KHz */
#define CPU_DVFS_FREQ10_CCI_6785T	822000		/* KHz */
#define CPU_DVFS_FREQ11_CCI_6785T	752000		/* KHz */
#define CPU_DVFS_FREQ12_CCI_6785T	682000		/* KHz */
#define CPU_DVFS_FREQ13_CCI_6785T	612000		/* KHz */
#define CPU_DVFS_FREQ14_CCI_6785T	560000		/* KHz */
#define CPU_DVFS_FREQ15_CCI_6785T	500000		/* KHz */

/* for DVFS OPP table L */
#define CPU_DVFS_VOLT0_VPROC1_6785T    111875        /* 10uV */
#define CPU_DVFS_VOLT1_VPROC1_6785T    107500        /* 10uV */
#define CPU_DVFS_VOLT2_VPROC1_6785T    103125        /* 10uV */
#define CPU_DVFS_VOLT3_VPROC1_6785T     98750        /* 10uV */
#define CPU_DVFS_VOLT4_VPROC1_6785T     95000        /* 10uV */
#define CPU_DVFS_VOLT5_VPROC1_6785T     91250        /* 10uV */
#define CPU_DVFS_VOLT6_VPROC1_6785T	 87500		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC1_6785T	 85625		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC1_6785T	 82500		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC1_6785T	 80000		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC1_6785T     77500          /* 10uV */
#define CPU_DVFS_VOLT11_VPROC1_6785T     75000		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC1_6785T     72500          /* 10uV */
#define CPU_DVFS_VOLT13_VPROC1_6785T     70000          /* 10uV */
#define CPU_DVFS_VOLT14_VPROC1_6785T     67500          /* 10uV */
#define CPU_DVFS_VOLT15_VPROC1_6785T     60000          /* 10uV */

/* for DVFS OPP table B */
#define CPU_DVFS_VOLT0_VPROC2_6785T    111875        /* 10uV */
#define CPU_DVFS_VOLT1_VPROC2_6785T    107500        /* 10uV */
#define CPU_DVFS_VOLT2_VPROC2_6785T    103125        /* 10uV */
#define CPU_DVFS_VOLT3_VPROC2_6785T     98750        /* 10uV */
#define CPU_DVFS_VOLT4_VPROC2_6785T     95000        /* 10uV */
#define CPU_DVFS_VOLT5_VPROC2_6785T     91250        /* 10uV */
#define CPU_DVFS_VOLT6_VPROC2_6785T	 95625		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC2_6785T	 91250		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC2_6785T	 87500		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC2_6785T	 84375		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC2_6785T     80000          /* 10uV */
#define CPU_DVFS_VOLT11_VPROC2_6785T     77500          /* 10uV */
#define CPU_DVFS_VOLT12_VPROC2_6785T     74375          /* 10uV */
#define CPU_DVFS_VOLT13_VPROC2_6785T     71875          /* 10uV */
#define CPU_DVFS_VOLT14_VPROC2_6785T     69375          /* 10uV */
#define CPU_DVFS_VOLT15_VPROC2_6785T     67500          /* 10uV */

/* for DVFS OPP table CCI */
#define CPU_DVFS_VOLT0_VPROC3_6785T    111875        /* 10uV */
#define CPU_DVFS_VOLT1_VPROC3_6785T    107500        /* 10uV */
#define CPU_DVFS_VOLT2_VPROC3_6785T    103125        /* 10uV */
#define CPU_DVFS_VOLT3_VPROC3_6785T     98750        /* 10uV */
#define CPU_DVFS_VOLT4_VPROC3_6785T     95000        /* 10uV */
#define CPU_DVFS_VOLT5_VPROC3_6785T     91250        /* 10uV */
#define CPU_DVFS_VOLT6_VPROC3_6785T	 84375		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC3_6785T	 81875		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC3_6785T	 80000		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC3_6785T	 78125		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC3_6785T     76875          /* 10uV */
#define CPU_DVFS_VOLT11_VPROC3_6785T     74375          /* 10uV */
#define CPU_DVFS_VOLT12_VPROC3_6785T     71875          /* 10uV */
#define CPU_DVFS_VOLT13_VPROC3_6785T     69375          /* 10uV */
#define CPU_DVFS_VOLT14_VPROC3_6785T     67500          /* 10uV */
#define CPU_DVFS_VOLT15_VPROC3_6785T     60000          /* 10uV */

/* 6783 */
/* for DVFS OPP table L */
#define CPU_DVFS_FREQ0_LL_6783		1800000		/* KHz */
#define CPU_DVFS_FREQ1_LL_6783		1766000		/* KHz */
#define CPU_DVFS_FREQ2_LL_6783		1733000		/* KHz */
#define CPU_DVFS_FREQ3_LL_6783		1700000		/* KHz */
#define CPU_DVFS_FREQ4_LL_6783		1666000		/* KHz */
#define CPU_DVFS_FREQ5_LL_6783		1618000		/* KHz */
#define CPU_DVFS_FREQ6_LL_6783		1525000		/* KHz */
#define CPU_DVFS_FREQ7_LL_6783		1450000		/* KHz */
#define CPU_DVFS_FREQ8_LL_6783		1375000		/* KHz */
#define CPU_DVFS_FREQ9_LL_6783		1275000		/* KHz */
#define CPU_DVFS_FREQ10_LL_6783		1175000		/* KHz */
#define CPU_DVFS_FREQ11_LL_6783		1075000		/* KHz */
#define CPU_DVFS_FREQ12_LL_6783		975000		/* KHz */
#define CPU_DVFS_FREQ13_LL_6783		875000		/* KHz */
#define CPU_DVFS_FREQ14_LL_6783		774000		/* KHz */
#define CPU_DVFS_FREQ15_LL_6783		500000		/* KHz */

/* for DVFS OPP table B */
#define CPU_DVFS_FREQ0_L_6783		1800000		/* KHz */
#define CPU_DVFS_FREQ1_L_6783		1765000		/* KHz */
#define CPU_DVFS_FREQ2_L_6783		1733000		/* KHz */
#define CPU_DVFS_FREQ3_L_6783		1701000		/* KHz */
#define CPU_DVFS_FREQ4_L_6783		1670000		/* KHz */
#define CPU_DVFS_FREQ5_L_6783		1530000		/* KHz */
#define CPU_DVFS_FREQ6_L_6783		1475000		/* KHz */
#define CPU_DVFS_FREQ7_L_6783		1419000		/* KHz */
#define CPU_DVFS_FREQ8_L_6783		1364000		/* KHz */
#define CPU_DVFS_FREQ9_L_6783		1308000		/* KHz */
#define CPU_DVFS_FREQ10_L_6783		1169000		/* KHz */
#define CPU_DVFS_FREQ11_L_6783		1085000		/* KHz */
#define CPU_DVFS_FREQ12_L_6783		1002000		/* KHz */
#define CPU_DVFS_FREQ13_L_6783		919000		/* KHz */
#define CPU_DVFS_FREQ14_L_6783		835000		/* KHz */
#define CPU_DVFS_FREQ15_L_6783		774000		/* KHz */

/* for DVFS OPP table CCI */
#define CPU_DVFS_FREQ0_CCI_6783		1260000		/* KHz */
#define CPU_DVFS_FREQ1_CCI_6783		1190000		/* KHz */
#define CPU_DVFS_FREQ2_CCI_6783		1155000		/* KHz */
#define CPU_DVFS_FREQ3_CCI_6783		1120000		/* KHz */
#define CPU_DVFS_FREQ4_CCI_6783		1085000		/* KHz */
#define CPU_DVFS_FREQ5_CCI_6783		1032000		/* KHz */
#define CPU_DVFS_FREQ6_CCI_6783		980000		/* KHz */
#define CPU_DVFS_FREQ7_CCI_6783		927000		/* KHz */
#define CPU_DVFS_FREQ8_CCI_6783		875000		/* KHz */
#define CPU_DVFS_FREQ9_CCI_6783		822000		/* KHz */
#define CPU_DVFS_FREQ10_CCI_6783	770000		/* KHz */
#define CPU_DVFS_FREQ11_CCI_6783	717000		/* KHz */
#define CPU_DVFS_FREQ12_CCI_6783	665000		/* KHz */
#define CPU_DVFS_FREQ13_CCI_6783	612000		/* KHz */
#define CPU_DVFS_FREQ14_CCI_6783	560000		/* KHz */
#define CPU_DVFS_FREQ15_CCI_6783	500000		/* KHz */

/* for DVFS OPP table L */
#define CPU_DVFS_VOLT0_VPROC1_6783	 95000		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC1_6783	 93750		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC1_6783	 92500		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC1_6783	 91250		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC1_6783	 90000		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC1_6783	 87500		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC1_6783	 86250		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC1_6783	 84375		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC1_6783	 82500		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC1_6783	 80000		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC1_6783	 77500		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC1_6783	 75000		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC1_6783	 72500		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC1_6783	 70000		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC1_6783	 67500		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC1_6783	 60000		/* 10uV */

/* for DVFS OPP table B */
#define CPU_DVFS_VOLT0_VPROC2_6783	101250		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC2_6783	100000		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC2_6783	 98125		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC2_6783	 96875		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC2_6783	 95625		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC2_6783	 91250		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC2_6783	 89375		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC2_6783	 87500		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC2_6783	 86250		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC2_6783	 84375		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC2_6783	 80000		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC2_6783	 77500		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC2_6783	 74375		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC2_6783	 71875		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC2_6783	 69375		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC2_6783	 67500		/* 10uV */

/* for DVFS OPP table CCI */
#define CPU_DVFS_VOLT0_VPROC3_6783	 95000		/* 10uV */
#define CPU_DVFS_VOLT1_VPROC3_6783	 90625		/* 10uV */
#define CPU_DVFS_VOLT2_VPROC3_6783	 88750		/* 10uV */
#define CPU_DVFS_VOLT3_VPROC3_6783	 86250		/* 10uV */
#define CPU_DVFS_VOLT4_VPROC3_6783	 85625		/* 10uV */
#define CPU_DVFS_VOLT5_VPROC3_6783	 83750		/* 10uV */
#define CPU_DVFS_VOLT6_VPROC3_6783	 81875		/* 10uV */
#define CPU_DVFS_VOLT7_VPROC3_6783	 80000		/* 10uV */
#define CPU_DVFS_VOLT8_VPROC3_6783	 78125		/* 10uV */
#define CPU_DVFS_VOLT9_VPROC3_6783	 76875		/* 10uV */
#define CPU_DVFS_VOLT10_VPROC3_6783	 75000		/* 10uV */
#define CPU_DVFS_VOLT11_VPROC3_6783	 73125		/* 10uV */
#define CPU_DVFS_VOLT12_VPROC3_6783	 71250		/* 10uV */
#define CPU_DVFS_VOLT13_VPROC3_6783	 69375		/* 10uV */
#define CPU_DVFS_VOLT14_VPROC3_6783	 67500		/* 10uV */
#define CPU_DVFS_VOLT15_VPROC3_6783	 60000		/* 10uV */


/* DVFS OPP table */
#define OPP_TBL(cluster, seg, lv, vol)	\
static struct mt_cpu_freq_info opp_tbl_##cluster##_e##lv##_0[] = {        \
	OP                                                                \
(CPU_DVFS_FREQ0_##cluster##_##seg, CPU_DVFS_VOLT0_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ1_##cluster##_##seg, CPU_DVFS_VOLT1_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ2_##cluster##_##seg, CPU_DVFS_VOLT2_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ3_##cluster##_##seg, CPU_DVFS_VOLT3_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ4_##cluster##_##seg, CPU_DVFS_VOLT4_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ5_##cluster##_##seg, CPU_DVFS_VOLT5_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ6_##cluster##_##seg, CPU_DVFS_VOLT6_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ7_##cluster##_##seg, CPU_DVFS_VOLT7_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ8_##cluster##_##seg, CPU_DVFS_VOLT8_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ9_##cluster##_##seg, CPU_DVFS_VOLT9_VPROC##vol##_##seg),   \
	OP                                                                \
(CPU_DVFS_FREQ10_##cluster##_##seg, CPU_DVFS_VOLT10_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ11_##cluster##_##seg, CPU_DVFS_VOLT11_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ12_##cluster##_##seg, CPU_DVFS_VOLT12_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ13_##cluster##_##seg, CPU_DVFS_VOLT13_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ14_##cluster##_##seg, CPU_DVFS_VOLT14_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ15_##cluster##_##seg, CPU_DVFS_VOLT15_VPROC##vol##_##seg), \
}

OPP_TBL(LL,   6785, 0, 1); /* opp_tbl_LL_e0_0   */
OPP_TBL(L,  6785, 0, 2); /* opp_tbl_L_e0_0  */
OPP_TBL(CCI, 6785, 0, 3); /* opp_tbl_CCI_e0_0 */

OPP_TBL(LL,  6785T, 1, 1); /* opp_tbl_LL_e1_0   */
OPP_TBL(L,  6785T, 1, 2); /* opp_tbl_L_e1_0  */
OPP_TBL(CCI, 6785T, 1, 3); /* opp_tbl_CCI_e1_0 */

OPP_TBL(LL,  6783, 2, 1); /* opp_tbl_LL_e2_0   */
OPP_TBL(L,  6783, 2, 2); /* opp_tbl_L_e2_0  */
OPP_TBL(CCI, 6783, 2, 3); /* opp_tbl_CCI_e2_0 */

struct opp_tbl_info opp_tbls[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{
		[CPU_LEVEL_0] = { opp_tbl_LL_e0_0,
				ARRAY_SIZE(opp_tbl_LL_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_LL_e1_0,
				ARRAY_SIZE(opp_tbl_LL_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_LL_e2_0,
				ARRAY_SIZE(opp_tbl_LL_e2_0) },

	},
	/* L */
	{
		[CPU_LEVEL_0] = { opp_tbl_L_e0_0,
				ARRAY_SIZE(opp_tbl_L_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_L_e1_0,
				ARRAY_SIZE(opp_tbl_L_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_L_e2_0,
				ARRAY_SIZE(opp_tbl_L_e2_0) },

	},
	/* CCI */
	{
		[CPU_LEVEL_0] = { opp_tbl_CCI_e0_0,
				ARRAY_SIZE(opp_tbl_CCI_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_CCI_e1_0,
				ARRAY_SIZE(opp_tbl_CCI_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_CCI_e2_0,
				ARRAY_SIZE(opp_tbl_CCI_e2_0) },

	},
};

/* 16 steps OPP table */
static struct mt_cpu_freq_method opp_tbl_method_LL_6785[] = {	/* 6785 */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_6785[] = {	/* 6785 */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_6785[] = {	/* 6785 */
	/* POS,	CLK */
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_LL_6785T[] = {	/* 6785T */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_6785T[] = {	/* 6785T */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_6785T[] = {	/* 6785T */
	/* POS,	CLK */
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_LL_6783[] = {	/* 6783 */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_6783[] = {	/* 6783 */
	/* POS,	CLK */
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(1,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_6783[] = {	/* 6783 */
	/* POS,	CLK */
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(2,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
	FP(4,	1),
};

struct opp_tbl_m_info opp_tbls_m[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_LL_6785 },
		[CPU_LEVEL_1] = { opp_tbl_method_LL_6785T },
		[CPU_LEVEL_2] = { opp_tbl_method_LL_6783 },
	},
	/* L */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_L_6785 },
		[CPU_LEVEL_1] = { opp_tbl_method_L_6785T },
		[CPU_LEVEL_2] = { opp_tbl_method_L_6783 },
	},
	/* CCI */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_CCI_6785 },
		[CPU_LEVEL_1] = { opp_tbl_method_CCI_6785T },
		[CPU_LEVEL_2] = { opp_tbl_method_CCI_6783 },
	},
};
