#include "shared.h"

PLUGIFY_EXPORT bool (*__panorama_api_IsCsScriptReady)() = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_CreateCustomHud)(String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_RemoveCustomHud)(String*) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_HideCustomHudFromOtherPlayers)(String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_SetHudHasClass)(String*, String*, String*, bool) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_SetHudDialogVariable)(String*, String*, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_SetHudHasClassForPlayer)(String*, int32_t, String*, String*, bool) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_SetHudDialogVariableForPlayer)(String*, int32_t, String*, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_SetHudInputCapture)(String*, int32_t, bool) = NULL;


PLUGIFY_EXPORT bool (*__panorama_api_IsHudInputCaptureEnabled)(String*, int32_t) = NULL;


