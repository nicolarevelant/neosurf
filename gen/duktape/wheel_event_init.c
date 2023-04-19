/* Generated by nsgenbind
 *
 * nsgenbind is published under the MIT Licence.
 * nsgenbind is similar to a compiler is a purely transformative tool which
 * explicitly makes no copyright claim on this generated output
 */

/* DukTape JavaScript bindings for NetSurf browser
 *
 * Copyright 2015 Vincent Sanders <vince@netsurf-browser.org>
 * This file is part of NetSurf, http://www.netsurf-browser.org/
 * Released under the terms of the MIT License,
 *        http://www.opensource.org/licenses/mit-license
 */

#include <dom/dom.h>

#include "utils/log.h"
#include "utils/nsurl.h"

#include "javascript/duktape/duktape.h"

struct browser_window;
struct html_content;
struct dom_node;
struct dom_element;
struct dom_document;
struct dom_html_element;
struct dom_node_character_data;
struct dom_node_text;
struct dom_node_list;
struct dom_node_comment;
struct dom_html_collection;
struct dom_html_br_element;


#include "duktape/binding.h"
#include "duktape/private.h"
#include "duktape/prototype.h"

#include "javascript/duktape/dukky.h"

duk_double_t
dukky_wheel_event_init_get_deltaX(duk_context *ctx, duk_idx_t idx)
{
	duk_double_t ret = 0.000000; /* Default value of deltaX */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "deltaX");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a number */
		ret = duk_require_number(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_double_t
dukky_wheel_event_init_get_deltaY(duk_context *ctx, duk_idx_t idx)
{
	duk_double_t ret = 0.000000; /* Default value of deltaY */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "deltaY");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a number */
		ret = duk_require_number(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_double_t
dukky_wheel_event_init_get_deltaZ(duk_context *ctx, duk_idx_t idx)
{
	duk_double_t ret = 0.000000; /* Default value of deltaZ */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "deltaZ");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a number */
		ret = duk_require_number(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}

duk_int_t
dukky_wheel_event_init_get_deltaMode(duk_context *ctx, duk_idx_t idx)
{
	duk_int_t ret = 0; /* Default value of deltaMode */
	/* ... obj@idx ... */
	duk_get_prop_string(ctx, idx, "deltaMode");
	/* ... obj@idx ... value/undefined */
	if (!duk_is_undefined(ctx, -1)) {
		/* Note, this throws a duk_error if it's not a int */
		ret = duk_require_int(ctx, -1);
	}
	duk_pop(ctx);
	return ret;
}


