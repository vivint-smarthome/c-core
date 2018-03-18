/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */
#if !defined INC_PUBNUB_OPENSSL_SYNC
#define	INC_PUBNUB_OPENSSL_SYNC

/** @mainpage The OpenSSL Pubnub client library - sync interface

    This is the "sync" interface of the Pubnub client library for
    OpenSSL (on any platform that OpenSSL supports).

    The "sync" interface has these characteristics:
    - It is not thread safe. Please, always call all Pubnub functions
    on a context from the same thread (that is, same that allocated
    that context).
    - There is no "callback" on the end of a transaction. Instead,
    you should check (via pubnub_last_result()) to see if the 
    transaction completed, or if you don't need to do anything
    else on the thread until the transaction is completed (including
    possible thread shutdown), you can call pubnub_await() which
    will do it for you (and return the final result).

    You can have multiple pubnub contexts established; in each
    context, at most one Pubnub API call/transaction may be ongoing
    (typically a "publish" or a "subscribe"). You can use more than
    one context in a thread, but, as mentioned above, should not use
    the same context from more than one thread.
    
 */

/** @file pubnub_sync.h */

#include "pubnub_config.h"

/* -- You should not change anything below this line -- */

#include "core/pubnub_alloc.h"
#include "core/pubnub_assert.h"
#include "core/pubnub_pubsubapi.h"
#include "core/pubnub_coreapi.h"
#include "core/pubnub_ntf_sync.h"
#include "core/pubnub_generate_uuid.h"
#include "core/pubnub_blocking_io.h"


#endif /* !defined INC_OPENSSL_SYNC */
