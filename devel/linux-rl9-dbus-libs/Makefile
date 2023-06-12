PORTNAME=	dbus
PORTVERSION=	1.12.20
DISTVERSIONSUFFIX=	-7.el9_1
CATEGORIES=	devel linux
PKGNAMESUFFIX=	-libs

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Libraries for accessing D-BUS (Rocky Linux ${LINUX_DIST_VER})
WWW=		https://www.freedesktop.org/Software/dbus

LICENSE=	GPLv2+

USES=		cpe linux:rl9
USE_LDCONFIG=	yes
USE_LINUX=	systemd-libs
USE_LINUX_RPM=	yes
CPE_VENDOR=	freedesktop

LIB_DISTNAMES=	${PORTNAME}${PKGNAMESUFFIX}-${DISTVERSIONFULL}

CONFLICTS=	linux-c6-${PORTNAME} linux-c7-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

.include <bsd.port.mk>
