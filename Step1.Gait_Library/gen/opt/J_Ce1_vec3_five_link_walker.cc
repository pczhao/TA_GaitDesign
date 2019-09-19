/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:12 GMT-04:00
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
  double t3139;
  double t3163;
  double t2056;
  double t3157;
  double t5066;
  double t5085;
  double t5245;
  double t5388;
  double t5398;
  double t5078;
  double t5088;
  double t5091;
  double t5726;
  double t5763;
  double t5787;
  double t5794;
  double t5799;
  double t5111;
  double t5509;
  double t5642;
  double t5807;
  double t5912;
  double t5994;
  double t6124;
  double t6157;
  double t6414;
  double t6711;
  double t6739;
  double t6749;
  double t6555;
  double t6596;
  double t6640;
  double t6904;
  double t6905;
  double t6959;
  double t6029;
  double t6415;
  double t6509;
  double t6531;
  double t6692;
  double t6700;
  double t6864;
  double t6865;
  double t6871;
  double t6880;
  double t6960;
  double t6961;
  double t6963;
  double t6964;
  double t6965;
  double t6970;
  double t7208;
  double t7215;
  double t6985;
  double t7236;
  double t7559;
  double t7067;
  double t3145;
  double t3270;
  double t4904;
  double t4912;
  double t4920;
  double t4956;
  double t5010;
  double t5011;
  double t5063;
  double t8396;
  double t8402;
  double t8766;
  double t8781;
  double t8831;
  double t8839;
  double t8854;
  double t8889;
  double t8890;
  double t8891;
  double t8910;
  double t8911;
  double t8916;
  double t8917;
  double t8918;
  double t8912;
  double t8913;
  double t8914;
  double t8778;
  double t8791;
  double t8814;
  double t8921;
  double t8946;
  double t8947;
  double t8399;
  double t8403;
  double t8406;
  double t8412;
  double t8415;
  double t8455;
  double t8468;
  double t8476;
  double t8494;
  double t8872;
  double t8915;
  double t8948;
  double t9081;
  double t9496;
  double t9522;
  double t9274;
  double t9298;
  double t9306;
  double t9190;
  double t9672;
  double t9733;
  double t9739;
  double t11216;
  double t11275;
  double t11279;
  double t9569;
  double t9752;
  double t9979;
  double t11286;
  double t11306;
  double t11321;
  double t11329;
  double t11333;
  double t11374;
  double t11519;
  double t11520;
  double t11440;
  double t11522;
  double t11523;
  double t11446;
  double t6682;
  double t6757;
  double t6791;
  double t6850;
  double t6983;
  double t7004;
  double t7087;
  double t7097;
  double t7157;
  double t11795;
  double t11809;
  double t11876;
  double t11877;
  double t11835;
  double t11860;
  double t11868;
  double t11770;
  double t11771;
  double t11772;
  double t11823;
  double t7235;
  double t8025;
  double t8171;
  double t11826;
  double t11827;
  double t11828;
  double t11832;
  double t11873;
  double t8191;
  double t8233;
  double t8256;
  double t12010;
  double t12132;
  double t12134;
  double t12047;
  double t8185;
  double t8313;
  double t8336;
  double t12124;
  double t12128;
  double t12129;
  double t12130;
  double t12135;
  double t12145;
  double t12146;
  double t12149;
  double t12150;
  double t12151;
  double t12152;
  double t12154;
  double t12155;
  double t12156;
  double t12158;
  double t12159;
  double t12160;
  double t12161;
  double t12183;
  double t9751;
  double t10153;
  double t10189;
  double t11137;
  double t11406;
  double t11445;
  double t11477;
  double t11488;
  double t11489;
  double t12213;
  double t12215;
  double t12255;
  double t12256;
  double t12226;
  double t12227;
  double t12249;
  double t12206;
  double t12207;
  double t12212;
  double t12216;
  double t11521;
  double t11563;
  double t11565;
  double t12218;
  double t12220;
  double t12221;
  double t12225;
  double t12252;
  double t11591;
  double t11635;
  double t11646;
  double t12259;
  double t12296;
  double t12297;
  double t12263;
  double t11566;
  double t11651;
  double t11652;
  double t12274;
  double t12278;
  double t12286;
  double t12292;
  double t12298;
  double t12299;
  double t12300;
  double t12301;
  double t12302;
  double t12307;
  double t12312;
  double t12313;
  double t12314;
  double t12318;
  double t12328;
  double t12329;
  double t12330;
  double t12331;
  double t12334;
  double t12371;
  double t12373;
  double t12367;
  double t12368;
  double t12369;
  double t12370;
  double t12398;
  double t12399;
  double t12403;
  double t12413;
  double t12420;
  double t12425;
  double t12372;
  double t12374;
  double t12375;
  double t12382;
  double t12383;
  double t12384;
  double t12424;
  double t12426;
  double t12427;
  double t12429;
  double t12430;
  double t12431;
  double t8392;
  double t8393;
  double t8376;
  double t8377;
  double t12452;
  double t12454;
  double t12455;
  double t12456;
  double t12457;
  double t12438;
  double t12439;
  double t12444;
  double t12448;
  double t9195;
  double t12476;
  double t12477;
  double t12478;
  double t12479;
  double t9220;
  double t12482;
  double t8830;
  double t8888;
  double t12487;
  double t12489;
  double t12490;
  double t12491;
  double t12453;
  double t12458;
  double t12459;
  double t11830;
  double t11831;
  double t11870;
  double t11872;
  double t11874;
  double t11974;
  double t12011;
  double t12015;
  double t12016;
  double t12051;
  double t12502;
  double t12504;
  double t12505;
  double t12461;
  double t12467;
  double t12468;
  double t12511;
  double t12512;
  double t12513;
  double t12514;
  double t12515;
  double t12516;
  double t12517;
  double t12190;
  double t12191;
  double t12192;
  double t12195;
  double t12196;
  double t12197;
  double t12488;
  double t12492;
  double t12493;
  double t12222;
  double t12224;
  double t12250;
  double t12251;
  double t12253;
  double t12258;
  double t12260;
  double t12261;
  double t12262;
  double t12264;
  double t12532;
  double t12534;
  double t12535;
  double t12495;
  double t12496;
  double t12497;
  double t12541;
  double t12542;
  double t12543;
  double t12544;
  double t12545;
  double t12546;
  double t12547;
  double t12344;
  double t12345;
  double t12346;
  double t12349;
  double t12350;
  double t12351;
  double t7179;
  double t8339;
  double t8342;
  double t8391;
  double t8395;
  double t9105;
  double t9307;
  double t9358;
  double t11490;
  double t11739;
  double t11766;
  double t12187;
  double t12204;
  double t12341;
  double t12571;
  double t12572;
  double t12573;
  double t12574;
  double t12575;
  double t12598;
  double t12599;
  double t12600;
  double t12601;
  double t12602;
  double t12617;
  double t12618;
  double t12619;
  double t12621;
  double t12622;
  double t12623;
  double t12625;
  double t12626;
  double t12627;
  double t12629;
  double t12630;
  double t12631;
  double t12638;
  double t12639;
  double t12640;
  double t12642;
  double t12643;
  double t12644;
  double t12645;
  double t12649;
  double t12650;
  double t12651;
  double t12652;
  double t12653;
  double t12654;
  double t12655;
  double t12656;
  double t12657;
  double t12658;
  double t12659;
  double t12677;
  double t12678;
  double t12679;
  double t12681;
  double t12682;
  double t12683;
  double t12684;
  double t12685;
  double t12703;
  double t12704;
  double t12705;
  double t12707;
  double t12708;
  double t12709;
  double t12710;
  double t12714;
  double t12715;
  double t12716;
  double t12717;
  double t12718;
  double t12719;
  double t12720;
  double t12721;
  double t12722;
  double t12723;
  double t12724;
  double t12742;
  double t12743;
  double t12744;
  double t12746;
  double t12747;
  double t12748;
  double t12749;
  double t12750;
  t3139 = Cos(var1[3]);
  t3163 = Sin(var1[3]);
  t2056 = Cos(var1[2]);
  t3157 = Sin(var1[2]);
  t5066 = Cos(var1[4]);
  t5085 = Sin(var1[4]);
  t5245 = t3139*t5066;
  t5388 = -1.*t3163*t5085;
  t5398 = t5245 + t5388;
  t5078 = -1.*t5066*t3163;
  t5088 = -1.*t3139*t5085;
  t5091 = t5078 + t5088;
  t5726 = -1.*t5066;
  t5763 = 1. + t5726;
  t5787 = 0.4*t5763;
  t5794 = 0.64*t5066;
  t5799 = t5787 + t5794;
  t5111 = t2056*t5091;
  t5509 = -1.*t3157*t5398;
  t5642 = t5111 + t5509;
  t5807 = t5799*t3163;
  t5912 = 0.24*t3139*t5085;
  t5994 = t5807 + t5912;
  t6124 = t3139*t5799;
  t6157 = -0.24*t3163*t5085;
  t6414 = t6124 + t6157;
  t6711 = t5066*t3163;
  t6739 = t3139*t5085;
  t6749 = t6711 + t6739;
  t6555 = -1.*t5799*t3163;
  t6596 = -0.24*t3139*t5085;
  t6640 = t6555 + t6596;
  t6904 = -1.*t3139*t5066;
  t6905 = t3163*t5085;
  t6959 = t6904 + t6905;
  t6029 = -1.*t5994*t5398;
  t6415 = -1.*t5091*t6414;
  t6509 = t6029 + t6415;
  t6531 = 3.2*t5642*t6509;
  t6692 = t5994*t5398;
  t6700 = t5091*t6414;
  t6864 = t5994*t6749;
  t6865 = t5398*t6414;
  t6871 = t6864 + t6865;
  t6880 = -1.*t3157*t5091;
  t6960 = t2056*t6959;
  t6961 = t6880 + t6960;
  t6963 = 3.2*t6871*t6961;
  t6964 = -1.*t3157*t6749;
  t6965 = t2056*t5398;
  t6970 = t6964 + t6965;
  t7208 = -0.24*t5066*t3163;
  t7215 = t7208 + t6596;
  t6985 = -1.*t5091*t5994;
  t7236 = 0.24*t3139*t5066;
  t7559 = t7236 + t6157;
  t7067 = -1.*t6414*t6959;
  t3145 = -1.*t2056*t3139;
  t3270 = t3157*t3163;
  t4904 = t3145 + t3270;
  t4912 = Power(t3139,2);
  t4920 = 0.11*t4912;
  t4956 = Power(t3163,2);
  t5010 = 0.11*t4956;
  t5011 = t4920 + t5010;
  t5063 = 6.8*t4904*t5011;
  t8396 = Cos(var1[5]);
  t8402 = Sin(var1[5]);
  t8766 = Cos(var1[6]);
  t8781 = Sin(var1[6]);
  t8831 = t8396*t8766;
  t8839 = -1.*t8402*t8781;
  t8854 = t8831 + t8839;
  t8889 = -1.*t8766;
  t8890 = 1. + t8889;
  t8891 = 0.4*t8890;
  t8910 = 0.64*t8766;
  t8911 = t8891 + t8910;
  t8916 = -1.*t8766*t8402;
  t8917 = -1.*t8396*t8781;
  t8918 = t8916 + t8917;
  t8912 = t8911*t8402;
  t8913 = 0.24*t8396*t8781;
  t8914 = t8912 + t8913;
  t8778 = t8766*t8402;
  t8791 = t8396*t8781;
  t8814 = t8778 + t8791;
  t8921 = t8396*t8911;
  t8946 = -0.24*t8402*t8781;
  t8947 = t8921 + t8946;
  t8399 = -1.*t2056*t8396;
  t8403 = t3157*t8402;
  t8406 = t8399 + t8403;
  t8412 = Power(t8396,2);
  t8415 = 0.11*t8412;
  t8455 = Power(t8402,2);
  t8468 = 0.11*t8455;
  t8476 = t8415 + t8468;
  t8494 = 6.8*t8406*t8476;
  t8872 = -1.*t3157*t8854;
  t8915 = -1.*t8914*t8854;
  t8948 = -1.*t8918*t8947;
  t9081 = t8915 + t8948;
  t9496 = t2056*t8918;
  t9522 = t9496 + t8872;
  t9274 = t8914*t8814;
  t9298 = t8854*t8947;
  t9306 = t9274 + t9298;
  t9190 = -1.*t3157*t8918;
  t9672 = -1.*t8911*t8402;
  t9733 = -0.24*t8396*t8781;
  t9739 = t9672 + t9733;
  t11216 = -1.*t8396*t8766;
  t11275 = t8402*t8781;
  t11279 = t11216 + t11275;
  t9569 = 3.2*t9522*t9081;
  t9752 = t8914*t8854;
  t9979 = t8918*t8947;
  t11286 = t2056*t11279;
  t11306 = t9190 + t11286;
  t11321 = 3.2*t9306*t11306;
  t11329 = -1.*t3157*t8814;
  t11333 = t2056*t8854;
  t11374 = t11329 + t11333;
  t11519 = -0.24*t8766*t8402;
  t11520 = t11519 + t9733;
  t11440 = -1.*t8918*t8914;
  t11522 = 0.24*t8396*t8766;
  t11523 = t11522 + t8946;
  t11446 = -1.*t8947*t11279;
  t6682 = t6640*t5398;
  t6757 = t6749*t6414;
  t6791 = t6682 + t6692 + t6700 + t6757;
  t6850 = 3.2*t5642*t6791;
  t6983 = -1.*t5091*t6640;
  t7004 = -1.*t5398*t6414;
  t7087 = t6983 + t6985 + t7004 + t7067;
  t7097 = 3.2*t6970*t7087;
  t7157 = t5063 + t6531 + t6850 + t6963 + t7097;
  t11795 = t3157*t6959;
  t11809 = t5111 + t11795;
  t11876 = t3157*t5091;
  t11877 = t11876 + t6965;
  t11835 = -1.*t3139*t5799;
  t11860 = 0.24*t3163*t5085;
  t11868 = t11835 + t11860;
  t11770 = t3157*t6749;
  t11771 = t11770 + t6960;
  t11772 = 3.2*t6871*t11771;
  t11823 = 3.2*t6509*t11809;
  t7235 = t7215*t5398;
  t8025 = t6749*t7559;
  t8171 = t7235 + t6692 + t6700 + t8025;
  t11826 = t2056*t6749;
  t11827 = t3157*t5398;
  t11828 = t11826 + t11827;
  t11832 = -1.*t6749*t6414;
  t11873 = -1.*t5994*t6959;
  t8191 = -1.*t5091*t7215;
  t8233 = -1.*t5398*t7559;
  t8256 = t8191 + t6985 + t8233 + t7067;
  t12010 = t5091*t5994;
  t12132 = -0.24*t3139*t5066;
  t12134 = t12132 + t11860;
  t12047 = t6414*t6959;
  t8185 = 3.2*t5642*t8171;
  t8313 = 3.2*t6970*t8256;
  t8336 = t6531 + t8185 + t6963 + t8313;
  t12124 = 3.2*t6791*t11809;
  t12128 = 3.2*t8171*t11809;
  t12129 = -1.*t7215*t5398;
  t12130 = -1.*t5091*t7559;
  t12135 = -1.*t5091*t12134;
  t12145 = -1.*t6640*t6959;
  t12146 = -1.*t7215*t6959;
  t12149 = t12129 + t6415 + t11832 + t12130 + t12135 + t12145 + t12146 + t11873;
  t12150 = 3.2*t11828*t12149;
  t12151 = 3.2*t11877*t7087;
  t12152 = 3.2*t11877*t8256;
  t12154 = t5091*t6640;
  t12155 = t5091*t7215;
  t12156 = t7215*t6749;
  t12158 = t5398*t7559;
  t12159 = t5398*t12134;
  t12160 = t12154 + t12155 + t12010 + t12156 + t6865 + t12158 + t12159 + t12047;
  t12161 = 3.2*t11877*t12160;
  t12183 = t11772 + t11823 + t12124 + t12128 + t12150 + t12151 + t12152 + t12161;
  t9751 = t9739*t8854;
  t10153 = t8814*t8947;
  t10189 = t9751 + t9752 + t9979 + t10153;
  t11137 = 3.2*t9522*t10189;
  t11406 = -1.*t8918*t9739;
  t11445 = -1.*t8854*t8947;
  t11477 = t11406 + t11440 + t11445 + t11446;
  t11488 = 3.2*t11374*t11477;
  t11489 = t8494 + t9569 + t11137 + t11321 + t11488;
  t12213 = t3157*t11279;
  t12215 = t9496 + t12213;
  t12255 = t3157*t8918;
  t12256 = t12255 + t11333;
  t12226 = -1.*t8396*t8911;
  t12227 = 0.24*t8402*t8781;
  t12249 = t12226 + t12227;
  t12206 = t3157*t8814;
  t12207 = t12206 + t11286;
  t12212 = 3.2*t9306*t12207;
  t12216 = 3.2*t9081*t12215;
  t11521 = t11520*t8854;
  t11563 = t8814*t11523;
  t11565 = t11521 + t9752 + t9979 + t11563;
  t12218 = t2056*t8814;
  t12220 = t3157*t8854;
  t12221 = t12218 + t12220;
  t12225 = -1.*t8814*t8947;
  t12252 = -1.*t8914*t11279;
  t11591 = -1.*t8918*t11520;
  t11635 = -1.*t8854*t11523;
  t11646 = t11591 + t11440 + t11635 + t11446;
  t12259 = t8918*t8914;
  t12296 = -0.24*t8396*t8766;
  t12297 = t12296 + t12227;
  t12263 = t8947*t11279;
  t11566 = 3.2*t9522*t11565;
  t11651 = 3.2*t11374*t11646;
  t11652 = t9569 + t11566 + t11321 + t11651;
  t12274 = 3.2*t10189*t12215;
  t12278 = 3.2*t11565*t12215;
  t12286 = -1.*t11520*t8854;
  t12292 = -1.*t8918*t11523;
  t12298 = -1.*t8918*t12297;
  t12299 = -1.*t9739*t11279;
  t12300 = -1.*t11520*t11279;
  t12301 = t12286 + t8948 + t12225 + t12292 + t12298 + t12299 + t12300 + t12252;
  t12302 = 3.2*t12221*t12301;
  t12307 = 3.2*t12256*t11477;
  t12312 = 3.2*t12256*t11646;
  t12313 = t8918*t9739;
  t12314 = t8918*t11520;
  t12318 = t11520*t8814;
  t12328 = t8854*t11523;
  t12329 = t8854*t12297;
  t12330 = t12313 + t12314 + t12259 + t12318 + t9298 + t12328 + t12329 + t12263;
  t12331 = 3.2*t12256*t12330;
  t12334 = t12212 + t12216 + t12274 + t12278 + t12302 + t12307 + t12312 + t12331;
  t12371 = 3.2*t11877*t6509;
  t12373 = 3.2*t6871*t11809;
  t12367 = -1.*t3139*t3157;
  t12368 = -1.*t2056*t3163;
  t12369 = t12367 + t12368;
  t12370 = 6.8*t12369*t5011;
  t12398 = -1.*t8396*t3157;
  t12399 = -1.*t2056*t8402;
  t12403 = t12398 + t12399;
  t12413 = 6.8*t12403*t8476;
  t12420 = 3.2*t12256*t9081;
  t12425 = 3.2*t9306*t12215;
  t12372 = 3.2*t11877*t6791;
  t12374 = 3.2*t11828*t7087;
  t12375 = t12370 + t12371 + t12372 + t12373 + t12374;
  t12382 = 3.2*t11877*t8171;
  t12383 = 3.2*t11828*t8256;
  t12384 = t12371 + t12382 + t12373 + t12383;
  t12424 = 3.2*t12256*t10189;
  t12426 = 3.2*t12221*t11477;
  t12427 = t12413 + t12420 + t12424 + t12425 + t12426;
  t12429 = 3.2*t12256*t11565;
  t12430 = 3.2*t12221*t11646;
  t12431 = t12420 + t12429 + t12425 + t12430;
  t8392 = -1.*t2056*t5398;
  t8393 = t6880 + t8392;
  t8376 = -1.*t2056*t6749;
  t8377 = t8376 + t5509;
  t12452 = 3.2*t8393*t6509;
  t12454 = -1.*t2056*t5091;
  t12455 = -1.*t3157*t6959;
  t12456 = t12454 + t12455;
  t12457 = 3.2*t6871*t12456;
  t12438 = t3139*t3157;
  t12439 = t2056*t3163;
  t12444 = t12438 + t12439;
  t12448 = 6.8*t12444*t5011;
  t9195 = -1.*t2056*t8854;
  t12476 = t8396*t3157;
  t12477 = t2056*t8402;
  t12478 = t12476 + t12477;
  t12479 = 6.8*t12478*t8476;
  t9220 = t9190 + t9195;
  t12482 = -1.*t2056*t8918;
  t8830 = -1.*t2056*t8814;
  t8888 = t8830 + t8872;
  t12487 = 3.2*t9220*t9081;
  t12489 = -1.*t3157*t11279;
  t12490 = t12482 + t12489;
  t12491 = 3.2*t9306*t12490;
  t12453 = 3.2*t8393*t6791;
  t12458 = 3.2*t8377*t7087;
  t12459 = t12448 + t12452 + t12453 + t12457 + t12458;
  t11830 = -1.*t6640*t5398;
  t11831 = -2.*t5091*t6414;
  t11870 = -1.*t5091*t11868;
  t11872 = -2.*t6640*t6959;
  t11874 = t11830 + t11831 + t11832 + t11870 + t11872 + t11873;
  t11974 = 2.*t5091*t6640;
  t12011 = t6640*t6749;
  t12015 = 2.*t5398*t6414;
  t12016 = t5398*t11868;
  t12051 = t11974 + t12010 + t12011 + t12015 + t12016 + t12047;
  t12502 = 3.2*t6509*t6961;
  t12504 = t11826 + t12455;
  t12505 = 3.2*t6871*t12504;
  t12461 = 3.2*t8393*t8171;
  t12467 = 3.2*t8377*t8256;
  t12468 = t12452 + t12461 + t12457 + t12467;
  t12511 = 3.2*t6791*t6961;
  t12512 = 3.2*t8171*t6961;
  t12513 = 3.2*t6970*t12149;
  t12514 = 3.2*t5642*t7087;
  t12515 = 3.2*t5642*t8256;
  t12516 = 3.2*t5642*t12160;
  t12517 = t12502 + t12511 + t12512 + t12505 + t12513 + t12514 + t12515 + t12516;
  t12190 = -2.*t5091*t7559;
  t12191 = -2.*t7215*t6959;
  t12192 = t12129 + t11832 + t12190 + t12135 + t12191 + t11873;
  t12195 = 2.*t5091*t7215;
  t12196 = 2.*t5398*t7559;
  t12197 = t12195 + t12010 + t12156 + t12196 + t12159 + t12047;
  t12488 = 3.2*t9220*t10189;
  t12492 = 3.2*t8888*t11477;
  t12493 = t12479 + t12487 + t12488 + t12491 + t12492;
  t12222 = -1.*t9739*t8854;
  t12224 = -2.*t8918*t8947;
  t12250 = -1.*t8918*t12249;
  t12251 = -2.*t9739*t11279;
  t12253 = t12222 + t12224 + t12225 + t12250 + t12251 + t12252;
  t12258 = 2.*t8918*t9739;
  t12260 = t9739*t8814;
  t12261 = 2.*t8854*t8947;
  t12262 = t8854*t12249;
  t12264 = t12258 + t12259 + t12260 + t12261 + t12262 + t12263;
  t12532 = 3.2*t9081*t11306;
  t12534 = t12218 + t12489;
  t12535 = 3.2*t9306*t12534;
  t12495 = 3.2*t9220*t11565;
  t12496 = 3.2*t8888*t11646;
  t12497 = t12487 + t12495 + t12491 + t12496;
  t12541 = 3.2*t10189*t11306;
  t12542 = 3.2*t11565*t11306;
  t12543 = 3.2*t11374*t12301;
  t12544 = 3.2*t9522*t11477;
  t12545 = 3.2*t9522*t11646;
  t12546 = 3.2*t9522*t12330;
  t12547 = t12532 + t12541 + t12542 + t12535 + t12543 + t12544 + t12545 + t12546;
  t12344 = -2.*t8918*t11523;
  t12345 = -2.*t11520*t11279;
  t12346 = t12286 + t12225 + t12344 + t12298 + t12345 + t12252;
  t12349 = 2.*t8918*t11520;
  t12350 = 2.*t8854*t11523;
  t12351 = t12349 + t12259 + t12318 + t12350 + t12329 + t12263;
  t7179 = -0.5*var2[3]*t7157;
  t8339 = -0.5*var2[4]*t8336;
  t8342 = -2.88*t2056;
  t8391 = 3.2*t8377*t6509;
  t8395 = 3.2*t8393*t6871;
  t9105 = 3.2*t8888*t9081;
  t9307 = 3.2*t9220*t9306;
  t9358 = t8342 + t5063 + t8391 + t8395 + t8494 + t9105 + t9307;
  t11490 = -0.5*var2[5]*t11489;
  t11739 = -0.5*var2[6]*t11652;
  t11766 = -0.5*var2[2]*t7157;
  t12187 = -0.5*var2[2]*t8336;
  t12204 = -0.5*var2[2]*t11489;
  t12341 = -0.5*var2[2]*t11652;
  t12571 = 6.4*t6791*t8171;
  t12572 = 6.4*t6509*t12149;
  t12573 = 6.4*t7087*t8256;
  t12574 = 6.4*t6871*t12160;
  t12575 = t12571 + t12572 + t12573 + t12574;
  t12598 = 6.4*t10189*t11565;
  t12599 = 6.4*t9081*t12301;
  t12600 = 6.4*t11477*t11646;
  t12601 = 6.4*t9306*t12330;
  t12602 = t12598 + t12599 + t12600 + t12601;
  t12617 = 6.4*t6791*t6871;
  t12618 = 6.4*t6509*t7087;
  t12619 = t12617 + t12618;
  t12621 = 6.4*t6871*t8171;
  t12622 = 6.4*t6509*t8256;
  t12623 = t12621 + t12622;
  t12625 = 6.4*t10189*t9306;
  t12626 = 6.4*t9081*t11477;
  t12627 = t12625 + t12626;
  t12629 = 6.4*t9306*t11565;
  t12630 = 6.4*t9081*t11646;
  t12631 = t12629 + t12630;
  t12638 = t5799*t5085;
  t12639 = -0.24*t5066*t5085;
  t12640 = t12638 + t12639;
  t12642 = t5799*t5066;
  t12643 = Power(t5085,2);
  t12644 = 0.24*t12643;
  t12645 = t12642 + t12644;
  t12649 = -1.*t5799*t5085;
  t12650 = 0.24*t5066*t5085;
  t12651 = t12649 + t12650;
  t12652 = 3.2*t12651*t6791;
  t12653 = 3.2*t12640*t12149;
  t12654 = Power(t5066,2);
  t12655 = -0.24*t12654;
  t12656 = t12642 + t12655;
  t12657 = 3.2*t12656*t7087;
  t12658 = 3.2*t12645*t12160;
  t12659 = t12652 + t12653 + t12657 + t12658;
  t12677 = 3.2*t12645*t6791;
  t12678 = 3.2*t12640*t7087;
  t12679 = t12677 + t12678;
  t12681 = 3.2*t12656*t6509;
  t12682 = 3.2*t12651*t6871;
  t12683 = 3.2*t12645*t8171;
  t12684 = 3.2*t12640*t8256;
  t12685 = t12681 + t12682 + t12683 + t12684;
  t12703 = t8911*t8781;
  t12704 = -0.24*t8766*t8781;
  t12705 = t12703 + t12704;
  t12707 = t8911*t8766;
  t12708 = Power(t8781,2);
  t12709 = 0.24*t12708;
  t12710 = t12707 + t12709;
  t12714 = -1.*t8911*t8781;
  t12715 = 0.24*t8766*t8781;
  t12716 = t12714 + t12715;
  t12717 = 3.2*t12716*t10189;
  t12718 = 3.2*t12705*t12301;
  t12719 = Power(t8766,2);
  t12720 = -0.24*t12719;
  t12721 = t12707 + t12720;
  t12722 = 3.2*t12721*t11477;
  t12723 = 3.2*t12710*t12330;
  t12724 = t12717 + t12718 + t12722 + t12723;
  t12742 = 3.2*t12710*t10189;
  t12743 = 3.2*t12705*t11477;
  t12744 = t12742 + t12743;
  t12746 = 3.2*t12721*t9081;
  t12747 = 3.2*t12716*t9306;
  t12748 = 3.2*t12710*t11565;
  t12749 = 3.2*t12705*t11646;
  t12750 = t12746 + t12747 + t12748 + t12749;
  p_output1[0]=var2[2]*(t11490 + t11739 + t7179 + t8339 - 0.5*t9358*var2[2]);
  p_output1[1]=var2[2]*(t11766 - 0.5*(t11772 + t11823 + 3.2*t11828*t11874 + 3.2*t11877*t12051 + t5063 + 6.4*t11809*t6791 + 6.4*t11877*t7087)*var2[3] - 0.5*t12183*var2[4]);
  p_output1[2]=var2[2]*(t12187 - 0.5*t12183*var2[3] - 0.5*(t11772 + t11823 + 3.2*t11828*t12192 + 3.2*t11877*t12197 + 6.4*t11809*t8171 + 6.4*t11877*t8256)*var2[4]);
  p_output1[3]=var2[2]*(t12204 - 0.5*(t12212 + 6.4*t10189*t12215 + t12216 + 3.2*t12221*t12253 + 6.4*t11477*t12256 + 3.2*t12256*t12264 + t8494)*var2[5] - 0.5*t12334*var2[6]);
  p_output1[4]=var2[2]*(t12341 - 0.5*t12334*var2[5] - 0.5*(t12212 + 6.4*t11565*t12215 + t12216 + 6.4*t11646*t12256 + 3.2*t12221*t12346 + 3.2*t12256*t12351)*var2[6]);
  p_output1[5]=-1.*(t12370 + t12413 - 2.88*t3157 + 3.2*t5642*t6871 + 3.2*t6509*t6970 + 3.2*t11374*t9081 + 3.2*t9306*t9522)*var2[2] - 0.5*t12375*var2[3] - 0.5*t12384*var2[4] - 0.5*t12427*var2[5] - 0.5*t12431*var2[6];
  p_output1[6]=-0.5*t12375*var2[2];
  p_output1[7]=-0.5*t12384*var2[2];
  p_output1[8]=-0.5*t12427*var2[2];
  p_output1[9]=-0.5*t12431*var2[2];
  p_output1[10]=var2[2]*(-0.5*(t12448 + t12479 + 2.88*t3157 + 3.2*(t11827 + t12454)*t6871 + 3.2*t6509*(t11770 + t8392) + 3.2*t9081*(t12206 + t9195) + 3.2*(t12220 + t12482)*t9306)*var2[2] - 0.5*t12459*var2[3] - 0.5*t12468*var2[4] - 0.5*t12493*var2[5] - 0.5*t12497*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t12459*var2[2] - 0.5*(t12448 + t12502 + t12505 + 3.2*t12051*t5642 + 6.4*t6791*t6961 + 3.2*t11874*t6970 + 6.4*t5642*t7087)*var2[3] - 0.5*t12517*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t12468*var2[2] - 0.5*t12517*var2[3] - 0.5*(t12502 + t12505 + 3.2*t12197*t5642 + 3.2*t12192*t6970 + 6.4*t6961*t8171 + 6.4*t5642*t8256)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t12493*var2[2] - 0.5*(6.4*t10189*t11306 + 3.2*t11374*t12253 + t12479 + t12532 + t12535 + 6.4*t11477*t9522 + 3.2*t12264*t9522)*var2[5] - 0.5*t12547*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t12497*var2[2] - 0.5*t12547*var2[5] - 0.5*(6.4*t11306*t11565 + 3.2*t11374*t12346 + t12532 + t12535 + 6.4*t11646*t9522 + 3.2*t12351*t9522)*var2[6]);
  p_output1[15]=t11490 + t11739 + t7179 + t8339 - 1.*t9358*var2[2];
  p_output1[16]=t11766;
  p_output1[17]=t12187;
  p_output1[18]=t12204;
  p_output1[19]=t12341;
  p_output1[20]=var2[2]*(-0.5*(6.4*t11874*t6509 + 6.4*Power(t6791,2) + 6.4*t12051*t6871 + 6.4*Power(t7087,2))*var2[3] - 0.5*t12575*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t12575*var2[3] - 0.5*(6.4*t12192*t6509 + 6.4*t12197*t6871 + 6.4*Power(t8171,2) + 6.4*Power(t8256,2))*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t10189,2) + 6.4*Power(t11477,2) + 6.4*t12253*t9081 + 6.4*t12264*t9306)*var2[5] - 0.5*t12602*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t12602*var2[5] - 0.5*(6.4*Power(t11565,2) + 6.4*Power(t11646,2) + 6.4*t12346*t9081 + 6.4*t12351*t9306)*var2[6]);
  p_output1[24]=-0.5*t12619*var2[3] - 0.5*t12623*var2[4] - 0.5*t12627*var2[5] - 0.5*t12631*var2[6];
  p_output1[25]=-0.5*t12619*var2[2];
  p_output1[26]=-0.5*t12623*var2[2];
  p_output1[27]=-0.5*t12627*var2[2];
  p_output1[28]=-0.5*t12631*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t11874*t12640 + 3.2*t12051*t12645)*var2[3] - 0.5*t12659*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t12659*var2[3] - 0.5*(3.2*t12192*t12640 + 3.2*t12197*t12645 + 3.2*t12651*t6509 + 3.2*(0.24*t12654 - 1.*t5066*t5799)*t6871 + 6.4*t12651*t8171 + 6.4*t12656*t8256)*var2[4]);
  p_output1[31]=-0.5*t12679*var2[3] - 0.5*t12685*var2[4];
  p_output1[32]=-0.5*t12679*var2[2];
  p_output1[33]=-0.5*t12685*var2[2];
  p_output1[34]=var2[2]*(-0.384*t12051*var2[3] - 0.384*t12160*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t12160*var2[3] - 0.384*t12197*var2[4]);
  p_output1[36]=-0.384*t6791*var2[3] - 0.384*t8171*var2[4];
  p_output1[37]=-0.384*t6791*var2[2];
  p_output1[38]=-0.384*t8171*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t12253*t12705 + 3.2*t12264*t12710)*var2[5] - 0.5*t12724*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t12724*var2[5] - 0.5*(3.2*t12346*t12705 + 3.2*t12351*t12710 + 6.4*t11565*t12716 + 6.4*t11646*t12721 + 3.2*t12716*t9081 + 3.2*(0.24*t12719 - 1.*t8766*t8911)*t9306)*var2[6]);
  p_output1[41]=-0.5*t12744*var2[5] - 0.5*t12750*var2[6];
  p_output1[42]=-0.5*t12744*var2[2];
  p_output1[43]=-0.5*t12750*var2[2];
  p_output1[44]=var2[2]*(-0.384*t12264*var2[5] - 0.384*t12330*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t12330*var2[5] - 0.384*t12351*var2[6]);
  p_output1[46]=-0.384*t10189*var2[5] - 0.384*t11565*var2[6];
  p_output1[47]=-0.384*t10189*var2[2];
  p_output1[48]=-0.384*t11565*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
