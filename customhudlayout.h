#pragma once

#include "shared.h"

extern bool (*__panorama_api_IsCsScriptReady)();

static bool IsCsScriptReady() {
	return __panorama_api_IsCsScriptReady();
}

extern bool (*__panorama_api_CreateCustomHud)(String*, String*);

static bool CreateCustomHud(String* name, String* layoutResource) {
	return __panorama_api_CreateCustomHud(name, layoutResource);
}

extern bool (*__panorama_api_RemoveCustomHud)(String*);

static bool RemoveCustomHud(String* name) {
	return __panorama_api_RemoveCustomHud(name);
}

extern bool (*__panorama_api_HideCustomHudFromOtherPlayers)(String*, int32_t);

static bool HideCustomHudFromOtherPlayers(String* name, int32_t playerSlot) {
	return __panorama_api_HideCustomHudFromOtherPlayers(name, playerSlot);
}

extern bool (*__panorama_api_SetHudHasClass)(String*, String*, String*, bool);

static bool SetHudHasClass(String* name, String* panelId, String* className, bool hasClass) {
	return __panorama_api_SetHudHasClass(name, panelId, className, hasClass);
}

extern bool (*__panorama_api_SetHudDialogVariable)(String*, String*, String*, String*);

static bool SetHudDialogVariable(String* name, String* panelId, String* variableName, String* value) {
	return __panorama_api_SetHudDialogVariable(name, panelId, variableName, value);
}

extern bool (*__panorama_api_SetHudHasClassForPlayer)(String*, int32_t, String*, String*, bool);

static bool SetHudHasClassForPlayer(String* name, int32_t playerSlot, String* panelId, String* className, bool hasClass) {
	return __panorama_api_SetHudHasClassForPlayer(name, playerSlot, panelId, className, hasClass);
}

extern bool (*__panorama_api_SetHudDialogVariableForPlayer)(String*, int32_t, String*, String*, String*);

static bool SetHudDialogVariableForPlayer(String* name, int32_t playerSlot, String* panelId, String* variableName, String* value) {
	return __panorama_api_SetHudDialogVariableForPlayer(name, playerSlot, panelId, variableName, value);
}

extern bool (*__panorama_api_SetHudInputCapture)(String*, int32_t, bool);

static bool SetHudInputCapture(String* name, int32_t playerSlot, bool enabled) {
	return __panorama_api_SetHudInputCapture(name, playerSlot, enabled);
}

extern bool (*__panorama_api_IsHudInputCaptureEnabled)(String*, int32_t);

static bool IsHudInputCaptureEnabled(String* name, int32_t playerSlot) {
	return __panorama_api_IsHudInputCaptureEnabled(name, playerSlot);
}

