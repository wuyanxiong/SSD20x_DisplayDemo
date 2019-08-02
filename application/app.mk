APPLICATION_PATH=$(PROJ_ROOT)/../sdk/verify/application
include $(PROJ_ROOT)/release/customer_tailor/$(CUSTOMER_TAILOR)
ifeq ($(verify_smarttalk),enable)
	include $(APPLICATION_PATH)/smarttalk/image.mk
endif