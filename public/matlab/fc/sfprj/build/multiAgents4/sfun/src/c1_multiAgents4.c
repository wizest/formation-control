/* Include files */
#include "multiAgents4_sfun.h"
#include "c1_multiAgents4.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "multiAgents4_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc1_multiAgents4InstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c1_multiAgents4(void);
static void initialize_params_c1_multiAgents4(void);
static void enable_c1_multiAgents4(void);
static void disable_c1_multiAgents4(void);
static void finalize_c1_multiAgents4(void);
static void sf_c1_multiAgents4(void);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
 c1_chartNumber);
static void c1_meshgrid(real_T c1_x[6], real_T c1_y[2], real_T c1_xx[12], real_T
 c1_yy[12]);
static const mxArray *c1_sf_marshall(void *c1_chartInstance, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *c1_chartInstance, void *c1_u);
static const mxArray *c1_c_sf_marshall(void *c1_chartInstance, void *c1_u);
static const mxArray *c1_d_sf_marshall(void *c1_chartInstance, void *c1_u);
static const mxArray *c1_e_sf_marshall(void *c1_chartInstance, void *c1_u);
static void c1_info_helper(c1_ResolvedFunctionInfo c1_info[85]);
static void c1_b_info_helper(c1_ResolvedFunctionInfo c1_info[85]);
static void init_dsm_address_info(void);

/* Function Definitions */
static void initialize_c1_multiAgents4(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c1_is_active_c1_multiAgents4 = 0U;
}

static void initialize_params_c1_multiAgents4(void)
{
}

static void enable_c1_multiAgents4(void)
{
}

static void disable_c1_multiAgents4(void)
{
}

static void finalize_c1_multiAgents4(void)
{
}

static void sf_c1_multiAgents4(void)
{
  int32_T c1_i0;
  int32_T c1_i1;
  int32_T c1_i2;
  uint8_T c1_previousEvent;
  int32_T c1_i3;
  real_T c1_P[36];
  real_T c1_Pm[144];
  int32_T c1_i4;
  real_T c1_x[36];
  real_T c1_n;
  real_T c1_A[36];
  int32_T c1_i5;
  real_T c1_b_x[36];
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  real_T c1_y[36];
  int32_T c1_i9;
  int32_T c1_iv0[36];
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  static real_T c1_dv0[4] = { 1.0, 0.0, 0.0, 1.0 };
  real_T c1_B[4];
  int32_T c1_i13;
  int32_T c1_hoistedExpr;
  real_T c1_dv1[6];
  int32_T c1_i14;
  static real_T c1_dv2[2] = { 1.0, 2.0 };
  real_T c1_dv3[2];
  real_T c1_ib[12];
  real_T c1_ia[12];
  int32_T c1_i15;
  int32_T c1_i16;
  real_T c1_b_ia[12];
  int32_T c1_i17;
  int32_T c1_i18;
  real_T c1_b_ib[12];
  int32_T c1_i19;
  int32_T c1_b_hoistedExpr;
  real_T c1_dv4[6];
  int32_T c1_i20;
  real_T c1_dv5[2];
  real_T c1_jb[12];
  real_T c1_ja[12];
  int32_T c1_i21;
  int32_T c1_i22;
  real_T c1_b_ja[12];
  int32_T c1_i23;
  int32_T c1_i24;
  real_T c1_b_jb[12];
  int32_T c1_i25;
  int32_T c1_i26;
  real_T c1_dv6[12];
  int32_T c1_i27;
  int32_T c1_i28;
  real_T c1_dv7[12];
  int32_T c1_i29;
  int32_T c1_iv1[12];
  int32_T c1_i30;
  int32_T c1_iv2[12];
  int32_T c1_i31;
  int32_T c1_i32;
  real_T c1_dv8[12];
  int32_T c1_i33;
  int32_T c1_i34;
  real_T c1_dv9[12];
  int32_T c1_i35;
  int32_T c1_iv3[12];
  int32_T c1_i36;
  int32_T c1_iv4[12];
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i40;
  real_T (*c1_b_Pm)[144];
  real_T (*c1_b_P)[36];
  c1_b_P = (real_T (*)[36])ssGetInputPortSignal(chartInstance.S, 0);
  c1_b_Pm = (real_T (*)[144])ssGetOutputPortSignal(chartInstance.S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  for(c1_i0 = 0; c1_i0 < 36; c1_i0 = c1_i0 + 1) {
    _SFD_DATA_RANGE_CHECK((*c1_b_P)[c1_i0], 1U);
  }
  for(c1_i1 = 0; c1_i1 < 12; c1_i1 = c1_i1 + 1) {
    for(c1_i2 = 0; c1_i2 < 12; c1_i2 = c1_i2 + 1) {
      _SFD_DATA_RANGE_CHECK((*c1_b_Pm)[c1_i2 + 12 * c1_i1], 0U);
    }
  }
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  for(c1_i3 = 0; c1_i3 < 36; c1_i3 = c1_i3 + 1) {
    c1_P[c1_i3] = (*c1_b_P)[c1_i3];
  }
  sf_debug_symbol_scope_push(2U, 0U);
  sf_debug_symbol_scope_add("Pm", &c1_Pm, c1_b_sf_marshall);
  sf_debug_symbol_scope_add("P", &c1_P, c1_sf_marshall);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,2);
  for(c1_i4 = 0; c1_i4 < 36; c1_i4 = c1_i4 + 1) {
    c1_x[c1_i4] = c1_P[c1_i4];
  }
  sf_debug_symbol_scope_push(3U, 0U);
  sf_debug_symbol_scope_add("n", &c1_n, c1_e_sf_marshall);
  sf_debug_symbol_scope_add("X", &c1_A, c1_d_sf_marshall);
  sf_debug_symbol_scope_add("x", &c1_x, c1_c_sf_marshall);
  CV_SCRIPT_FCN(0, 0);
  /*  to square matrix */
  _SFD_SCRIPT_CALL(SCRIPT_LINE_TAG,0,3);
  c1_n = 6.0;
  _SFD_SCRIPT_CALL(SCRIPT_LINE_TAG,0,4);
  for(c1_i5 = 0; c1_i5 < 36; c1_i5 = c1_i5 + 1) {
    c1_b_x[c1_i5] = c1_x[c1_i5];
  }
  for(c1_i6 = 0; c1_i6 < 6; c1_i6 = c1_i6 + 1) {
    for(c1_i7 = 0; c1_i7 < 6; c1_i7 = c1_i7 + 1) {
      c1_A[c1_i7 + 6 * c1_i6] = 0.0;
    }
  }
  for(c1_i8 = 0; c1_i8 < 36; c1_i8 = c1_i8 + 1) {
    c1_y[c1_i8] = 1.0 + (real_T)c1_i8;
  }
  for(c1_i9 = 0; c1_i9 < 36; c1_i9 = c1_i9 + 1) {
    c1_iv0[c1_i9] = (int32_T)_SFD_EML_ARRAY_BOUNDS_CHECK("y",
     (int32_T)_SFD_INTEGER_CHECK("", c1_y[c1_i9]), 1, 36, 1, 0) - 1;
  }
  for(c1_i10 = 0; c1_i10 < 36; c1_i10 = c1_i10 + 1) {
    c1_A[c1_iv0[c1_i10]] = c1_b_x[c1_i10];
  }
  _SFD_SCRIPT_CALL(SCRIPT_LINE_TAG,0,-4);
  sf_debug_symbol_scope_pop();
  for(c1_i11 = 0; c1_i11 < 2; c1_i11 = c1_i11 + 1) {
    for(c1_i12 = 0; c1_i12 < 2; c1_i12 = c1_i12 + 1) {
      c1_B[c1_i12 + 2 * c1_i11] = c1_dv0[c1_i12 + 2 * c1_i11];
    }
  }
  for(c1_i13 = 0; c1_i13 < 6; c1_i13 = c1_i13 + 1) {
    c1_hoistedExpr = 0;
    c1_dv1[c1_i13] = 1.0 + (real_T)c1_i13;
  }
  for(c1_i14 = 0; c1_i14 < 2; c1_i14 = c1_i14 + 1) {
    c1_dv3[c1_i14] = c1_dv2[c1_i14];
  }
  c1_meshgrid(c1_dv1, c1_dv3, c1_ia, c1_ib);
  for(c1_i15 = 0; c1_i15 < 6; c1_i15 = c1_i15 + 1) {
    for(c1_i16 = 0; c1_i16 < 2; c1_i16 = c1_i16 + 1) {
      c1_b_ia[c1_i16 + 2 * c1_i15] = c1_ia[c1_i16 + 2 * c1_i15];
    }
  }
  for(c1_i17 = 0; c1_i17 < 6; c1_i17 = c1_i17 + 1) {
    for(c1_i18 = 0; c1_i18 < 2; c1_i18 = c1_i18 + 1) {
      c1_b_ib[c1_i18 + 2 * c1_i17] = c1_ib[c1_i18 + 2 * c1_i17];
    }
  }
  for(c1_i19 = 0; c1_i19 < 6; c1_i19 = c1_i19 + 1) {
    c1_b_hoistedExpr = 0;
    c1_dv4[c1_i19] = 1.0 + (real_T)c1_i19;
  }
  for(c1_i20 = 0; c1_i20 < 2; c1_i20 = c1_i20 + 1) {
    c1_dv5[c1_i20] = c1_dv2[c1_i20];
  }
  c1_meshgrid(c1_dv4, c1_dv5, c1_ja, c1_jb);
  for(c1_i21 = 0; c1_i21 < 6; c1_i21 = c1_i21 + 1) {
    for(c1_i22 = 0; c1_i22 < 2; c1_i22 = c1_i22 + 1) {
      c1_b_ja[c1_i22 + 2 * c1_i21] = c1_ja[c1_i22 + 2 * c1_i21];
    }
  }
  for(c1_i23 = 0; c1_i23 < 6; c1_i23 = c1_i23 + 1) {
    for(c1_i24 = 0; c1_i24 < 2; c1_i24 = c1_i24 + 1) {
      c1_b_jb[c1_i24 + 2 * c1_i23] = c1_jb[c1_i24 + 2 * c1_i23];
    }
  }
  for(c1_i25 = 0; c1_i25 < 6; c1_i25 = c1_i25 + 1) {
    for(c1_i26 = 0; c1_i26 < 2; c1_i26 = c1_i26 + 1) {
      c1_dv6[c1_i26 + 2 * c1_i25] = _SFD_EML_ARRAY_BOUNDS_CHECK("A",
       (int32_T)_SFD_INTEGER_CHECK("ia", c1_b_ia[c1_i26 + 2 * c1_i25]), 1, 6
       , 1, 0);
    }
  }
  for(c1_i27 = 0; c1_i27 < 6; c1_i27 = c1_i27 + 1) {
    for(c1_i28 = 0; c1_i28 < 2; c1_i28 = c1_i28 + 1) {
      c1_dv7[c1_i28 + 2 * c1_i27] = _SFD_EML_ARRAY_BOUNDS_CHECK("A",
       (int32_T)_SFD_INTEGER_CHECK("ja", c1_b_ja[c1_i28 + 2 * c1_i27]), 1, 6
       , 2, 0);
    }
  }
  for(c1_i29 = 0; c1_i29 < 12; c1_i29 = c1_i29 + 1) {
    c1_iv1[c1_i29] = (int32_T)c1_dv6[c1_i29] - 1;
  }
  for(c1_i30 = 0; c1_i30 < 12; c1_i30 = c1_i30 + 1) {
    c1_iv2[c1_i30] = (int32_T)c1_dv7[c1_i30] - 1;
  }
  for(c1_i31 = 0; c1_i31 < 6; c1_i31 = c1_i31 + 1) {
    for(c1_i32 = 0; c1_i32 < 2; c1_i32 = c1_i32 + 1) {
      c1_dv8[c1_i32 + 2 * c1_i31] = _SFD_EML_ARRAY_BOUNDS_CHECK("B",
       (int32_T)_SFD_INTEGER_CHECK("ib", c1_b_ib[c1_i32 + 2 * c1_i31]), 1, 2
       , 1, 0);
    }
  }
  for(c1_i33 = 0; c1_i33 < 6; c1_i33 = c1_i33 + 1) {
    for(c1_i34 = 0; c1_i34 < 2; c1_i34 = c1_i34 + 1) {
      c1_dv9[c1_i34 + 2 * c1_i33] = _SFD_EML_ARRAY_BOUNDS_CHECK("B",
       (int32_T)_SFD_INTEGER_CHECK("jb", c1_b_jb[c1_i34 + 2 * c1_i33]), 1, 2
       , 2, 0);
    }
  }
  for(c1_i35 = 0; c1_i35 < 12; c1_i35 = c1_i35 + 1) {
    c1_iv3[c1_i35] = (int32_T)c1_dv8[c1_i35] - 1;
  }
  for(c1_i36 = 0; c1_i36 < 12; c1_i36 = c1_i36 + 1) {
    c1_iv4[c1_i36] = (int32_T)c1_dv9[c1_i36] - 1;
  }
  for(c1_i37 = 0; c1_i37 < 12; c1_i37 = c1_i37 + 1) {
    for(c1_i38 = 0; c1_i38 < 12; c1_i38 = c1_i38 + 1) {
      c1_Pm[c1_i38 + 12 * c1_i37] = c1_A[c1_iv1[c1_i38] + 6 * c1_iv2[c1_i37]] *
        c1_B[c1_iv3[c1_i38] + 2 * c1_iv4[c1_i37]];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-2);
  sf_debug_symbol_scope_pop();
  for(c1_i39 = 0; c1_i39 < 12; c1_i39 = c1_i39 + 1) {
    for(c1_i40 = 0; c1_i40 < 12; c1_i40 = c1_i40 + 1) {
      (*c1_b_Pm)[c1_i40 + 12 * c1_i39] = c1_Pm[c1_i40 + 12 * c1_i39];
    }
  }
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_multiAgents4MachineNumber_,
   chartInstance.chartNumber, chartInstance.instanceNumber);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
 c1_chartNumber)
{
  _SFD_SCRIPT_TRANSLATION(c1_chartNumber, 0U,
   sf_debug_get_script_id("C:/Users/wizest/Desktop/formation-control/matlab/fc/toMatrix.m")
   );
}

static void c1_meshgrid(real_T c1_x[6], real_T c1_y[2], real_T c1_xx[12], real_T
 c1_yy[12])
{
  int32_T c1_i41;
  real_T c1_b_y[6];
  int32_T c1_i42;
  int32_T c1_iv5[6];
  int32_T c1_i43;
  real_T c1_a[6];
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_ONE;
  int32_T c1_ia;
  int32_T c1_ib;
  int32_T c1_iacol;
  real_T c1_d0;
  real_T c1_jcol;
  real_T c1_d1;
  real_T c1_itilerow;
  int32_T c1_b_a;
  int32_T c1_b;
  int32_T c1_c_a;
  int32_T c1_b_b;
  int32_T c1_i46;
  real_T c1_c_y[2];
  int32_T c1_i47;
  int32_T c1_iv6[2];
  int32_T c1_i48;
  real_T c1_d_a[2];
  int32_T c1_i49;
  int32_T c1_i50;
  int32_T c1_b_ONE;
  int32_T c1_b_ib;
  real_T c1_d2;
  real_T c1_jtilecol;
  int32_T c1_b_iacol;
  int32_T c1_b_ia;
  real_T c1_d3;
  real_T c1_k;
  int32_T c1_e_a;
  int32_T c1_c_b;
  int32_T c1_f_a;
  int32_T c1_d_b;
  for(c1_i41 = 0; c1_i41 < 6; c1_i41 = c1_i41 + 1) {
    c1_b_y[c1_i41] = 1.0 + (real_T)c1_i41;
  }
  for(c1_i42 = 0; c1_i42 < 6; c1_i42 = c1_i42 + 1) {
    c1_iv5[c1_i42] = (int32_T)_SFD_EML_ARRAY_BOUNDS_CHECK("x",
     (int32_T)_SFD_INTEGER_CHECK("", c1_b_y[c1_i42]), 1, 6, 1, 0) - 1;
  }
  for(c1_i43 = 0; c1_i43 < 6; c1_i43 = c1_i43 + 1) {
    c1_a[c1_i43] = c1_x[c1_iv5[c1_i43]];
  }
  for(c1_i44 = 0; c1_i44 < 6; c1_i44 = c1_i44 + 1) {
    for(c1_i45 = 0; c1_i45 < 2; c1_i45 = c1_i45 + 1) {
      c1_xx[c1_i45 + 2 * c1_i44] = 0.0;
    }
  }
  c1_ONE = 1;
  c1_ia = c1_ONE;
  c1_ib = c1_ONE;
  c1_iacol = c1_ONE;
  c1_d0 = 1.0;
  for(c1_jcol = c1_d0; c1_jcol <= 6.0; c1_jcol = c1_jcol + 1.0) {
    c1_d1 = 1.0;
    for(c1_itilerow = c1_d1; c1_itilerow <= 2.0; c1_itilerow = c1_itilerow +
     1.0) {
      c1_ia = c1_iacol;
      c1_xx[(int32_T)_SFD_EML_ARRAY_BOUNDS_CHECK("b", _SFD_INTEGER_CHECK("ib",
        (real_T)c1_ib), 1, 12, 1, 0) - 1] = c1_a[(int32_T)
        _SFD_EML_ARRAY_BOUNDS_CHECK("a", _SFD_INTEGER_CHECK("ia",
        (real_T)c1_ia), 1, 6, 1, 0) - 1];
      c1_b_a = c1_ia;
      c1_b = 1;
      c1_ia = c1_b_a + c1_b;
      c1_c_a = c1_ib;
      c1_b_b = 1;
      c1_ib = c1_c_a + c1_b_b;
    }
    c1_iacol = c1_ia;
  }
  for(c1_i46 = 0; c1_i46 < 2; c1_i46 = c1_i46 + 1) {
    c1_c_y[c1_i46] = 1.0 + (real_T)c1_i46;
  }
  for(c1_i47 = 0; c1_i47 < 2; c1_i47 = c1_i47 + 1) {
    c1_iv6[c1_i47] = (int32_T)_SFD_EML_ARRAY_BOUNDS_CHECK("y",
     (int32_T)_SFD_INTEGER_CHECK("", c1_c_y[c1_i47]), 1, 2, 1, 0) - 1;
  }
  for(c1_i48 = 0; c1_i48 < 2; c1_i48 = c1_i48 + 1) {
    c1_d_a[c1_i48] = c1_y[c1_iv6[c1_i48]];
  }
  for(c1_i49 = 0; c1_i49 < 6; c1_i49 = c1_i49 + 1) {
    for(c1_i50 = 0; c1_i50 < 2; c1_i50 = c1_i50 + 1) {
      c1_yy[c1_i50 + 2 * c1_i49] = 0.0;
    }
  }
  c1_b_ONE = 1;
  c1_b_ib = c1_b_ONE;
  c1_d2 = 1.0;
  for(c1_jtilecol = c1_d2; c1_jtilecol <= 6.0; c1_jtilecol = c1_jtilecol + 1.0) {
    c1_b_iacol = c1_b_ONE;
    c1_b_ia = c1_b_iacol;
    c1_d3 = 1.0;
    for(c1_k = c1_d3; c1_k <= 2.0; c1_k = c1_k + 1.0) {
      c1_yy[(int32_T)_SFD_EML_ARRAY_BOUNDS_CHECK("b", _SFD_INTEGER_CHECK("ib",
        (real_T)c1_b_ib), 1, 12, 1, 0) - 1] = c1_d_a[(int32_T)
        _SFD_EML_ARRAY_BOUNDS_CHECK("a", _SFD_INTEGER_CHECK("ia",
        (real_T)c1_b_ia), 1, 2, 1, 0) - 1];
      c1_e_a = c1_b_ia;
      c1_c_b = 1;
      c1_b_ia = c1_e_a + c1_c_b;
      c1_f_a = c1_b_ib;
      c1_d_b = 1;
      c1_b_ib = c1_f_a + c1_d_b;
    }
  }
}

static const mxArray *c1_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i51;
  real_T c1_b_u[36];
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  for(c1_i51 = 0; c1_i51 < 36; c1_i51 = c1_i51 + 1) {
    c1_b_u[c1_i51] = (*((real_T (*)[36])c1_u))[c1_i51];
  }
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 1U, 1, 36));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i52;
  int32_T c1_i53;
  real_T c1_b_u[144];
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  for(c1_i52 = 0; c1_i52 < 12; c1_i52 = c1_i52 + 1) {
    for(c1_i53 = 0; c1_i53 < 12; c1_i53 = c1_i53 + 1) {
      c1_b_u[c1_i53 + 12 * c1_i52] = (*((real_T (*)[144])c1_u))[c1_i53 + 12 *
        c1_i52];
    }
  }
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 1U, 2, 12, 12));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_c_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i54;
  real_T c1_b_u[36];
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  for(c1_i54 = 0; c1_i54 < 36; c1_i54 = c1_i54 + 1) {
    c1_b_u[c1_i54] = (*((real_T (*)[36])c1_u))[c1_i54];
  }
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 1U, 1, 36));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_d_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i55;
  int32_T c1_i56;
  real_T c1_b_u[36];
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  for(c1_i55 = 0; c1_i55 < 6; c1_i55 = c1_i55 + 1) {
    for(c1_i56 = 0; c1_i56 < 6; c1_i56 = c1_i56 + 1) {
      c1_b_u[c1_i56 + 6 * c1_i55] = (*((real_T (*)[36])c1_u))[c1_i56 + 6 *
        c1_i55];
    }
  }
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 1U, 2, 6, 6));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_e_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

const mxArray *sf_c1_multiAgents4_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_ResolvedFunctionInfo c1_info[85];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i57;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_info_helper(c1_info);
  c1_b_info_helper(c1_info);
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 85));
  for(c1_i57 = 0; c1_i57 < 85; c1_i57 = c1_i57 + 1) {
    c1_r0 = &c1_info[c1_i57];
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->context, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c1_r0->context)), "context",
     "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->name, "nameCaptureInfo", 13, 0U,
      0U, 2, 1, strlen(c1_r0->name)), "name",
     "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->dominantType, "nameCaptureInfo",
      13, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)),
     "dominantType", "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->resolved, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved",
     "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileLength, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileLength", "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileTime1, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c1_i57);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileTime2, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c1_i57);
  }
  sf_mex_assign(&c1_nameCaptureInfo, c1_m0);
  return c1_nameCaptureInfo;
}

static void c1_info_helper(c1_ResolvedFunctionInfo c1_info[85])
{
  c1_info[0].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[0].name = "eml_check_dim";
  c1_info[0].dominantType = "double";
  c1_info[0].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[0].fileLength = 1470U;
  c1_info[0].fileTime1 = 1177052918U;
  c1_info[0].fileTime2 = 0U;
  c1_info[1].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[1].name = "isscalar";
  c1_info[1].dominantType = "double";
  c1_info[1].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isscalar.m";
  c1_info[1].fileLength = 243U;
  c1_info[1].fileTime1 = 1160399904U;
  c1_info[1].fileTime2 = 0U;
  c1_info[2].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  c1_info[2].name = "eml_min_or_max";
  c1_info[2].dominantType = "char";
  c1_info[2].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c1_info[2].fileLength = 7178U;
  c1_info[2].fileTime1 = 1163920400U;
  c1_info[2].fileTime2 = 0U;
  c1_info[3].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[3].name = "isvector";
  c1_info[3].dominantType = "double";
  c1_info[3].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isvector.m";
  c1_info[3].fileLength = 284U;
  c1_info[3].fileTime1 = 1160399906U;
  c1_info[3].fileTime2 = 0U;
  c1_info[4].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/kron.m";
  c1_info[4].name = "meshgrid";
  c1_info[4].dominantType = "double";
  c1_info[4].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/meshgrid.m";
  c1_info[4].fileLength = 949U;
  c1_info[4].fileTime1 = 1163920374U;
  c1_info[4].fileTime2 = 0U;
  c1_info[5].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[5].name = "all";
  c1_info[5].dominantType = "logical";
  c1_info[5].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[5].fileLength = 2066U;
  c1_info[5].fileTime1 = 1166548250U;
  c1_info[5].fileTime2 = 0U;
  c1_info[6].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_nonsingleton_dim.m";
  c1_info[6].name = "ne";
  c1_info[6].dominantType = "double";
  c1_info[6].resolved = "[B]ne";
  c1_info[6].fileLength = 0U;
  c1_info[6].fileTime1 = 0U;
  c1_info[6].fileTime2 = 0U;
  c1_info[7].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  c1_info[7].name = "isinf";
  c1_info[7].dominantType = "double";
  c1_info[7].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  c1_info[7].fileLength = 514U;
  c1_info[7].fileTime1 = 1160399902U;
  c1_info[7].fileTime2 = 0U;
  c1_info[8].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c1_info[8].name = "isinteger";
  c1_info[8].dominantType = "double";
  c1_info[8].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isinteger.m";
  c1_info[8].fileLength = 254U;
  c1_info[8].fileTime1 = 1160399820U;
  c1_info[8].fileTime2 = 0U;
  c1_info[9].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c1_info[9].name = "ones";
  c1_info[9].dominantType = "char";
  c1_info[9].resolved = "[B]ones";
  c1_info[9].fileLength = 0U;
  c1_info[9].fileTime1 = 0U;
  c1_info[9].fileTime2 = 0U;
  c1_info[10].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[10].name = "lt";
  c1_info[10].dominantType = "double";
  c1_info[10].resolved = "[B]lt";
  c1_info[10].fileLength = 0U;
  c1_info[10].fileTime1 = 0U;
  c1_info[10].fileTime2 = 0U;
  c1_info[11].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[11].name = "colon";
  c1_info[11].dominantType = "double";
  c1_info[11].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  c1_info[11].fileLength = 6738U;
  c1_info[11].fileTime1 = 1163920426U;
  c1_info[11].fileTime2 = 0U;
  c1_info[12].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c1_info[12].name = "eml_scalexp_size";
  c1_info[12].dominantType = "double";
  c1_info[12].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_size.m";
  c1_info[12].fileLength = 923U;
  c1_info[12].fileTime1 = 1160399956U;
  c1_info[12].fileTime2 = 0U;
  c1_info[13].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  c1_info[13].name = "eml_guarded_nan";
  c1_info[13].dominantType = "";
  c1_info[13].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  c1_info[13].fileLength = 549U;
  c1_info[13].fileTime1 = 1160399940U;
  c1_info[13].fileTime2 = 0U;
  c1_info[14].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/is_flint_colon";
  c1_info[14].name = "max";
  c1_info[14].dominantType = "double";
  c1_info[14].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  c1_info[14].fileLength = 672U;
  c1_info[14].fileTime1 = 1160399806U;
  c1_info[14].fileTime2 = 0U;
  c1_info[15].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[15].name = "isnumeric";
  c1_info[15].dominantType = "double";
  c1_info[15].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isnumeric.m";
  c1_info[15].fileLength = 250U;
  c1_info[15].fileTime1 = 1160399822U;
  c1_info[15].fileTime2 = 0U;
  c1_info[16].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[16].name = "size";
  c1_info[16].dominantType = "double";
  c1_info[16].resolved = "[B]size";
  c1_info[16].fileLength = 0U;
  c1_info[16].fileTime1 = 0U;
  c1_info[16].fileTime2 = 0U;
  c1_info[17].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isa.m";
  c1_info[17].name = "class";
  c1_info[17].dominantType = "char";
  c1_info[17].resolved = "[B]class";
  c1_info[17].fileLength = 0U;
  c1_info[17].fileTime1 = 0U;
  c1_info[17].fileTime2 = 0U;
  c1_info[18].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  c1_info[18].name = "ischar";
  c1_info[18].dominantType = "char";
  c1_info[18].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/strfun/ischar.m";
  c1_info[18].fileLength = 244U;
  c1_info[18].fileTime1 = 1160400034U;
  c1_info[18].fileTime2 = 0U;
  c1_info[19].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isa.m";
  c1_info[19].name = "strcmp";
  c1_info[19].dominantType = "char";
  c1_info[19].resolved = "[B]strcmp";
  c1_info[19].fileLength = 0U;
  c1_info[19].fileTime1 = 0U;
  c1_info[19].fileTime2 = 0U;
  c1_info[20].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isa.m";
  c1_info[20].name = "eml_is_integer_class";
  c1_info[20].dominantType = "char";
  c1_info[20].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_integer_class.m";
  c1_info[20].fileLength = 462U;
  c1_info[20].fileTime1 = 1160399944U;
  c1_info[20].fileTime2 = 0U;
  c1_info[21].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/is_flint_colon";
  c1_info[21].name = "abs";
  c1_info[21].dominantType = "double";
  c1_info[21].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  c1_info[21].fileLength = 1031U;
  c1_info[21].fileTime1 = 1163920302U;
  c1_info[21].fileTime2 = 0U;
  c1_info[22].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/prod.m";
  c1_info[22].name = "cast";
  c1_info[22].dominantType = "double";
  c1_info[22].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/cast.m";
  c1_info[22].fileLength = 907U;
  c1_info[22].fileTime1 = 1160399818U;
  c1_info[22].fileTime2 = 0U;
  c1_info[23].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/meshgrid.m";
  c1_info[23].name = "transpose";
  c1_info[23].dominantType = "double";
  c1_info[23].resolved = "[B]transpose";
  c1_info[23].fileLength = 0U;
  c1_info[23].fileTime1 = 0U;
  c1_info[23].fileTime2 = 0U;
  c1_info[24].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c1_info[24].name = "rdivide";
  c1_info[24].dominantType = "double";
  c1_info[24].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_info[24].fileLength = 4533U;
  c1_info[24].fileTime1 = 1177052948U;
  c1_info[24].fileTime2 = 0U;
  c1_info[25].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[25].name = "intmax";
  c1_info[25].dominantType = "char";
  c1_info[25].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  c1_info[25].fileLength = 1575U;
  c1_info[25].fileTime1 = 1160399896U;
  c1_info[25].fileTime2 = 0U;
  c1_info[26].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/prod.m";
  c1_info[26].name = "mtimes";
  c1_info[26].dominantType = "double";
  c1_info[26].resolved = "[B]mtimes";
  c1_info[26].fileLength = 0U;
  c1_info[26].fileTime1 = 0U;
  c1_info[26].fileTime2 = 0U;
  c1_info[27].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c1_info[27].name = "zeros";
  c1_info[27].dominantType = "double";
  c1_info[27].resolved = "[B]zeros";
  c1_info[27].fileLength = 0U;
  c1_info[27].fileTime1 = 0U;
  c1_info[27].fileTime2 = 0U;
  c1_info[28].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[28].name = "islogical";
  c1_info[28].dominantType = "logical";
  c1_info[28].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/islogical.m";
  c1_info[28].fileLength = 186U;
  c1_info[28].fileTime1 = 1160399822U;
  c1_info[28].fileTime2 = 0U;
  c1_info[29].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_numel.m";
  c1_info[29].name = "numel";
  c1_info[29].dominantType = "double";
  c1_info[29].resolved = "[B]numel";
  c1_info[29].fileLength = 0U;
  c1_info[29].fileTime1 = 0U;
  c1_info[29].fileTime2 = 0U;
  c1_info[30].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  c1_info[30].name = "isnan";
  c1_info[30].dominantType = "double";
  c1_info[30].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  c1_info[30].fileLength = 514U;
  c1_info[30].fileTime1 = 1160399904U;
  c1_info[30].fileTime2 = 0U;
  c1_info[31].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m/check_arg";
  c1_info[31].name = "imag";
  c1_info[31].dominantType = "double";
  c1_info[31].resolved = "[B]imag";
  c1_info[31].fileLength = 0U;
  c1_info[31].fileTime1 = 0U;
  c1_info[31].fileTime2 = 0U;
  c1_info[32].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[32].name = "eml_assert";
  c1_info[32].dominantType = "char";
  c1_info[32].resolved = "[B]eml_assert";
  c1_info[32].fileLength = 0U;
  c1_info[32].fileTime1 = 0U;
  c1_info[32].fileTime2 = 0U;
  c1_info[33].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/cast.m";
  c1_info[33].name = "double";
  c1_info[33].dominantType = "double";
  c1_info[33].resolved = "[B]double";
  c1_info[33].fileLength = 0U;
  c1_info[33].fileTime1 = 0U;
  c1_info[33].fileTime2 = 0U;
  c1_info[34].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c1_info[34].name = "plus";
  c1_info[34].dominantType = "double";
  c1_info[34].resolved = "[B]plus";
  c1_info[34].fileLength = 0U;
  c1_info[34].fileTime1 = 0U;
  c1_info[34].fileTime2 = 0U;
  c1_info[35].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[35].name = "eml_nonsingleton_dim";
  c1_info[35].dominantType = "logical";
  c1_info[35].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_nonsingleton_dim.m";
  c1_info[35].fileLength = 454U;
  c1_info[35].fileTime1 = 1160399950U;
  c1_info[35].fileTime2 = 0U;
  c1_info[36].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[36].name = "eq";
  c1_info[36].dominantType = "double";
  c1_info[36].resolved = "[B]eq";
  c1_info[36].fileLength = 0U;
  c1_info[36].fileTime1 = 0U;
  c1_info[36].fileTime2 = 0U;
  c1_info[37].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  c1_info[37].name = "realmin";
  c1_info[37].dominantType = "";
  c1_info[37].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m";
  c1_info[37].fileLength = 649U;
  c1_info[37].fileTime1 = 1160399918U;
  c1_info[37].fileTime2 = 0U;
  c1_info[38].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  c1_info[38].name = "and";
  c1_info[38].dominantType = "logical";
  c1_info[38].resolved = "[B]and";
  c1_info[38].fileLength = 0U;
  c1_info[38].fileTime1 = 0U;
  c1_info[38].fileTime2 = 0U;
  c1_info[39].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c1_info[39].name = "isempty";
  c1_info[39].dominantType = "double";
  c1_info[39].resolved = "[B]isempty";
  c1_info[39].fileLength = 0U;
  c1_info[39].fileTime1 = 0U;
  c1_info[39].fileTime2 = 0U;
  c1_info[40].context =
    "[]C:/Users/wizest/Desktop/formation-control/matlab/fc/toMatrix.m";
  c1_info[40].name = "sqrt";
  c1_info[40].dominantType = "double";
  c1_info[40].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[40].fileLength = 1276U;
  c1_info[40].fileTime1 = 1177052908U;
  c1_info[40].fileTime2 = 0U;
  c1_info[41].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[41].name = "nargin";
  c1_info[41].dominantType = "";
  c1_info[41].resolved = "[B]nargin";
  c1_info[41].fileLength = 0U;
  c1_info[41].fileTime1 = 0U;
  c1_info[41].fileTime2 = 0U;
  c1_info[42].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[42].name = "eml_numel";
  c1_info[42].dominantType = "double";
  c1_info[42].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_numel.m";
  c1_info[42].fileLength = 278U;
  c1_info[42].fileTime1 = 1163920402U;
  c1_info[42].fileTime2 = 0U;
  c1_info[43].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  c1_info[43].name = "not";
  c1_info[43].dominantType = "logical";
  c1_info[43].resolved = "[B]not";
  c1_info[43].fileLength = 0U;
  c1_info[43].fileTime1 = 0U;
  c1_info[43].fileTime2 = 0U;
  c1_info[44].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c1_info[44].name = "isstruct";
  c1_info[44].dominantType = "double";
  c1_info[44].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isstruct.m";
  c1_info[44].fileLength = 179U;
  c1_info[44].fileTime1 = 1160399824U;
  c1_info[44].fileTime2 = 0U;
  c1_info[45].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  c1_info[45].name = "int32";
  c1_info[45].dominantType = "double";
  c1_info[45].resolved = "[B]int32";
  c1_info[45].fileLength = 0U;
  c1_info[45].fileTime1 = 0U;
  c1_info[45].fileTime2 = 0U;
  c1_info[46].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isa.m";
  c1_info[46].name = "eml_is_float_class";
  c1_info[46].dominantType = "char";
  c1_info[46].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  c1_info[46].fileLength = 273U;
  c1_info[46].fileTime1 = 1160399944U;
  c1_info[46].fileTime2 = 0U;
  c1_info[47].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m/repmat_outsize";
  c1_info[47].name = "times";
  c1_info[47].dominantType = "double";
  c1_info[47].resolved = "[B]times";
  c1_info[47].fileLength = 0U;
  c1_info[47].fileTime1 = 0U;
  c1_info[47].fileTime2 = 0U;
  c1_info[48].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c1_info[48].name = "eml_scalexp_compatible";
  c1_info[48].dominantType = "double";
  c1_info[48].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  c1_info[48].fileLength = 422U;
  c1_info[48].fileTime1 = 1160399954U;
  c1_info[48].fileTime2 = 0U;
  c1_info[49].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m/check_arg";
  c1_info[49].name = "real";
  c1_info[49].dominantType = "double";
  c1_info[49].resolved = "[B]real";
  c1_info[49].fileLength = 0U;
  c1_info[49].fileTime1 = 0U;
  c1_info[49].fileTime2 = 0U;
  c1_info[50].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/checkrange";
  c1_info[50].name = "realmax";
  c1_info[50].dominantType = "char";
  c1_info[50].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  c1_info[50].fileLength = 672U;
  c1_info[50].fileTime1 = 1160399916U;
  c1_info[50].fileTime2 = 0U;
  c1_info[51].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[51].name = "floor";
  c1_info[51].dominantType = "double";
  c1_info[51].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c1_info[51].fileLength = 595U;
  c1_info[51].fileTime1 = 1163920336U;
  c1_info[51].fileTime2 = 0U;
  c1_info[52].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/meshgrid.m";
  c1_info[52].name = "repmat";
  c1_info[52].dominantType = "double";
  c1_info[52].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  c1_info[52].fileLength = 3977U;
  c1_info[52].fileTime1 = 1163920378U;
  c1_info[52].fileTime2 = 0U;
  c1_info[53].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[53].name = "isfloat";
  c1_info[53].dominantType = "double";
  c1_info[53].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isfloat.m";
  c1_info[53].fileLength = 182U;
  c1_info[53].fileTime1 = 1160399820U;
  c1_info[53].fileTime2 = 0U;
  c1_info[54].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[54].name = "le";
  c1_info[54].dominantType = "int32";
  c1_info[54].resolved = "[B]le";
  c1_info[54].fileLength = 0U;
  c1_info[54].fileTime1 = 0U;
  c1_info[54].fileTime2 = 0U;
  c1_info[55].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[55].name = "ge";
  c1_info[55].dominantType = "double";
  c1_info[55].resolved = "[B]ge";
  c1_info[55].fileLength = 0U;
  c1_info[55].fileTime1 = 0U;
  c1_info[55].fileTime2 = 0U;
  c1_info[56].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isfloat.m";
  c1_info[56].name = "isa";
  c1_info[56].dominantType = "double";
  c1_info[56].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/isa.m";
  c1_info[56].fileLength = 791U;
  c1_info[56].fileTime1 = 1160399818U;
  c1_info[56].fileTime2 = 0U;
  c1_info[57].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[57].name = "false";
  c1_info[57].dominantType = "";
  c1_info[57].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/false.m";
  c1_info[57].fileLength = 631U;
  c1_info[57].fileTime1 = 1163920366U;
  c1_info[57].fileTime2 = 0U;
  c1_info[58].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isvector.m";
  c1_info[58].name = "ndims";
  c1_info[58].dominantType = "double";
  c1_info[58].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/ndims.m";
  c1_info[58].fileLength = 236U;
  c1_info[58].fileTime1 = 1163920376U;
  c1_info[58].fileTime2 = 0U;
  c1_info[59].context = "";
  c1_info[59].name = "kron";
  c1_info[59].dominantType = "double";
  c1_info[59].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/kron.m";
  c1_info[59].fileLength = 845U;
  c1_info[59].fileTime1 = 1160399998U;
  c1_info[59].fileTime2 = 0U;
  c1_info[60].context = "";
  c1_info[60].name = "eye";
  c1_info[60].dominantType = "double";
  c1_info[60].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  c1_info[60].fileLength = 1665U;
  c1_info[60].fileTime1 = 1163920364U;
  c1_info[60].fileTime2 = 0U;
  c1_info[61].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m/eye_internal";
  c1_info[61].name = "min";
  c1_info[61].dominantType = "double";
  c1_info[61].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  c1_info[61].fileLength = 672U;
  c1_info[61].fileTime1 = 1160399810U;
  c1_info[61].fileTime2 = 0U;
  c1_info[62].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[62].name = "eml_index_class";
  c1_info[62].dominantType = "";
  c1_info[62].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_info[62].fileLength = 953U;
  c1_info[62].fileTime1 = 1160399942U;
  c1_info[62].fileTime2 = 0U;
  c1_info[63].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m";
  c1_info[63].name = "mpower";
  c1_info[63].dominantType = "double";
  c1_info[63].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c1_info[63].fileLength = 3116U;
  c1_info[63].fileTime1 = 1177052946U;
  c1_info[63].fileTime2 = 0U;
}

static void c1_b_info_helper(c1_ResolvedFunctionInfo c1_info[85])
{
  c1_info[64].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[64].name = "gt";
  c1_info[64].dominantType = "double";
  c1_info[64].resolved = "[B]gt";
  c1_info[64].fileLength = 0U;
  c1_info[64].fileTime1 = 0U;
  c1_info[64].fileTime2 = 0U;
  c1_info[65].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[65].name = "isreal";
  c1_info[65].dominantType = "double";
  c1_info[65].resolved = "[B]isreal";
  c1_info[65].fileLength = 0U;
  c1_info[65].fileTime1 = 0U;
  c1_info[65].fileTime2 = 0U;
  c1_info[66].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  c1_info[66].name = "eml_index_plus";
  c1_info[66].dominantType = "int32";
  c1_info[66].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  c1_info[66].fileLength = 317U;
  c1_info[66].fileTime1 = 1174391648U;
  c1_info[66].fileTime2 = 0U;
  c1_info[67].context =
    "[]C:/Users/wizest/Desktop/formation-control/matlab/fc/toMatrix.m";
  c1_info[67].name = "reshape";
  c1_info[67].dominantType = "double";
  c1_info[67].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[67].fileLength = 1835U;
  c1_info[67].fileTime1 = 1163920380U;
  c1_info[67].fileTime2 = 0U;
  c1_info[68].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/is_flint_colon";
  c1_info[68].name = "isfinite";
  c1_info[68].dominantType = "double";
  c1_info[68].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  c1_info[68].fileLength = 387U;
  c1_info[68].fileTime1 = 1160399902U;
  c1_info[68].fileTime2 = 0U;
  c1_info[69].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c1_info[69].name = "eml_assert_valid_size_arg";
  c1_info[69].dominantType = "double";
  c1_info[69].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  c1_info[69].fileLength = 1097U;
  c1_info[69].fileTime1 = 1163920388U;
  c1_info[69].fileTime2 = 0U;
  c1_info[70].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/true.m";
  c1_info[70].name = "logical";
  c1_info[70].dominantType = "double";
  c1_info[70].resolved = "[B]logical";
  c1_info[70].fileLength = 0U;
  c1_info[70].fileTime1 = 0U;
  c1_info[70].fileTime2 = 0U;
  c1_info[71].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  c1_info[71].name = "true";
  c1_info[71].dominantType = "";
  c1_info[71].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/true.m";
  c1_info[71].fileLength = 625U;
  c1_info[71].fileTime1 = 1163920386U;
  c1_info[71].fileTime2 = 0U;
  c1_info[72].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_check_dim.m";
  c1_info[72].name = "nargout";
  c1_info[72].dominantType = "";
  c1_info[72].resolved = "[B]nargout";
  c1_info[72].fileLength = 0U;
  c1_info[72].fileTime1 = 0U;
  c1_info[72].fileTime2 = 0U;
  c1_info[73].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  c1_info[73].name = "eml_isa_uint";
  c1_info[73].dominantType = "double";
  c1_info[73].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  c1_info[73].fileLength = 288U;
  c1_info[73].fileTime1 = 1163920398U;
  c1_info[73].fileTime2 = 0U;
  c1_info[74].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[74].name = "eml_alloc";
  c1_info[74].dominantType = "double";
  c1_info[74].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c1_info[74].fileLength = 2151U;
  c1_info[74].fileTime1 = 1179417670U;
  c1_info[74].fileTime2 = 0U;
  c1_info[75].context = "";
  c1_info[75].name = "toMatrix";
  c1_info[75].dominantType = "double";
  c1_info[75].resolved =
    "[]C:/Users/wizest/Desktop/formation-control/matlab/fc/toMatrix.m";
  c1_info[75].fileLength = 85U;
  c1_info[75].fileTime1 = 1206208426U;
  c1_info[75].fileTime2 = 0U;
  c1_info[76].context =
    "[]C:/Users/wizest/Desktop/formation-control/matlab/fc/toMatrix.m";
  c1_info[76].name = "length";
  c1_info[76].dominantType = "double";
  c1_info[76].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c1_info[76].fileLength = 347U;
  c1_info[76].fileTime1 = 1163920370U;
  c1_info[76].fileTime2 = 0U;
  c1_info[77].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c1_info[77].name = "power";
  c1_info[77].dominantType = "double";
  c1_info[77].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c1_info[77].fileLength = 4842U;
  c1_info[77].fileTime1 = 1177052946U;
  c1_info[77].fileTime2 = 0U;
  c1_info[78].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/is_flint_colon";
  c1_info[78].name = "eps";
  c1_info[78].dominantType = "double";
  c1_info[78].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  c1_info[78].fileLength = 1384U;
  c1_info[78].fileTime1 = 1163920364U;
  c1_info[78].fileTime2 = 0U;
  c1_info[79].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m/unrounded_npoints";
  c1_info[79].name = "mrdivide";
  c1_info[79].dominantType = "double";
  c1_info[79].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c1_info[79].fileLength = 653U;
  c1_info[79].fileTime1 = 1160400002U;
  c1_info[79].fileTime2 = 0U;
  c1_info[80].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c1_info[80].name = "eml_error";
  c1_info[80].dominantType = "char";
  c1_info[80].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  c1_info[80].fileLength = 585U;
  c1_info[80].fileTime1 = 1177052920U;
  c1_info[80].fileTime2 = 0U;
  c1_info[81].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m";
  c1_info[81].name = "uminus";
  c1_info[81].dominantType = "double";
  c1_info[81].resolved = "[B]uminus";
  c1_info[81].fileLength = 0U;
  c1_info[81].fileTime1 = 0U;
  c1_info[81].fileTime2 = 0U;
  c1_info[82].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  c1_info[82].name = "prod";
  c1_info[82].dominantType = "double";
  c1_info[82].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/datafun/prod.m";
  c1_info[82].fileLength = 1378U;
  c1_info[82].fileTime1 = 1163920294U;
  c1_info[82].fileTime2 = 0U;
  c1_info[83].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  c1_info[83].name = "nan";
  c1_info[83].dominantType = "char";
  c1_info[83].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/nan.m";
  c1_info[83].fileLength = 1496U;
  c1_info[83].fileTime1 = 1163920374U;
  c1_info[83].fileTime2 = 0U;
  c1_info[84].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  c1_info[84].name = "minus";
  c1_info[84].dominantType = "double";
  c1_info[84].resolved = "[B]minus";
  c1_info[84].fileLength = 0U;
  c1_info[84].fileTime1 = 0U;
  c1_info[84].fileTime2 = 0U;
}

static void init_dsm_address_info(void)
{
}

/* SFunction Glue Code */
void sf_c1_multiAgents4_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2844506847U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2201714203U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2888913852U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2959398110U);
}

mxArray *sf_c1_multiAgents4_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2192876381U);
    pr[1] = (double)(1013682207U);
    pr[2] = (double)(1610337021U);
    pr[3] = (double)(4258848037U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(36);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(12);
      pr[1] = (double)(12);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }
  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
 fullDebuggerInitialization)
{
  if(ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
    /* do this only if simulation is starting */
    if(!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent =
          sf_debug_initialize_chart(_multiAgents4MachineNumber_,
         1,
         1,
         1,
         2,
         0,
         0,
         0,
         0,
         1,
         &(chartInstance.chartNumber),
         &(chartInstance.instanceNumber),
         ssGetPath(S),
         (void *)S);
        if(chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_multiAgents4MachineNumber_,chartInstance.chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_multiAgents4MachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_multiAgents4MachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          {
            unsigned int dimVector[1];
            dimVector[0]= 36;
            _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,1.0,0,"P",0,c1_sf_marshall);
          }
          {
            unsigned int dimVector[2];
            dimVector[0]= 12;
            dimVector[1]= 12;
            _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"Pm",0,c1_b_sf_marshall);
          }
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }
        _SFD_CV_INIT_CHART(0,0,0,0);
        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,51);
        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"toMatrix",19,-1,81);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }

        {
          real_T (*c1_P)[36];
          real_T (*c1_Pm)[144];
          c1_P = (real_T (*)[36])ssGetInputPortSignal(chartInstance.S, 0);
          c1_Pm = (real_T (*)[144])ssGetOutputPortSignal(chartInstance.S, 1);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_P);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_Pm);
        }
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_multiAgents4MachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c1_multiAgents4(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S,0);
  initialize_params_c1_multiAgents4();
  initialize_c1_multiAgents4();
}

static void sf_opaque_enable_c1_multiAgents4(void *chartInstanceVar)
{
  enable_c1_multiAgents4();
}

static void sf_opaque_disable_c1_multiAgents4(void *chartInstanceVar)
{
  disable_c1_multiAgents4();
}

static void sf_opaque_gateway_c1_multiAgents4(void *chartInstanceVar)
{
  sf_c1_multiAgents4();
}

static void sf_opaque_terminate_c1_multiAgents4(void *chartInstanceVar)
{
  if (sim_mode_is_rtw_gen(chartInstance.S) ||
   sim_mode_is_external(chartInstance.S)) {
    sf_clear_rtw_identifier(chartInstance.S);
  }
  finalize_c1_multiAgents4();
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_multiAgents4(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  if(sf_machine_global_initializer_called()) {
    initialize_params_c1_multiAgents4();
  }
}

static void mdlSetWorkWidths_c1_multiAgents4(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("multiAgents4",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("multiAgents4",1,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"multiAgents4",1,1);
      sf_mark_chart_reusable_outputs(S,"multiAgents4",1,1);
    }
    sf_set_rtw_dwork_info(S,"multiAgents4",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2031080257U));
  ssSetChecksum1(S,(3044709428U));
  ssSetChecksum2(S,(1735947893U));
  ssSetChecksum3(S,(3187841474U));

  ssSetmdlDerivatives(S, NULL);

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_multiAgents4(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "multiAgents4", 1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_multiAgents4(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway = sf_opaque_gateway_c1_multiAgents4;
  chartInstance.chartInfo.initializeChart = sf_opaque_initialize_c1_multiAgents4;
  chartInstance.chartInfo.terminateChart = sf_opaque_terminate_c1_multiAgents4;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c1_multiAgents4;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c1_multiAgents4;
  chartInstance.chartInfo.zeroCrossings = NULL;
  chartInstance.chartInfo.outputs = NULL;
  chartInstance.chartInfo.derivatives = NULL;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c1_multiAgents4;
  chartInstance.chartInfo.mdlStart = mdlStart_c1_multiAgents4;
  chartInstance.chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_multiAgents4;
  chartInstance.chartInfo.extModeExec = NULL;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */

  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
  chart_debug_initialization(S,1);
}

void c1_multiAgents4_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_multiAgents4(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_multiAgents4(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_multiAgents4(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c1_multiAgents4_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}

