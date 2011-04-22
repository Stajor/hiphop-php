/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_VARIABLE_H__
#define __EXTPROFILE_VARIABLE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_variable.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_is_bool(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_bool(var);
}

inline bool x_is_int(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_int(var);
}

inline bool x_is_integer(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_integer(var);
}

inline bool x_is_long(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_long(var);
}

inline bool x_is_double(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_double(var);
}

inline bool x_is_float(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_float(var);
}

inline bool x_is_numeric(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_numeric(var);
}

inline bool x_is_real(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_real(var);
}

inline bool x_is_string(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_string(var);
}

inline bool x_is_scalar(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_scalar(var);
}

inline bool x_is_array(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_array(var);
}

inline bool x_is_object(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_object(var);
}

inline bool x_is_resource(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_resource(var);
}

inline bool x_is_null(CVarRef var) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_null(var);
}

inline String x_gettype(CVarRef v) {
  FUNCTION_INJECTION_BUILTIN(gettype);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gettype(v);
}

inline String x_get_resource_type(CObjRef handle) {
  FUNCTION_INJECTION_BUILTIN(get_resource_type);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_get_resource_type(handle);
}

inline int64 x_intval(CVarRef v, int64 base = 10) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_intval(v, base);
}

inline double x_doubleval(CVarRef v) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_doubleval(v);
}

inline double x_floatval(CVarRef v) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_floatval(v);
}

inline String x_strval(CVarRef v) {
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_strval(v);
}

inline bool x_settype(VRefParam var, CStrRef type) {
  FUNCTION_INJECTION_BUILTIN(settype);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_settype(var, type);
}

inline Variant x_print_r(CVarRef expression, bool ret = false) {
  FUNCTION_INJECTION_BUILTIN(print_r);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_print_r(expression, ret);
}

inline Variant x_var_export(CVarRef expression, bool ret = false) {
  FUNCTION_INJECTION_BUILTIN(var_export);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_var_export(expression, ret);
}

inline void x_var_dump(int _argc, CVarRef expression, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(var_dump);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_var_dump(_argc, expression, _argv);
}

inline void x_debug_zval_dump(CVarRef variable) {
  FUNCTION_INJECTION_BUILTIN(debug_zval_dump);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_debug_zval_dump(variable);
}

inline String x_serialize(CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(serialize);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_serialize(value);
}

inline Variant x_unserialize(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(unserialize);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_unserialize(str);
}

inline Array x_get_defined_vars() {
  FUNCTION_INJECTION_BUILTIN(get_defined_vars);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_get_defined_vars();
}

inline bool x_import_request_variables(CStrRef types, CStrRef prefix = "") {
  FUNCTION_INJECTION_BUILTIN(import_request_variables);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_import_request_variables(types, prefix);
}

inline int x_extract(CArrRef var_array, int extract_type = k_EXTR_OVERWRITE, CStrRef prefix = "") {
  FUNCTION_INJECTION_BUILTIN(extract);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_extract(var_array, extract_type, prefix);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_VARIABLE_H__
