/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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

#ifndef __GENERATED_cls_FilterIterator_h189f6b17__
#define __GENERATED_cls_FilterIterator_h189f6b17__

#include <cls/FilterIterator.fw.h>
#include <cls/IteratorIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 711 */
FORWARD_DECLARE_CLASS(FilterIterator);
extern const ObjectStaticCallbacks cw_FilterIterator;
class c_FilterIterator : public c_IteratorIterator {
  public:

  // Properties
  Variant m_it;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(FilterIterator, FilterIterator, IteratorIterator)
  static const ClassPropTable os_prop_table;
  c_FilterIterator(ObjectData* r = NULL) : m_it(Variant::nullInit) {
    setAttribute(HasCall);
  }
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct(Variant v_it);
  public: c_FilterIterator *create(CVarRef v_it);
  public: void t_rewind();
  // public: virtual void t_accept() = 0;
  public: void t_fetch();
  public: void t_next();
  public: Variant t_valid();
  public: Variant t_key();
  public: Variant t_current();
  public: Variant t___clone();
  public: Variant t_getinneriterator();
  public: Variant t___call(Variant v_func, Variant v_params);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__clone);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
  DECLARE_METHOD_INVOKE_HELPERS(accept);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
ObjectData *coo_FilterIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_FilterIterator_h189f6b17__
