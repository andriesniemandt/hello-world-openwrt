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

include $(INCLUDE_DIR)/package.mk

define Package/helloworld
	SECTION:=examples
	CATEGORY:=Examples
	TITLE:=A simple hello world app for OpenWRT
endef

define Package/jo/description
	A simple hello world app for OpenWRT
endef

define Build/Compile
	$(call Build/Compile/Default)
endef

define Package/helloworld/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(CP) $(PKG_BUILD_DIR)/helloworld $(1)/usr/bin/
endef

$(eval $(call BuildPackage,helloworld))
