/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:23 GMT-04:00
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
  double t6658;
  double t5857;
  double t6597;
  double t6659;
  double t5856;
  double t6886;
  double t8788;
  double t8821;
  double t9690;
  double t9953;
  double t10075;
  double t6645;
  double t6703;
  double t6706;
  double t13615;
  double t13651;
  double t13657;
  double t13736;
  double t13745;
  double t13752;
  double t10270;
  double t6829;
  double t6887;
  double t7239;
  double t8170;
  double t8259;
  double t8751;
  double t10926;
  double t11338;
  double t11559;
  double t11607;
  double t13663;
  double t13664;
  double t13857;
  double t13862;
  double t13866;
  double t13868;
  double t13873;
  double t13876;
  double t13877;
  double t13890;
  double t13891;
  double t13921;
  double t13922;
  double t13930;
  double t13932;
  double t13935;
  double t13937;
  double t13942;
  double t13943;
  double t13944;
  double t13951;
  double t13952;
  double t10633;
  double t10735;
  double t10820;
  double t13797;
  double t13798;
  double t13799;
  double t13975;
  double t13976;
  double t13667;
  double t13728;
  double t13729;
  double t13783;
  double t13784;
  double t13785;
  double t13881;
  double t13956;
  double t13957;
  double t13958;
  double t13931;
  double t13938;
  double t13939;
  double t13946;
  double t13950;
  double t13945;
  double t13953;
  double t13954;
  double t14010;
  double t14011;
  double t13961;
  double t13963;
  double t13960;
  double t13962;
  double t13969;
  double t14022;
  double t14023;
  double t14024;
  double t13977;
  double t13979;
  double t13983;
  double t13990;
  double t13991;
  double t13992;
  double t13994;
  double t13995;
  double t13996;
  double t13997;
  double t13998;
  double t13999;
  double t14000;
  double t14001;
  double t14002;
  double t14003;
  double t14004;
  double t14005;
  double t14006;
  double t14007;
  double t14008;
  double t14009;
  double t14017;
  double t14020;
  double t14025;
  double t14028;
  double t14038;
  double t14039;
  double t14041;
  double t14042;
  double t14088;
  double t14089;
  double t14090;
  double t14091;
  double t14092;
  double t14072;
  double t14073;
  double t14074;
  double t14076;
  double t14077;
  double t14078;
  double t14079;
  double t14080;
  double t14082;
  double t14083;
  double t14084;
  double t14085;
  double t14086;
  double t13880;
  double t13882;
  double t13863;
  double t13864;
  double t13839;
  double t13865;
  double t13878;
  double t13879;
  double t13889;
  double t13896;
  double t13903;
  double t14012;
  double t14013;
  double t14014;
  double t14021;
  double t14026;
  double t14027;
  double t14029;
  double t14031;
  double t14032;
  double t14033;
  double t14036;
  double t14037;
  double t14040;
  double t14043;
  double t14122;
  double t14050;
  double t14051;
  double t14052;
  double t14124;
  double t14126;
  double t14129;
  double t14130;
  double t14131;
  double t14132;
  double t14133;
  double t14134;
  double t14135;
  double t14136;
  double t14137;
  double t14138;
  double t14141;
  double t14059;
  double t14060;
  double t14061;
  double t14064;
  double t14065;
  double t14066;
  double t14081;
  double t13940;
  double t13955;
  double t13959;
  double t13970;
  double t13971;
  double t13665;
  double t13753;
  double t13795;
  double t13831;
  double t13832;
  double t13833;
  double t14164;
  double t13972;
  double t14114;
  double t14115;
  double t14116;
  double t14117;
  double t14118;
  double t14015;
  double t14016;
  double t14030;
  double t14034;
  double t14035;
  double t14044;
  double t14045;
  double t14139;
  double t14140;
  double t14142;
  double t14143;
  double t14144;
  double t14145;
  double t14146;
  double t14058;
  double t14062;
  double t14063;
  double t14067;
  double t14068;
  double t14156;
  double t14157;
  double t14158;
  double t14159;
  double t14160;
  double t14087;
  double t14166;
  double t14218;
  double t14219;
  double t14220;
  double t14221;
  double t14222;
  double t14214;
  double t14215;
  double t14216;
  double t14101;
  double t14102;
  double t14103;
  double t14104;
  double t14105;
  double t14123;
  double t14125;
  double t14127;
  double t13978;
  double t13984;
  double t13988;
  double t14177;
  double t14178;
  double t14179;
  double t14180;
  double t14181;
  double t14150;
  double t14151;
  double t14152;
  double t14153;
  double t14154;
  double t14049;
  double t14053;
  double t14054;
  double t14055;
  double t14056;
  double t14194;
  double t14195;
  double t14196;
  double t14197;
  double t14198;
  double t14199;
  double t14200;
  double t14093;
  double t14167;
  double t14223;
  double t14253;
  double t14254;
  double t14255;
  double t14267;
  double t14268;
  double t8752;
  t6658 = Cos(var1[5]);
  t5857 = Cos(var1[6]);
  t6597 = Sin(var1[5]);
  t6659 = Sin(var1[6]);
  t5856 = Sin(var1[2]);
  t6886 = Cos(var1[2]);
  t8788 = -1.*t5857;
  t8821 = 1. + t8788;
  t9690 = 0.4*t8821;
  t9953 = 0.64*t5857;
  t10075 = t9690 + t9953;
  t6645 = -1.*t5857*t6597;
  t6703 = -1.*t6658*t6659;
  t6706 = t6645 + t6703;
  t13615 = t6658*t5857;
  t13651 = -1.*t6597*t6659;
  t13657 = t13615 + t13651;
  t13736 = t6886*t6706;
  t13745 = -1.*t5856*t13657;
  t13752 = t13736 + t13745;
  t10270 = t10075*t5857;
  t6829 = -1.*t5856*t6706;
  t6887 = -1.*t6658*t5857;
  t7239 = t6597*t6659;
  t8170 = t6887 + t7239;
  t8259 = t6886*t8170;
  t8751 = t6829 + t8259;
  t10926 = t5857*t6597;
  t11338 = t6658*t6659;
  t11559 = t10926 + t11338;
  t11607 = -1.*t5856*t11559;
  t13663 = t6886*t13657;
  t13664 = t11607 + t13663;
  t13857 = t5856*t6706;
  t13862 = t13857 + t13663;
  t13866 = -1.*t6886*t13657;
  t13868 = t6829 + t13866;
  t13873 = t6886*t11559;
  t13876 = t5856*t13657;
  t13877 = t13873 + t13876;
  t13890 = t5856*t8170;
  t13891 = t13736 + t13890;
  t13921 = t10075*t6597;
  t13922 = 0.24*t6658*t6659;
  t13930 = t13921 + t13922;
  t13932 = t6658*t10075;
  t13935 = -0.24*t6597*t6659;
  t13937 = t13932 + t13935;
  t13942 = -0.24*t5857*t6597;
  t13943 = -0.24*t6658*t6659;
  t13944 = t13942 + t13943;
  t13951 = 0.24*t6658*t5857;
  t13952 = t13951 + t13935;
  t10633 = Power(t5857,2);
  t10735 = -0.24*t10633;
  t10820 = t10270 + t10735;
  t13797 = Power(t6659,2);
  t13798 = 0.24*t13797;
  t13799 = t10270 + t13798;
  t13975 = t5856*t11559;
  t13976 = t13975 + t8259;
  t13667 = t10075*t6659;
  t13728 = -0.24*t5857*t6659;
  t13729 = t13667 + t13728;
  t13783 = -1.*t10075*t6659;
  t13784 = 0.24*t5857*t6659;
  t13785 = t13783 + t13784;
  t13881 = -1.*t5856*t8170;
  t13956 = t13930*t11559;
  t13957 = t13657*t13937;
  t13958 = t13956 + t13957;
  t13931 = -1.*t13930*t13657;
  t13938 = -1.*t6706*t13937;
  t13939 = t13931 + t13938;
  t13946 = t13930*t13657;
  t13950 = t6706*t13937;
  t13945 = t13944*t13657;
  t13953 = t11559*t13952;
  t13954 = t13945 + t13946 + t13950 + t13953;
  t14010 = -1.*t10075*t6597;
  t14011 = t14010 + t13943;
  t13961 = -1.*t6706*t13930;
  t13963 = -1.*t13937*t8170;
  t13960 = -1.*t6706*t13944;
  t13962 = -1.*t13657*t13952;
  t13969 = t13960 + t13961 + t13962 + t13963;
  t14022 = -0.24*t6658*t5857;
  t14023 = 0.24*t6597*t6659;
  t14024 = t14022 + t14023;
  t13977 = -0.384*var2[6]*t13976;
  t13979 = 3.2*t13799*t13976;
  t13983 = 3.2*t13729*t13891;
  t13990 = 6.4*t13862*t13752;
  t13991 = 3.2*t13877*t8751;
  t13992 = 3.2*t13752*t13976;
  t13994 = t13873 + t13881;
  t13995 = 3.2*t13862*t13994;
  t13996 = 3.2*t13664*t13891;
  t13997 = 6.4*t8751*t13891;
  t13998 = t13990 + t13991 + t13992 + t13995 + t13996 + t13997;
  t13999 = -0.5*var2[1]*t13998;
  t14000 = Power(t13862,2);
  t14001 = 6.4*t14000;
  t14002 = 6.4*t13862*t13976;
  t14003 = 6.4*t13877*t13891;
  t14004 = Power(t13891,2);
  t14005 = 6.4*t14004;
  t14006 = t14001 + t14002 + t14003 + t14005;
  t14007 = -0.5*var2[0]*t14006;
  t14008 = 3.2*t13958*t13976;
  t14009 = 3.2*t13939*t13891;
  t14017 = -1.*t13944*t13657;
  t14020 = -1.*t11559*t13937;
  t14025 = -1.*t6706*t14024;
  t14028 = -1.*t13930*t8170;
  t14038 = t6706*t13930;
  t14039 = t13944*t11559;
  t14041 = t13657*t14024;
  t14042 = t13937*t8170;
  t14088 = 3.2*t13729*t13862;
  t14089 = 3.2*t13785*t13862;
  t14090 = 3.2*t10820*t13877;
  t14091 = 3.2*t13799*t13891;
  t14092 = t14088 + t14089 + t14090 + t14091;
  t14072 = 6.4*t13862*t13877;
  t14073 = 6.4*t13862*t13891;
  t14074 = t14072 + t14073;
  t14076 = 3.2*t13862*t13664;
  t14077 = 3.2*t13752*t13877;
  t14078 = 3.2*t13862*t8751;
  t14079 = 3.2*t13752*t13891;
  t14080 = t14076 + t14077 + t14078 + t14079;
  t14082 = 3.2*t13862*t13939;
  t14083 = 3.2*t13862*t13954;
  t14084 = 3.2*t13958*t13891;
  t14085 = 3.2*t13877*t13969;
  t14086 = t14082 + t14083 + t14084 + t14085;
  t13880 = -1.*t6886*t6706;
  t13882 = t13880 + t13881;
  t13863 = -1.*t6886*t11559;
  t13864 = t13863 + t13745;
  t13839 = 6.4*t13664*t13752;
  t13865 = 3.2*t13862*t13864;
  t13878 = 3.2*t13868*t13877;
  t13879 = 6.4*t13752*t8751;
  t13889 = 3.2*t13862*t13882;
  t13896 = 3.2*t13868*t13891;
  t13903 = t13839 + t13865 + t13878 + t13879 + t13889 + t13896;
  t14012 = t14011*t13657;
  t14013 = t11559*t13937;
  t14014 = t14012 + t13946 + t13950 + t14013;
  t14021 = -1.*t6706*t13952;
  t14026 = -1.*t14011*t8170;
  t14027 = -1.*t13944*t8170;
  t14029 = t14017 + t13938 + t14020 + t14021 + t14025 + t14026 + t14027 + t14028;
  t14031 = -1.*t6706*t14011;
  t14032 = -1.*t13657*t13937;
  t14033 = t14031 + t13961 + t14032 + t13963;
  t14036 = t6706*t14011;
  t14037 = t6706*t13944;
  t14040 = t13657*t13952;
  t14043 = t14036 + t14037 + t14038 + t14039 + t13957 + t14040 + t14041 + t14042;
  t14122 = -0.384*var2[6]*t13994;
  t14050 = -1.*t10075*t5857;
  t14051 = 0.24*t10633;
  t14052 = t14050 + t14051;
  t14124 = 3.2*t13729*t8751;
  t14126 = 3.2*t13799*t13994;
  t14129 = Power(t13752,2);
  t14130 = 6.4*t14129;
  t14131 = 6.4*t13664*t8751;
  t14132 = Power(t8751,2);
  t14133 = 6.4*t14132;
  t14134 = 6.4*t13752*t13994;
  t14135 = t14130 + t14131 + t14133 + t14134;
  t14136 = -0.5*var2[1]*t14135;
  t14137 = -0.5*var2[0]*t13998;
  t14138 = 3.2*t13939*t8751;
  t14141 = 3.2*t13958*t13994;
  t14059 = -2.*t6706*t13952;
  t14060 = -2.*t13944*t8170;
  t14061 = t14017 + t14020 + t14059 + t14025 + t14060 + t14028;
  t14064 = 2.*t6706*t13944;
  t14065 = 2.*t13657*t13952;
  t14066 = t14064 + t14038 + t14039 + t14065 + t14041 + t14042;
  t14081 = -0.5*var2[6]*t14080;
  t13940 = 3.2*t13752*t13939;
  t13955 = 3.2*t13752*t13954;
  t13959 = 3.2*t13958*t8751;
  t13970 = 3.2*t13664*t13969;
  t13971 = t13940 + t13955 + t13959 + t13970;
  t13665 = 3.2*t10820*t13664;
  t13753 = 3.2*t13729*t13752;
  t13795 = 3.2*t13785*t13752;
  t13831 = 3.2*t13799*t8751;
  t13832 = t13665 + t13753 + t13795 + t13831;
  t13833 = -0.5*var2[5]*t13832;
  t14164 = t13839 + t13879;
  t13972 = -0.5*var2[2]*t13971;
  t14114 = 3.2*t13868*t13939;
  t14115 = 3.2*t13868*t13954;
  t14116 = 3.2*t13958*t13882;
  t14117 = 3.2*t13864*t13969;
  t14118 = t14114 + t14115 + t14116 + t14117;
  t14015 = 3.2*t14014*t13891;
  t14016 = 3.2*t13954*t13891;
  t14030 = 3.2*t13877*t14029;
  t14034 = 3.2*t13862*t14033;
  t14035 = 3.2*t13862*t13969;
  t14044 = 3.2*t13862*t14043;
  t14045 = t14008 + t14009 + t14015 + t14016 + t14030 + t14034 + t14035 + t14044;
  t14139 = 3.2*t14014*t8751;
  t14140 = 3.2*t13954*t8751;
  t14142 = 3.2*t13664*t14029;
  t14143 = 3.2*t13752*t14033;
  t14144 = 3.2*t13752*t13969;
  t14145 = 3.2*t13752*t14043;
  t14146 = t14138 + t14139 + t14140 + t14141 + t14142 + t14143 + t14144 + t14145;
  t14058 = 6.4*t13954*t13891;
  t14062 = 3.2*t13877*t14061;
  t14063 = 6.4*t13862*t13969;
  t14067 = 3.2*t13862*t14066;
  t14068 = t14008 + t14009 + t14058 + t14062 + t14063 + t14067;
  t14156 = 6.4*t13954*t8751;
  t14157 = 3.2*t13664*t14061;
  t14158 = 6.4*t13752*t13969;
  t14159 = 3.2*t13752*t14066;
  t14160 = t14138 + t14156 + t14141 + t14157 + t14158 + t14159;
  t14087 = -0.5*var2[6]*t14086;
  t14166 = -0.5*var2[6]*t13971;
  t14218 = 3.2*t10820*t13939;
  t14219 = 3.2*t13785*t13958;
  t14220 = 3.2*t13799*t13954;
  t14221 = 3.2*t13729*t13969;
  t14222 = t14218 + t14219 + t14220 + t14221;
  t14214 = 6.4*t13958*t13954;
  t14215 = 6.4*t13939*t13969;
  t14216 = t14214 + t14215;
  t14101 = 3.2*t13729*t13868;
  t14102 = 3.2*t13785*t13868;
  t14103 = 3.2*t10820*t13864;
  t14104 = 3.2*t13799*t13882;
  t14105 = t14101 + t14102 + t14103 + t14104;
  t14123 = 3.2*t10820*t13752;
  t14125 = 3.2*t13785*t8751;
  t14127 = t14123 + t14124 + t14125 + t14126;
  t13978 = 3.2*t10820*t13862;
  t13984 = 3.2*t13785*t13891;
  t13988 = t13978 + t13979 + t13983 + t13984;
  t14177 = 3.2*t13785*t14014;
  t14178 = 3.2*t13729*t14029;
  t14179 = 3.2*t10820*t14033;
  t14180 = 3.2*t13799*t14043;
  t14181 = t14177 + t14178 + t14179 + t14180;
  t14150 = 3.2*t13785*t13664;
  t14151 = 6.4*t10820*t13752;
  t14152 = 3.2*t14052*t13752;
  t14153 = 6.4*t13785*t8751;
  t14154 = t14150 + t14151 + t14152 + t14124 + t14153 + t14126;
  t14049 = 6.4*t10820*t13862;
  t14053 = 3.2*t14052*t13862;
  t14054 = 3.2*t13785*t13877;
  t14055 = 6.4*t13785*t13891;
  t14056 = t14049 + t14053 + t14054 + t13979 + t13983 + t14055;
  t14194 = 3.2*t13785*t13939;
  t14195 = 3.2*t14052*t13958;
  t14196 = 6.4*t13785*t13954;
  t14197 = 3.2*t13729*t14061;
  t14198 = 6.4*t10820*t13969;
  t14199 = 3.2*t13799*t14066;
  t14200 = t14194 + t14195 + t14196 + t14197 + t14198 + t14199;
  t14093 = -0.5*var2[6]*t14092;
  t14167 = -0.5*var2[6]*t13832;
  t14223 = -0.5*var2[6]*t14222;
  t14253 = 6.4*t10820*t13729;
  t14254 = 6.4*t13785*t13799;
  t14255 = t14253 + t14254;
  t14267 = -0.384*var2[0]*t13976;
  t14268 = -0.384*var2[1]*t13994;
  t8752 = -0.384*var2[6]*t8751;
  p_output1[0]=(t13833 + t13972 + t8752 - 0.5*(6.4*t13664*t13862 + 6.4*t13752*t13877 + 6.4*t13752*t13891 + 6.4*t13862*t8751)*var2[0] - 0.5*t13903*var2[1])*var2[6];
  p_output1[1]=(t13977 + t13999 + t14007 - 0.5*t14045*var2[2] - 0.5*t13988*var2[5])*var2[6];
  p_output1[2]=(t13977 + t13999 + t14007 - 0.5*t14068*var2[2] - 0.5*t14056*var2[5])*var2[6];
  p_output1[3]=-0.5*t14074*var2[6];
  p_output1[4]=t14081;
  p_output1[5]=t14087;
  p_output1[6]=t14093;
  p_output1[7]=-0.5*t14074*var2[0] - 0.5*t14080*var2[1] - 0.5*t14086*var2[2] - 0.5*t14092*var2[5] - 0.768*t13891*var2[6];
  p_output1[8]=var2[6]*(-0.5*t13903*var2[0] - 0.5*(6.4*t13752*t13864 + 6.4*t13664*t13868 + 6.4*t13752*t13882 + 6.4*t13868*t8751)*var2[1] - 0.5*t14118*var2[2] - 0.5*t14105*var2[5] - 0.384*t13882*var2[6]);
  p_output1[9]=(t14122 + t14136 + t14137 - 0.5*t14146*var2[2] - 0.5*t14127*var2[5])*var2[6];
  p_output1[10]=(t14122 + t14136 + t14137 - 0.5*t14160*var2[2] - 0.5*t14154*var2[5])*var2[6];
  p_output1[11]=t14081;
  p_output1[12]=-0.5*t14164*var2[6];
  p_output1[13]=t14166;
  p_output1[14]=t14167;
  p_output1[15]=t13833 + t13972 - 0.5*t14080*var2[0] - 0.5*t14164*var2[1] - 0.768*t8751*var2[6];
  p_output1[16]=(-0.5*t13971*var2[0] - 0.5*t14118*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t14045*var2[0] - 0.5*t14146*var2[1] - 0.5*(6.4*t13954*t14014 + 6.4*t13939*t14029 + 6.4*t13969*t14033 + 6.4*t13958*t14043)*var2[2] - 0.5*t14181*var2[5] - 0.384*t14043*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t14068*var2[0] - 0.5*t14160*var2[1] - 0.5*(6.4*Power(t13954,2) + 6.4*Power(t13969,2) + 6.4*t13939*t14061 + 6.4*t13958*t14066)*var2[2] - 0.5*t14200*var2[5] - 0.384*t14066*var2[6]);
  p_output1[19]=t14087;
  p_output1[20]=t14166;
  p_output1[21]=-0.5*t14216*var2[6];
  p_output1[22]=t14223;
  p_output1[23]=-0.5*t14086*var2[0] - 0.5*t13971*var2[1] - 0.5*t14216*var2[2] - 0.5*t14222*var2[5] - 0.768*t13954*var2[6];
  p_output1[24]=(-0.5*t13832*var2[0] - 0.5*t14105*var2[1])*var2[6];
  p_output1[25]=(-0.5*t13988*var2[0] - 0.5*t14127*var2[1] - 0.5*t14181*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t14056*var2[0] - 0.5*t14154*var2[1] - 0.5*t14200*var2[2] - 0.5*(6.4*Power(t10820,2) + 6.4*t13729*t13785 + 6.4*Power(t13785,2) + 6.4*t13799*t14052)*var2[5] - 0.384*t14052*var2[6]);
  p_output1[27]=t14093;
  p_output1[28]=t14167;
  p_output1[29]=t14223;
  p_output1[30]=-0.5*t14255*var2[6];
  p_output1[31]=-0.5*t14092*var2[0] - 0.5*t13832*var2[1] - 0.5*t14222*var2[2] - 0.5*t14255*var2[5] - 0.768*t13785*var2[6];
  p_output1[32]=(-0.384*t8751*var2[0] - 0.384*t13882*var2[1])*var2[6];
  p_output1[33]=(t14267 + t14268 - 0.384*t14043*var2[2])*var2[6];
  p_output1[34]=(t14267 + t14268 - 0.384*t14066*var2[2] - 0.384*t14052*var2[5])*var2[6];
  p_output1[35]=-0.384*t13891*var2[6];
  p_output1[36]=t8752;
  p_output1[37]=-0.384*t13954*var2[6];
  p_output1[38]=-0.384*t13785*var2[6];
  p_output1[39]=-0.384*t13891*var2[0] - 0.384*t8751*var2[1] - 0.384*t13954*var2[2] - 0.384*t13785*var2[5];
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

#include "J_Ce2_vec7_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
