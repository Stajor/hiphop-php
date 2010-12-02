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

#ifndef __GENERATED_cls_SplFileInfo_h9ae251af__
#define __GENERATED_cls_SplFileInfo_h9ae251af__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splfile.php line 11 */
class c_SplFileInfo : public ExtObjectData {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(SplFileInfo, SplFileInfo)
  DECLARE_INVOKE_EX(SplFileInfo, SplFileInfo, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_SplFileInfo 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_SplFileInfo 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SplFileInfo 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SplFileInfo 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_SplFileInfo 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_file_name);
  public: c_SplFileInfo *create(Variant v_file_name);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: String t_getpath();
  public: String t_getfilename();
  public: Object t_getfileinfo(CVarRef v_class_name = NAMSTR(s_sys_ss00000000, ""));
  public: String t_getbasename(CVarRef v_suffix = NAMSTR(s_sys_ss00000000, ""));
  public: String t_getpathname();
  public: Object t_getpathinfo(CVarRef v_class_name = NAMSTR(s_sys_ss00000000, ""));
  public: int64 t_getperms();
  public: int64 t_getinode();
  public: int64 t_getsize();
  public: int64 t_getowner();
  public: int64 t_getgroup();
  public: int64 t_getatime();
  public: int64 t_getmtime();
  public: int64 t_getctime();
  public: String t_gettype();
  public: bool t_iswritable();
  public: bool t_isreadable();
  public: bool t_isexecutable();
  public: bool t_isfile();
  public: bool t_isdir();
  public: bool t_islink();
  public: String t_getlinktarget();
  public: Variant t_getrealpath();
  public: String t___tostring();
  public: Object t_openfile(CVarRef v_mode = NAMSTR(s_sys_ss0d42ecf6, "r"), CVarRef v_use_include_path = false, CVarRef v_context = null_variant);
  public: void t_setfileclass(CVarRef v_class_name = NAMSTR(s_sys_ss5d909898, "SplFileObject"));
  public: void t_setinfoclass(CVarRef v_class_name = NAMSTR(s_sys_ss914a58e9, "SplFileInfo"));
  public: Variant m_rsrc;
  DECLARE_METHOD_INVOKE_HELPERS(getperms);
  DECLARE_METHOD_INVOKE_HELPERS(iswritable);
  DECLARE_METHOD_INVOKE_HELPERS(getbasename);
  DECLARE_METHOD_INVOKE_HELPERS(getpathname);
  DECLARE_METHOD_INVOKE_HELPERS(getgroup);
  DECLARE_METHOD_INVOKE_HELPERS(setfileclass);
  DECLARE_METHOD_INVOKE_HELPERS(setinfoclass);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(getlinktarget);
  DECLARE_METHOD_INVOKE_HELPERS(isreadable);
  DECLARE_METHOD_INVOKE_HELPERS(getrealpath);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getpathinfo);
  DECLARE_METHOD_INVOKE_HELPERS(getctime);
  DECLARE_METHOD_INVOKE_HELPERS(getpath);
  DECLARE_METHOD_INVOKE_HELPERS(getinode);
  DECLARE_METHOD_INVOKE_HELPERS(islink);
  DECLARE_METHOD_INVOKE_HELPERS(getsize);
  DECLARE_METHOD_INVOKE_HELPERS(isfile);
  DECLARE_METHOD_INVOKE_HELPERS(getfilename);
  DECLARE_METHOD_INVOKE_HELPERS(getowner);
  DECLARE_METHOD_INVOKE_HELPERS(getmtime);
  DECLARE_METHOD_INVOKE_HELPERS(isdir);
  DECLARE_METHOD_INVOKE_HELPERS(getfileinfo);
  DECLARE_METHOD_INVOKE_HELPERS(isexecutable);
  DECLARE_METHOD_INVOKE_HELPERS(getatime);
  DECLARE_METHOD_INVOKE_HELPERS(openfile);
  DECLARE_METHOD_INVOKE_HELPERS(gettype);
};
extern struct ObjectStaticCallbacks cw_SplFileInfo;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_SplFileInfo_h9ae251af__
