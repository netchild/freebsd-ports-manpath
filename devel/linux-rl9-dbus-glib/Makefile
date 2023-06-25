PORTNAME=	dbus-glib
PORTVERSION=	0.110
DISTVERSIONSUFFIX=	-13.el9
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	GLib bindings for D-Bus (Rocky Linux ${LINUX_DIST_VER})
WWW=		https://www.freedesktop.org/wiki/Software/DBusBindings/

USES=		cpe linux:rl9
CPE_VENDOR=	freedesktop
USE_LDCONFIG=	yes
USE_LINUX=	dbuslibs expat
USE_LINUX_RPM=	yes

CONFLICTS=	linux-c7-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${PORTNAME}${PKGNAMESUFFIX}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
