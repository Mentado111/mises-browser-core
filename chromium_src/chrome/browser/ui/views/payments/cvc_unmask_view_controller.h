#ifndef MISES_BROWSER_UI_VIEWS_PAYMENTS_CVC_UNMASK_VIEW_CONTROLLER_H_
#define MISES_BROWSER_UI_VIEWS_PAYMENTS_CVC_UNMASK_VIEW_CONTROLLER_H_

#include "chrome/browser/ui/views/payments/payment_request_sheet_controller.h"
#if BUILDFLAG(IS_ANDROID)
#define ShouldShowSecondaryButton  \
  ShouldOfferFidoAuth() const override; \
  bool UserOptedInToFidoFromSettingsPageOnMobile() const  override;\
  bool ShouldShowSecondaryButton
#endif

#include "src/chrome/browser/ui/views/payments/cvc_unmask_view_controller.h"

#if BUILDFLAG(IS_ANDROID)
#undef ShouldShowSecondaryButton
#endif

#endif
