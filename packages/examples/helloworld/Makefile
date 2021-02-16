#@IgnoreInspection BashAddShebang
##############################################
# Be very careful of spacing in this file.
# Indents should be tabs, not spaces, and
# there should be no trailing whitespace in
# lines that are not commented.
##############################################

include $(TOPDIR)/rules.mk

# Name and release number of this package
PKG_NAME:=helloworld
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=git@github.com:andriesniemandt/hello-world-openwrt.git
PKG_SOURCE_VERSION:=master
PKG_VERSION:=1.0.0
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_FIXUP:=autoreconf

include $(INCLUDE_DIR)/package.mk

define Package/helloworld
	SECTION:=examples
	CATEGORY:=Examples
	TITLE:=A simple hello world app for OpenWRT
	DEPENDS:=+libc
endef

define Package/jo/description
	A simple hello world app for OpenWRT
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS)" \
		LDFLAGS="$(TARGET_LDFLAGS)"
endef

define Package/helloworld/install
	echo $(PKG_BUILD_DIR) && \
	$(INSTALL_DIR) $(1)/usr/bin
	$(CP) $(PKG_BUILD_DIR)/helloworld $(1)/usr/bin/
endef

$(eval $(call BuildPackage,helloworld,+libc))
