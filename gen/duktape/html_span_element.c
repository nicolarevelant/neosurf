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

static void dukky_html_span_element___init(duk_context *ctx, html_span_element_private_t *priv, struct dom_html_element *html_span_element)
{
	dukky_html_element___init(ctx, &priv->parent, html_span_element);
#line 171 "content/handlers/javascript/duktape/netsurf.bnd"
#line 48 "html_span_element.c"
}

static void dukky_html_span_element___fini(duk_context *ctx, html_span_element_private_t *priv)
{
	dukky_html_element___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_html_span_element___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	html_span_element_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_html_span_element___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_html_span_element___destructor(duk_context *ctx)
{
	html_span_element_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_html_span_element___fini(ctx, priv);
	free(priv);
	return 0;
}

duk_ret_t dukky_html_span_element___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_span_element___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_span_element___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}


