package panorama_api

/*
#include "listeners.h"
#cgo noescape OnHudClicked_Register
#cgo noescape OnHudClicked_Unregister
*/
import "C"
import (
	"errors"
	"reflect"
	"runtime"
	"unsafe"
	"github.com/untrustedmodders/go-plugify"
)

var _ = errors.New("")
var _ = reflect.TypeOf(0)
var _ = runtime.GOOS
var _ = unsafe.Sizeof(0)
var _ = plugify.ApiVersion

// Generated from panorama_api (group: listeners)

var _OnHudClicked_Register = func(callback OnHudClickedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnHudClicked_Register(__callback)
}

// OnHudClicked_Register 
//  @brief Subscribes to button clicks on all huds created via CreateCustomHud. Replaces a separate cs_script relay and ServerCommand: the click arrives directly in this plugin through Instance.OnCustomHudClicked.
//
//  @param callback: Called on every click.
func OnHudClicked_Register(callback OnHudClickedCallback) {
	_OnHudClicked_Register(callback)
}

var _OnHudClicked_Unregister = func(callback OnHudClickedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnHudClicked_Unregister(__callback)
}

// OnHudClicked_Unregister 
//  @brief Removes a callback previously added with OnHudClicked_Register.
//
//  @param callback: The exact callback reference passed to OnHudClicked_Register.
func OnHudClicked_Unregister(callback OnHudClickedCallback) {
	_OnHudClicked_Unregister(callback)
}

