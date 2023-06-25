PORTNAME=	llvm
PORTVERSION=	15.0.7
DISTVERSIONSUFFIX=	-1.el9
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	LLVM suite (Rocky Linux ${LINUX_DIST_VER})
WWW=		https://www.freedesktop.org/Software/dbus

LICENSE=	GPLv2+

USES=		cpe linux:rl9
USE_LDCONFIG=	yes
USE_LINUX=	elfutils-libelf
USE_LINUX_RPM=	yes

LIB_DISTNAMES=	${PORTNAME}-${DISTVERSIONFULL} \
		${PORTNAME}-devel-${DISTVERSIONFULL} \
		${PORTNAME}-libs-${DISTVERSIONFULL} \
		${PORTNAME}-static-${DISTVERSIONFULL}
#		${PORTNAME}-doc-${DISTVERSIONFULL} \

#CONFLICTS=	linux-c6-${PORTNAME} linux-c7-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

.include <bsd.port.mk>
