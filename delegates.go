package panorama_api

import "github.com/untrustedmodders/go-plugify"

var _ = plugify.ApiVersion

// Generated from panorama_api

// OnHudClickedCallback - A hud button click. Called when a button in a CustomHudLayout is clicked.
type OnHudClickedCallback func(playerSlot int32, name string, buttonId string)


