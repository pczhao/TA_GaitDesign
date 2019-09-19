/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:20 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1060;
  double t283;
  double t296;
  double t1063;
  double t5669;
  double t282;
  double t297;
  double t2009;
  double t2058;
  double t6821;
  double t6838;
  double t6897;
  double t6910;
  double t6922;
  double t2998;
  double t5766;
  double t5834;
  double t6066;
  double t6491;
  double t6595;
  double t9563;
  double t9616;
  double t9712;
  double t9394;
  double t9440;
  double t9448;
  double t6705;
  double t6773;
  double t6774;
  double t10112;
  double t10116;
  double t10201;
  double t8272;
  double t8292;
  double t8293;
  double t8271;
  double t8374;
  double t8379;
  double t10701;
  double t10239;
  double t10330;
  double t10571;
  double t10806;
  double t10807;
  double t10947;
  double t11131;
  double t10609;
  double t10725;
  double t12925;
  double t12932;
  double t12934;
  double t12950;
  double t12951;
  double t13123;
  double t13124;
  double t13134;
  double t13137;
  double t13138;
  double t13152;
  double t13183;
  double t13188;
  double t13189;
  double t6806;
  double t8486;
  double t8732;
  double t8793;
  double t8851;
  double t13238;
  double t13239;
  double t7032;
  double t7231;
  double t7813;
  double t10044;
  double t10207;
  double t10217;
  double t10238;
  double t12946;
  double t13018;
  double t13023;
  double t13024;
  double t13043;
  double t13044;
  double t13045;
  double t13075;
  double t13085;
  double t13097;
  double t13102;
  double t13103;
  double t13122;
  double t13216;
  double t13217;
  double t13222;
  double t13136;
  double t13153;
  double t13154;
  double t13194;
  double t13195;
  double t13196;
  double t13205;
  double t13206;
  double t13226;
  double t13227;
  double t13228;
  double t13229;
  double t13230;
  double t13311;
  double t13312;
  double t13316;
  double t13240;
  double t13241;
  double t13250;
  double t13257;
  double t13262;
  double t13263;
  double t13264;
  double t13270;
  double t13271;
  double t13272;
  double t13278;
  double t13279;
  double t13283;
  double t13284;
  double t13285;
  double t13290;
  double t13297;
  double t13303;
  double t13361;
  double t13362;
  double t13310;
  double t13364;
  double t13365;
  double t13326;
  double t13335;
  double t13371;
  double t13372;
  double t13339;
  double t13398;
  double t13399;
  double t13400;
  double t13401;
  double t13402;
  double t13408;
  double t13409;
  double t13410;
  double t13411;
  double t13412;
  double t13413;
  double t13414;
  double t13415;
  double t13416;
  double t13418;
  double t13419;
  double t13420;
  double t13421;
  double t13422;
  double t13423;
  double t12944;
  double t12948;
  double t10812;
  double t10830;
  double t10779;
  double t10836;
  double t12936;
  double t12937;
  double t12949;
  double t12995;
  double t12996;
  double t13437;
  double t13442;
  double t13443;
  double t13276;
  double t13451;
  double t13305;
  double t13309;
  double t13317;
  double t13318;
  double t13327;
  double t13330;
  double t13336;
  double t13337;
  double t13338;
  double t13340;
  double t13460;
  double t13346;
  double t13347;
  double t13348;
  double t13461;
  double t13350;
  double t13351;
  double t13352;
  double t13462;
  double t13465;
  double t13466;
  double t13467;
  double t13468;
  double t13469;
  double t13470;
  double t13356;
  double t13474;
  double t13363;
  double t13366;
  double t13367;
  double t13476;
  double t13369;
  double t13370;
  double t13373;
  double t13374;
  double t13375;
  double t13376;
  double t13383;
  double t13384;
  double t13385;
  double t13387;
  double t13388;
  double t13389;
  double t13390;
  double t13391;
  double t13392;
  double t13417;
  double t13164;
  double t13211;
  double t13225;
  double t13233;
  double t13234;
  double t6697;
  double t8394;
  double t8901;
  double t8919;
  double t13501;
  double t13502;
  double t13235;
  double t13452;
  double t13453;
  double t13454;
  double t13455;
  double t13456;
  double t13304;
  double t13328;
  double t13329;
  double t13341;
  double t13342;
  double t13475;
  double t13477;
  double t13478;
  double t13479;
  double t13480;
  double t13360;
  double t13368;
  double t13377;
  double t13382;
  double t13386;
  double t13393;
  double t13394;
  double t13491;
  double t13492;
  double t13493;
  double t13494;
  double t13495;
  double t13496;
  double t13497;
  double t13424;
  double t13504;
  double t13548;
  double t13549;
  double t13550;
  double t13438;
  double t13439;
  double t13440;
  double t13463;
  double t13251;
  double t13515;
  double t13516;
  double t13517;
  double t13484;
  double t13485;
  double t13486;
  double t13349;
  double t13353;
  double t13354;
  double t13532;
  double t13533;
  double t13534;
  double t13535;
  double t13536;
  double t13426;
  double t13427;
  double t13428;
  double t13429;
  double t8920;
  double t13553;
  double t13554;
  double t13555;
  double t13586;
  double t13587;
  double t13435;
  double t13509;
  double t13561;
  t1060 = Cos(var1[3]);
  t283 = Cos(var1[4]);
  t296 = Sin(var1[3]);
  t1063 = Sin(var1[4]);
  t5669 = Cos(var1[2]);
  t282 = Sin(var1[2]);
  t297 = -1.*t283*t296;
  t2009 = -1.*t1060*t1063;
  t2058 = t297 + t2009;
  t6821 = -1.*t283;
  t6838 = 1. + t6821;
  t6897 = 0.4*t6838;
  t6910 = 0.64*t283;
  t6922 = t6897 + t6910;
  t2998 = -1.*t282*t2058;
  t5766 = -1.*t1060*t283;
  t5834 = t296*t1063;
  t6066 = t5766 + t5834;
  t6491 = t5669*t6066;
  t6595 = t2998 + t6491;
  t9563 = t5669*t1060;
  t9616 = -1.*t282*t296;
  t9712 = t9563 + t9616;
  t9394 = -1.*t1060*t282;
  t9440 = -1.*t5669*t296;
  t9448 = t9394 + t9440;
  t6705 = -1.*t5669*t1060;
  t6773 = t282*t296;
  t6774 = t6705 + t6773;
  t10112 = t1060*t282;
  t10116 = t5669*t296;
  t10201 = t10112 + t10116;
  t8272 = t1060*t283;
  t8292 = -1.*t296*t1063;
  t8293 = t8272 + t8292;
  t8271 = t5669*t2058;
  t8374 = -1.*t282*t8293;
  t8379 = t8271 + t8374;
  t10701 = t5669*t8293;
  t10239 = t283*t296;
  t10330 = t1060*t1063;
  t10571 = t10239 + t10330;
  t10806 = t282*t2058;
  t10807 = t10806 + t10701;
  t10947 = -1.*t5669*t8293;
  t11131 = t2998 + t10947;
  t10609 = -1.*t282*t10571;
  t10725 = t10609 + t10701;
  t12925 = t5669*t10571;
  t12932 = t282*t8293;
  t12934 = t12925 + t12932;
  t12950 = t282*t6066;
  t12951 = t8271 + t12950;
  t13123 = t6922*t296;
  t13124 = 0.24*t1060*t1063;
  t13134 = t13123 + t13124;
  t13137 = t1060*t6922;
  t13138 = -0.24*t296*t1063;
  t13152 = t13137 + t13138;
  t13183 = -1.*t6922*t296;
  t13188 = -0.24*t1060*t1063;
  t13189 = t13183 + t13188;
  t6806 = 0.748*t6774;
  t8486 = t6922*t283;
  t8732 = Power(t1063,2);
  t8793 = 0.24*t8732;
  t8851 = t8486 + t8793;
  t13238 = t282*t10571;
  t13239 = t13238 + t6491;
  t7032 = t6922*t1063;
  t7231 = -0.24*t283*t1063;
  t7813 = t7032 + t7231;
  t10044 = 20.4*t9448*t9712;
  t10207 = 6.8*t10201*t9712;
  t10217 = 20.4*t9448*t6774;
  t10238 = 6.8*t10201*t6774;
  t12946 = -1.*t282*t6066;
  t13018 = Power(t9448,2);
  t13023 = 13.6*t13018;
  t13024 = 13.6*t9448*t10201;
  t13043 = Power(t9712,2);
  t13044 = 13.6*t13043;
  t13045 = 13.6*t9712*t6774;
  t13075 = Power(t1060,2);
  t13085 = 0.11*t13075;
  t13097 = Power(t296,2);
  t13102 = 0.11*t13097;
  t13103 = t13085 + t13102;
  t13122 = 6.8*t6774*t13103;
  t13216 = t13134*t10571;
  t13217 = t8293*t13152;
  t13222 = t13216 + t13217;
  t13136 = -1.*t13134*t8293;
  t13153 = -1.*t2058*t13152;
  t13154 = t13136 + t13153;
  t13194 = t13189*t8293;
  t13195 = t13134*t8293;
  t13196 = t2058*t13152;
  t13205 = t10571*t13152;
  t13206 = t13194 + t13195 + t13196 + t13205;
  t13226 = -1.*t2058*t13189;
  t13227 = -1.*t2058*t13134;
  t13228 = -1.*t8293*t13152;
  t13229 = -1.*t13152*t6066;
  t13230 = t13226 + t13227 + t13228 + t13229;
  t13311 = -1.*t1060*t6922;
  t13312 = 0.24*t296*t1063;
  t13316 = t13311 + t13312;
  t13240 = -0.384*var2[4]*t13239;
  t13241 = 3.2*t8851*t13239;
  t13250 = 3.2*t7813*t12951;
  t13257 = 6.4*t10807*t8379;
  t13262 = 3.2*t12934*t6595;
  t13263 = 3.2*t8379*t13239;
  t13264 = t12925 + t12946;
  t13270 = 3.2*t10807*t13264;
  t13271 = 3.2*t10725*t12951;
  t13272 = 6.4*t6595*t12951;
  t13278 = Power(t10807,2);
  t13279 = 6.4*t13278;
  t13283 = 6.4*t10807*t13239;
  t13284 = 6.4*t12934*t12951;
  t13285 = Power(t12951,2);
  t13290 = 6.4*t13285;
  t13297 = 3.2*t13222*t13239;
  t13303 = 3.2*t13154*t12951;
  t13361 = -0.24*t283*t296;
  t13362 = t13361 + t13188;
  t13310 = -1.*t10571*t13152;
  t13364 = 0.24*t1060*t283;
  t13365 = t13364 + t13138;
  t13326 = -1.*t13134*t6066;
  t13335 = t2058*t13134;
  t13371 = -0.24*t1060*t283;
  t13372 = t13371 + t13312;
  t13339 = t13152*t6066;
  t13398 = 13.6*t9448*t9712;
  t13399 = 13.6*t10201*t9712;
  t13400 = 6.4*t10807*t12934;
  t13401 = 6.4*t10807*t12951;
  t13402 = t13398 + t13399 + t13400 + t13401;
  t13408 = 6.8*t13018;
  t13409 = 6.8*t9448*t10201;
  t13410 = 6.8*t13043;
  t13411 = 6.8*t9712*t6774;
  t13412 = 3.2*t10807*t10725;
  t13413 = 3.2*t8379*t12934;
  t13414 = 3.2*t10807*t6595;
  t13415 = 3.2*t8379*t12951;
  t13416 = t13408 + t13409 + t13410 + t13411 + t13412 + t13413 + t13414 + t13415;
  t13418 = 6.8*t9448*t13103;
  t13419 = 3.2*t10807*t13154;
  t13420 = 3.2*t10807*t13206;
  t13421 = 3.2*t13222*t12951;
  t13422 = 3.2*t12934*t13230;
  t13423 = t13418 + t13419 + t13420 + t13421 + t13422;
  t12944 = -1.*t5669*t2058;
  t12948 = t12944 + t12946;
  t10812 = -1.*t5669*t10571;
  t10830 = t10812 + t8374;
  t10779 = 6.4*t10725*t8379;
  t10836 = 3.2*t10807*t10830;
  t12936 = 3.2*t11131*t12934;
  t12937 = 6.4*t8379*t6595;
  t12949 = 3.2*t10807*t12948;
  t12995 = 3.2*t11131*t12951;
  t12996 = t10044 + t10207 + t10217 + t10238 + t10779 + t10836 + t12936 + t12937 + t12949 + t12995;
  t13437 = 0.748*t10201;
  t13442 = Power(t6774,2);
  t13443 = 13.6*t13442;
  t13276 = t10044 + t10207 + t10217 + t10238 + t13257 + t13262 + t13263 + t13270 + t13271 + t13272;
  t13451 = 6.8*t10201*t13103;
  t13305 = -1.*t13189*t8293;
  t13309 = -2.*t2058*t13152;
  t13317 = -1.*t2058*t13316;
  t13318 = -2.*t13189*t6066;
  t13327 = t13305 + t13309 + t13310 + t13317 + t13318 + t13326;
  t13330 = 2.*t2058*t13189;
  t13336 = t13189*t10571;
  t13337 = 2.*t8293*t13152;
  t13338 = t8293*t13316;
  t13340 = t13330 + t13335 + t13336 + t13337 + t13338 + t13339;
  t13460 = -0.384*var2[4]*t13264;
  t13346 = Power(t283,2);
  t13347 = -0.24*t13346;
  t13348 = t8486 + t13347;
  t13461 = 3.2*t7813*t6595;
  t13350 = -1.*t6922*t1063;
  t13351 = 0.24*t283*t1063;
  t13352 = t13350 + t13351;
  t13462 = 3.2*t8851*t13264;
  t13465 = Power(t8379,2);
  t13466 = 6.4*t13465;
  t13467 = 6.4*t10725*t6595;
  t13468 = Power(t6595,2);
  t13469 = 6.4*t13468;
  t13470 = 6.4*t8379*t13264;
  t13356 = t13257 + t13262 + t13263 + t13270 + t13271 + t13272;
  t13474 = 3.2*t13154*t6595;
  t13363 = t13362*t8293;
  t13366 = t10571*t13365;
  t13367 = t13363 + t13195 + t13196 + t13366;
  t13476 = 3.2*t13222*t13264;
  t13369 = -1.*t13362*t8293;
  t13370 = -1.*t2058*t13365;
  t13373 = -1.*t2058*t13372;
  t13374 = -1.*t13189*t6066;
  t13375 = -1.*t13362*t6066;
  t13376 = t13369 + t13153 + t13310 + t13370 + t13373 + t13374 + t13375 + t13326;
  t13383 = -1.*t2058*t13362;
  t13384 = -1.*t8293*t13365;
  t13385 = t13383 + t13227 + t13384 + t13229;
  t13387 = t2058*t13189;
  t13388 = t2058*t13362;
  t13389 = t13362*t10571;
  t13390 = t8293*t13365;
  t13391 = t8293*t13372;
  t13392 = t13387 + t13388 + t13335 + t13389 + t13217 + t13390 + t13391 + t13339;
  t13417 = -0.5*var2[3]*t13416;
  t13164 = 3.2*t8379*t13154;
  t13211 = 3.2*t8379*t13206;
  t13225 = 3.2*t13222*t6595;
  t13233 = 3.2*t10725*t13230;
  t13234 = t13122 + t13164 + t13211 + t13225 + t13233;
  t6697 = -0.384*var2[4]*t6595;
  t8394 = 3.2*t7813*t8379;
  t8901 = 3.2*t8851*t6595;
  t8919 = t6806 + t8394 + t8901;
  t13501 = 13.6*t9448*t6774;
  t13502 = t13398 + t13501 + t10779 + t12937;
  t13235 = -0.5*var2[2]*t13234;
  t13452 = 3.2*t11131*t13154;
  t13453 = 3.2*t11131*t13206;
  t13454 = 3.2*t13222*t12948;
  t13455 = 3.2*t10830*t13230;
  t13456 = t13451 + t13452 + t13453 + t13454 + t13455;
  t13304 = 6.4*t13206*t12951;
  t13328 = 3.2*t12934*t13327;
  t13329 = 6.4*t10807*t13230;
  t13341 = 3.2*t10807*t13340;
  t13342 = t13122 + t13297 + t13303 + t13304 + t13328 + t13329 + t13341;
  t13475 = 6.4*t13206*t6595;
  t13477 = 3.2*t10725*t13327;
  t13478 = 6.4*t8379*t13230;
  t13479 = 3.2*t8379*t13340;
  t13480 = t13451 + t13474 + t13475 + t13476 + t13477 + t13478 + t13479;
  t13360 = 3.2*t13206*t12951;
  t13368 = 3.2*t13367*t12951;
  t13377 = 3.2*t12934*t13376;
  t13382 = 3.2*t10807*t13230;
  t13386 = 3.2*t10807*t13385;
  t13393 = 3.2*t10807*t13392;
  t13394 = t13297 + t13303 + t13360 + t13368 + t13377 + t13382 + t13386 + t13393;
  t13491 = 3.2*t13206*t6595;
  t13492 = 3.2*t13367*t6595;
  t13493 = 3.2*t10725*t13376;
  t13494 = 3.2*t8379*t13230;
  t13495 = 3.2*t8379*t13385;
  t13496 = 3.2*t8379*t13392;
  t13497 = t13474 + t13491 + t13492 + t13476 + t13493 + t13494 + t13495 + t13496;
  t13424 = -0.5*var2[3]*t13423;
  t13504 = -0.5*var2[3]*t13234;
  t13548 = 6.4*t13206*t13222;
  t13549 = 6.4*t13154*t13230;
  t13550 = t13548 + t13549;
  t13438 = 3.2*t7813*t11131;
  t13439 = 3.2*t8851*t12948;
  t13440 = t13437 + t13438 + t13439;
  t13463 = t13437 + t13461 + t13462;
  t13251 = t6806 + t13241 + t13250;
  t13515 = 3.2*t7813*t13327;
  t13516 = 3.2*t8851*t13340;
  t13517 = t13515 + t13516;
  t13484 = 3.2*t13348*t8379;
  t13485 = 3.2*t13352*t6595;
  t13486 = t13484 + t13461 + t13485 + t13462;
  t13349 = 3.2*t13348*t10807;
  t13353 = 3.2*t13352*t12951;
  t13354 = t13349 + t13241 + t13250 + t13353;
  t13532 = 3.2*t13352*t13206;
  t13533 = 3.2*t7813*t13376;
  t13534 = 3.2*t13348*t13230;
  t13535 = 3.2*t8851*t13392;
  t13536 = t13532 + t13533 + t13534 + t13535;
  t13426 = 0.748*t9448;
  t13427 = 3.2*t7813*t10807;
  t13428 = 3.2*t8851*t12951;
  t13429 = t13426 + t13427 + t13428;
  t8920 = -0.5*var2[3]*t8919;
  t13553 = 3.2*t8851*t13206;
  t13554 = 3.2*t7813*t13230;
  t13555 = t13553 + t13554;
  t13586 = -0.384*var2[0]*t13239;
  t13587 = -0.384*var2[1]*t13264;
  t13435 = -0.384*var2[3]*t12951;
  t13509 = -0.384*var2[3]*t6595;
  t13561 = -0.384*var2[3]*t13206;
  p_output1[0]=(t13235 + t6697 + t8920 - 0.5*(6.4*t10725*t10807 + t13023 + t13024 + t13044 + t13045 + 6.4*t10807*t6595 + 6.4*t12934*t8379 + 6.4*t12951*t8379)*var2[0] - 0.5*t12996*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t13240 - 0.5*(t13023 + t13024 + t13044 + t13045 + t13279 + t13283 + t13284 + t13290)*var2[0] - 0.5*t13276*var2[1] - 0.5*t13342*var2[2] - 0.5*t13251*var2[3]);
  p_output1[2]=var2[3]*(t13240 - 0.5*(t13279 + t13283 + t13284 + t13290)*var2[0] - 0.5*t13356*var2[1] - 0.5*t13394*var2[2] - 0.5*t13354*var2[3]);
  p_output1[3]=-0.5*t13402*var2[3];
  p_output1[4]=t13417;
  p_output1[5]=t13424;
  p_output1[6]=-0.5*t13402*var2[0] - 0.5*t13416*var2[1] - 0.5*t13423*var2[2] - 1.*t13429*var2[3] - 0.384*t12951*var2[4];
  p_output1[7]=t13435;
  p_output1[8]=var2[3]*(-0.5*t12996*var2[0] - 0.5*(6.4*t10725*t11131 + t13023 + t13024 + t13045 + t13443 + 6.4*t11131*t6595 + 6.4*t10830*t8379 + 6.4*t12948*t8379)*var2[1] - 0.5*t13456*var2[2] - 0.5*t13440*var2[3] - 0.384*t12948*var2[4]);
  p_output1[9]=var2[3]*(t13460 - 0.5*t13276*var2[0] - 0.5*(t13023 + t13024 + t13045 + t13443 + t13466 + t13467 + t13469 + t13470)*var2[1] - 0.5*t13480*var2[2] - 0.5*t13463*var2[3]);
  p_output1[10]=var2[3]*(t13460 - 0.5*t13356*var2[0] - 0.5*(t13466 + t13467 + t13469 + t13470)*var2[1] - 0.5*t13497*var2[2] - 0.5*t13486*var2[3]);
  p_output1[11]=t13417;
  p_output1[12]=-0.5*t13502*var2[3];
  p_output1[13]=t13504;
  p_output1[14]=t13235 + t6697 - 0.5*t13416*var2[0] - 0.5*t13502*var2[1] - 1.*t8919*var2[3];
  p_output1[15]=t13509;
  p_output1[16]=(-0.5*t13234*var2[0] - 0.5*t13456*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t13342*var2[0] - 0.5*t13480*var2[1] - 0.5*(6.4*Power(t13206,2) + 6.4*Power(t13230,2) + 6.4*t13154*t13327 + 6.4*t13222*t13340)*var2[2] - 0.5*t13517*var2[3] - 0.384*t13340*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t13394*var2[0] - 0.5*t13497*var2[1] - 0.5*(6.4*t13206*t13367 + 6.4*t13154*t13376 + 6.4*t13230*t13385 + 6.4*t13222*t13392)*var2[2] - 0.5*t13536*var2[3] - 0.384*t13392*var2[4]);
  p_output1[19]=t13424;
  p_output1[20]=t13504;
  p_output1[21]=-0.5*t13550*var2[3];
  p_output1[22]=-0.5*t13423*var2[0] - 0.5*t13234*var2[1] - 0.5*t13550*var2[2] - 1.*t13555*var2[3] - 0.384*t13206*var2[4];
  p_output1[23]=t13561;
  p_output1[24]=(-0.5*t8919*var2[0] - 0.5*t13440*var2[1])*var2[3];
  p_output1[25]=(-0.5*t13251*var2[0] - 0.5*t13463*var2[1] - 0.5*t13517*var2[2])*var2[3];
  p_output1[26]=(-0.5*t13354*var2[0] - 0.5*t13486*var2[1] - 0.5*t13536*var2[2])*var2[3];
  p_output1[27]=-0.5*t13429*var2[3];
  p_output1[28]=t8920;
  p_output1[29]=-0.5*t13555*var2[3];
  p_output1[30]=-0.5*t13429*var2[0] - 0.5*t8919*var2[1] - 0.5*t13555*var2[2];
  p_output1[31]=(-0.384*t6595*var2[0] - 0.384*t12948*var2[1])*var2[3];
  p_output1[32]=(t13586 + t13587 - 0.384*t13340*var2[2])*var2[3];
  p_output1[33]=(t13586 + t13587 - 0.384*t13392*var2[2])*var2[3];
  p_output1[34]=t13435;
  p_output1[35]=t13509;
  p_output1[36]=t13561;
  p_output1[37]=-0.384*t12951*var2[0] - 0.384*t6595*var2[1] - 0.384*t13206*var2[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec4_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
