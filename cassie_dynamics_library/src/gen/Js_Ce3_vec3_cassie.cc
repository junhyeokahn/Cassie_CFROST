/*
 * Automatically Generated from Mathematica.
 * Wed 20 Jun 2018 12:54:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "frost/gen/Js_Ce3_vec3_cassie.hh"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=4;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=5;
  p_output1[36]=5;
  p_output1[37]=5;
  p_output1[38]=5;
  p_output1[39]=5;
  p_output1[40]=5;
  p_output1[41]=5;
  p_output1[42]=5;
  p_output1[43]=5;
  p_output1[44]=5;
  p_output1[45]=5;
  p_output1[46]=5;
  p_output1[47]=5;
  p_output1[48]=5;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=6;
  p_output1[58]=6;
  p_output1[59]=6;
  p_output1[60]=6;
  p_output1[61]=6;
  p_output1[62]=6;
  p_output1[63]=6;
  p_output1[64]=6;
  p_output1[65]=6;
  p_output1[66]=6;
  p_output1[67]=6;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=6;
  p_output1[79]=6;
  p_output1[80]=6;
  p_output1[81]=6;
  p_output1[82]=6;
  p_output1[83]=6;
  p_output1[84]=6;
  p_output1[85]=6;
  p_output1[86]=6;
  p_output1[87]=6;
  p_output1[88]=6;
  p_output1[89]=6;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=7;
  p_output1[95]=7;
  p_output1[96]=7;
  p_output1[97]=7;
  p_output1[98]=7;
  p_output1[99]=7;
  p_output1[100]=7;
  p_output1[101]=7;
  p_output1[102]=7;
  p_output1[103]=7;
  p_output1[104]=7;
  p_output1[105]=7;
  p_output1[106]=7;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=8;
  p_output1[118]=8;
  p_output1[119]=8;
  p_output1[120]=8;
  p_output1[121]=8;
  p_output1[122]=8;
  p_output1[123]=8;
  p_output1[124]=8;
  p_output1[125]=8;
  p_output1[126]=8;
  p_output1[127]=8;
  p_output1[128]=8;
  p_output1[129]=8;
  p_output1[130]=8;
  p_output1[131]=8;
  p_output1[132]=8;
  p_output1[133]=8;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=9;
  p_output1[141]=9;
  p_output1[142]=9;
  p_output1[143]=9;
  p_output1[144]=9;
  p_output1[145]=9;
  p_output1[146]=9;
  p_output1[147]=9;
  p_output1[148]=9;
  p_output1[149]=9;
  p_output1[150]=9;
  p_output1[151]=9;
  p_output1[152]=9;
  p_output1[153]=9;
  p_output1[154]=9;
  p_output1[155]=9;
  p_output1[156]=9;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=10;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=10;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=10;
  p_output1[172]=10;
  p_output1[173]=10;
  p_output1[174]=10;
  p_output1[175]=10;
  p_output1[176]=10;
  p_output1[177]=10;
  p_output1[178]=10;
  p_output1[179]=10;
  p_output1[180]=10;
  p_output1[181]=10;
  p_output1[182]=10;
  p_output1[183]=10;
  p_output1[184]=10;
  p_output1[185]=10;
  p_output1[186]=11;
  p_output1[187]=11;
  p_output1[188]=11;
  p_output1[189]=11;
  p_output1[190]=11;
  p_output1[191]=11;
  p_output1[192]=11;
  p_output1[193]=11;
  p_output1[194]=11;
  p_output1[195]=11;
  p_output1[196]=11;
  p_output1[197]=11;
  p_output1[198]=11;
  p_output1[199]=11;
  p_output1[200]=11;
  p_output1[201]=11;
  p_output1[202]=11;
  p_output1[203]=11;
  p_output1[204]=11;
  p_output1[205]=11;
  p_output1[206]=11;
  p_output1[207]=11;
  p_output1[208]=11;
  p_output1[209]=12;
  p_output1[210]=12;
  p_output1[211]=12;
  p_output1[212]=12;
  p_output1[213]=12;
  p_output1[214]=12;
  p_output1[215]=12;
  p_output1[216]=12;
  p_output1[217]=12;
  p_output1[218]=12;
  p_output1[219]=12;
  p_output1[220]=12;
  p_output1[221]=12;
  p_output1[222]=12;
  p_output1[223]=12;
  p_output1[224]=12;
  p_output1[225]=12;
  p_output1[226]=12;
  p_output1[227]=12;
  p_output1[228]=12;
  p_output1[229]=12;
  p_output1[230]=12;
  p_output1[231]=12;
  p_output1[232]=13;
  p_output1[233]=13;
  p_output1[234]=13;
  p_output1[235]=13;
  p_output1[236]=13;
  p_output1[237]=13;
  p_output1[238]=13;
  p_output1[239]=13;
  p_output1[240]=13;
  p_output1[241]=13;
  p_output1[242]=13;
  p_output1[243]=13;
  p_output1[244]=13;
  p_output1[245]=13;
  p_output1[246]=13;
  p_output1[247]=13;
  p_output1[248]=13;
  p_output1[249]=13;
  p_output1[250]=13;
  p_output1[251]=13;
  p_output1[252]=13;
  p_output1[253]=13;
  p_output1[254]=13;
  p_output1[255]=14;
  p_output1[256]=14;
  p_output1[257]=14;
  p_output1[258]=14;
  p_output1[259]=14;
  p_output1[260]=14;
  p_output1[261]=14;
  p_output1[262]=14;
  p_output1[263]=14;
  p_output1[264]=14;
  p_output1[265]=14;
  p_output1[266]=14;
  p_output1[267]=14;
  p_output1[268]=14;
  p_output1[269]=14;
  p_output1[270]=14;
  p_output1[271]=14;
  p_output1[272]=14;
  p_output1[273]=14;
  p_output1[274]=14;
  p_output1[275]=14;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=15;
  p_output1[279]=15;
  p_output1[280]=15;
  p_output1[281]=15;
  p_output1[282]=15;
  p_output1[283]=15;
  p_output1[284]=15;
  p_output1[285]=15;
  p_output1[286]=15;
  p_output1[287]=15;
  p_output1[288]=15;
  p_output1[289]=15;
  p_output1[290]=15;
  p_output1[291]=15;
  p_output1[292]=15;
  p_output1[293]=15;
  p_output1[294]=15;
  p_output1[295]=15;
  p_output1[296]=15;
  p_output1[297]=15;
  p_output1[298]=15;
  p_output1[299]=15;
  p_output1[300]=15;
  p_output1[301]=16;
  p_output1[302]=16;
  p_output1[303]=16;
  p_output1[304]=16;
  p_output1[305]=16;
  p_output1[306]=16;
  p_output1[307]=16;
  p_output1[308]=16;
  p_output1[309]=16;
  p_output1[310]=16;
  p_output1[311]=16;
  p_output1[312]=16;
  p_output1[313]=16;
  p_output1[314]=16;
  p_output1[315]=16;
  p_output1[316]=16;
  p_output1[317]=16;
  p_output1[318]=16;
  p_output1[319]=16;
  p_output1[320]=16;
  p_output1[321]=16;
  p_output1[322]=16;
  p_output1[323]=16;
  p_output1[324]=17;
  p_output1[325]=17;
  p_output1[326]=17;
  p_output1[327]=17;
  p_output1[328]=17;
  p_output1[329]=17;
  p_output1[330]=17;
  p_output1[331]=17;
  p_output1[332]=17;
  p_output1[333]=17;
  p_output1[334]=17;
  p_output1[335]=17;
  p_output1[336]=17;
  p_output1[337]=17;
  p_output1[338]=17;
  p_output1[339]=17;
  p_output1[340]=17;
  p_output1[341]=17;
  p_output1[342]=17;
  p_output1[343]=17;
  p_output1[344]=17;
  p_output1[345]=17;
  p_output1[346]=17;
  p_output1[347]=18;
  p_output1[348]=18;
  p_output1[349]=18;
  p_output1[350]=18;
  p_output1[351]=18;
  p_output1[352]=18;
  p_output1[353]=18;
  p_output1[354]=18;
  p_output1[355]=18;
  p_output1[356]=18;
  p_output1[357]=18;
  p_output1[358]=18;
  p_output1[359]=18;
  p_output1[360]=18;
  p_output1[361]=18;
  p_output1[362]=18;
  p_output1[363]=18;
  p_output1[364]=18;
  p_output1[365]=18;
  p_output1[366]=18;
  p_output1[367]=18;
  p_output1[368]=18;
  p_output1[369]=18;
  p_output1[370]=19;
  p_output1[371]=19;
  p_output1[372]=19;
  p_output1[373]=19;
  p_output1[374]=19;
  p_output1[375]=19;
  p_output1[376]=19;
  p_output1[377]=19;
  p_output1[378]=19;
  p_output1[379]=19;
  p_output1[380]=19;
  p_output1[381]=19;
  p_output1[382]=19;
  p_output1[383]=19;
  p_output1[384]=19;
  p_output1[385]=19;
  p_output1[386]=19;
  p_output1[387]=19;
  p_output1[388]=19;
  p_output1[389]=19;
  p_output1[390]=19;
  p_output1[391]=19;
  p_output1[392]=19;
  p_output1[393]=20;
  p_output1[394]=20;
  p_output1[395]=20;
  p_output1[396]=20;
  p_output1[397]=20;
  p_output1[398]=20;
  p_output1[399]=20;
  p_output1[400]=20;
  p_output1[401]=20;
  p_output1[402]=20;
  p_output1[403]=20;
  p_output1[404]=20;
  p_output1[405]=20;
  p_output1[406]=20;
  p_output1[407]=20;
  p_output1[408]=20;
  p_output1[409]=20;
  p_output1[410]=20;
  p_output1[411]=20;
  p_output1[412]=20;
  p_output1[413]=20;
  p_output1[414]=20;
  p_output1[415]=20;
  p_output1[416]=4;
  p_output1[417]=5;
  p_output1[418]=6;
  p_output1[419]=7;
  p_output1[420]=8;
  p_output1[421]=9;
  p_output1[422]=10;
  p_output1[423]=11;
  p_output1[424]=12;
  p_output1[425]=13;
  p_output1[426]=14;
  p_output1[427]=15;
  p_output1[428]=16;
  p_output1[429]=17;
  p_output1[430]=18;
  p_output1[431]=19;
  p_output1[432]=20;
  p_output1[433]=21;
  p_output1[434]=22;
  p_output1[435]=23;
  p_output1[436]=4;
  p_output1[437]=5;
  p_output1[438]=6;
  p_output1[439]=7;
  p_output1[440]=8;
  p_output1[441]=9;
  p_output1[442]=10;
  p_output1[443]=11;
  p_output1[444]=12;
  p_output1[445]=13;
  p_output1[446]=14;
  p_output1[447]=15;
  p_output1[448]=16;
  p_output1[449]=17;
  p_output1[450]=18;
  p_output1[451]=19;
  p_output1[452]=20;
  p_output1[453]=21;
  p_output1[454]=22;
  p_output1[455]=23;
  p_output1[456]=24;
  p_output1[457]=25;
  p_output1[458]=26;
  p_output1[459]=27;
  p_output1[460]=28;
  p_output1[461]=29;
  p_output1[462]=30;
  p_output1[463]=31;
  p_output1[464]=32;
  p_output1[465]=33;
  p_output1[466]=34;
  p_output1[467]=35;
  p_output1[468]=36;
  p_output1[469]=37;
  p_output1[470]=38;
  p_output1[471]=39;
  p_output1[472]=40;
  p_output1[473]=4;
  p_output1[474]=5;
  p_output1[475]=6;
  p_output1[476]=7;
  p_output1[477]=8;
  p_output1[478]=9;
  p_output1[479]=10;
  p_output1[480]=11;
  p_output1[481]=12;
  p_output1[482]=13;
  p_output1[483]=14;
  p_output1[484]=15;
  p_output1[485]=16;
  p_output1[486]=17;
  p_output1[487]=18;
  p_output1[488]=19;
  p_output1[489]=20;
  p_output1[490]=21;
  p_output1[491]=22;
  p_output1[492]=23;
  p_output1[493]=24;
  p_output1[494]=25;
  p_output1[495]=26;
  p_output1[496]=27;
  p_output1[497]=28;
  p_output1[498]=29;
  p_output1[499]=30;
  p_output1[500]=31;
  p_output1[501]=32;
  p_output1[502]=33;
  p_output1[503]=34;
  p_output1[504]=35;
  p_output1[505]=36;
  p_output1[506]=37;
  p_output1[507]=38;
  p_output1[508]=39;
  p_output1[509]=40;
  p_output1[510]=4;
  p_output1[511]=5;
  p_output1[512]=6;
  p_output1[513]=7;
  p_output1[514]=8;
  p_output1[515]=9;
  p_output1[516]=10;
  p_output1[517]=11;
  p_output1[518]=12;
  p_output1[519]=13;
  p_output1[520]=21;
  p_output1[521]=22;
  p_output1[522]=23;
  p_output1[523]=24;
  p_output1[524]=25;
  p_output1[525]=26;
  p_output1[526]=27;
  p_output1[527]=28;
  p_output1[528]=29;
  p_output1[529]=30;
  p_output1[530]=31;
  p_output1[531]=32;
  p_output1[532]=33;
  p_output1[533]=4;
  p_output1[534]=5;
  p_output1[535]=6;
  p_output1[536]=7;
  p_output1[537]=8;
  p_output1[538]=9;
  p_output1[539]=10;
  p_output1[540]=11;
  p_output1[541]=12;
  p_output1[542]=13;
  p_output1[543]=21;
  p_output1[544]=22;
  p_output1[545]=23;
  p_output1[546]=24;
  p_output1[547]=25;
  p_output1[548]=26;
  p_output1[549]=27;
  p_output1[550]=28;
  p_output1[551]=29;
  p_output1[552]=30;
  p_output1[553]=31;
  p_output1[554]=32;
  p_output1[555]=33;
  p_output1[556]=4;
  p_output1[557]=5;
  p_output1[558]=6;
  p_output1[559]=7;
  p_output1[560]=8;
  p_output1[561]=9;
  p_output1[562]=10;
  p_output1[563]=11;
  p_output1[564]=12;
  p_output1[565]=13;
  p_output1[566]=21;
  p_output1[567]=22;
  p_output1[568]=23;
  p_output1[569]=24;
  p_output1[570]=25;
  p_output1[571]=26;
  p_output1[572]=27;
  p_output1[573]=28;
  p_output1[574]=29;
  p_output1[575]=30;
  p_output1[576]=31;
  p_output1[577]=32;
  p_output1[578]=33;
  p_output1[579]=4;
  p_output1[580]=5;
  p_output1[581]=6;
  p_output1[582]=7;
  p_output1[583]=8;
  p_output1[584]=9;
  p_output1[585]=10;
  p_output1[586]=11;
  p_output1[587]=12;
  p_output1[588]=13;
  p_output1[589]=21;
  p_output1[590]=22;
  p_output1[591]=23;
  p_output1[592]=24;
  p_output1[593]=25;
  p_output1[594]=26;
  p_output1[595]=27;
  p_output1[596]=28;
  p_output1[597]=29;
  p_output1[598]=30;
  p_output1[599]=31;
  p_output1[600]=32;
  p_output1[601]=33;
  p_output1[602]=4;
  p_output1[603]=5;
  p_output1[604]=6;
  p_output1[605]=7;
  p_output1[606]=8;
  p_output1[607]=9;
  p_output1[608]=10;
  p_output1[609]=11;
  p_output1[610]=12;
  p_output1[611]=13;
  p_output1[612]=21;
  p_output1[613]=22;
  p_output1[614]=23;
  p_output1[615]=24;
  p_output1[616]=25;
  p_output1[617]=26;
  p_output1[618]=27;
  p_output1[619]=28;
  p_output1[620]=29;
  p_output1[621]=30;
  p_output1[622]=31;
  p_output1[623]=32;
  p_output1[624]=33;
  p_output1[625]=4;
  p_output1[626]=5;
  p_output1[627]=6;
  p_output1[628]=7;
  p_output1[629]=8;
  p_output1[630]=9;
  p_output1[631]=10;
  p_output1[632]=11;
  p_output1[633]=12;
  p_output1[634]=13;
  p_output1[635]=21;
  p_output1[636]=22;
  p_output1[637]=23;
  p_output1[638]=24;
  p_output1[639]=25;
  p_output1[640]=26;
  p_output1[641]=27;
  p_output1[642]=28;
  p_output1[643]=29;
  p_output1[644]=30;
  p_output1[645]=31;
  p_output1[646]=32;
  p_output1[647]=33;
  p_output1[648]=4;
  p_output1[649]=5;
  p_output1[650]=6;
  p_output1[651]=7;
  p_output1[652]=8;
  p_output1[653]=9;
  p_output1[654]=10;
  p_output1[655]=11;
  p_output1[656]=12;
  p_output1[657]=13;
  p_output1[658]=21;
  p_output1[659]=22;
  p_output1[660]=23;
  p_output1[661]=24;
  p_output1[662]=25;
  p_output1[663]=26;
  p_output1[664]=27;
  p_output1[665]=28;
  p_output1[666]=29;
  p_output1[667]=30;
  p_output1[668]=31;
  p_output1[669]=32;
  p_output1[670]=33;
  p_output1[671]=4;
  p_output1[672]=5;
  p_output1[673]=6;
  p_output1[674]=14;
  p_output1[675]=15;
  p_output1[676]=16;
  p_output1[677]=17;
  p_output1[678]=18;
  p_output1[679]=19;
  p_output1[680]=20;
  p_output1[681]=21;
  p_output1[682]=22;
  p_output1[683]=23;
  p_output1[684]=24;
  p_output1[685]=25;
  p_output1[686]=26;
  p_output1[687]=34;
  p_output1[688]=35;
  p_output1[689]=36;
  p_output1[690]=37;
  p_output1[691]=38;
  p_output1[692]=39;
  p_output1[693]=40;
  p_output1[694]=4;
  p_output1[695]=5;
  p_output1[696]=6;
  p_output1[697]=14;
  p_output1[698]=15;
  p_output1[699]=16;
  p_output1[700]=17;
  p_output1[701]=18;
  p_output1[702]=19;
  p_output1[703]=20;
  p_output1[704]=21;
  p_output1[705]=22;
  p_output1[706]=23;
  p_output1[707]=24;
  p_output1[708]=25;
  p_output1[709]=26;
  p_output1[710]=34;
  p_output1[711]=35;
  p_output1[712]=36;
  p_output1[713]=37;
  p_output1[714]=38;
  p_output1[715]=39;
  p_output1[716]=40;
  p_output1[717]=4;
  p_output1[718]=5;
  p_output1[719]=6;
  p_output1[720]=14;
  p_output1[721]=15;
  p_output1[722]=16;
  p_output1[723]=17;
  p_output1[724]=18;
  p_output1[725]=19;
  p_output1[726]=20;
  p_output1[727]=21;
  p_output1[728]=22;
  p_output1[729]=23;
  p_output1[730]=24;
  p_output1[731]=25;
  p_output1[732]=26;
  p_output1[733]=34;
  p_output1[734]=35;
  p_output1[735]=36;
  p_output1[736]=37;
  p_output1[737]=38;
  p_output1[738]=39;
  p_output1[739]=40;
  p_output1[740]=4;
  p_output1[741]=5;
  p_output1[742]=6;
  p_output1[743]=14;
  p_output1[744]=15;
  p_output1[745]=16;
  p_output1[746]=17;
  p_output1[747]=18;
  p_output1[748]=19;
  p_output1[749]=20;
  p_output1[750]=21;
  p_output1[751]=22;
  p_output1[752]=23;
  p_output1[753]=24;
  p_output1[754]=25;
  p_output1[755]=26;
  p_output1[756]=34;
  p_output1[757]=35;
  p_output1[758]=36;
  p_output1[759]=37;
  p_output1[760]=38;
  p_output1[761]=39;
  p_output1[762]=40;
  p_output1[763]=4;
  p_output1[764]=5;
  p_output1[765]=6;
  p_output1[766]=14;
  p_output1[767]=15;
  p_output1[768]=16;
  p_output1[769]=17;
  p_output1[770]=18;
  p_output1[771]=19;
  p_output1[772]=20;
  p_output1[773]=21;
  p_output1[774]=22;
  p_output1[775]=23;
  p_output1[776]=24;
  p_output1[777]=25;
  p_output1[778]=26;
  p_output1[779]=34;
  p_output1[780]=35;
  p_output1[781]=36;
  p_output1[782]=37;
  p_output1[783]=38;
  p_output1[784]=39;
  p_output1[785]=40;
  p_output1[786]=4;
  p_output1[787]=5;
  p_output1[788]=6;
  p_output1[789]=14;
  p_output1[790]=15;
  p_output1[791]=16;
  p_output1[792]=17;
  p_output1[793]=18;
  p_output1[794]=19;
  p_output1[795]=20;
  p_output1[796]=21;
  p_output1[797]=22;
  p_output1[798]=23;
  p_output1[799]=24;
  p_output1[800]=25;
  p_output1[801]=26;
  p_output1[802]=34;
  p_output1[803]=35;
  p_output1[804]=36;
  p_output1[805]=37;
  p_output1[806]=38;
  p_output1[807]=39;
  p_output1[808]=40;
  p_output1[809]=4;
  p_output1[810]=5;
  p_output1[811]=6;
  p_output1[812]=14;
  p_output1[813]=15;
  p_output1[814]=16;
  p_output1[815]=17;
  p_output1[816]=18;
  p_output1[817]=19;
  p_output1[818]=20;
  p_output1[819]=21;
  p_output1[820]=22;
  p_output1[821]=23;
  p_output1[822]=24;
  p_output1[823]=25;
  p_output1[824]=26;
  p_output1[825]=34;
  p_output1[826]=35;
  p_output1[827]=36;
  p_output1[828]=37;
  p_output1[829]=38;
  p_output1[830]=39;
  p_output1[831]=40;
}



void frost::gen::Js_Ce3_vec3_cassie(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
