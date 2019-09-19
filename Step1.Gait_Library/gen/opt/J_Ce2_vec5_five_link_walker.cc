/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:21 GMT-04:00
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
  double t3022;
  double t1811;
  double t2194;
  double t3051;
  double t1769;
  double t5550;
  double t7199;
  double t7941;
  double t8180;
  double t8327;
  double t8371;
  double t2646;
  double t3056;
  double t5450;
  double t8526;
  double t8527;
  double t8536;
  double t8560;
  double t8561;
  double t8564;
  double t8372;
  double t5451;
  double t5553;
  double t6007;
  double t6038;
  double t6626;
  double t6777;
  double t8479;
  double t8488;
  double t8521;
  double t8522;
  double t8537;
  double t8538;
  double t8579;
  double t8580;
  double t8584;
  double t8585;
  double t8586;
  double t8587;
  double t8588;
  double t8758;
  double t8777;
  double t10124;
  double t10187;
  double t10202;
  double t10592;
  double t10608;
  double t10632;
  double t11336;
  double t11352;
  double t11372;
  double t13055;
  double t13057;
  double t8456;
  double t8470;
  double t8471;
  double t8570;
  double t8573;
  double t8574;
  double t13395;
  double t13396;
  double t8548;
  double t8550;
  double t8559;
  double t8566;
  double t8567;
  double t8568;
  double t8593;
  double t13074;
  double t13236;
  double t13237;
  double t10230;
  double t11130;
  double t11315;
  double t11600;
  double t13006;
  double t11482;
  double t13058;
  double t13059;
  double t13483;
  double t13487;
  double t13295;
  double t13343;
  double t13277;
  double t13296;
  double t13344;
  double t13506;
  double t13507;
  double t13508;
  double t13397;
  double t13425;
  double t13430;
  double t13434;
  double t13436;
  double t13441;
  double t13444;
  double t13445;
  double t13446;
  double t13447;
  double t13448;
  double t13449;
  double t13450;
  double t13457;
  double t13458;
  double t13459;
  double t13464;
  double t13471;
  double t13472;
  double t13473;
  double t13481;
  double t13482;
  double t13500;
  double t13503;
  double t13510;
  double t13513;
  double t13526;
  double t13527;
  double t13529;
  double t13530;
  double t13590;
  double t13591;
  double t13592;
  double t13593;
  double t13594;
  double t13572;
  double t13573;
  double t13574;
  double t13576;
  double t13577;
  double t13578;
  double t13579;
  double t13580;
  double t13582;
  double t13583;
  double t13584;
  double t13585;
  double t13588;
  double t8592;
  double t8594;
  double t8581;
  double t8582;
  double t8578;
  double t8583;
  double t8589;
  double t8591;
  double t8595;
  double t9194;
  double t9330;
  double t13488;
  double t13489;
  double t13490;
  double t13505;
  double t13511;
  double t13512;
  double t13514;
  double t13519;
  double t13520;
  double t13521;
  double t13524;
  double t13525;
  double t13528;
  double t13531;
  double t13624;
  double t13543;
  double t13544;
  double t13545;
  double t13626;
  double t13628;
  double t13631;
  double t13632;
  double t13633;
  double t13634;
  double t13635;
  double t13636;
  double t13637;
  double t13638;
  double t13639;
  double t13640;
  double t13643;
  double t13558;
  double t13559;
  double t13560;
  double t13564;
  double t13565;
  double t13566;
  double t13581;
  double t11316;
  double t13073;
  double t13252;
  double t13345;
  double t13355;
  double t8539;
  double t8565;
  double t8569;
  double t8575;
  double t8576;
  double t8577;
  double t13666;
  double t13357;
  double t13616;
  double t13617;
  double t13618;
  double t13619;
  double t13620;
  double t13498;
  double t13499;
  double t13518;
  double t13522;
  double t13523;
  double t13537;
  double t13538;
  double t13641;
  double t13642;
  double t13644;
  double t13645;
  double t13646;
  double t13647;
  double t13648;
  double t13557;
  double t13562;
  double t13563;
  double t13567;
  double t13568;
  double t13658;
  double t13659;
  double t13660;
  double t13661;
  double t13662;
  double t13589;
  double t13668;
  double t13720;
  double t13721;
  double t13722;
  double t13723;
  double t13724;
  double t13716;
  double t13717;
  double t13718;
  double t13603;
  double t13604;
  double t13605;
  double t13606;
  double t13607;
  double t13625;
  double t13627;
  double t13629;
  double t13403;
  double t13431;
  double t13432;
  double t13679;
  double t13680;
  double t13681;
  double t13682;
  double t13683;
  double t13652;
  double t13653;
  double t13654;
  double t13655;
  double t13656;
  double t13542;
  double t13546;
  double t13547;
  double t13551;
  double t13552;
  double t13696;
  double t13697;
  double t13698;
  double t13699;
  double t13700;
  double t13701;
  double t13702;
  double t13595;
  double t13669;
  double t13725;
  double t13755;
  double t13756;
  double t13757;
  double t13769;
  double t13770;
  double t7176;
  t3022 = Cos(var1[3]);
  t1811 = Cos(var1[4]);
  t2194 = Sin(var1[3]);
  t3051 = Sin(var1[4]);
  t1769 = Sin(var1[2]);
  t5550 = Cos(var1[2]);
  t7199 = -1.*t1811;
  t7941 = 1. + t7199;
  t8180 = 0.4*t7941;
  t8327 = 0.64*t1811;
  t8371 = t8180 + t8327;
  t2646 = -1.*t1811*t2194;
  t3056 = -1.*t3022*t3051;
  t5450 = t2646 + t3056;
  t8526 = t3022*t1811;
  t8527 = -1.*t2194*t3051;
  t8536 = t8526 + t8527;
  t8560 = t5550*t5450;
  t8561 = -1.*t1769*t8536;
  t8564 = t8560 + t8561;
  t8372 = t8371*t1811;
  t5451 = -1.*t1769*t5450;
  t5553 = -1.*t3022*t1811;
  t6007 = t2194*t3051;
  t6038 = t5553 + t6007;
  t6626 = t5550*t6038;
  t6777 = t5451 + t6626;
  t8479 = t1811*t2194;
  t8488 = t3022*t3051;
  t8521 = t8479 + t8488;
  t8522 = -1.*t1769*t8521;
  t8537 = t5550*t8536;
  t8538 = t8522 + t8537;
  t8579 = t1769*t5450;
  t8580 = t8579 + t8537;
  t8584 = -1.*t5550*t8536;
  t8585 = t5451 + t8584;
  t8586 = t5550*t8521;
  t8587 = t1769*t8536;
  t8588 = t8586 + t8587;
  t8758 = t1769*t6038;
  t8777 = t8560 + t8758;
  t10124 = t8371*t2194;
  t10187 = 0.24*t3022*t3051;
  t10202 = t10124 + t10187;
  t10592 = t3022*t8371;
  t10608 = -0.24*t2194*t3051;
  t10632 = t10592 + t10608;
  t11336 = -0.24*t1811*t2194;
  t11352 = -0.24*t3022*t3051;
  t11372 = t11336 + t11352;
  t13055 = 0.24*t3022*t1811;
  t13057 = t13055 + t10608;
  t8456 = Power(t1811,2);
  t8470 = -0.24*t8456;
  t8471 = t8372 + t8470;
  t8570 = Power(t3051,2);
  t8573 = 0.24*t8570;
  t8574 = t8372 + t8573;
  t13395 = t1769*t8521;
  t13396 = t13395 + t6626;
  t8548 = t8371*t3051;
  t8550 = -0.24*t1811*t3051;
  t8559 = t8548 + t8550;
  t8566 = -1.*t8371*t3051;
  t8567 = 0.24*t1811*t3051;
  t8568 = t8566 + t8567;
  t8593 = -1.*t1769*t6038;
  t13074 = t10202*t8521;
  t13236 = t8536*t10632;
  t13237 = t13074 + t13236;
  t10230 = -1.*t10202*t8536;
  t11130 = -1.*t5450*t10632;
  t11315 = t10230 + t11130;
  t11600 = t10202*t8536;
  t13006 = t5450*t10632;
  t11482 = t11372*t8536;
  t13058 = t8521*t13057;
  t13059 = t11482 + t11600 + t13006 + t13058;
  t13483 = -1.*t8371*t2194;
  t13487 = t13483 + t11352;
  t13295 = -1.*t5450*t10202;
  t13343 = -1.*t10632*t6038;
  t13277 = -1.*t5450*t11372;
  t13296 = -1.*t8536*t13057;
  t13344 = t13277 + t13295 + t13296 + t13343;
  t13506 = -0.24*t3022*t1811;
  t13507 = 0.24*t2194*t3051;
  t13508 = t13506 + t13507;
  t13397 = -0.384*var2[4]*t13396;
  t13425 = 3.2*t8574*t13396;
  t13430 = 3.2*t8559*t8777;
  t13434 = 6.4*t8580*t8564;
  t13436 = 3.2*t8588*t6777;
  t13441 = 3.2*t8564*t13396;
  t13444 = t8586 + t8593;
  t13445 = 3.2*t8580*t13444;
  t13446 = 3.2*t8538*t8777;
  t13447 = 6.4*t6777*t8777;
  t13448 = t13434 + t13436 + t13441 + t13445 + t13446 + t13447;
  t13449 = -0.5*var2[1]*t13448;
  t13450 = Power(t8580,2);
  t13457 = 6.4*t13450;
  t13458 = 6.4*t8580*t13396;
  t13459 = 6.4*t8588*t8777;
  t13464 = Power(t8777,2);
  t13471 = 6.4*t13464;
  t13472 = t13457 + t13458 + t13459 + t13471;
  t13473 = -0.5*var2[0]*t13472;
  t13481 = 3.2*t13237*t13396;
  t13482 = 3.2*t11315*t8777;
  t13500 = -1.*t11372*t8536;
  t13503 = -1.*t8521*t10632;
  t13510 = -1.*t5450*t13508;
  t13513 = -1.*t10202*t6038;
  t13526 = t5450*t10202;
  t13527 = t11372*t8521;
  t13529 = t8536*t13508;
  t13530 = t10632*t6038;
  t13590 = 3.2*t8559*t8580;
  t13591 = 3.2*t8568*t8580;
  t13592 = 3.2*t8471*t8588;
  t13593 = 3.2*t8574*t8777;
  t13594 = t13590 + t13591 + t13592 + t13593;
  t13572 = 6.4*t8580*t8588;
  t13573 = 6.4*t8580*t8777;
  t13574 = t13572 + t13573;
  t13576 = 3.2*t8580*t8538;
  t13577 = 3.2*t8564*t8588;
  t13578 = 3.2*t8580*t6777;
  t13579 = 3.2*t8564*t8777;
  t13580 = t13576 + t13577 + t13578 + t13579;
  t13582 = 3.2*t8580*t11315;
  t13583 = 3.2*t8580*t13059;
  t13584 = 3.2*t13237*t8777;
  t13585 = 3.2*t8588*t13344;
  t13588 = t13582 + t13583 + t13584 + t13585;
  t8592 = -1.*t5550*t5450;
  t8594 = t8592 + t8593;
  t8581 = -1.*t5550*t8521;
  t8582 = t8581 + t8561;
  t8578 = 6.4*t8538*t8564;
  t8583 = 3.2*t8580*t8582;
  t8589 = 3.2*t8585*t8588;
  t8591 = 6.4*t8564*t6777;
  t8595 = 3.2*t8580*t8594;
  t9194 = 3.2*t8585*t8777;
  t9330 = t8578 + t8583 + t8589 + t8591 + t8595 + t9194;
  t13488 = t13487*t8536;
  t13489 = t8521*t10632;
  t13490 = t13488 + t11600 + t13006 + t13489;
  t13505 = -1.*t5450*t13057;
  t13511 = -1.*t13487*t6038;
  t13512 = -1.*t11372*t6038;
  t13514 = t13500 + t11130 + t13503 + t13505 + t13510 + t13511 + t13512 + t13513;
  t13519 = -1.*t5450*t13487;
  t13520 = -1.*t8536*t10632;
  t13521 = t13519 + t13295 + t13520 + t13343;
  t13524 = t5450*t13487;
  t13525 = t5450*t11372;
  t13528 = t8536*t13057;
  t13531 = t13524 + t13525 + t13526 + t13527 + t13236 + t13528 + t13529 + t13530;
  t13624 = -0.384*var2[4]*t13444;
  t13543 = -1.*t8371*t1811;
  t13544 = 0.24*t8456;
  t13545 = t13543 + t13544;
  t13626 = 3.2*t8559*t6777;
  t13628 = 3.2*t8574*t13444;
  t13631 = Power(t8564,2);
  t13632 = 6.4*t13631;
  t13633 = 6.4*t8538*t6777;
  t13634 = Power(t6777,2);
  t13635 = 6.4*t13634;
  t13636 = 6.4*t8564*t13444;
  t13637 = t13632 + t13633 + t13635 + t13636;
  t13638 = -0.5*var2[1]*t13637;
  t13639 = -0.5*var2[0]*t13448;
  t13640 = 3.2*t11315*t6777;
  t13643 = 3.2*t13237*t13444;
  t13558 = -2.*t5450*t13057;
  t13559 = -2.*t11372*t6038;
  t13560 = t13500 + t13503 + t13558 + t13510 + t13559 + t13513;
  t13564 = 2.*t5450*t11372;
  t13565 = 2.*t8536*t13057;
  t13566 = t13564 + t13526 + t13527 + t13565 + t13529 + t13530;
  t13581 = -0.5*var2[4]*t13580;
  t11316 = 3.2*t8564*t11315;
  t13073 = 3.2*t8564*t13059;
  t13252 = 3.2*t13237*t6777;
  t13345 = 3.2*t8538*t13344;
  t13355 = t11316 + t13073 + t13252 + t13345;
  t8539 = 3.2*t8471*t8538;
  t8565 = 3.2*t8559*t8564;
  t8569 = 3.2*t8568*t8564;
  t8575 = 3.2*t8574*t6777;
  t8576 = t8539 + t8565 + t8569 + t8575;
  t8577 = -0.5*var2[3]*t8576;
  t13666 = t8578 + t8591;
  t13357 = -0.5*var2[2]*t13355;
  t13616 = 3.2*t8585*t11315;
  t13617 = 3.2*t8585*t13059;
  t13618 = 3.2*t13237*t8594;
  t13619 = 3.2*t8582*t13344;
  t13620 = t13616 + t13617 + t13618 + t13619;
  t13498 = 3.2*t13490*t8777;
  t13499 = 3.2*t13059*t8777;
  t13518 = 3.2*t8588*t13514;
  t13522 = 3.2*t8580*t13521;
  t13523 = 3.2*t8580*t13344;
  t13537 = 3.2*t8580*t13531;
  t13538 = t13481 + t13482 + t13498 + t13499 + t13518 + t13522 + t13523 + t13537;
  t13641 = 3.2*t13490*t6777;
  t13642 = 3.2*t13059*t6777;
  t13644 = 3.2*t8538*t13514;
  t13645 = 3.2*t8564*t13521;
  t13646 = 3.2*t8564*t13344;
  t13647 = 3.2*t8564*t13531;
  t13648 = t13640 + t13641 + t13642 + t13643 + t13644 + t13645 + t13646 + t13647;
  t13557 = 6.4*t13059*t8777;
  t13562 = 3.2*t8588*t13560;
  t13563 = 6.4*t8580*t13344;
  t13567 = 3.2*t8580*t13566;
  t13568 = t13481 + t13482 + t13557 + t13562 + t13563 + t13567;
  t13658 = 6.4*t13059*t6777;
  t13659 = 3.2*t8538*t13560;
  t13660 = 6.4*t8564*t13344;
  t13661 = 3.2*t8564*t13566;
  t13662 = t13640 + t13658 + t13643 + t13659 + t13660 + t13661;
  t13589 = -0.5*var2[4]*t13588;
  t13668 = -0.5*var2[4]*t13355;
  t13720 = 3.2*t8471*t11315;
  t13721 = 3.2*t8568*t13237;
  t13722 = 3.2*t8574*t13059;
  t13723 = 3.2*t8559*t13344;
  t13724 = t13720 + t13721 + t13722 + t13723;
  t13716 = 6.4*t13237*t13059;
  t13717 = 6.4*t11315*t13344;
  t13718 = t13716 + t13717;
  t13603 = 3.2*t8559*t8585;
  t13604 = 3.2*t8568*t8585;
  t13605 = 3.2*t8471*t8582;
  t13606 = 3.2*t8574*t8594;
  t13607 = t13603 + t13604 + t13605 + t13606;
  t13625 = 3.2*t8471*t8564;
  t13627 = 3.2*t8568*t6777;
  t13629 = t13625 + t13626 + t13627 + t13628;
  t13403 = 3.2*t8471*t8580;
  t13431 = 3.2*t8568*t8777;
  t13432 = t13403 + t13425 + t13430 + t13431;
  t13679 = 3.2*t8568*t13490;
  t13680 = 3.2*t8559*t13514;
  t13681 = 3.2*t8471*t13521;
  t13682 = 3.2*t8574*t13531;
  t13683 = t13679 + t13680 + t13681 + t13682;
  t13652 = 3.2*t8568*t8538;
  t13653 = 6.4*t8471*t8564;
  t13654 = 3.2*t13545*t8564;
  t13655 = 6.4*t8568*t6777;
  t13656 = t13652 + t13653 + t13654 + t13626 + t13655 + t13628;
  t13542 = 6.4*t8471*t8580;
  t13546 = 3.2*t13545*t8580;
  t13547 = 3.2*t8568*t8588;
  t13551 = 6.4*t8568*t8777;
  t13552 = t13542 + t13546 + t13547 + t13425 + t13430 + t13551;
  t13696 = 3.2*t8568*t11315;
  t13697 = 3.2*t13545*t13237;
  t13698 = 6.4*t8568*t13059;
  t13699 = 3.2*t8559*t13560;
  t13700 = 6.4*t8471*t13344;
  t13701 = 3.2*t8574*t13566;
  t13702 = t13696 + t13697 + t13698 + t13699 + t13700 + t13701;
  t13595 = -0.5*var2[4]*t13594;
  t13669 = -0.5*var2[4]*t8576;
  t13725 = -0.5*var2[4]*t13724;
  t13755 = 6.4*t8471*t8559;
  t13756 = 6.4*t8568*t8574;
  t13757 = t13755 + t13756;
  t13769 = -0.384*var2[0]*t13396;
  t13770 = -0.384*var2[1]*t13444;
  t7176 = -0.384*var2[4]*t6777;
  p_output1[0]=(t13357 + t7176 + t8577 - 0.5*(6.4*t6777*t8580 + 6.4*t8538*t8580 + 6.4*t8564*t8588 + 6.4*t8564*t8777)*var2[0] - 0.5*t9330*var2[1])*var2[4];
  p_output1[1]=(t13397 + t13449 + t13473 - 0.5*t13538*var2[2] - 0.5*t13432*var2[3])*var2[4];
  p_output1[2]=(t13397 + t13449 + t13473 - 0.5*t13568*var2[2] - 0.5*t13552*var2[3])*var2[4];
  p_output1[3]=-0.5*t13574*var2[4];
  p_output1[4]=t13581;
  p_output1[5]=t13589;
  p_output1[6]=t13595;
  p_output1[7]=-0.5*t13574*var2[0] - 0.5*t13580*var2[1] - 0.5*t13588*var2[2] - 0.5*t13594*var2[3] - 0.768*t8777*var2[4];
  p_output1[8]=var2[4]*(-0.5*t9330*var2[0] - 0.5*(6.4*t8564*t8582 + 6.4*t6777*t8585 + 6.4*t8538*t8585 + 6.4*t8564*t8594)*var2[1] - 0.5*t13620*var2[2] - 0.5*t13607*var2[3] - 0.384*t8594*var2[4]);
  p_output1[9]=(t13624 + t13638 + t13639 - 0.5*t13648*var2[2] - 0.5*t13629*var2[3])*var2[4];
  p_output1[10]=(t13624 + t13638 + t13639 - 0.5*t13662*var2[2] - 0.5*t13656*var2[3])*var2[4];
  p_output1[11]=t13581;
  p_output1[12]=-0.5*t13666*var2[4];
  p_output1[13]=t13668;
  p_output1[14]=t13669;
  p_output1[15]=t13357 + t8577 - 0.5*t13580*var2[0] - 0.5*t13666*var2[1] - 0.768*t6777*var2[4];
  p_output1[16]=(-0.5*t13355*var2[0] - 0.5*t13620*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t13538*var2[0] - 0.5*t13648*var2[1] - 0.5*(6.4*t13059*t13490 + 6.4*t11315*t13514 + 6.4*t13344*t13521 + 6.4*t13237*t13531)*var2[2] - 0.5*t13683*var2[3] - 0.384*t13531*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t13568*var2[0] - 0.5*t13662*var2[1] - 0.5*(6.4*Power(t13059,2) + 6.4*Power(t13344,2) + 6.4*t11315*t13560 + 6.4*t13237*t13566)*var2[2] - 0.5*t13702*var2[3] - 0.384*t13566*var2[4]);
  p_output1[19]=t13589;
  p_output1[20]=t13668;
  p_output1[21]=-0.5*t13718*var2[4];
  p_output1[22]=t13725;
  p_output1[23]=-0.5*t13588*var2[0] - 0.5*t13355*var2[1] - 0.5*t13718*var2[2] - 0.5*t13724*var2[3] - 0.768*t13059*var2[4];
  p_output1[24]=(-0.5*t8576*var2[0] - 0.5*t13607*var2[1])*var2[4];
  p_output1[25]=(-0.5*t13432*var2[0] - 0.5*t13629*var2[1] - 0.5*t13683*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t13552*var2[0] - 0.5*t13656*var2[1] - 0.5*t13702*var2[2] - 0.5*(6.4*Power(t8471,2) + 6.4*t8559*t8568 + 6.4*Power(t8568,2) + 6.4*t13545*t8574)*var2[3] - 0.384*t13545*var2[4]);
  p_output1[27]=t13595;
  p_output1[28]=t13669;
  p_output1[29]=t13725;
  p_output1[30]=-0.5*t13757*var2[4];
  p_output1[31]=-0.5*t13594*var2[0] - 0.5*t8576*var2[1] - 0.5*t13724*var2[2] - 0.5*t13757*var2[3] - 0.768*t8568*var2[4];
  p_output1[32]=(-0.384*t6777*var2[0] - 0.384*t8594*var2[1])*var2[4];
  p_output1[33]=(t13769 + t13770 - 0.384*t13531*var2[2])*var2[4];
  p_output1[34]=(t13769 + t13770 - 0.384*t13566*var2[2] - 0.384*t13545*var2[3])*var2[4];
  p_output1[35]=-0.384*t8777*var2[4];
  p_output1[36]=t7176;
  p_output1[37]=-0.384*t13059*var2[4];
  p_output1[38]=-0.384*t8568*var2[4];
  p_output1[39]=-0.384*t8777*var2[0] - 0.384*t6777*var2[1] - 0.384*t13059*var2[2] - 0.384*t8568*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec5_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
