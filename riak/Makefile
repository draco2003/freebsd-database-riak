# New ports collection makefile for:     riak	
# Date created:	October 29, 2011 
# Whom:			Dan Rowe <bsdports@wayfair.com>
#
# $Id$
#

PORTNAME=       riak	
PORTVERSION=	1.0.1
CATEGORIES=	databases
MASTER_SITES=   http://downloads.basho.com.s3-website-us-east-1.amazonaws.com/riak/1.0/${PORTVERSION}/	

MAINTAINER=     bsdports@wayfair.com
COMMENT=        Highly scalable, fault-tolerant distributed database.

USE_GMAKE=     yes
#USE_RC_SUBR=    riak	

RUN_DEPENDS+=   bash:${PORTSDIR}/shells/bash

PLIST_FILES=	bin/riak\
		bin/riak-admin \

.include <bsd.port.pre.mk>
ALL_TARGET = rel
FIXBASH = rel/riak/erts-5.8.4/bin/erl rel/riak/bin/riak rel/riak/bin/riak-admin rel/riak/bin/search-cmd

post-configure:
	${MKDIR} ${WRKSRC}/deps/erlang_js/c_src/js/src/config
	cp ${FILESDIR}/FreeBSD8.2-RELEASE.mk ${WRKSRC}/deps/erlang_js/c_src/js/src/config/

post-build:
.for file in ${FIXBASH}
	${REINPLACE_CMD} -e "s|/bin/bash|/bin/sh|" ${WRKSRC}/${file}
.endfor

.include <bsd.port.post.mk>
