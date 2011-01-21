/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_Continuation_h7676edc2__
#define __GENERATED_cls_Continuation_h7676edc2__

#include <cls/Continuation.fw.h>
#include <cls/Closure.h>
#include <cls/Iterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/closure.php line 31 */
FORWARD_DECLARE_CLASS(Continuation);
class c_Continuation : public c_Closure {
  public:

  // Properties
  Variant m_obj;
  Variant m_args;
  Variant m_label;
  bool m_done;
  int64 m_index;
  Variant m_value;
  bool m_running;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(Continuation, Continuation)
  DECLARE_INVOKE_EX(Continuation, Continuation, Closure)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_Continuation 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_Continuation 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_Continuation 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props, bool pubOnly = false) const;
  virtual void o_setArray(CArrRef props);
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  Variant *o_realPropPrivate(CStrRef s, int flags) const;

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_Continuation 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_func, Variant v_vars, Variant v_obj = null, Variant v_args = s_sys_sa00000000);
  public: c_Continuation *create(Variant v_func, Variant v_vars, Variant v_obj = null, Variant v_args = s_sys_sa00000000);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: void t_update(CVarRef v_label, CVarRef v_value, CVarRef v_vars);
  public: void t_done();
  public: int t_num_args();
  public: Variant t_get_args();
  public: Variant t_get_arg(CVarRef v_id);
  public: Variant t_current();
  public: int64 t_key();
  public: void t_next();
  public: void t_rewind();
  public: bool t_valid();
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(get_args);
  DECLARE_METHOD_INVOKE_HELPERS(get_arg);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(done);
  DECLARE_METHOD_INVOKE_HELPERS(num_args);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  DECLARE_METHOD_INVOKE_HELPERS(update);
};
extern struct ObjectStaticCallbacks cw_Continuation;
Object co_Continuation(CArrRef params, bool init = true);
Object coo_Continuation();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Continuation_h7676edc2__
