/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:09 GMT-04:00
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
  double t8305;
  double t6919;
  double t6920;
  double t9196;
  double t11173;
  double t6424;
  double t11176;
  double t11177;
  double t11178;
  double t11186;
  double t11187;
  double t11188;
  double t11189;
  double t11190;
  double t7233;
  double t9410;
  double t11168;
  double t11172;
  double t11179;
  double t11180;
  double t11211;
  double t11208;
  double t11209;
  double t11212;
  double t11216;
  double t11217;
  double t11218;
  double t11226;
  double t11227;
  double t11228;
  double t11229;
  double t11230;
  double t11210;
  double t11213;
  double t11214;
  double t11215;
  double t11219;
  double t11220;
  double t11182;
  double t11183;
  double t11184;
  double t11248;
  double t11249;
  double t11250;
  double t11198;
  double t11194;
  double t11195;
  double t11196;
  double t11197;
  double t11199;
  double t11222;
  double t11223;
  double t11224;
  double t11263;
  double t11264;
  double t11265;
  double t11238;
  double t11234;
  double t11235;
  double t11236;
  double t11237;
  double t11239;
  double t11252;
  double t11253;
  double t11254;
  double t11256;
  double t11257;
  double t11259;
  double t11260;
  double t11261;
  double t11267;
  double t11268;
  double t11269;
  double t11271;
  double t11272;
  double t11274;
  double t11275;
  double t11276;
  double t11329;
  double t11330;
  double t11331;
  double t11333;
  double t11334;
  double t11335;
  double t11349;
  double t11350;
  double t11351;
  double t11353;
  double t11354;
  double t11355;
  double t11185;
  double t11191;
  double t11192;
  double t11193;
  double t11201;
  double t11202;
  double t11203;
  double t11204;
  double t11366;
  double t11367;
  double t11368;
  double t11369;
  double t11370;
  double t11251;
  double t11255;
  double t11280;
  double t11281;
  double t11282;
  double t11283;
  double t11284;
  double t11285;
  double t11286;
  double t11287;
  double t11288;
  double t11289;
  double t11323;
  double t11324;
  double t11325;
  double t11326;
  double t11327;
  double t11328;
  double t11332;
  double t11336;
  double t11337;
  double t11339;
  double t11340;
  double t11341;
  double t11389;
  double t11390;
  double t11391;
  double t11371;
  double t11372;
  double t11373;
  double t11376;
  double t11377;
  double t11380;
  double t11381;
  double t11382;
  double t11383;
  double t11384;
  double t11385;
  double t11388;
  double t11393;
  double t11394;
  double t11398;
  double t11422;
  double t11423;
  double t11400;
  double t11425;
  double t11426;
  double t11402;
  double t11225;
  double t11231;
  double t11232;
  double t11233;
  double t11241;
  double t11242;
  double t11243;
  double t11244;
  double t11437;
  double t11438;
  double t11439;
  double t11440;
  double t11441;
  double t11266;
  double t11270;
  double t11300;
  double t11301;
  double t11302;
  double t11303;
  double t11304;
  double t11305;
  double t11306;
  double t11307;
  double t11308;
  double t11309;
  double t11343;
  double t11344;
  double t11345;
  double t11346;
  double t11347;
  double t11348;
  double t11352;
  double t11356;
  double t11357;
  double t11359;
  double t11360;
  double t11361;
  double t11460;
  double t11461;
  double t11462;
  double t11442;
  double t11443;
  double t11444;
  double t11447;
  double t11448;
  double t11451;
  double t11452;
  double t11453;
  double t11454;
  double t11455;
  double t11456;
  double t11459;
  double t11464;
  double t11465;
  double t11469;
  double t11493;
  double t11494;
  double t11471;
  double t11496;
  double t11497;
  double t11473;
  double t11290;
  double t11291;
  double t11297;
  double t11298;
  double t11310;
  double t11311;
  double t11317;
  double t11318;
  double t11292;
  double t11293;
  double t11294;
  double t11295;
  double t11296;
  double t11299;
  double t11312;
  double t11313;
  double t11314;
  double t11315;
  double t11316;
  double t11319;
  double t11320;
  double t11553;
  double t11564;
  double t11386;
  double t11574;
  double t11392;
  double t11395;
  double t11396;
  double t11399;
  double t11401;
  double t11403;
  double t11583;
  double t11412;
  double t11413;
  double t11414;
  double t11584;
  double t11408;
  double t11409;
  double t11410;
  double t11585;
  double t11588;
  double t11589;
  double t11420;
  double t11593;
  double t11424;
  double t11427;
  double t11428;
  double t11595;
  double t11430;
  double t11431;
  double t11432;
  double t11559;
  double t11567;
  double t11457;
  double t11577;
  double t11463;
  double t11466;
  double t11467;
  double t11470;
  double t11472;
  double t11474;
  double t11612;
  double t11483;
  double t11484;
  double t11485;
  double t11613;
  double t11479;
  double t11480;
  double t11481;
  double t11614;
  double t11617;
  double t11618;
  double t11491;
  double t11622;
  double t11495;
  double t11498;
  double t11499;
  double t11624;
  double t11501;
  double t11502;
  double t11503;
  double t11525;
  double t11526;
  double t11527;
  double t11528;
  double t11529;
  double t11530;
  double t11531;
  double t11532;
  double t11533;
  double t11508;
  double t11509;
  double t11510;
  double t11511;
  double t11322;
  double t11338;
  double t11342;
  double t11358;
  double t11362;
  double t11363;
  double t11200;
  double t11205;
  double t11206;
  double t11240;
  double t11245;
  double t11246;
  double t11573;
  double t11575;
  double t11576;
  double t11578;
  double t11579;
  double t11580;
  double t11594;
  double t11596;
  double t11597;
  double t11397;
  double t11404;
  double t11405;
  double t11607;
  double t11608;
  double t11609;
  double t11429;
  double t11433;
  double t11434;
  double t11623;
  double t11625;
  double t11626;
  double t11468;
  double t11475;
  double t11476;
  double t11636;
  double t11637;
  double t11638;
  double t11500;
  double t11504;
  double t11505;
  double t11534;
  double t11535;
  double t11536;
  double t11537;
  double t11538;
  double t11539;
  double t11540;
  double t11541;
  double t11554;
  double t11555;
  double t11556;
  double t11586;
  double t11374;
  double t11648;
  double t11649;
  double t11650;
  double t11600;
  double t11601;
  double t11602;
  double t11411;
  double t11415;
  double t11416;
  double t11660;
  double t11661;
  double t11662;
  double t11663;
  double t11664;
  double t11542;
  double t11543;
  double t11544;
  double t11545;
  double t11712;
  double t11713;
  double t11714;
  double t11715;
  double t11751;
  double t11752;
  double t11546;
  double t11642;
  double t11716;
  double t11717;
  double t11745;
  double t11746;
  double t11560;
  double t11561;
  double t11562;
  double t11615;
  double t11445;
  double t11674;
  double t11675;
  double t11676;
  double t11629;
  double t11630;
  double t11631;
  double t11482;
  double t11486;
  double t11487;
  double t11686;
  double t11687;
  double t11688;
  double t11689;
  double t11690;
  double t11547;
  double t11548;
  double t11549;
  double t11550;
  double t11718;
  double t11719;
  double t11720;
  double t11721;
  double t11784;
  double t11785;
  double t11551;
  double t11643;
  double t11722;
  double t11723;
  double t11778;
  double t11779;
  t8305 = Cos(var1[3]);
  t6919 = Cos(var1[4]);
  t6920 = Sin(var1[3]);
  t9196 = Sin(var1[4]);
  t11173 = Sin(var1[2]);
  t6424 = Cos(var1[2]);
  t11176 = t8305*t6919;
  t11177 = -1.*t6920*t9196;
  t11178 = t11176 + t11177;
  t11186 = -1.*t6919;
  t11187 = 1. + t11186;
  t11188 = 0.4*t11187;
  t11189 = 0.64*t6919;
  t11190 = t11188 + t11189;
  t7233 = -1.*t6919*t6920;
  t9410 = -1.*t8305*t9196;
  t11168 = t7233 + t9410;
  t11172 = t6424*t11168;
  t11179 = -1.*t11173*t11178;
  t11180 = t11172 + t11179;
  t11211 = Cos(var1[5]);
  t11208 = Cos(var1[6]);
  t11209 = Sin(var1[5]);
  t11212 = Sin(var1[6]);
  t11216 = t11211*t11208;
  t11217 = -1.*t11209*t11212;
  t11218 = t11216 + t11217;
  t11226 = -1.*t11208;
  t11227 = 1. + t11226;
  t11228 = 0.4*t11227;
  t11229 = 0.64*t11208;
  t11230 = t11228 + t11229;
  t11210 = -1.*t11208*t11209;
  t11213 = -1.*t11211*t11212;
  t11214 = t11210 + t11213;
  t11215 = t6424*t11214;
  t11219 = -1.*t11173*t11218;
  t11220 = t11215 + t11219;
  t11182 = -1.*t8305*t11173;
  t11183 = -1.*t6424*t6920;
  t11184 = t11182 + t11183;
  t11248 = t6424*t8305;
  t11249 = -1.*t11173*t6920;
  t11250 = t11248 + t11249;
  t11198 = t6424*t11178;
  t11194 = t6919*t6920;
  t11195 = t8305*t9196;
  t11196 = t11194 + t11195;
  t11197 = -1.*t11173*t11196;
  t11199 = t11197 + t11198;
  t11222 = -1.*t11211*t11173;
  t11223 = -1.*t6424*t11209;
  t11224 = t11222 + t11223;
  t11263 = t6424*t11211;
  t11264 = -1.*t11173*t11209;
  t11265 = t11263 + t11264;
  t11238 = t6424*t11218;
  t11234 = t11208*t11209;
  t11235 = t11211*t11212;
  t11236 = t11234 + t11235;
  t11237 = -1.*t11173*t11236;
  t11239 = t11237 + t11238;
  t11252 = t8305*t11173;
  t11253 = t6424*t6920;
  t11254 = t11252 + t11253;
  t11256 = t11173*t11168;
  t11257 = t11256 + t11198;
  t11259 = t6424*t11196;
  t11260 = t11173*t11178;
  t11261 = t11259 + t11260;
  t11267 = t11211*t11173;
  t11268 = t6424*t11209;
  t11269 = t11267 + t11268;
  t11271 = t11173*t11214;
  t11272 = t11271 + t11238;
  t11274 = t6424*t11236;
  t11275 = t11173*t11218;
  t11276 = t11274 + t11275;
  t11329 = t11190*t6920;
  t11330 = 0.24*t8305*t9196;
  t11331 = t11329 + t11330;
  t11333 = t8305*t11190;
  t11334 = -0.24*t6920*t9196;
  t11335 = t11333 + t11334;
  t11349 = t11230*t11209;
  t11350 = 0.24*t11211*t11212;
  t11351 = t11349 + t11350;
  t11353 = t11211*t11230;
  t11354 = -0.24*t11209*t11212;
  t11355 = t11353 + t11354;
  t11185 = -0.748*t11184;
  t11191 = t11190*t9196;
  t11192 = -0.24*t6919*t9196;
  t11193 = t11191 + t11192;
  t11201 = t11190*t6919;
  t11202 = Power(t9196,2);
  t11203 = 0.24*t11202;
  t11204 = t11201 + t11203;
  t11366 = -1.*t8305*t6919;
  t11367 = t6920*t9196;
  t11368 = t11366 + t11367;
  t11369 = t11173*t11368;
  t11370 = t11172 + t11369;
  t11251 = -13.6*t11184*t11250;
  t11255 = -13.6*t11254*t11250;
  t11280 = Power(t11184,2);
  t11281 = -6.8*t11280;
  t11282 = -6.8*t11184*t11254;
  t11283 = Power(t11250,2);
  t11284 = -6.8*t11283;
  t11285 = -1.*t6424*t8305;
  t11286 = t11173*t6920;
  t11287 = t11285 + t11286;
  t11288 = -6.8*t11250*t11287;
  t11289 = -1.*t11173*t11168;
  t11323 = Power(t8305,2);
  t11324 = 0.11*t11323;
  t11325 = Power(t6920,2);
  t11326 = 0.11*t11325;
  t11327 = t11324 + t11326;
  t11328 = -6.8*t11184*t11327;
  t11332 = -1.*t11331*t11178;
  t11336 = -1.*t11168*t11335;
  t11337 = t11332 + t11336;
  t11339 = t11331*t11196;
  t11340 = t11178*t11335;
  t11341 = t11339 + t11340;
  t11389 = -1.*t11190*t6920;
  t11390 = -0.24*t8305*t9196;
  t11391 = t11389 + t11390;
  t11371 = -0.768*var2[4]*t11370;
  t11372 = -3.2*t11193*t11257;
  t11373 = -3.2*t11204*t11370;
  t11376 = -6.4*t11257*t11261;
  t11377 = -6.4*t11257*t11370;
  t11380 = -3.2*t11257*t11199;
  t11381 = -3.2*t11180*t11261;
  t11382 = t6424*t11368;
  t11383 = t11289 + t11382;
  t11384 = -3.2*t11257*t11383;
  t11385 = -3.2*t11180*t11370;
  t11388 = -3.2*t11257*t11337;
  t11393 = t11331*t11178;
  t11394 = t11168*t11335;
  t11398 = -3.2*t11341*t11370;
  t11422 = -0.24*t6919*t6920;
  t11423 = t11422 + t11390;
  t11400 = -1.*t11168*t11331;
  t11425 = 0.24*t8305*t6919;
  t11426 = t11425 + t11334;
  t11402 = -1.*t11335*t11368;
  t11225 = -0.748*t11224;
  t11231 = t11230*t11212;
  t11232 = -0.24*t11208*t11212;
  t11233 = t11231 + t11232;
  t11241 = t11230*t11208;
  t11242 = Power(t11212,2);
  t11243 = 0.24*t11242;
  t11244 = t11241 + t11243;
  t11437 = -1.*t11211*t11208;
  t11438 = t11209*t11212;
  t11439 = t11437 + t11438;
  t11440 = t11173*t11439;
  t11441 = t11215 + t11440;
  t11266 = -13.6*t11224*t11265;
  t11270 = -13.6*t11269*t11265;
  t11300 = Power(t11224,2);
  t11301 = -6.8*t11300;
  t11302 = -6.8*t11224*t11269;
  t11303 = Power(t11265,2);
  t11304 = -6.8*t11303;
  t11305 = -1.*t6424*t11211;
  t11306 = t11173*t11209;
  t11307 = t11305 + t11306;
  t11308 = -6.8*t11265*t11307;
  t11309 = -1.*t11173*t11214;
  t11343 = Power(t11211,2);
  t11344 = 0.11*t11343;
  t11345 = Power(t11209,2);
  t11346 = 0.11*t11345;
  t11347 = t11344 + t11346;
  t11348 = -6.8*t11224*t11347;
  t11352 = -1.*t11351*t11218;
  t11356 = -1.*t11214*t11355;
  t11357 = t11352 + t11356;
  t11359 = t11351*t11236;
  t11360 = t11218*t11355;
  t11361 = t11359 + t11360;
  t11460 = -1.*t11230*t11209;
  t11461 = -0.24*t11211*t11212;
  t11462 = t11460 + t11461;
  t11442 = -0.768*var2[6]*t11441;
  t11443 = -3.2*t11233*t11272;
  t11444 = -3.2*t11244*t11441;
  t11447 = -6.4*t11272*t11276;
  t11448 = -6.4*t11272*t11441;
  t11451 = -3.2*t11272*t11239;
  t11452 = -3.2*t11220*t11276;
  t11453 = t6424*t11439;
  t11454 = t11309 + t11453;
  t11455 = -3.2*t11272*t11454;
  t11456 = -3.2*t11220*t11441;
  t11459 = -3.2*t11272*t11357;
  t11464 = t11351*t11218;
  t11465 = t11214*t11355;
  t11469 = -3.2*t11361*t11441;
  t11493 = -0.24*t11208*t11209;
  t11494 = t11493 + t11461;
  t11471 = -1.*t11214*t11351;
  t11496 = 0.24*t11211*t11208;
  t11497 = t11496 + t11354;
  t11473 = -1.*t11355*t11439;
  t11290 = -1.*t6424*t11178;
  t11291 = t11289 + t11290;
  t11297 = -1.*t6424*t11196;
  t11298 = t11297 + t11179;
  t11310 = -1.*t6424*t11218;
  t11311 = t11309 + t11310;
  t11317 = -1.*t6424*t11236;
  t11318 = t11317 + t11219;
  t11292 = -3.2*t11291*t11257;
  t11293 = Power(t11199,2);
  t11294 = -3.2*t11293;
  t11295 = Power(t11180,2);
  t11296 = -3.2*t11295;
  t11299 = -3.2*t11298*t11261;
  t11312 = -3.2*t11311*t11272;
  t11313 = Power(t11239,2);
  t11314 = -3.2*t11313;
  t11315 = Power(t11220,2);
  t11316 = -3.2*t11315;
  t11319 = -3.2*t11318*t11276;
  t11320 = t11281 + t11282 + t11284 + t11288 + t11292 + t11294 + t11296 + t11299 + t11301 + t11302 + t11304 + t11308 + t11312 + t11314 + t11316 + t11319;
  t11553 = -0.748*t11287;
  t11564 = -13.6*t11184*t11287;
  t11386 = t11281 + t11282 + t11284 + t11288 + t11380 + t11381 + t11384 + t11385;
  t11574 = -6.8*t11287*t11327;
  t11392 = t11391*t11178;
  t11395 = t11196*t11335;
  t11396 = t11392 + t11393 + t11394 + t11395;
  t11399 = -1.*t11168*t11391;
  t11401 = -1.*t11178*t11335;
  t11403 = t11399 + t11400 + t11401 + t11402;
  t11583 = -0.768*var2[4]*t11383;
  t11412 = Power(t6919,2);
  t11413 = -0.24*t11412;
  t11414 = t11201 + t11413;
  t11584 = -3.2*t11193*t11180;
  t11408 = -1.*t11190*t9196;
  t11409 = 0.24*t6919*t9196;
  t11410 = t11408 + t11409;
  t11585 = -3.2*t11204*t11383;
  t11588 = -6.4*t11199*t11180;
  t11589 = -6.4*t11180*t11383;
  t11420 = t11380 + t11381 + t11384 + t11385;
  t11593 = -3.2*t11180*t11337;
  t11424 = t11423*t11178;
  t11427 = t11196*t11426;
  t11428 = t11424 + t11393 + t11394 + t11427;
  t11595 = -3.2*t11341*t11383;
  t11430 = -1.*t11168*t11423;
  t11431 = -1.*t11178*t11426;
  t11432 = t11430 + t11400 + t11431 + t11402;
  t11559 = -0.748*t11307;
  t11567 = -13.6*t11224*t11307;
  t11457 = t11301 + t11302 + t11304 + t11308 + t11451 + t11452 + t11455 + t11456;
  t11577 = -6.8*t11307*t11347;
  t11463 = t11462*t11218;
  t11466 = t11236*t11355;
  t11467 = t11463 + t11464 + t11465 + t11466;
  t11470 = -1.*t11214*t11462;
  t11472 = -1.*t11218*t11355;
  t11474 = t11470 + t11471 + t11472 + t11473;
  t11612 = -0.768*var2[6]*t11454;
  t11483 = Power(t11208,2);
  t11484 = -0.24*t11483;
  t11485 = t11241 + t11484;
  t11613 = -3.2*t11233*t11220;
  t11479 = -1.*t11230*t11212;
  t11480 = 0.24*t11208*t11212;
  t11481 = t11479 + t11480;
  t11614 = -3.2*t11244*t11454;
  t11617 = -6.4*t11239*t11220;
  t11618 = -6.4*t11220*t11454;
  t11491 = t11451 + t11452 + t11455 + t11456;
  t11622 = -3.2*t11220*t11357;
  t11495 = t11494*t11218;
  t11498 = t11236*t11497;
  t11499 = t11495 + t11464 + t11465 + t11498;
  t11624 = -3.2*t11361*t11454;
  t11501 = -1.*t11214*t11494;
  t11502 = -1.*t11218*t11497;
  t11503 = t11501 + t11471 + t11502 + t11473;
  t11525 = -6.8*t11184*t11250;
  t11526 = -6.8*t11254*t11250;
  t11527 = -3.2*t11257*t11180;
  t11528 = -3.2*t11199*t11261;
  t11529 = -6.8*t11224*t11265;
  t11530 = -6.8*t11269*t11265;
  t11531 = -3.2*t11272*t11220;
  t11532 = -3.2*t11239*t11276;
  t11533 = t11525 + t11526 + t11527 + t11528 + t11529 + t11530 + t11531 + t11532;
  t11508 = Power(t6424,2);
  t11509 = -12.*t11508;
  t11510 = Power(t11173,2);
  t11511 = -12.*t11510;
  t11322 = 2.88*t11173;
  t11338 = -3.2*t11199*t11337;
  t11342 = -3.2*t11180*t11341;
  t11358 = -3.2*t11239*t11357;
  t11362 = -3.2*t11220*t11361;
  t11363 = t11322 + t11328 + t11338 + t11342 + t11348 + t11358 + t11362;
  t11200 = -3.2*t11193*t11199;
  t11205 = -3.2*t11204*t11180;
  t11206 = t11185 + t11200 + t11205;
  t11240 = -3.2*t11233*t11239;
  t11245 = -3.2*t11244*t11220;
  t11246 = t11225 + t11240 + t11245;
  t11573 = 2.88*t6424;
  t11575 = -3.2*t11298*t11337;
  t11576 = -3.2*t11291*t11341;
  t11578 = -3.2*t11318*t11357;
  t11579 = -3.2*t11311*t11361;
  t11580 = t11573 + t11574 + t11575 + t11576 + t11577 + t11578 + t11579;
  t11594 = -3.2*t11180*t11396;
  t11596 = -3.2*t11199*t11403;
  t11597 = t11574 + t11593 + t11594 + t11595 + t11596;
  t11397 = -3.2*t11257*t11396;
  t11404 = -3.2*t11261*t11403;
  t11405 = t11328 + t11388 + t11397 + t11398 + t11404;
  t11607 = -3.2*t11180*t11428;
  t11608 = -3.2*t11199*t11432;
  t11609 = t11593 + t11607 + t11595 + t11608;
  t11429 = -3.2*t11257*t11428;
  t11433 = -3.2*t11261*t11432;
  t11434 = t11388 + t11429 + t11398 + t11433;
  t11623 = -3.2*t11220*t11467;
  t11625 = -3.2*t11239*t11474;
  t11626 = t11577 + t11622 + t11623 + t11624 + t11625;
  t11468 = -3.2*t11272*t11467;
  t11475 = -3.2*t11276*t11474;
  t11476 = t11348 + t11459 + t11468 + t11469 + t11475;
  t11636 = -3.2*t11220*t11499;
  t11637 = -3.2*t11239*t11503;
  t11638 = t11622 + t11636 + t11624 + t11637;
  t11500 = -3.2*t11272*t11499;
  t11504 = -3.2*t11276*t11503;
  t11505 = t11459 + t11500 + t11469 + t11504;
  t11534 = -2.88*t6424;
  t11535 = -6.8*t11250*t11327;
  t11536 = -3.2*t11261*t11337;
  t11537 = -3.2*t11257*t11341;
  t11538 = -6.8*t11265*t11347;
  t11539 = -3.2*t11276*t11357;
  t11540 = -3.2*t11272*t11361;
  t11541 = t11534 + t11535 + t11536 + t11537 + t11538 + t11539 + t11540;
  t11554 = -3.2*t11204*t11291;
  t11555 = -3.2*t11193*t11298;
  t11556 = t11553 + t11554 + t11555;
  t11586 = t11553 + t11584 + t11585;
  t11374 = t11185 + t11372 + t11373;
  t11648 = -3.2*t11204*t11396;
  t11649 = -3.2*t11193*t11403;
  t11650 = t11648 + t11649;
  t11600 = -3.2*t11414*t11199;
  t11601 = -3.2*t11410*t11180;
  t11602 = t11600 + t11584 + t11601 + t11585;
  t11411 = -3.2*t11410*t11257;
  t11415 = -3.2*t11414*t11261;
  t11416 = t11372 + t11411 + t11415 + t11373;
  t11660 = -3.2*t11414*t11337;
  t11661 = -3.2*t11410*t11341;
  t11662 = -3.2*t11204*t11428;
  t11663 = -3.2*t11193*t11432;
  t11664 = t11660 + t11661 + t11662 + t11663;
  t11542 = -0.748*t11250;
  t11543 = -3.2*t11204*t11257;
  t11544 = -3.2*t11193*t11261;
  t11545 = t11542 + t11543 + t11544;
  t11712 = -0.748*t11327;
  t11713 = -3.2*t11193*t11337;
  t11714 = -3.2*t11204*t11341;
  t11715 = -0.67 + t11712 + t11713 + t11714;
  t11751 = -0.768*var2[1]*t11383;
  t11752 = -0.768*var2[0]*t11370;
  t11546 = -0.768*t11257;
  t11642 = -0.768*t11180;
  t11716 = -0.768*t11341;
  t11717 = -0.2 + t11716;
  t11745 = -0.768*t11204;
  t11746 = -0.2 + t11745;
  t11560 = -3.2*t11244*t11311;
  t11561 = -3.2*t11233*t11318;
  t11562 = t11559 + t11560 + t11561;
  t11615 = t11559 + t11613 + t11614;
  t11445 = t11225 + t11443 + t11444;
  t11674 = -3.2*t11244*t11467;
  t11675 = -3.2*t11233*t11474;
  t11676 = t11674 + t11675;
  t11629 = -3.2*t11485*t11239;
  t11630 = -3.2*t11481*t11220;
  t11631 = t11629 + t11613 + t11630 + t11614;
  t11482 = -3.2*t11481*t11272;
  t11486 = -3.2*t11485*t11276;
  t11487 = t11443 + t11482 + t11486 + t11444;
  t11686 = -3.2*t11485*t11357;
  t11687 = -3.2*t11481*t11361;
  t11688 = -3.2*t11244*t11499;
  t11689 = -3.2*t11233*t11503;
  t11690 = t11686 + t11687 + t11688 + t11689;
  t11547 = -0.748*t11265;
  t11548 = -3.2*t11244*t11272;
  t11549 = -3.2*t11233*t11276;
  t11550 = t11547 + t11548 + t11549;
  t11718 = -0.748*t11347;
  t11719 = -3.2*t11233*t11357;
  t11720 = -3.2*t11244*t11361;
  t11721 = -0.67 + t11718 + t11719 + t11720;
  t11784 = -0.768*var2[1]*t11454;
  t11785 = -0.768*var2[0]*t11441;
  t11551 = -0.768*t11272;
  t11643 = -0.768*t11220;
  t11722 = -0.768*t11361;
  t11723 = -0.2 + t11722;
  t11778 = -0.768*t11244;
  t11779 = -0.2 + t11778;
  p_output1[0]=(t11251 + t11255 - 6.4*t11180*t11257 - 6.4*t11199*t11261 + t11266 + t11270 - 6.4*t11220*t11272 - 6.4*t11239*t11276)*var2[0] + t11320*var2[1] + t11363*var2[2] + t11206*var2[3] - 0.768*t11180*var2[4] + t11246*var2[5] - 0.768*t11220*var2[6];
  p_output1[1]=t11371 + (t11251 + t11255 + t11376 + t11377)*var2[0] + t11386*var2[1] + t11405*var2[2] + t11374*var2[3];
  p_output1[2]=t11371 + (t11376 + t11377)*var2[0] + t11420*var2[1] + t11434*var2[2] + t11416*var2[3];
  p_output1[3]=t11442 + (t11266 + t11270 + t11447 + t11448)*var2[0] + t11457*var2[1] + t11476*var2[2] + t11445*var2[5];
  p_output1[4]=t11442 + (t11447 + t11448)*var2[0] + t11491*var2[1] + t11505*var2[2] + t11487*var2[5];
  p_output1[5]=-6.8*Power(t11254,2) - 3.2*Power(t11257,2) - 3.2*Power(t11261,2) - 6.8*Power(t11269,2) - 3.2*Power(t11272,2) - 3.2*Power(t11276,2) + t11284 + t11304 + t11509 + t11511;
  p_output1[6]=t11533;
  p_output1[7]=t11541;
  p_output1[8]=t11545;
  p_output1[9]=t11546;
  p_output1[10]=t11550;
  p_output1[11]=t11551;
  p_output1[12]=t11320*var2[0] + (t11251 + t11266 - 6.4*t11180*t11291 - 6.4*t11199*t11298 - 6.4*t11220*t11311 - 6.4*t11239*t11318 + t11564 + t11567)*var2[1] + t11580*var2[2] + t11556*var2[3] - 0.768*t11291*var2[4] + t11562*var2[5] - 0.768*t11311*var2[6];
  p_output1[13]=t11583 + t11386*var2[0] + (t11251 + t11564 + t11588 + t11589)*var2[1] + t11597*var2[2] + t11586*var2[3];
  p_output1[14]=t11583 + t11420*var2[0] + (t11588 + t11589)*var2[1] + t11609*var2[2] + t11602*var2[3];
  p_output1[15]=t11612 + t11457*var2[0] + (t11266 + t11567 + t11617 + t11618)*var2[1] + t11626*var2[2] + t11615*var2[5];
  p_output1[16]=t11612 + t11491*var2[0] + (t11617 + t11618)*var2[1] + t11638*var2[2] + t11631*var2[5];
  p_output1[17]=t11533;
  p_output1[18]=t11281 + t11284 + t11294 + t11296 + t11301 + t11304 + t11314 + t11316 + t11509 + t11511;
  p_output1[19]=t11363;
  p_output1[20]=t11206;
  p_output1[21]=t11642;
  p_output1[22]=t11246;
  p_output1[23]=t11643;
  p_output1[24]=t11363*var2[0] + t11580*var2[1];
  p_output1[25]=t11405*var2[0] + t11597*var2[1] + (-6.4*t11341*t11396 - 6.4*t11337*t11403)*var2[2] + t11650*var2[3] - 0.768*t11396*var2[4];
  p_output1[26]=t11434*var2[0] + t11609*var2[1] + (-6.4*t11341*t11428 - 6.4*t11337*t11432)*var2[2] + t11664*var2[3] - 0.768*t11428*var2[4];
  p_output1[27]=t11476*var2[0] + t11626*var2[1] + (-6.4*t11361*t11467 - 6.4*t11357*t11474)*var2[2] + t11676*var2[5] - 0.768*t11467*var2[6];
  p_output1[28]=t11505*var2[0] + t11638*var2[1] + (-6.4*t11361*t11499 - 6.4*t11357*t11503)*var2[2] + t11690*var2[5] - 0.768*t11499*var2[6];
  p_output1[29]=t11541;
  p_output1[30]=t11363;
  p_output1[31]=-3.3612 - 6.8*Power(t11327,2) - 3.2*Power(t11337,2) - 3.2*Power(t11341,2) - 6.8*Power(t11347,2) - 3.2*Power(t11357,2) - 3.2*Power(t11361,2);
  p_output1[32]=t11715;
  p_output1[33]=t11717;
  p_output1[34]=t11721;
  p_output1[35]=t11723;
  p_output1[36]=t11206*var2[0] + t11556*var2[1];
  p_output1[37]=t11374*var2[0] + t11586*var2[1] + t11650*var2[2];
  p_output1[38]=t11416*var2[0] + t11602*var2[1] + t11664*var2[2] + (-6.4*t11204*t11410 - 6.4*t11193*t11414)*var2[3] - 0.768*t11410*var2[4];
  p_output1[39]=t11545;
  p_output1[40]=t11206;
  p_output1[41]=t11715;
  p_output1[42]=-1.58228 - 3.2*Power(t11193,2) - 3.2*Power(t11204,2);
  p_output1[43]=t11746;
  p_output1[44]=-0.768*t11180*var2[0] - 0.768*t11291*var2[1];
  p_output1[45]=t11751 + t11752 - 0.768*t11396*var2[2];
  p_output1[46]=t11751 + t11752 - 0.768*t11428*var2[2] - 0.768*t11410*var2[3];
  p_output1[47]=t11546;
  p_output1[48]=t11642;
  p_output1[49]=t11717;
  p_output1[50]=t11746;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t11246*var2[0] + t11562*var2[1];
  p_output1[53]=t11445*var2[0] + t11615*var2[1] + t11676*var2[2];
  p_output1[54]=t11487*var2[0] + t11631*var2[1] + t11690*var2[2] + (-6.4*t11244*t11481 - 6.4*t11233*t11485)*var2[5] - 0.768*t11481*var2[6];
  p_output1[55]=t11550;
  p_output1[56]=t11246;
  p_output1[57]=t11721;
  p_output1[58]=-1.58228 - 3.2*Power(t11233,2) - 3.2*Power(t11244,2);
  p_output1[59]=t11779;
  p_output1[60]=-0.768*t11220*var2[0] - 0.768*t11311*var2[1];
  p_output1[61]=t11784 + t11785 - 0.768*t11467*var2[2];
  p_output1[62]=t11784 + t11785 - 0.768*t11499*var2[2] - 0.768*t11481*var2[5];
  p_output1[63]=t11551;
  p_output1[64]=t11643;
  p_output1[65]=t11723;
  p_output1[66]=t11779;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
