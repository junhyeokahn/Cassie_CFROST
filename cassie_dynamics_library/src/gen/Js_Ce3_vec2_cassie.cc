/*
 * Automatically Generated from Mathematica.
 * Wed 20 Jun 2018 12:53:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "frost/gen/Js_Ce3_vec2_cassie.hh"

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
  p_output1[20]=4;
  p_output1[21]=4;
  p_output1[22]=4;
  p_output1[23]=4;
  p_output1[24]=4;
  p_output1[25]=4;
  p_output1[26]=4;
  p_output1[27]=4;
  p_output1[28]=4;
  p_output1[29]=4;
  p_output1[30]=4;
  p_output1[31]=4;
  p_output1[32]=4;
  p_output1[33]=4;
  p_output1[34]=4;
  p_output1[35]=4;
  p_output1[36]=4;
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
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=5;
  p_output1[66]=5;
  p_output1[67]=5;
  p_output1[68]=5;
  p_output1[69]=5;
  p_output1[70]=5;
  p_output1[71]=5;
  p_output1[72]=5;
  p_output1[73]=5;
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
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=6;
  p_output1[107]=6;
  p_output1[108]=6;
  p_output1[109]=6;
  p_output1[110]=6;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=7;
  p_output1[126]=7;
  p_output1[127]=7;
  p_output1[128]=7;
  p_output1[129]=7;
  p_output1[130]=7;
  p_output1[131]=7;
  p_output1[132]=7;
  p_output1[133]=7;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=8;
  p_output1[141]=8;
  p_output1[142]=8;
  p_output1[143]=8;
  p_output1[144]=8;
  p_output1[145]=8;
  p_output1[146]=8;
  p_output1[147]=8;
  p_output1[148]=8;
  p_output1[149]=8;
  p_output1[150]=8;
  p_output1[151]=8;
  p_output1[152]=8;
  p_output1[153]=8;
  p_output1[154]=8;
  p_output1[155]=8;
  p_output1[156]=8;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=9;
  p_output1[164]=9;
  p_output1[165]=9;
  p_output1[166]=9;
  p_output1[167]=9;
  p_output1[168]=9;
  p_output1[169]=9;
  p_output1[170]=9;
  p_output1[171]=9;
  p_output1[172]=9;
  p_output1[173]=9;
  p_output1[174]=9;
  p_output1[175]=9;
  p_output1[176]=9;
  p_output1[177]=9;
  p_output1[178]=9;
  p_output1[179]=9;
  p_output1[180]=10;
  p_output1[181]=10;
  p_output1[182]=10;
  p_output1[183]=10;
  p_output1[184]=10;
  p_output1[185]=10;
  p_output1[186]=10;
  p_output1[187]=10;
  p_output1[188]=10;
  p_output1[189]=10;
  p_output1[190]=10;
  p_output1[191]=10;
  p_output1[192]=10;
  p_output1[193]=10;
  p_output1[194]=10;
  p_output1[195]=10;
  p_output1[196]=10;
  p_output1[197]=10;
  p_output1[198]=10;
  p_output1[199]=10;
  p_output1[200]=10;
  p_output1[201]=10;
  p_output1[202]=10;
  p_output1[203]=11;
  p_output1[204]=11;
  p_output1[205]=11;
  p_output1[206]=11;
  p_output1[207]=11;
  p_output1[208]=11;
  p_output1[209]=11;
  p_output1[210]=11;
  p_output1[211]=11;
  p_output1[212]=11;
  p_output1[213]=11;
  p_output1[214]=11;
  p_output1[215]=11;
  p_output1[216]=11;
  p_output1[217]=11;
  p_output1[218]=11;
  p_output1[219]=11;
  p_output1[220]=11;
  p_output1[221]=11;
  p_output1[222]=11;
  p_output1[223]=11;
  p_output1[224]=11;
  p_output1[225]=11;
  p_output1[226]=12;
  p_output1[227]=12;
  p_output1[228]=12;
  p_output1[229]=12;
  p_output1[230]=12;
  p_output1[231]=12;
  p_output1[232]=12;
  p_output1[233]=12;
  p_output1[234]=12;
  p_output1[235]=12;
  p_output1[236]=12;
  p_output1[237]=12;
  p_output1[238]=12;
  p_output1[239]=12;
  p_output1[240]=12;
  p_output1[241]=12;
  p_output1[242]=12;
  p_output1[243]=12;
  p_output1[244]=12;
  p_output1[245]=12;
  p_output1[246]=12;
  p_output1[247]=12;
  p_output1[248]=12;
  p_output1[249]=13;
  p_output1[250]=13;
  p_output1[251]=13;
  p_output1[252]=13;
  p_output1[253]=13;
  p_output1[254]=13;
  p_output1[255]=13;
  p_output1[256]=13;
  p_output1[257]=13;
  p_output1[258]=13;
  p_output1[259]=13;
  p_output1[260]=13;
  p_output1[261]=13;
  p_output1[262]=13;
  p_output1[263]=13;
  p_output1[264]=13;
  p_output1[265]=13;
  p_output1[266]=13;
  p_output1[267]=13;
  p_output1[268]=13;
  p_output1[269]=13;
  p_output1[270]=13;
  p_output1[271]=13;
  p_output1[272]=14;
  p_output1[273]=14;
  p_output1[274]=14;
  p_output1[275]=14;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=14;
  p_output1[279]=14;
  p_output1[280]=14;
  p_output1[281]=14;
  p_output1[282]=14;
  p_output1[283]=14;
  p_output1[284]=14;
  p_output1[285]=14;
  p_output1[286]=14;
  p_output1[287]=14;
  p_output1[288]=14;
  p_output1[289]=14;
  p_output1[290]=14;
  p_output1[291]=14;
  p_output1[292]=14;
  p_output1[293]=14;
  p_output1[294]=14;
  p_output1[295]=15;
  p_output1[296]=15;
  p_output1[297]=15;
  p_output1[298]=15;
  p_output1[299]=15;
  p_output1[300]=15;
  p_output1[301]=15;
  p_output1[302]=15;
  p_output1[303]=15;
  p_output1[304]=15;
  p_output1[305]=15;
  p_output1[306]=15;
  p_output1[307]=15;
  p_output1[308]=15;
  p_output1[309]=15;
  p_output1[310]=15;
  p_output1[311]=15;
  p_output1[312]=15;
  p_output1[313]=15;
  p_output1[314]=15;
  p_output1[315]=15;
  p_output1[316]=15;
  p_output1[317]=15;
  p_output1[318]=16;
  p_output1[319]=16;
  p_output1[320]=16;
  p_output1[321]=16;
  p_output1[322]=16;
  p_output1[323]=16;
  p_output1[324]=16;
  p_output1[325]=16;
  p_output1[326]=16;
  p_output1[327]=16;
  p_output1[328]=16;
  p_output1[329]=16;
  p_output1[330]=16;
  p_output1[331]=16;
  p_output1[332]=16;
  p_output1[333]=16;
  p_output1[334]=16;
  p_output1[335]=16;
  p_output1[336]=16;
  p_output1[337]=16;
  p_output1[338]=16;
  p_output1[339]=16;
  p_output1[340]=16;
  p_output1[341]=17;
  p_output1[342]=17;
  p_output1[343]=17;
  p_output1[344]=17;
  p_output1[345]=17;
  p_output1[346]=17;
  p_output1[347]=17;
  p_output1[348]=17;
  p_output1[349]=17;
  p_output1[350]=17;
  p_output1[351]=17;
  p_output1[352]=17;
  p_output1[353]=17;
  p_output1[354]=17;
  p_output1[355]=17;
  p_output1[356]=17;
  p_output1[357]=17;
  p_output1[358]=17;
  p_output1[359]=17;
  p_output1[360]=17;
  p_output1[361]=17;
  p_output1[362]=17;
  p_output1[363]=17;
  p_output1[364]=18;
  p_output1[365]=18;
  p_output1[366]=18;
  p_output1[367]=18;
  p_output1[368]=18;
  p_output1[369]=18;
  p_output1[370]=18;
  p_output1[371]=18;
  p_output1[372]=18;
  p_output1[373]=18;
  p_output1[374]=18;
  p_output1[375]=18;
  p_output1[376]=18;
  p_output1[377]=18;
  p_output1[378]=18;
  p_output1[379]=18;
  p_output1[380]=18;
  p_output1[381]=18;
  p_output1[382]=18;
  p_output1[383]=18;
  p_output1[384]=18;
  p_output1[385]=18;
  p_output1[386]=18;
  p_output1[387]=19;
  p_output1[388]=19;
  p_output1[389]=19;
  p_output1[390]=19;
  p_output1[391]=19;
  p_output1[392]=19;
  p_output1[393]=19;
  p_output1[394]=19;
  p_output1[395]=19;
  p_output1[396]=19;
  p_output1[397]=19;
  p_output1[398]=19;
  p_output1[399]=19;
  p_output1[400]=19;
  p_output1[401]=19;
  p_output1[402]=19;
  p_output1[403]=19;
  p_output1[404]=19;
  p_output1[405]=19;
  p_output1[406]=19;
  p_output1[407]=19;
  p_output1[408]=19;
  p_output1[409]=19;
  p_output1[410]=20;
  p_output1[411]=20;
  p_output1[412]=20;
  p_output1[413]=20;
  p_output1[414]=20;
  p_output1[415]=20;
  p_output1[416]=20;
  p_output1[417]=20;
  p_output1[418]=20;
  p_output1[419]=20;
  p_output1[420]=20;
  p_output1[421]=20;
  p_output1[422]=20;
  p_output1[423]=20;
  p_output1[424]=20;
  p_output1[425]=20;
  p_output1[426]=20;
  p_output1[427]=20;
  p_output1[428]=20;
  p_output1[429]=20;
  p_output1[430]=20;
  p_output1[431]=20;
  p_output1[432]=20;
  p_output1[433]=4;
  p_output1[434]=5;
  p_output1[435]=6;
  p_output1[436]=7;
  p_output1[437]=8;
  p_output1[438]=9;
  p_output1[439]=10;
  p_output1[440]=11;
  p_output1[441]=12;
  p_output1[442]=13;
  p_output1[443]=14;
  p_output1[444]=15;
  p_output1[445]=16;
  p_output1[446]=17;
  p_output1[447]=18;
  p_output1[448]=19;
  p_output1[449]=20;
  p_output1[450]=21;
  p_output1[451]=22;
  p_output1[452]=23;
  p_output1[453]=24;
  p_output1[454]=25;
  p_output1[455]=26;
  p_output1[456]=27;
  p_output1[457]=28;
  p_output1[458]=29;
  p_output1[459]=30;
  p_output1[460]=31;
  p_output1[461]=32;
  p_output1[462]=33;
  p_output1[463]=34;
  p_output1[464]=35;
  p_output1[465]=36;
  p_output1[466]=37;
  p_output1[467]=38;
  p_output1[468]=39;
  p_output1[469]=40;
  p_output1[470]=4;
  p_output1[471]=5;
  p_output1[472]=6;
  p_output1[473]=7;
  p_output1[474]=8;
  p_output1[475]=9;
  p_output1[476]=10;
  p_output1[477]=11;
  p_output1[478]=12;
  p_output1[479]=13;
  p_output1[480]=14;
  p_output1[481]=15;
  p_output1[482]=16;
  p_output1[483]=17;
  p_output1[484]=18;
  p_output1[485]=19;
  p_output1[486]=20;
  p_output1[487]=21;
  p_output1[488]=22;
  p_output1[489]=23;
  p_output1[490]=24;
  p_output1[491]=25;
  p_output1[492]=26;
  p_output1[493]=27;
  p_output1[494]=28;
  p_output1[495]=29;
  p_output1[496]=30;
  p_output1[497]=31;
  p_output1[498]=32;
  p_output1[499]=33;
  p_output1[500]=34;
  p_output1[501]=35;
  p_output1[502]=36;
  p_output1[503]=37;
  p_output1[504]=38;
  p_output1[505]=39;
  p_output1[506]=40;
  p_output1[507]=4;
  p_output1[508]=5;
  p_output1[509]=6;
  p_output1[510]=7;
  p_output1[511]=8;
  p_output1[512]=9;
  p_output1[513]=10;
  p_output1[514]=11;
  p_output1[515]=12;
  p_output1[516]=13;
  p_output1[517]=14;
  p_output1[518]=15;
  p_output1[519]=16;
  p_output1[520]=17;
  p_output1[521]=18;
  p_output1[522]=19;
  p_output1[523]=20;
  p_output1[524]=21;
  p_output1[525]=22;
  p_output1[526]=23;
  p_output1[527]=24;
  p_output1[528]=25;
  p_output1[529]=26;
  p_output1[530]=27;
  p_output1[531]=28;
  p_output1[532]=29;
  p_output1[533]=30;
  p_output1[534]=31;
  p_output1[535]=32;
  p_output1[536]=33;
  p_output1[537]=34;
  p_output1[538]=35;
  p_output1[539]=36;
  p_output1[540]=37;
  p_output1[541]=38;
  p_output1[542]=39;
  p_output1[543]=40;
  p_output1[544]=4;
  p_output1[545]=5;
  p_output1[546]=6;
  p_output1[547]=7;
  p_output1[548]=8;
  p_output1[549]=9;
  p_output1[550]=10;
  p_output1[551]=11;
  p_output1[552]=12;
  p_output1[553]=13;
  p_output1[554]=21;
  p_output1[555]=22;
  p_output1[556]=23;
  p_output1[557]=24;
  p_output1[558]=25;
  p_output1[559]=26;
  p_output1[560]=27;
  p_output1[561]=28;
  p_output1[562]=29;
  p_output1[563]=30;
  p_output1[564]=31;
  p_output1[565]=32;
  p_output1[566]=33;
  p_output1[567]=4;
  p_output1[568]=5;
  p_output1[569]=6;
  p_output1[570]=7;
  p_output1[571]=8;
  p_output1[572]=9;
  p_output1[573]=10;
  p_output1[574]=11;
  p_output1[575]=12;
  p_output1[576]=13;
  p_output1[577]=21;
  p_output1[578]=22;
  p_output1[579]=23;
  p_output1[580]=24;
  p_output1[581]=25;
  p_output1[582]=26;
  p_output1[583]=27;
  p_output1[584]=28;
  p_output1[585]=29;
  p_output1[586]=30;
  p_output1[587]=31;
  p_output1[588]=32;
  p_output1[589]=33;
  p_output1[590]=4;
  p_output1[591]=5;
  p_output1[592]=6;
  p_output1[593]=7;
  p_output1[594]=8;
  p_output1[595]=9;
  p_output1[596]=10;
  p_output1[597]=11;
  p_output1[598]=12;
  p_output1[599]=13;
  p_output1[600]=21;
  p_output1[601]=22;
  p_output1[602]=23;
  p_output1[603]=24;
  p_output1[604]=25;
  p_output1[605]=26;
  p_output1[606]=27;
  p_output1[607]=28;
  p_output1[608]=29;
  p_output1[609]=30;
  p_output1[610]=31;
  p_output1[611]=32;
  p_output1[612]=33;
  p_output1[613]=4;
  p_output1[614]=5;
  p_output1[615]=6;
  p_output1[616]=7;
  p_output1[617]=8;
  p_output1[618]=9;
  p_output1[619]=10;
  p_output1[620]=11;
  p_output1[621]=12;
  p_output1[622]=13;
  p_output1[623]=21;
  p_output1[624]=22;
  p_output1[625]=23;
  p_output1[626]=24;
  p_output1[627]=25;
  p_output1[628]=26;
  p_output1[629]=27;
  p_output1[630]=28;
  p_output1[631]=29;
  p_output1[632]=30;
  p_output1[633]=31;
  p_output1[634]=32;
  p_output1[635]=33;
  p_output1[636]=4;
  p_output1[637]=5;
  p_output1[638]=6;
  p_output1[639]=7;
  p_output1[640]=8;
  p_output1[641]=9;
  p_output1[642]=10;
  p_output1[643]=11;
  p_output1[644]=12;
  p_output1[645]=13;
  p_output1[646]=21;
  p_output1[647]=22;
  p_output1[648]=23;
  p_output1[649]=24;
  p_output1[650]=25;
  p_output1[651]=26;
  p_output1[652]=27;
  p_output1[653]=28;
  p_output1[654]=29;
  p_output1[655]=30;
  p_output1[656]=31;
  p_output1[657]=32;
  p_output1[658]=33;
  p_output1[659]=4;
  p_output1[660]=5;
  p_output1[661]=6;
  p_output1[662]=7;
  p_output1[663]=8;
  p_output1[664]=9;
  p_output1[665]=10;
  p_output1[666]=11;
  p_output1[667]=12;
  p_output1[668]=13;
  p_output1[669]=21;
  p_output1[670]=22;
  p_output1[671]=23;
  p_output1[672]=24;
  p_output1[673]=25;
  p_output1[674]=26;
  p_output1[675]=27;
  p_output1[676]=28;
  p_output1[677]=29;
  p_output1[678]=30;
  p_output1[679]=31;
  p_output1[680]=32;
  p_output1[681]=33;
  p_output1[682]=4;
  p_output1[683]=5;
  p_output1[684]=6;
  p_output1[685]=7;
  p_output1[686]=8;
  p_output1[687]=9;
  p_output1[688]=10;
  p_output1[689]=11;
  p_output1[690]=12;
  p_output1[691]=13;
  p_output1[692]=21;
  p_output1[693]=22;
  p_output1[694]=23;
  p_output1[695]=24;
  p_output1[696]=25;
  p_output1[697]=26;
  p_output1[698]=27;
  p_output1[699]=28;
  p_output1[700]=29;
  p_output1[701]=30;
  p_output1[702]=31;
  p_output1[703]=32;
  p_output1[704]=33;
  p_output1[705]=4;
  p_output1[706]=5;
  p_output1[707]=6;
  p_output1[708]=14;
  p_output1[709]=15;
  p_output1[710]=16;
  p_output1[711]=17;
  p_output1[712]=18;
  p_output1[713]=19;
  p_output1[714]=20;
  p_output1[715]=21;
  p_output1[716]=22;
  p_output1[717]=23;
  p_output1[718]=24;
  p_output1[719]=25;
  p_output1[720]=26;
  p_output1[721]=34;
  p_output1[722]=35;
  p_output1[723]=36;
  p_output1[724]=37;
  p_output1[725]=38;
  p_output1[726]=39;
  p_output1[727]=40;
  p_output1[728]=4;
  p_output1[729]=5;
  p_output1[730]=6;
  p_output1[731]=14;
  p_output1[732]=15;
  p_output1[733]=16;
  p_output1[734]=17;
  p_output1[735]=18;
  p_output1[736]=19;
  p_output1[737]=20;
  p_output1[738]=21;
  p_output1[739]=22;
  p_output1[740]=23;
  p_output1[741]=24;
  p_output1[742]=25;
  p_output1[743]=26;
  p_output1[744]=34;
  p_output1[745]=35;
  p_output1[746]=36;
  p_output1[747]=37;
  p_output1[748]=38;
  p_output1[749]=39;
  p_output1[750]=40;
  p_output1[751]=4;
  p_output1[752]=5;
  p_output1[753]=6;
  p_output1[754]=14;
  p_output1[755]=15;
  p_output1[756]=16;
  p_output1[757]=17;
  p_output1[758]=18;
  p_output1[759]=19;
  p_output1[760]=20;
  p_output1[761]=21;
  p_output1[762]=22;
  p_output1[763]=23;
  p_output1[764]=24;
  p_output1[765]=25;
  p_output1[766]=26;
  p_output1[767]=34;
  p_output1[768]=35;
  p_output1[769]=36;
  p_output1[770]=37;
  p_output1[771]=38;
  p_output1[772]=39;
  p_output1[773]=40;
  p_output1[774]=4;
  p_output1[775]=5;
  p_output1[776]=6;
  p_output1[777]=14;
  p_output1[778]=15;
  p_output1[779]=16;
  p_output1[780]=17;
  p_output1[781]=18;
  p_output1[782]=19;
  p_output1[783]=20;
  p_output1[784]=21;
  p_output1[785]=22;
  p_output1[786]=23;
  p_output1[787]=24;
  p_output1[788]=25;
  p_output1[789]=26;
  p_output1[790]=34;
  p_output1[791]=35;
  p_output1[792]=36;
  p_output1[793]=37;
  p_output1[794]=38;
  p_output1[795]=39;
  p_output1[796]=40;
  p_output1[797]=4;
  p_output1[798]=5;
  p_output1[799]=6;
  p_output1[800]=14;
  p_output1[801]=15;
  p_output1[802]=16;
  p_output1[803]=17;
  p_output1[804]=18;
  p_output1[805]=19;
  p_output1[806]=20;
  p_output1[807]=21;
  p_output1[808]=22;
  p_output1[809]=23;
  p_output1[810]=24;
  p_output1[811]=25;
  p_output1[812]=26;
  p_output1[813]=34;
  p_output1[814]=35;
  p_output1[815]=36;
  p_output1[816]=37;
  p_output1[817]=38;
  p_output1[818]=39;
  p_output1[819]=40;
  p_output1[820]=4;
  p_output1[821]=5;
  p_output1[822]=6;
  p_output1[823]=14;
  p_output1[824]=15;
  p_output1[825]=16;
  p_output1[826]=17;
  p_output1[827]=18;
  p_output1[828]=19;
  p_output1[829]=20;
  p_output1[830]=21;
  p_output1[831]=22;
  p_output1[832]=23;
  p_output1[833]=24;
  p_output1[834]=25;
  p_output1[835]=26;
  p_output1[836]=34;
  p_output1[837]=35;
  p_output1[838]=36;
  p_output1[839]=37;
  p_output1[840]=38;
  p_output1[841]=39;
  p_output1[842]=40;
  p_output1[843]=4;
  p_output1[844]=5;
  p_output1[845]=6;
  p_output1[846]=14;
  p_output1[847]=15;
  p_output1[848]=16;
  p_output1[849]=17;
  p_output1[850]=18;
  p_output1[851]=19;
  p_output1[852]=20;
  p_output1[853]=21;
  p_output1[854]=22;
  p_output1[855]=23;
  p_output1[856]=24;
  p_output1[857]=25;
  p_output1[858]=26;
  p_output1[859]=34;
  p_output1[860]=35;
  p_output1[861]=36;
  p_output1[862]=37;
  p_output1[863]=38;
  p_output1[864]=39;
  p_output1[865]=40;
}



void frost::gen::Js_Ce3_vec2_cassie(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
