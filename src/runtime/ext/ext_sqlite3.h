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

#ifndef __EXT_SQLITE3_H__
#define __EXT_SQLITE3_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <sqlite3.h>
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64 k_SQLITE3_ASSOC;
extern const int64 k_SQLITE3_NUM;
extern const int64 k_SQLITE3_BOTH;
extern const int64 k_SQLITE3_INTEGER;
extern const int64 k_SQLITE3_FLOAT;
extern const int64 k_SQLITE3_TEXT;
extern const int64 k_SQLITE3_BLOB;
extern const int64 k_SQLITE3_NULL;
extern const int64 k_SQLITE3_OPEN_READONLY;
extern const int64 k_SQLITE3_OPEN_READWRITE;
extern const int64 k_SQLITE3_OPEN_CREATE;

///////////////////////////////////////////////////////////////////////////////
// class SQLite3

FORWARD_DECLARE_CLASS_BUILTIN(SQLite3);
class c_SQLite3 : public ExtObjectData {
 public:
  DECLARE_CLASS(SQLite3, SQLite3, ObjectData)

  // need to implement
  public: c_SQLite3();
  public: ~c_SQLite3();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: void t_open(CStrRef filename, int64 flags = k_SQLITE3_OPEN_READWRITE|k_SQLITE3_OPEN_CREATE, CStrRef encryption_key = null_string);
  DECLARE_METHOD_INVOKE_HELPERS(open);
  public: bool t_close();
  DECLARE_METHOD_INVOKE_HELPERS(close);
  public: bool t_exec(CStrRef sql);
  DECLARE_METHOD_INVOKE_HELPERS(exec);
  public: Array t_version();
  DECLARE_METHOD_INVOKE_HELPERS(version);
  public: int64 t_lastinsertrowid();
  DECLARE_METHOD_INVOKE_HELPERS(lastinsertrowid);
  public: int64 t_lasterrorcode();
  DECLARE_METHOD_INVOKE_HELPERS(lasterrorcode);
  public: String t_lasterrormsg();
  DECLARE_METHOD_INVOKE_HELPERS(lasterrormsg);
  public: bool t_loadextension(CStrRef extension);
  DECLARE_METHOD_INVOKE_HELPERS(loadextension);
  public: int64 t_changes();
  DECLARE_METHOD_INVOKE_HELPERS(changes);
  public: String t_escapestring(CStrRef sql);
  DECLARE_METHOD_INVOKE_HELPERS(escapestring);
  public: Variant t_prepare(CStrRef sql);
  DECLARE_METHOD_INVOKE_HELPERS(prepare);
  public: Variant t_query(CStrRef sql);
  DECLARE_METHOD_INVOKE_HELPERS(query);
  public: Variant t_querysingle(CStrRef sql, bool entire_row = false);
  DECLARE_METHOD_INVOKE_HELPERS(querysingle);
  public: bool t_createfunction(CStrRef name, CVarRef callback, int64 argcount = -1);
  DECLARE_METHOD_INVOKE_HELPERS(createfunction);
  public: bool t_createaggregate(CStrRef name, CVarRef step, CVarRef final, int64 argcount = -1);
  DECLARE_METHOD_INVOKE_HELPERS(createaggregate);
  public: bool t_openblob(CStrRef table, CStrRef column, int64 rowid, CStrRef dbname = null_string);
  DECLARE_METHOD_INVOKE_HELPERS(openblob);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_SQLite3 *create();
  public: void getConstructor(MethodCallPackage &mcp);


  public: void validate() const;
  public: sqlite3 *m_raw_db;
    DECLARE_BOOST_TYPES(UserDefinedFunc);
    struct UserDefinedFunc {
      int argc;
      Variant func;
      Variant step;
      Variant fini;
    };
  public: UserDefinedFuncPtrVec m_udfs;
};

///////////////////////////////////////////////////////////////////////////////
// class SQLite3Stmt

FORWARD_DECLARE_CLASS_BUILTIN(SQLite3Stmt);
class c_SQLite3Stmt : public ExtObjectData {
 public:
  DECLARE_CLASS(SQLite3Stmt, SQLite3Stmt, ObjectData)

  // need to implement
  public: c_SQLite3Stmt();
  public: ~c_SQLite3Stmt();
  public: void t___construct(CObjRef dbobject, CStrRef statement);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: int64 t_paramcount();
  DECLARE_METHOD_INVOKE_HELPERS(paramcount);
  public: bool t_close();
  DECLARE_METHOD_INVOKE_HELPERS(close);
  public: bool t_reset();
  DECLARE_METHOD_INVOKE_HELPERS(reset);
  public: bool t_clear();
  DECLARE_METHOD_INVOKE_HELPERS(clear);
  public: bool t_bindparam(CVarRef name, VRefParam parameter, int64 type = k_SQLITE3_TEXT);
  DECLARE_METHOD_INVOKE_HELPERS(bindparam);
  public: bool t_bindvalue(CVarRef name, CVarRef parameter, int64 type = k_SQLITE3_TEXT);
  DECLARE_METHOD_INVOKE_HELPERS(bindvalue);
  public: Variant t_execute();
  DECLARE_METHOD_INVOKE_HELPERS(execute);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_SQLite3Stmt *create(Object dbobject, String statement);
  public: void getConstructor(MethodCallPackage &mcp);


  public: void validate() const;
  public: p_SQLite3 m_db;
  public: sqlite3_stmt *m_raw_stmt;
    DECLARE_BOOST_TYPES(BoundParam);
    struct BoundParam {
      int type;
      int index;
      Variant value;
    };
  public: BoundParamPtrVec m_bound_params;
};

///////////////////////////////////////////////////////////////////////////////
// class SQLite3Result

FORWARD_DECLARE_CLASS_BUILTIN(SQLite3Result);
class c_SQLite3Result : public ExtObjectData {
 public:
  DECLARE_CLASS(SQLite3Result, SQLite3Result, ObjectData)

  // need to implement
  public: c_SQLite3Result();
  public: ~c_SQLite3Result();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: int64 t_numcolumns();
  DECLARE_METHOD_INVOKE_HELPERS(numcolumns);
  public: String t_columnname(int64 column);
  DECLARE_METHOD_INVOKE_HELPERS(columnname);
  public: int64 t_columntype(int64 column);
  DECLARE_METHOD_INVOKE_HELPERS(columntype);
  public: Variant t_fetcharray(int64 mode = k_SQLITE3_BOTH);
  DECLARE_METHOD_INVOKE_HELPERS(fetcharray);
  public: bool t_reset();
  DECLARE_METHOD_INVOKE_HELPERS(reset);
  public: bool t_finalize();
  DECLARE_METHOD_INVOKE_HELPERS(finalize);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_SQLite3Result *create();
  public: void getConstructor(MethodCallPackage &mcp);


  public: void validate() const;
  public: p_SQLite3Stmt m_stmt;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_SQLITE3_H__
