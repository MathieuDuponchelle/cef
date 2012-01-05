// Copyright (c) 2012 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _CEF_CLIENT_CAPI_H
#define _CEF_CLIENT_CAPI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cef_base_capi.h"


///
// Implement this structure to provide handler implementations.
///
typedef struct _cef_client_t
{
  ///
  // Base structure.
  ///
  cef_base_t base;

  ///
  // Return the handler for browser life span events.
  ///
  struct _cef_life_span_handler_t* (CEF_CALLBACK *get_life_span_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for browser load status events.
  ///
  struct _cef_load_handler_t* (CEF_CALLBACK *get_load_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for browser request events.
  ///
  struct _cef_request_handler_t* (CEF_CALLBACK *get_request_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for browser display state events.
  ///
  struct _cef_display_handler_t* (CEF_CALLBACK *get_display_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for focus events.
  ///
  struct _cef_focus_handler_t* (CEF_CALLBACK *get_focus_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for keyboard events.
  ///
  struct _cef_keyboard_handler_t* (CEF_CALLBACK *get_keyboard_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for context menu events.
  ///
  struct _cef_menu_handler_t* (CEF_CALLBACK *get_menu_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for browser permission events.
  ///
  struct _cef_permission_handler_t* (CEF_CALLBACK *get_permission_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for printing events.
  ///
  struct _cef_print_handler_t* (CEF_CALLBACK *get_print_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for find result events.
  ///
  struct _cef_find_handler_t* (CEF_CALLBACK *get_find_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for JavaScript dialog events.
  ///
  struct _cef_jsdialog_handler_t* (CEF_CALLBACK *get_jsdialog_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for V8 context events.
  ///
  struct _cef_v8context_handler_t* (CEF_CALLBACK *get_v8context_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for off-screen rendering events.
  ///
  struct _cef_render_handler_t* (CEF_CALLBACK *get_render_handler)(
      struct _cef_client_t* self);

  ///
  // Return the handler for drag events.
  ///
  struct _cef_drag_handler_t* (CEF_CALLBACK *get_drag_handler)(
      struct _cef_client_t* self);

} cef_client_t;


#ifdef __cplusplus
}
#endif

#endif // _CEF_CLIENT_CAPI_H
