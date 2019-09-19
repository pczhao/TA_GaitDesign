/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:00 GMT-04:00
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
  double t11343;
  double t5627;
  double t8164;
  double t11344;
  double t11358;
  double t5543;
  double t11360;
  double t11361;
  double t11366;
  double t11410;
  double t11411;
  double t11412;
  double t11413;
  double t11414;
  double t11342;
  double t11355;
  double t11356;
  double t11357;
  double t11369;
  double t11370;
  double t11435;
  double t11432;
  double t11433;
  double t11436;
  double t11440;
  double t11441;
  double t11442;
  double t11450;
  double t11451;
  double t11452;
  double t11453;
  double t11454;
  double t11434;
  double t11437;
  double t11438;
  double t11439;
  double t11443;
  double t11444;
  double t11372;
  double t11389;
  double t11393;
  double t11472;
  double t11473;
  double t11474;
  double t11422;
  double t11418;
  double t11419;
  double t11420;
  double t11421;
  double t11423;
  double t11446;
  double t11447;
  double t11448;
  double t11487;
  double t11488;
  double t11489;
  double t11462;
  double t11458;
  double t11459;
  double t11460;
  double t11461;
  double t11463;
  double t11476;
  double t11477;
  double t11478;
  double t11480;
  double t11481;
  double t11483;
  double t11484;
  double t11485;
  double t11491;
  double t11492;
  double t11493;
  double t11495;
  double t11496;
  double t11498;
  double t11499;
  double t11500;
  double t11553;
  double t11554;
  double t11555;
  double t11557;
  double t11558;
  double t11559;
  double t11573;
  double t11574;
  double t11575;
  double t11577;
  double t11578;
  double t11579;
  double t11513;
  double t11514;
  double t11515;
  double t11509;
  double t11510;
  double t11511;
  double t11425;
  double t11426;
  double t11427;
  double t11428;
  double t11415;
  double t11416;
  double t11417;
  double t11521;
  double t11522;
  double t11533;
  double t11534;
  double t11535;
  double t11529;
  double t11530;
  double t11531;
  double t11465;
  double t11466;
  double t11467;
  double t11468;
  double t11455;
  double t11456;
  double t11457;
  double t11541;
  double t11542;
  double t11475;
  double t11490;
  double t11504;
  double t11505;
  double t11506;
  double t11507;
  double t11508;
  double t11512;
  double t11516;
  double t11517;
  double t11518;
  double t11519;
  double t11520;
  double t11523;
  double t11524;
  double t11525;
  double t11526;
  double t11527;
  double t11528;
  double t11532;
  double t11536;
  double t11537;
  double t11538;
  double t11539;
  double t11540;
  double t11543;
  double t11544;
  double t11547;
  double t11548;
  double t11549;
  double t11550;
  double t11551;
  double t11556;
  double t11560;
  double t11561;
  double t11563;
  double t11564;
  double t11565;
  double t11567;
  double t11568;
  double t11569;
  double t11570;
  double t11571;
  double t11576;
  double t11580;
  double t11581;
  double t11583;
  double t11584;
  double t11585;
  double t11612;
  double t11613;
  double t11614;
  double t11615;
  double t11616;
  double t11617;
  double t11618;
  double t11619;
  double t11546;
  double t11552;
  double t11562;
  double t11566;
  double t11572;
  double t11582;
  double t11586;
  double t11587;
  double t11394;
  double t11424;
  double t11429;
  double t11430;
  double t11592;
  double t11593;
  double t11594;
  double t11595;
  double t11449;
  double t11464;
  double t11469;
  double t11470;
  double t11598;
  double t11599;
  double t11600;
  double t11601;
  t11343 = Cos(var1[3]);
  t5627 = Cos(var1[4]);
  t8164 = Sin(var1[3]);
  t11344 = Sin(var1[4]);
  t11358 = Sin(var1[2]);
  t5543 = Cos(var1[2]);
  t11360 = t11343*t5627;
  t11361 = -1.*t8164*t11344;
  t11366 = t11360 + t11361;
  t11410 = -1.*t5627;
  t11411 = 1. + t11410;
  t11412 = 0.4*t11411;
  t11413 = 0.64*t5627;
  t11414 = t11412 + t11413;
  t11342 = -1.*t5627*t8164;
  t11355 = -1.*t11343*t11344;
  t11356 = t11342 + t11355;
  t11357 = t5543*t11356;
  t11369 = -1.*t11358*t11366;
  t11370 = t11357 + t11369;
  t11435 = Cos(var1[5]);
  t11432 = Cos(var1[6]);
  t11433 = Sin(var1[5]);
  t11436 = Sin(var1[6]);
  t11440 = t11435*t11432;
  t11441 = -1.*t11433*t11436;
  t11442 = t11440 + t11441;
  t11450 = -1.*t11432;
  t11451 = 1. + t11450;
  t11452 = 0.4*t11451;
  t11453 = 0.64*t11432;
  t11454 = t11452 + t11453;
  t11434 = -1.*t11432*t11433;
  t11437 = -1.*t11435*t11436;
  t11438 = t11434 + t11437;
  t11439 = t5543*t11438;
  t11443 = -1.*t11358*t11442;
  t11444 = t11439 + t11443;
  t11372 = -1.*t11343*t11358;
  t11389 = -1.*t5543*t8164;
  t11393 = t11372 + t11389;
  t11472 = t5543*t11343;
  t11473 = -1.*t11358*t8164;
  t11474 = t11472 + t11473;
  t11422 = t5543*t11366;
  t11418 = t5627*t8164;
  t11419 = t11343*t11344;
  t11420 = t11418 + t11419;
  t11421 = -1.*t11358*t11420;
  t11423 = t11421 + t11422;
  t11446 = -1.*t11435*t11358;
  t11447 = -1.*t5543*t11433;
  t11448 = t11446 + t11447;
  t11487 = t5543*t11435;
  t11488 = -1.*t11358*t11433;
  t11489 = t11487 + t11488;
  t11462 = t5543*t11442;
  t11458 = t11432*t11433;
  t11459 = t11435*t11436;
  t11460 = t11458 + t11459;
  t11461 = -1.*t11358*t11460;
  t11463 = t11461 + t11462;
  t11476 = t11343*t11358;
  t11477 = t5543*t8164;
  t11478 = t11476 + t11477;
  t11480 = t11358*t11356;
  t11481 = t11480 + t11422;
  t11483 = t5543*t11420;
  t11484 = t11358*t11366;
  t11485 = t11483 + t11484;
  t11491 = t11435*t11358;
  t11492 = t5543*t11433;
  t11493 = t11491 + t11492;
  t11495 = t11358*t11438;
  t11496 = t11495 + t11462;
  t11498 = t5543*t11460;
  t11499 = t11358*t11442;
  t11500 = t11498 + t11499;
  t11553 = t11414*t8164;
  t11554 = 0.24*t11343*t11344;
  t11555 = t11553 + t11554;
  t11557 = t11343*t11414;
  t11558 = -0.24*t8164*t11344;
  t11559 = t11557 + t11558;
  t11573 = t11454*t11433;
  t11574 = 0.24*t11435*t11436;
  t11575 = t11573 + t11574;
  t11577 = t11435*t11454;
  t11578 = -0.24*t11433*t11436;
  t11579 = t11577 + t11578;
  t11513 = -1.*t11358*t11356;
  t11514 = -1.*t5543*t11366;
  t11515 = t11513 + t11514;
  t11509 = -1.*t5543*t11343;
  t11510 = t11358*t8164;
  t11511 = t11509 + t11510;
  t11425 = t11414*t5627;
  t11426 = Power(t11344,2);
  t11427 = 0.24*t11426;
  t11428 = t11425 + t11427;
  t11415 = t11414*t11344;
  t11416 = -0.24*t5627*t11344;
  t11417 = t11415 + t11416;
  t11521 = -1.*t5543*t11420;
  t11522 = t11521 + t11369;
  t11533 = -1.*t11358*t11438;
  t11534 = -1.*t5543*t11442;
  t11535 = t11533 + t11534;
  t11529 = -1.*t5543*t11435;
  t11530 = t11358*t11433;
  t11531 = t11529 + t11530;
  t11465 = t11454*t11432;
  t11466 = Power(t11436,2);
  t11467 = 0.24*t11466;
  t11468 = t11465 + t11467;
  t11455 = t11454*t11436;
  t11456 = -0.24*t11432*t11436;
  t11457 = t11455 + t11456;
  t11541 = -1.*t5543*t11460;
  t11542 = t11541 + t11443;
  t11475 = 13.6*t11393*t11474;
  t11490 = 13.6*t11448*t11489;
  t11504 = Power(t11393,2);
  t11505 = 6.8*t11504;
  t11506 = 6.8*t11393*t11478;
  t11507 = Power(t11474,2);
  t11508 = 6.8*t11507;
  t11512 = 6.8*t11474*t11511;
  t11516 = 3.2*t11515*t11481;
  t11517 = Power(t11423,2);
  t11518 = 3.2*t11517;
  t11519 = Power(t11370,2);
  t11520 = 3.2*t11519;
  t11523 = 3.2*t11522*t11485;
  t11524 = Power(t11448,2);
  t11525 = 6.8*t11524;
  t11526 = 6.8*t11448*t11493;
  t11527 = Power(t11489,2);
  t11528 = 6.8*t11527;
  t11532 = 6.8*t11489*t11531;
  t11536 = 3.2*t11535*t11496;
  t11537 = Power(t11463,2);
  t11538 = 3.2*t11537;
  t11539 = Power(t11444,2);
  t11540 = 3.2*t11539;
  t11543 = 3.2*t11542*t11500;
  t11544 = t11505 + t11506 + t11508 + t11512 + t11516 + t11518 + t11520 + t11523 + t11525 + t11526 + t11528 + t11532 + t11536 + t11538 + t11540 + t11543;
  t11547 = Power(t11343,2);
  t11548 = 0.11*t11547;
  t11549 = Power(t8164,2);
  t11550 = 0.11*t11549;
  t11551 = t11548 + t11550;
  t11556 = -1.*t11555*t11366;
  t11560 = -1.*t11356*t11559;
  t11561 = t11556 + t11560;
  t11563 = t11555*t11420;
  t11564 = t11366*t11559;
  t11565 = t11563 + t11564;
  t11567 = Power(t11435,2);
  t11568 = 0.11*t11567;
  t11569 = Power(t11433,2);
  t11570 = 0.11*t11569;
  t11571 = t11568 + t11570;
  t11576 = -1.*t11575*t11442;
  t11580 = -1.*t11438*t11579;
  t11581 = t11576 + t11580;
  t11583 = t11575*t11460;
  t11584 = t11442*t11579;
  t11585 = t11583 + t11584;
  t11612 = -2.88*t5543;
  t11613 = 6.8*t11511*t11551;
  t11614 = 3.2*t11522*t11561;
  t11615 = 3.2*t11515*t11565;
  t11616 = 6.8*t11531*t11571;
  t11617 = 3.2*t11542*t11581;
  t11618 = 3.2*t11535*t11585;
  t11619 = t11612 + t11613 + t11614 + t11615 + t11616 + t11617 + t11618;
  t11546 = -2.88*t11358;
  t11552 = 6.8*t11393*t11551;
  t11562 = 3.2*t11423*t11561;
  t11566 = 3.2*t11370*t11565;
  t11572 = 6.8*t11448*t11571;
  t11582 = 3.2*t11463*t11581;
  t11586 = 3.2*t11444*t11585;
  t11587 = t11546 + t11552 + t11562 + t11566 + t11572 + t11582 + t11586;
  t11394 = 0.748*t11393;
  t11424 = 3.2*t11417*t11423;
  t11429 = 3.2*t11428*t11370;
  t11430 = t11394 + t11424 + t11429;
  t11592 = 0.748*t11511;
  t11593 = 3.2*t11428*t11515;
  t11594 = 3.2*t11417*t11522;
  t11595 = t11592 + t11593 + t11594;
  t11449 = 0.748*t11448;
  t11464 = 3.2*t11457*t11463;
  t11469 = 3.2*t11468*t11444;
  t11470 = t11449 + t11464 + t11469;
  t11598 = 0.748*t11531;
  t11599 = 3.2*t11468*t11535;
  t11600 = 3.2*t11457*t11542;
  t11601 = t11598 + t11599 + t11600;
  p_output1[0]=var2[2]*(-0.5*(t11475 + 13.6*t11474*t11478 + 6.4*t11370*t11481 + 6.4*t11423*t11485 + t11490 + 13.6*t11489*t11493 + 6.4*t11444*t11496 + 6.4*t11463*t11500)*var2[0] - 0.5*t11544*var2[1] - 0.5*t11587*var2[2] - 0.5*t11430*var2[3] - 0.384*t11370*var2[4] - 0.5*t11470*var2[5] - 0.384*t11444*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t11544*var2[0] - 0.5*(t11475 + t11490 + 13.6*t11393*t11511 + 6.4*t11370*t11515 + 6.4*t11423*t11522 + 13.6*t11448*t11531 + 6.4*t11444*t11535 + 6.4*t11463*t11542)*var2[1] - 0.5*t11619*var2[2] - 0.5*t11595*var2[3] - 0.384*t11515*var2[4] - 0.5*t11601*var2[5] - 0.384*t11535*var2[6]);
  p_output1[2]=(-0.5*t11587*var2[0] - 0.5*t11619*var2[1])*var2[2];
  p_output1[3]=(-0.5*t11430*var2[0] - 0.5*t11595*var2[1])*var2[2];
  p_output1[4]=(-0.384*t11370*var2[0] - 0.384*t11515*var2[1])*var2[2];
  p_output1[5]=(-0.5*t11470*var2[0] - 0.5*t11601*var2[1])*var2[2];
  p_output1[6]=(-0.384*t11444*var2[0] - 0.384*t11535*var2[1])*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec3_five_link_walker.hh"

namespace SymFunction
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
